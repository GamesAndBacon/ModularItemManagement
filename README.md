# Creating the content for the README.md file in markdown format

readme_content = """
## Modular Item Management Plugin Documentation

### Overview
The Modular Item Management plugin is designed to handle complex item systems with a flexible and extensible approach. It uses Unreal Engine's `FInstancedStruct` to manage item data, enabling both simple workflows and unlimited complexity. This document will provide an overview of the plugin's architecture, key components, and how to use it in your projects.

### Table of Contents
1. [Plugin Architecture](#plugin-architecture)
2. [Key Components](#key-components)
    1. [UItem](#uitem)
    2. [UItemModule](#uitemmodule)
    3. [UItemDefinition](#uitemdefinition)
    4. [UItemsLib](#uitemslib)
    5. [UInventoryComponent](#uinventorycomponent)
3. [Usage](#usage)
    1. [Creating Items](#creating-items)
    2. [Managing Inventory](#managing-inventory)
    3. [Extending the System](#extending-the-system)
4. [Example Use Cases](#example-use-cases)

### Plugin Architecture

The plugin is structured around several core classes:

- `UItem`: Represents an item that can contain multiple modules.
- `UItemModule`: Represents a module that can be added to an item, allowing for extensibility.
- `UItemDefinition`: Defines the base properties and modules for an item.
- `UItemsLib`: Provides utility functions for item creation, saving, and loading.
- `UInventoryComponent`: Manages an inventory of items for an actor.

### Key Components

#### UItem

The `UItem` class represents an item that can contain multiple modules. It includes properties and methods to manage these modules.

**Key Properties:**

- `ModuleData`: Array of module data structures.
- `ModuleClasses`: Array of module classes.
- `ItemData`: Reference to the item definition.
- `ItemID`: Unique identifier for the item.
- `Owner`: Reference to the owning actor.

**Key Methods:**

- `Initialize(UItemDefinition* ItemDefinition)`: Initializes the item with the given definition.
- `AddModule(TSubclassOf<UItemModule> Module, FInstancedStruct OutModuleData)`: Adds a module to the item.
- `RemoveModule(TSubclassOf<UItemModule> Module)`: Removes a module from the item.
- `GetModule(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct& OutModuleData)`: Gets the module instance and its data.

#### UItemModule

The `UItemModule` class represents a module that can be added to an item. Modules allow for the extension of item functionality.

**Key Properties:**

- `OnAddedToItemEvent`: Event triggered when the module is added to an item.
- `OnRemovedFromItemEvent`: Event triggered when the module is removed from an item.
- `OnModuleUpdatedEvent`: Event triggered when the module is updated.

**Key Methods:**

- `OnAddedToItem(UItem* Item, FInstancedStruct ModuleData)`: Called when the module is added to an item.
- `OnRemovedFromItem(UItem* Item, FInstancedStruct ModuleData)`: Called when the module is removed from an item.
- `OnModuleUpdated(UItem* Item, FInstancedStruct ModuleData)`: Called when the module is updated.

#### UItemDefinition

The `UItemDefinition` class defines the base properties and modules for an item. It is used to initialize items with predefined settings.

**Key Properties:**

- `ItemClass`: The class of the item.
- `Modules`: A map of module classes to their data.

#### UItemsLib

The `UItemsLib` class provides utility functions for item creation, saving, and loading.

**Key Methods:**

- `SaveItem(UItem* Item)`: Saves the given item to a record.
- `LoadItem(const FItemRecord& ItemRecord, UObject* Outer)`: Loads an item from a record.
- `CreateItem(UItemDefinition* ItemDefinition, UObject* Outer)`: Creates a new item from the given definition.
- `GetModule(TSubclassOf<UItemModule> ModuleClass)`: Gets the default object of the given module class.

#### UInventoryComponent

The `UInventoryComponent` class manages an inventory of items for an actor.

**Key Properties:**

- `Inventory`: Array of items in the inventory.
- `ItemAdded`: Event triggered when an item is added to the inventory.
- `ItemRemoved`: Event triggered when an item is removed from the inventory.
- `ItemMoved`: Event triggered when an item is moved within the inventory.

**Key Methods:**

- `AddItem(UItem* Item)`: Adds an item to the inventory.
- `RemoveItem(UItem* Item, int32 Index)`: Removes an item from the inventory.
- `GetInventory()`: Gets the inventory array.
- `GetItemAt(int32 Index)`: Gets the item at the specified index.
- `MoveItem(int32 FromIndex, int32 ToIndex)`: Moves an item within the inventory.

### Usage

#### Creating Items

To create an item, define an `UItemDefinition` and use the `CreateItem` function from `UItemsLib`.

```cpp
UItemDefinition* ItemDefinition = ...; // Obtain or create the item definition
UObject* Outer = ...; // Specify the outer object, typically the owning actor
UItem* NewItem = UItemsLib::CreateItem(ItemDefinition, Outer);
