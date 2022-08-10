# WMI In-House Framework

The WMI In-House framework (based out of Teamwork) is designed to try and make mission making faster and more approachable, as well as provide some useful in-game admin tools to facilitate smooth running of ops.

https://steamcommunity.com/sharedfiles/filedetails/?id=2780835041

## Core Features:
- Extensive 3DEN integration
- A custom Spectator system, with support for highlighting positions of e.g. objectives
- Assign Gear with config-based loadouts - loadouts can exist in the mission and/or an addon for retroactive updates
- Hierarchal ORBAT integration with ingame map tracker
- Easy Briefing system with automatically generated pages for player loadout, ORBAT and radios
- Safe Start module
- Wave Spawner module that preserves waypoints, supports trigger activation and headless client
- Map Click Teleport module for group leaders to allow for usage of a Safezone in instant-insert operations

## Common Issues
- On dedicated servers the briefing files may not load - To fix the issue in server.cfg to add the `sqf` extension to the `allowedHTMLLoadExtensions` whitelist. For example `allowedHTMLLoadExtensions[] = {"htm","html","xml","txt","sqf"};`
- Possibly many other things as of yet undiscovered - but don't worry - i'm on it.

Offical license: Arma Public License Share-Alike (APL-SA)

Full License: https://www.bistudio.com/community/licenses/arma-public-license-share-alike
