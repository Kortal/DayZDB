class CfgPatches
{
	class DZ_Weapons_Lights
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgRecipes
{
};
class DefaultAction;
class cfgVehicles
{
	class InventoryBase;
	class AttachmentBase;
	class WeaponLightBase: AttachmentBase
	{
		reversed=1;
		attachments[]=
		{
			"BatteryD"
		};
		energyResources[]=
		{
			
			{
				"power",
				0.1
			}
		};
		class EventHandlers
		{
			PowerOn="(_this select 0) switchLight 'ON'";
			PowerOff="(_this select 0) switchLight 'OFF'";
		};
		class Reflectors
		{
			class Beam
			{
				color[]={0.89999998,0.89999998,0.69999999,0.89999998};
				ambient[]={0.1,0.1,0.1,1};
				position="beamStart";
				direction="beamEnd";
				hitpoint="bulb";
				selection="bulb";
				size=0;
				brightness=1;
				radius=50;
				innerAngle=10;
				outerAngle=40;
			};
		};
		class UserActions
		{
			class TurnOn: DefaultAction
			{
				displayNameDefault="Turn Off";
				displayName="Turn Off";
				condition="isOn this";
				statement="this powerOn false";
			};
			class TurnOff: DefaultAction
			{
				displayNameDefault="Turn On";
				displayName="Turn On";
				condition="!isOn this";
				statement="this powerOn true";
			};
		};
	};
	class Attachment_Light_Universal: WeaponLightBase
	{
		scope=2;
		displayName="Weapon Flashlight";
		descriptionShort="A universal flashlight attachable to most weapons to provide tactical advantage.";
		handheld=1;
		inventorySlot="weaponFlashlight";
		model="\DZ\weapons\attachments\light\weaponlight_universal.p3d";
		attachmentCondition="(_parent itemInSlot 'weaponHandguardM4') isKindOf 'Attachment_Handguard_M4RIS'";
		itemSize[]={1,1};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DZ\anims\data\anim\sdr\ik\weapons\attachments\light\weaponlight_universal.rtm"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\attachments\data\m4_flashlight.rvmat",
				"DZ\weapons\attachments\data\m4_flashlight_damage.rvmat",
				"DZ\weapons\attachments\data\m4_flashlight_destruct.rvmat"
			};
		};
	};
	class Attachment_Light_TLR: WeaponLightBase
	{
		scope=2;
		displayName="Pistol Flashlight";
		descriptionShort="A universal flashlight attachable to any pistol with an underside tactical rail mount.";
		handheld=0;
		inventorySlot="pistolFlashlight";
		model="\DZ\weapons\attachments\light\weaponlight_TLR.p3d";
		attachmentCondition="true";
		itemSize[]={1,1};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\attachments\data\tls3.rvmat",
				"DZ\weapons\attachments\data\tls3_damage.rvmat",
				"DZ\weapons\attachments\data\tls3_destruct.rvmat"
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyWeaponlight_universal: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponFlashlight";
		model="\dz\weapons\attachments\light\weaponlight_universal.p3d";
	};
	class ProxyWeaponlight_TLR: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistolFlashlight";
		model="\dz\weapons\attachments\light\weaponlight_TLR.p3d";
	};
};
