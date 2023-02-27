#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class WMI_Enhancement_Flashlight
	{
		units[]={};
		weapons[]=
		{
			"WMI_X2000_point",
			"WMI_X2000_wide"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CBA_Main",
			"asdg_jointrails"
		};
		version="0.2";
		versionStr="0.2";
		versionAr[]={0,2,0};
		author[]=
		{
			"Prof"
		};
		authorUrl="";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class WMI_X2000_point: ItemCore
	{
		scope=2;
		author="Prof";
		_generalMacro="WMI_X2000_point";
		displayName="X2000 FlashLight (Point-Beam)";
		descriptionUse="Powerful flashLight with Point & Wide Beam";
		descriptionShort="Powerful flashLight with Point & Wide Beam";
		picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model="\A3\weapons_f\acc\accv_Flashlight_F";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=2;
			class FlashLight
			{
				color[]={1200,1500,1800};
				ambient[]={10,7.5,5};
				intensity=300;
				size=1;
				innerAngle=20;
				outerAngle=30;
				coneFadeCoef=3;
				direction="flash";
				position="flash dir";
				dayLight=1;
				useFlare=1;
				flareSize=3;
				flareMaxDistance=300;
				scale[]={0};
				class Attenuation
				{
					start=15;
					constant=100;
					linear=70;
					quadratic=15;
					hardLimitStart=130;
					hardLimitEnd=160;
				};
			};
		};
		inertia=0.1;
	};
	class WMI_X2000_wide: ItemCore
	{
		scope=2;
		author="Prof";
		_generalMacro="WMI_X2000_wide";
		displayName="X2000 FlashLight (Wide-Beam)";
		descriptionUse="Powerful flashLight with Point & Wide Beam";
		descriptionShort="Powerful flashLight with Point & Wide Beam";
		picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model="\A3\weapons_f\acc\accv_Flashlight_F";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=2;
			class FlashLight
			{
				color[]={100,150,180};
				ambient[]={180,225,270};
				intensity=100;
				size=1;
				innerAngle=40;
				outerAngle=80;
				coneFadeCoef=5;
				direction="flash";
				position="flash dir";
				dayLight=0;
				useFlare=1;
				flareSize=1;
				flareMaxDistance=100;
				scale[]={0};
				class Attenuation
				{
					start=0.25;
					constant=80;
					linear=60;
					quadratic=20;
					hardLimitStart=20;
					hardLimitEnd=60;
				};
			};
		};
		inertia=0.1;
	};
};
class CfgSounds
{
	class WMI_Extra_Toggle_Attachment
	{
		name="Toggle_Attachment";
		sound[]=
		{
			"WMI_Flashlight\switch_mod_04",
			1,
			1,
			25
		};
		titles[]={};
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		WMI_X2000_point=1;
		WMI_X2000_wide=1;
	};
};
class CfgFunctions
{
	class WMI_Enhancement
	{
		class Flashlight
		{
			file="WMI_Flashlight";
			class Hint
			{
			};
			class flashlightInit
			{
				postInit=1;
			};
			class switchAttachment
			{
			};
		};
	};
};
