# Item System Plugin for Unreal Engine 4
[![License](https://img.shields.io/github/license/mashape/apistatus.svg)](LICENSE)

This is a plugin for [Unreal Engine 4](https://www.unrealengine.com) designed to provide an extensible and developer friendly item system within the UE4 editor.

## Current Status

This project is still under active development, and is currently available in a beta state. This repository contains all files necessary to use the plugin in your UE4 project.

## Features

This plugin allows you to create Item assets within the Content Browser. Item assets are fully customizable through the use of Item Types. An Item Type (e.g. Weapon, Armor, Food, etc.) contains all properties needed for that specific specialization. This can include data such as the damage of a weapon or the text of a book. All Item Types must inherit from ItemTypeBase to be supported. Several Item Types are included with the plugin:

- Apparel (IT_Apparel)
- Book (IT_Book)
- Currency (IT_Currency)
- Food (IT_Food)
- Key (IT_Key)
- Medicine (IT_Medicine)
- Misc (IT_Misc)
- Weapon (IT_Weapon)

By default, all Items have a name and description property. Additional properties can be made available for all custom Item Types through inheritance. All of the provided types inherit from an abstract Item Type named IT_BaseSpecialization which provides common properties such as weight, value, and durability.

It is also possible to restrict the editing of specific properties by overriding the function CanEditItemProperty. This allows behaviors such as restricting Currency to having no weight, or forcing Keys to have no durability. An example of this behavior can be seen in the IT_BaseSpecialization Blueprint.

### Planned Features

- DataTable integration
- XML/JSON data support
- Additional Content Browser functionality
- The ability to drag and drop an Item into the scene

To see the current roadmap for this project, please see its associated [Trello board](https://trello.com/b/OjcW15Dl/item-plugin-ue4).

## Requirements

This plugin was built using Unreal Engine 4.22 and should function on later releases.

## Installation

### From Repository

To use this plugin in your project, clone this repository into the Plugins folder of your project directory. Then open your project, navigate to Plugins -> Installed and enable Item System.

This plugin can also be installed directly to your engine installation within Engine/Plugins.

### From Marketplace

This plugin is not currently on the UE4 Marketplace, but will be made available as a free code plugin once development has progressed further.

## Contact Information

- [Zachary Harris](mailto:zach@conficturastudios.com)

## License

This tool is released as open source under the MIT License.

See [`LICENSE`](LICENSE) for the specific terms of the license.