#include "grid/GridManager.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "ItemsLib.h"

AGridManager::AGridManager() 
{
    DefaultCellDefinition = nullptr;
    PrimaryActorTick.bCanEverTick = false;
    CellSize = 100.f;
    Width = 100;
    Height = 100;
    CurrentX = 0;
    CurrentY = 0;
    CellsPerSecond = 2000;
}

void AGridManager::PostInitProperties()
{
    Super::PostInitProperties();
}

void AGridManager::BeginPlay()
{
    Super::BeginPlay();
}

void AGridManager::InitializeGrid()
{
    CleanupGrid();
    
    CurrentX = 0;
    CurrentY = 0;
    
}

bool AGridManager::AddItemToGrid(UItem* Item, FVector2D Position)
{
    int32 Hash = HashPosition(Position);

    if(Grid.Contains(Hash))
    {
        UItem* existingitem = Grid[Hash];
        existingitem->Initialize(Item->GetItemDefinition());
        OnItemAddedToGrid(existingitem, Position);
        OnItemAddedToGridEvent.Broadcast(existingitem, Position);
    }
    else
    {
        Grid.Add(Hash, Item);
        OnItemAddedToGrid(Item, Position);
        OnItemAddedToGridEvent.Broadcast(Item, Position);
    }
    return true;
}

void AGridManager::RemoveItemFromGrid(FVector2D Position)
{
    int32 Hash = HashPosition(Position);
    if (Grid.Contains(Hash))
    {
        UItem* Item = Grid[Hash];
        if (Item)
        {
            UItemDefinition* ItemDef = Item->GetItemDefinition();
            for (auto& ModulePair : ItemDef->Modules)
            {
                Item->RemoveModule(ModulePair.Key);
            }
            OnItemRemovedFromGridEvent.Broadcast(Item, Position);
            Grid.Remove(Hash);
        }
    }
}

void AGridManager::ReplaceItemOnGrid(UItemDefinition* ItemDef, FVector2D position)
{
    // First, remove existing instances
    RemoveItemFromGrid(position);
    UItem* NewItem = UItemsLib::CreateItem(ItemDef, this);
    AddItemToGrid(NewItem,position);
}

UItem* AGridManager::GetItemInCell(FVector2D Position)
{
    int32 Hash = HashPosition(Position);
    if (Grid.Contains(Hash))
    {
        return Grid[Hash];
    }
    return nullptr;
}

TArray<FVector2D> AGridManager::GetAdjacentItems(FVector2D Position)
{
    TArray<FVector2D> AdjacentPositions;
    FVector2D Directions[] = {
        FVector2D(-1, 0), FVector2D(1, 0), FVector2D(0, -1), FVector2D(0, 1),
        FVector2D(-1, -1), FVector2D(-1, 1), FVector2D(1, -1), FVector2D(1, 1)
    };

    for (const FVector2D& Dir : Directions)
    {
        FVector2D AdjacentPosition = Position + Dir * CellSize;

        // Check if the adjacent position is within the grid boundaries
        if (AdjacentPosition.X >= 0 && AdjacentPosition.X < Width * CellSize &&
            AdjacentPosition.Y >= 0 && AdjacentPosition.Y < Height * CellSize)
        {
            UItem* AdjacentItem = GetItemInCell(AdjacentPosition);
            if (AdjacentItem)
            {
                AdjacentPositions.Add(AdjacentPosition);
            }
        }
    }
    return AdjacentPositions;
}


FVector2D AGridManager::GetCellFromWorldLocation(FVector WorldLocation)
{
    int32 X = FMath::FloorToInt(WorldLocation.X / CellSize);
    int32 Y = FMath::FloorToInt(WorldLocation.Y / CellSize);
    return FVector2D(X * CellSize + CellSize / 2, Y * CellSize + CellSize / 2);
}

int32 AGridManager::HashPosition(FVector2D Position) const
{
    int32 X = FMath::FloorToInt(Position.X / CellSize);
    int32 Y = FMath::FloorToInt(Position.Y / CellSize);
    return X + Y * Width;
}

FVector2D AGridManager::GetCellCenter(FVector2D cellPosition) const
{
    return FVector2D(cellPosition.X * CellSize + CellSize / 2, cellPosition.Y * CellSize + CellSize / 2);
}

TMap<int32, UItem*> AGridManager::GetGrid() const
{
    return Grid;
}

UItemDefinition* AGridManager::SelectItemDefinitionForNextCell_Implementation(FVector2D Position)
{
    return DefaultCellDefinition;
}

void AGridManager::OnItemAddedToGrid_Implementation(UItem* Item, FVector2D Position)
{
}

void AGridManager::GenerateNextCell()
{
    FVector2D currentpos = FVector2d(CurrentX, CurrentY);
    FVector2D Position = GetCellCenter(currentpos);
    
    UItem* NewItem = UItemsLib::CreateItem(SelectItemDefinitionForNextCell(currentpos), this);
    AddItemToGrid(NewItem, Position);

    ++CurrentY;
    if (CurrentY >= Height)
    {
        CurrentY = 0;
        ++CurrentX;
    }

    if (CurrentX >= Width)
    {
        OnGridInitializedEvent.Broadcast();
    }
}

void AGridManager::CleanupGrid()
{
    // While the Grid has more than one element
    while (!Grid.IsEmpty())
    {
        TArray<int32> keys;
        Grid.GetKeys(keys);
        // Get the first element in the Grid (key and value pair)
        int32 FirstKey = keys[0];
        
        // Convert the hash to the grid position
        FVector2D Position = HashToPosition(FirstKey);
        
        // Remove the item from the grid
        RemoveItemFromGrid(Position);
    }
}





UItemModule* AGridManager::GetModuleDefaultObject(TSubclassOf<UItemModule> ModuleClass)
{
    UItemModule* module = ModuleClass.GetDefaultObject();
    
    if(module->initialized)
    {
        return module;
    }
    else
    {
        module->BeginPlay(GetWorld());
        module->initialized = true;
        return module;
    }
}

FVector2D AGridManager::HashToPosition(int32 Hash) const
{
    int32 Y = Hash / Width;
    int32 X = Hash - (Y * Width);
    
    FVector2D Position;
    Position.X = X * CellSize;
    Position.Y = Y * CellSize;
    
    // Log the recovered Position
    UE_LOG(LogTemp, Warning, TEXT("Recovered Position: X = %f, Y = %f"), Position.X, Position.Y);

    return Position;
}

