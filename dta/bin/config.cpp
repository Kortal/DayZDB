battleyeLicenceUrl="BattlEye\EULA.txt";
class CfgMods
{
	defaultAction="http://www.arma2.com/mods";
};
scriptsPath="scripts\";
startupScript="";
cameraScript="";
playerKilledScript="onPlayerKilled.sqs";
playerResurrectScript="onPlayerResurrect.sqs";
class CfgFunctions
{
	init="";
};
class CfgExperience
{
	access=1;
	destroyUnit[]=
	{
		"unit1",
		"unit2",
		"unit3",
		"unit4"
	};
	unit1[]={2000,0};
	unit2[]={200000,200};
	unit3[]={500000,500};
	unit4[]={1000000,1000};
	destroyEnemy=1;
	destroyFriendly=-7;
	destroyCivilian=-2;
	destroyStatic=0;
	destroyYourUnit=-0.2;
	renegadeLimit=-2000;
	playerKilled=0;
	commandCompleted=0;
	commandFailed=0;
	followMe=0;
	missionCompleted=0;
	missionFailed=0;
	ranks[]={0,500,1500,2500,3500,5000,7500};
};
class CfgAISkill
{
	aimingAccuracy[]={0,0,1,1};
	aimingShake[]={0,0,1,1};
	aimingSpeed[]={0,0.5,1,1};
	endurance[]={0,0,1,1};
	spotDistance[]={0,0.2,1,0.40000001};
	spotTime[]={0,0,1,0.69999999};
	courage[]={0,0,1,1};
	reloadSpeed[]={0,0,1,1};
	commanding[]={0,0,1,1};
	general[]={0,0,1,1};
};
class CfgDifficulties
{
	default="Regular";
	defaultNormal="Regular";
	defaultEasy="Regular";
	defaultHard="Veteran";
	class Recruit
	{
		description="";
		showCadetHints=1;
		showCadetWP=1;
		maxPilotHeight=150;
		scoreImage="#(argb,8,8,3)color(1,1,1,1)";
		scoreChar="o";
		badScoreImage="#(argb,8,8,3)color(1,1,1,1)";
		badScoreChar="X";
		skillFriendly=0.64999998;
		precisionFriendly=0.64999998;
		skillEnemy=0.40000001;
		precisionEnemy=0.40000001;
		myArmorCoef=5;
		groupArmorCoef=4;
		autoAimSizeFactor=0.80000001;
		autoAimDistance=1.2;
		autoAimAngle=7;
		peripheralVisionAid=0.80000001;
		visionAid=0.80000001;
		recoilCoef=1;
		autoReload=0;
		animSpeedCoef=0;
		class Flags
		{
			armor[]={1,1};
			friendlyTag[]={1,1};
			enemyTag[]={0,1};
			hud[]={1,1};
			hudPerm[]={1,1};
			hudWp[]={1,1};
			hudWpPerm[]={1,1};
			autoSpot[]={1,1};
			map[]={1,1};
			weaponCursor[]={1,1};
			autoGuideAT[]={1,1};
			clockIndicator[]={1,1};
			3rdPersonView[]={1,1};
			ultraAI[]={0,1};
			autoAim[]={0,1};
			unlimitedSaves[]={0,0};
			deathMessages[]={1,1};
			netStats[]={1,1};
			vonID[]={1,1};
			cameraShake[]={0,1};
			hudGroupInfo[]={1,1};
			extendetInfoType[]={1,1};
			roughLanding[]={1,1};
			windEnabled[]={0,1};
			autoTrimEnabled[]={1,1};
			stressDamageEnabled[]={0,1};
		};
	};
	class Regular
	{
		displayName="$STR_XBOX_DIFF_REGULAR";
		description="";
		showCadetHints=1;
		showCadetWP=1;
		maxPilotHeight=400;
		scoreImage="#(argb,8,8,3)color(1,1,1,1)";
		scoreChar="o";
		badScoreImage="#(argb,8,8,3)color(1,1,1,1)";
		badScoreChar="X";
		skillFriendly=0.75;
		skillEnemy=0.60000002;
		myArmorCoef=3;
		groupArmorCoef=2.4000001;
		autoAimSizeFactor=0.89999998;
		autoAimDistance=1.3;
		autoAimAngle=6;
		peripheralVisionAid=0.89999998;
		visionAid=0;
		recoilCoef=1;
		autoReload=0;
		animSpeedCoef=0;
		class Flags
		{
			armor[]={1,1};
			friendlyTag[]={1,1};
			enemyTag[]={0,1};
			hud[]={1,1};
			hudPerm[]={1,1};
			hudWp[]={1,1};
			hudWpPerm[]={1,1};
			autoSpot[]={1,1};
			map[]={1,1};
			weaponCursor[]={1,1};
			autoGuideAT[]={1,1};
			clockIndicator[]={1,1};
			3rdPersonView[]={1,1};
			ultraAI[]={0,1};
			autoAim[]={0,1};
			unlimitedSaves[]={1,1};
			deathMessages[]={1,1};
			netStats[]={1,1};
			vonId[]={1,1};
			cameraShake[]={1,1};
			hudGroupInfo[]={1,1};
			extendetInfoType[]={1,1};
			roughLanding[]={0,1};
			windEnabled[]={1,1};
			autoTrimEnabled[]={0,1};
			stressDamageEnabled[]={1,1};
		};
	};
	class Veteran
	{
		displayName="$STR_XBOX_DIFF_VETERAN";
		description="";
		showCadetHints=0;
		showCadetWP=1;
		maxPilotHeight=10000;
		scoreImage="#(argb,8,8,3)color(1,1,1,1)";
		scoreChar="*";
		badScoreImage="#(argb,8,8,3)color(1,1,1,1)";
		badScoreChar="X";
		skillFriendly=0.85000002;
		skillEnemy=0.85000002;
		myArmorCoef=1.2;
		groupArmorCoef=1.1;
		autoAimSizeFactor=0.69999999;
		autoAimDistance=1;
		autoAimAngle=4;
		peripheralVisionAid=0.60000002;
		visionAid=0;
		recoilCoef=1;
		autoReload=0;
		animSpeedCoef=0;
		class Flags
		{
			armor[]={0,0};
			friendlyTag[]={0,0};
			enemyTag[]={0,0};
			hud[]={1,1};
			hudPerm[]={0,0};
			hudWp[]={1,1};
			hudWpPerm[]={1,1};
			autoSpot[]={0,0};
			map[]={0,0};
			weaponCursor[]={1,1};
			autoGuideAT[]={0,0};
			clockIndicator[]={1,1};
			3rdPersonView[]={1,1};
			ultraAI[]={0,1};
			autoAim[]={0,0};
			unlimitedSaves[]={0,0};
			deathMessages[]={1,1};
			netStats[]={1,1};
			vonId[]={0,1};
			cameraShake[]={1,1};
			hudGroupInfo[]={1,1};
			extendetInfoType[]={0,1};
			roughLanding[]={0,0};
			windEnabled[]={1,0};
			autoTrimEnabled[]={0,0};
			stressDamageEnabled[]={1,0};
		};
	};
	class Mercenary
	{
		description="";
		showCadetHints=0;
		showCadetWP=0;
		maxPilotHeight=10000;
		scoreImage="#(argb,8,8,3)color(1,1,1,1)";
		scoreChar="*";
		badScoreImage="#(argb,8,8,3)color(1,1,1,1)";
		badScoreChar="X";
		skillFriendly=1;
		precisionFriendly=1;
		skillEnemy=0.85000002;
		precisionEnemy=0.85000002;
		myArmorCoef=1;
		groupArmorCoef=1;
		autoAimSizeFactor=0.30000001;
		autoAimDistance=0.60000002;
		autoAimAngle=2.5;
		peripheralVisionAid=0.25;
		visionAid=0;
		recoilCoef=1;
		autoReload=0;
		animSpeedCoef=0;
		class Flags
		{
			armor[]={0,0};
			friendlyTag[]={0,0};
			enemyTag[]={0,0};
			hud[]={1,1};
			hudPerm[]={0,0};
			hudWp[]={0,0};
			hudWpPerm[]={0,0};
			autoSpot[]={0,0};
			map[]={0,0};
			weaponCursor[]={1,1};
			autoGuideAT[]={0,0};
			clockIndicator[]={0,0};
			3rdPersonView[]={0,0};
			ultraAI[]={0,0};
			autoAim[]={0,0};
			unlimitedSaves[]={0,0};
			deathMessages[]={1,1};
			netStats[]={1,1};
			vonID[]={0,1};
			cameraShake[]={1,0};
			hudGroupInfo[]={0,0};
			extendetInfoType[]={0,0};
			roughLanding[]={0,0};
			windEnabled[]={1,0};
			autoTrimEnabled[]={0,0};
			stressDamageEnabled[]={1,0};
		};
	};
};
class CfgInventory
{
	class SlotTypes
	{
		class WeaponInUse
		{
		};
		class RightHand
		{
		};
		class LeftHand
		{
		};
		class Googles
		{
		};
		class Back
		{
		};
		class Weapon
		{
		};
		class Common
		{
		};
		class EarPhones
		{
		};
	};
	class Objects
	{
		class Man
		{
			simulation="Man";
			class InventorySlots
			{
				class Weapon
				{
					type="WeaponInUse";
					size=1;
				};
				class RightHand
				{
					type="RightHand";
					size=1;
				};
				class LeftHand
				{
					type="LeftHand";
					size=1;
				};
				class Goggles
				{
					type="Goggles";
					size=1;
				};
				class Back
				{
					type="Back";
					size=1;
				};
				class EarPhones
				{
					type="EarPhones";
					size=1;
				};
			};
		};
		class Rucksack
		{
			simulation="Baggage";
			weight=1.5;
			class InventoryPlacements
			{
				class OnBack
				{
					type="Back";
					size=1;
					priority=1;
				};
				class InHands
				{
					type="WeaponInUse";
					size=1;
					priority=0;
				};
			};
			class InventorySlots
			{
				class Inside
				{
					type="Common";
					size=16;
				};
				class Weapon1
				{
					type="Weapon";
					size=1;
				};
				class Weapon2
				{
					type="Weapon";
					size=1;
				};
				class Bottle
				{
					type="Bottle";
					size=1;
				};
			};
		};
		class Bottle
		{
			simulation="InventoryItem";
			weight=0.5;
			class InventoryPlacements
			{
				class Bottle
				{
					type="Bottle";
					size=1;
					priority=1;
				};
			};
		};
	};
};
maxBodiesAdded=5;
class CfgTextureToMaterial
{
	class CarGlass
	{
		textures[]={};
		material="#SpecularGlass";
	};
	class AirborneGlass
	{
		textures[]={};
		material="#SpecularGlass";
	};
	class Metal
	{
		textures[]={};
		material="#Metal";
	};
	class AirBorneMetal
	{
		textures[]={};
		material="#Metal";
	};
	class RifleMetal
	{
		textures[]={};
		material="#RifleMetal";
	};
};
class CfgMaterials
{
	class Water
	{
		PixelShaderID="Water";
		VertexShaderID="Water";
		ambient[]={0.016000001,0.0264,0.039999999,0.40000001};
		diffuse[]={0.032000002,0.12800001,0.12800001,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={1,1,1,0};
		specularPower=4;
		emmisive[]={0,0,0,0};
		class Stage1
		{
			texture="#(rgb,8,8,3)color(0.5,0.5,1.0,1)";
			uvSource="texWaterAnim";
			class uvTransform
			{
				aside[]={0,4,0};
				up[]={4,0,0};
				dir[]={0,0,4};
				pos[]={0.2,0.5,0};
			};
		};
		class Stage3
		{
			texture="#(ai,16,64,1)waterirradiance(16)";
			uvSource="none";
		};
		class Stage4
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="none";
		};
		class Stage5
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="none";
		};
	};
	class Shore
	{
		PixelShaderID="Shore";
		VertexShaderID="Shore";
		ambient[]={0.016000001,0.0264,0.039999999,0.40000001};
		diffuse[]={0.032000002,0.12800001,0.12800001,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={1,1,1,0};
		specularPower=4;
		emmisive[]={0,0,0,0};
		class Stage1
		{
			texture="#(rgb,8,8,3)color(0.5,0.5,1.0,1)";
			uvSource="texWaterAnim";
			class uvTransform
			{
				aside[]={0,4,0};
				up[]={4,0,0};
				dir[]={0,0,4};
				pos[]={0.2,0.5,0};
			};
		};
		class Stage3
		{
			texture="#(ai,16,64,1)waterirradiance(16)";
			uvSource="none";
		};
		class Stage4
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="none";
		};
		class Stage5
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="none";
		};
	};
	class ShoreFoam
	{
		PixelShaderID="ShoreFoam";
		VertexShaderID="Shore";
		ambient[]={0.016000001,0.0264,0.039999999,0.40000001};
		diffuse[]={0.032000002,0.12800001,0.12800001,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={1,1,1,0};
		specularPower=4;
		emmisive[]={0,0,0,0};
		class Stage1
		{
			texture="#(rgb,8,8,3)color(0.5,0.5,1.0,1)";
			uvSource="texWaterAnim";
			class uvTransform
			{
				aside[]={0,4,0};
				up[]={4,0,0};
				dir[]={0,0,4};
				pos[]={0.2,0.5,0};
			};
		};
		class Stage3
		{
			texture="#(ai,16,64,1)waterirradiance(16)";
			uvSource="none";
		};
		class Stage4
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="none";
		};
		class Stage5
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="none";
		};
	};
	class ShoreWet
	{
		PixelShaderID="ShoreWet";
		VertexShaderID="Shore";
	};
	class Terrain
	{
		ambient[]={1,1,1,1};
		diffuse[]={0.60000002,0.60000002,0.60000002,1};
		forcedDiffuse[]={0.050000001,0.050000001,0.050000001,1};
		specular[]={0,0,0,0};
		specularPower=1;
		emmisive[]={0,0,0,0};
		PixelShaderID="NormalMapDiffuse";
		VertexShaderID="NormalMapDiffuseAlpha";
		class Stage1
		{
			texture="#(argb,8,8,3)color(0,0,1,1)";
			uvSource="tex";
			class uvTransform
			{
				aside[]={1,0,0};
				up[]={0,1,0};
				dir[]={0,0,1};
				pos[]={0,0,0};
			};
		};
		class Stage2
		{
			texture="#(argb,8,8,3)color(0.5,0.5,0.5,1)";
			uvSource="tex";
			class uvTransform
			{
				aside[]={1,0,0};
				up[]={0,1,0};
				dir[]={0,0,1};
				pos[]={0,0,0};
			};
		};
	};
	class SpecularGlass
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={0.5,0.5,0.80000001,0};
		specularPower=5;
		emmisive[]={0,0,0,0};
	};
	class Metal
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={0.2,0.2,0.2,0};
		specularPower=5;
		emmisive[]={0,0,0,0};
	};
	class RifleMetal
	{
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1,1};
		forcedDiffuse[]={0,0,0,0};
		specular[]={0.2,0.2,0.2,0};
		specularPower=5;
		emmisive[]={0,0,0,0};
	};
};
class CfgVehicleActions
{
};
class CfgWeaponCursors
{
	class RifleCursorCore
	{
		texture="";
		fade=0.19;
		class Sections
		{
			class Section1
			{
				uMin=0;
				vMin=0;
				uMax=0.328125;
				vMax=1;
				xOffset=-20;
				yOffset=0;
			};
			class Section2
			{
				uMin=0.65625;
				vMin=0;
				uMax=1;
				vMax=1;
				xOffset=20;
				yOffset=0;
			};
		};
	};
	class MGCursorCore
	{
		texture="";
		fade=0.19;
		class Sections
		{
			class Section1
			{
				uMin=0;
				uMax=0.328125;
				vMin=0.328125;
				vMax=0.65625;
				xOffset=-25;
				yOffset=0;
			};
			class Section2
			{
				uMin=0.65625;
				uMax=1;
				vMin=0.328125;
				vMax=0.65625;
				xOffset=25;
				yOffset=0;
			};
			class Section3
			{
				uMin=0.328125;
				uMax=0.65625;
				vMin=0.65625;
				vMax=1;
				xOffset=0;
				yOffset=25;
			};
		};
	};
	class LawCursorCore
	{
		texture="";
		fade=0.19;
		class Sections
		{
			class Section1
			{
				uMin=0;
				uMax=0.328125;
				vMin=0.328125;
				vMax=0.65625;
				xOffset=-30;
				yOffset=0;
			};
			class Section2
			{
				uMin=0.65625;
				uMax=1;
				vMin=0.328125;
				vMax=0.65625;
				xOffset=30;
				yOffset=0;
			};
			class Section3
			{
				uMin=0.328125;
				uMax=0.65625;
				vMin=0;
				vMax=0.328125;
				xOffset=0;
				yOffset=-30;
			};
			class Section4
			{
				uMin=0.328125;
				uMax=0.65625;
				vMin=0.65625;
				vMax=1;
				xOffset=0;
				yOffset=30;
			};
		};
	};
};
class CfgAmmo
{
	access=1;
	class DefaultAmmo
	{
		access=3;
		hit=0;
		indirectHit=0;
		indirectHitRange=1;
		typicalSpeed=900;
		targetCategory="";
		model="";
		proxyShape="";
		simulation="";
		animated=0;
		shadow=0;
		cost=0;
		maxSpeed=0;
		cartridge="";
		simulationStep=0.050000001;
		tracerColor[]={0.69999999,0.69999999,0.5,0.039999999};
		tracerColorR[]={0.69999999,0.69999999,0.5,0.039999999};
		soundFly[]=
		{
			"",
			1,
			1
		};
		soundEngine[]=
		{
			"",
			1,
			1
		};
		soundHit[]=
		{
			"",
			1,
			1
		};
		supersonicCrackNear[]=
		{
			"",
			1,
			1
		};
		supersonicCrackFar[]=
		{
			"",
			1,
			1
		};
		hitGroundSoft[]=
		{
			"soundHit",
			1
		};
		hitGroundHard[]=
		{
			"soundHit",
			1
		};
		hitMan[]=
		{
			"soundHit",
			1
		};
		hitArmor[]=
		{
			"soundHit",
			1
		};
		hitIron[]=
		{
			"soundHit",
			1
		};
		hitBuilding[]=
		{
			"soundHit",
			1
		};
		hitFoliage[]=
		{
			"soundHit",
			1
		};
		hitWood[]=
		{
			"soundHit",
			1
		};
		hitGlass[]=
		{
			"soundHit",
			1
		};
		hitGlassArmored[]=
		{
			"soundHit",
			1
		};
		hitConcrete[]=
		{
			"soundHit",
			1
		};
		hitRubber[]=
		{
			"soundHit",
			1
		};
		hitPlastic[]=
		{
			"soundHit",
			1
		};
		hitDefault[]=
		{
			"soundHit",
			1
		};
		hitMetal[]=
		{
			"soundHit",
			1
		};
		hitMetalplate[]=
		{
			"soundHit",
			1
		};
		deflecting=0;
		deflectionSlowDown=0.80000001;
		explosive=1;
		explosionEffects="ExplosionEffects";
		craterEffects="ImpactEffectsBig";
		effectsMissile="ExplosionEffects";
		effectsSmoke="SmokeShellWhite";
		effectsFire="CannonFire";
		timeToLive=10;
		irLock=0;
		airLock=0;
		laserLock=0;
		nvLock=0;
		artilleryLock=0;
		manualControl=0;
		maxControlRange=350;
		maneuvrability=1;
		trackLead=1;
		trackOversteer=1;
		maverickweaponIndexOffset=0;
		sideAirFriction=1;
		artilleryDispersion=1;
		artilleryCharge=1;
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		explosionTime=0;
		fuseDistance=0;
		initTime=0;
		thrustTime=1.5;
		thrust=210;
		airFriction=-0.00050000002;
		class HitEffects
		{
			vehicle="ImpactMetal";
			object="ImpactConcrete";
		};
		caliber=1;
		whistleDist=0;
		whistleOnFire=0;
		class NVGMarkers
		{
		};
	};
	class MissileCore: DefaultAmmo
	{
		simulation="shotMissile";
		simulationStep=0.050000001;
		timeToLive=20;
		manualControl=1;
		maxControlRange=250;
		initTime=0.15000001;
		thrustTime=2.5;
		thrust=350;
		maneuvrability=3;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=20;
		soundHit[]=
		{
			"",
			100,
			1
		};
		soundFly[]=
		{
			"",
			0.0099999998,
			2
		};
		soundEngine[]=
		{
			"",
			0.001,
			1
		};
		cost=10000;
		deflecting=5;
	};
	class BombCore: DefaultAmmo
	{
		hit=50;
		indirectHit=40;
		indirectHitRange=10;
		cost=200;
		irLock=0;
		laserLock=0;
		maxControlRange=0;
		maneuvrability=16;
		sideAirFriction=0.1;
		simulation="shotMissile";
		maxSpeed=100;
		timeToLive=120;
		initTime=0;
		thrustTime=0;
		thrust=0;
	};
	class LaserBombCore: BombCore
	{
		hit=5000;
		indirectHit=3500;
		indirectHitRange=15;
		cost=20000;
		irLock=0;
		laserLock=1;
		maxControlRange=100000;
		maneuvrability=16;
		sideAirFriction=0.1;
		simulation="shotMissile";
		maxSpeed=100;
		timeToLive=120;
		initTime=0;
		thrustTime=0;
		thrust=0;
	};
	class RocketCore: DefaultAmmo
	{
		simulation="shotRocket";
		simulationStep=0.050000001;
		timeToLive=20;
		maneuvrability=0;
		maxControlRange=0;
		initTime=0.050000001;
		thrustTime=1;
		thrust=1500;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=20;
		cost=2000;
		deflecting=5;
	};
	class ArtilleryRocketCore: RocketCore
	{
		artilleryLock=1;
	};
	class BulletCore: DefaultAmmo
	{
		simulation="shotBullet";
		simulationStep=0.050000001;
		timeToLive=3;
		soundFly[]=
		{
			"",
			0.25118864,
			0.69999999
		};
		explosive=0;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;
		soundHit1[]=
		{
			"",
			0.031622775,
			1
		};
		soundHit2[]=
		{
			"",
			0.031622775,
			1
		};
		soundHit3[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitMan1[]=
		{
			"",
			0.012589254,
			1
		};
		soundHitMan2[]=
		{
			"",
			0.012589254,
			1
		};
		soundHitArmor1[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitArmor2[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitBuilding1[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitBuilding2[]=
		{
			"",
			0.031622775,
			1
		};
		hitGround[]=
		{
			"soundHit1",
			0.33000001,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		hitMan[]=
		{
			"soundHitMan1",
			0.5,
			"soundHitMan2",
			0.5
		};
		hitArmor[]=
		{
			"soundHitArmor1",
			0.69999999,
			"soundHitArmor2",
			0.30000001
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.5,
			"soundHitBuilding2",
			0.5
		};
		cost=0.69999999;
	};
	class ShotgunCore: DefaultAmmo
	{
		simulation="shotSpread";
		simulationStep=0.050000001;
		timeToLive=3;
		soundFly[]=
		{
			"",
			0.25118864,
			0.69999999
		};
		explosive=0;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;
		soundHit1[]=
		{
			"",
			0.031622775,
			1
		};
		soundHit2[]=
		{
			"",
			0.031622775,
			1
		};
		soundHit3[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitMan1[]=
		{
			"",
			0.012589254,
			1
		};
		soundHitMan2[]=
		{
			"",
			0.012589254,
			1
		};
		soundHitArmor1[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitArmor2[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitBuilding1[]=
		{
			"",
			0.031622775,
			1
		};
		soundHitBuilding2[]=
		{
			"",
			0.031622775,
			1
		};
		hitGround[]=
		{
			"soundHit1",
			0.33000001,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		hitMan[]=
		{
			"soundHitMan1",
			0.5,
			"soundHitMan2",
			0.5
		};
		hitArmor[]=
		{
			"soundHitArmor1",
			0.69999999,
			"soundHitArmor2",
			0.30000001
		};
		hitBuilding[]=
		{
			"soundHitBuilding1",
			0.5,
			"soundHitBuilding2",
			0.5
		};
		cost=0.69999999;
	};
	class ShellCore: DefaultAmmo
	{
		simulation="shotShell";
		simulationStep=0.050000001;
		timeToLive=20;
		cost=1000;
		soundHit[]=
		{
			"",
			316.22775,
			1
		};
		soundFly[]=
		{
			"",
			0.031622775,
			4
		};
		indirectHitRange=8;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=10;
		deflecting=5;
	};
	class GrenadeCore: DefaultAmmo
	{
		explosive=1;
		hit=20;
		indirectHit=18;
		indirectHitRange=7;
		cost=40;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundHit[]=
		{
			"",
			10,
			1
		};
		soundFly[]=
		{
			"",
			3.1622778e-005,
			1
		};
		soundEngine[]=
		{
			"",
			9.9999997e-005,
			4
		};
		visibleFire=2;
		audibleFire=0.25;
		visibleFireTime=0;
		timeToLive=20;
		deflecting=60;
	};
	class TimeBombCore: DefaultAmmo
	{
		hit=700;
		indirectHit=700;
		indirectHitRange=7;
		model="";
		cost=2000;
		simulation="shotTimeBomb";
		simulationStep=0.1;
		soundHit[]=
		{
			"",
			100,
			1
		};
		soundFly[]=
		{
			"",
			0,
			1
		};
		soundEngine[]=
		{
			"",
			0,
			1
		};
		visibleFire=0;
		audibleFire=0;
		visibleFireTime=0;
		timeToLive=0;
	};
	class PipeBombCore: TimeBombCore
	{
		simulation="shotPipeBomb";
	};
	class MineCore: TimeBombCore
	{
		hit=750;
		indirectHit=750;
		indirectHitRange=5;
		simulation="shotMine";
		model="";
		defaultMagazine="";
	};
	class FlareCore: GrenadeCore
	{
		timeToLive=30;
		hit=5;
		indirectHit=2;
		indirectHitRange=0.2;
		cost=100;
		simulation="shotIlluminating";
		simulationStep=0.050000001;
		explosive=0;
		soundHit[]=
		{
			"",
			0,
			1
		};
		lightColor[]={1,1,1,0};
		brightness=2;
		size=1;
		deflecting=60;
	};
	class SmokeShellCore: GrenadeCore
	{
		timeToLive=60;
		visibleFire=2;
		audibleFire=0.25;
		visibleFireTime=1;
		hit=5;
		indirectHit=2;
		indirectHitRange=0.2;
		cost=100;
		simulation="shotSmoke";
		explosive=0;
		soundHit[]=
		{
			"",
			0,
			1
		};
		smokeColor[]={1,1,1,0};
		deflecting=60;
	};
	class FakeAmmo: BulletCore
	{
		hit=13;
		indirectHit=4;
		indirectHitRange=0.2;
		cost=6;
		airlock=1;
		explosive=0;
		visibleFire=16;
		audibleFire=16;
		visibleFireTime=3;
	};
};
class CfgRecoils
{
	access=1;
	empty[]={};
	impulse[]={0.029999999,0.02,0.2,0.079999998,0.079999998,0.80000001,0.1,0.029999999,-0.1,0.30000001,0,0};
};
class CfgMagazines
{
	class DefaultMagazine
	{
		scope=0;
		value=2;
		type=0;
		simulation="ProxyMagazines";
		inventorySlot="";
		attachments[]={};
		handheld=0;
		rotateDropped=1;
		rotateAlways=1;
		rotateY=0;
		rotateZ=0;
		autoQuickbar=0;
		cargoClass="";
		itemSize[]={1,1};
		targetCategory="";
		storeVariables[]={};
		synchronizedVariables[]={};
		armAction="Rifle";
		model="";
		picture="";
		ammo="";
		count=1;
		displayName="";
		displayNameShort="";
		nameSound="";
		weight=0;
		maxLeadSpeed=50;
		initSpeed=100;
		reloadAction="";
		useAction=0;
		useActionTitle="";
		modelSpecial="";
		class InventoryPlacements
		{
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="";
		maxThrowHoldTime=2;
		minThrowIntensityCoef=0.30000001;
		maxThrowIntensityCoef=1.4;
		quickReload=0;
		reversed=0;
		speechSingular[]={};
		speechPlural[]={};
		textSingular="";
		textPlural="";
		weaponSlots=0;
		clothingType="";
		tooltip="";
		quantity="format ['%1/%2', magazineAmmo _this, maxMagazineAmmo _this]";
		camouflage=2;
		audible=1;
		accuracy=0;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		spotableDarkNightLightsOff=0.003;
		spotableNightLightsOff=0.035;
		spotableNightLightsOn=4;
		visibleNightLightsOff=0.1;
		visibleNightLightsOn=0.2;
		side=4;
		destrType="DestructDefault";
		portrait="";
		icon="iconObject";
		unitInfoType="RscUnitInfoTank";
		hideUnitInfo=0;
		cost=500000;
		fuelCapacity=0;
		fuelConsumptionRate="0.01f";
		armor=100;
		armorLights=0.40000001;
		damageResistance=0.0040000002;
		secondaryExplosion=-1;
		minFireTime=20;
		extCameraPosition[]={0,2,-20};
		groupCameraPosition[]={0,5,-30};
		maxSpeed=80;
		limitedSpeedCoef=0.22;
		brakeDistance=5;
		precision=5;
		formationX=10;
		formationZ=20;
		formationTime=5;
		steerAheadSimul=0.30000001;
		steerAheadPlan=0.40000001;
		predictTurnSimul=1.2;
		predictTurnPlan=1;
		driverCanEject=1;
		cargoCanEject=1;
		enableWatch=0;
		enableRadio=0;
		enableGPS=0;
		transportFuel=0;
		transportRepair=0;
		transportAmmo=0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		itemsCargoSize[]={0,0};
		attendant=0;
		engineer=0;
		lockDetectionSystem=0;
		incommingMisslieDetectionSystem=0;
		alwaysTarget=0;
		irTarget=1;
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		irScanGround=1;
		laserTarget=0;
		laserScanner=0;
		nvTarget=0;
		nvScanner=0;
		artilleryTarget=0;
		artilleryScanner=0;
		nightVision=0;
		commanderCanSee=31;
		gunnerCanSee="4+8+16";
		driverCanSee="2+8+16";
		radarType=0;
		allowTabLock=1;
		showAllTargets=0;
		HeadAimDown=0;
		preferRoads=0;
		soundEngine[]=
		{
			"",
			1,
			1
		};
		soundEnviron[]=
		{
			"",
			1,
			1
		};
		soundCrash[]=
		{
			"",
			0.31622776,
			1
		};
		soundLandCrash[]=
		{
			"",
			1,
			1
		};
		soundWaterCrash[]=
		{
			"",
			0.17782794,
			1
		};
		soundGetIn[]=
		{
			"",
			0.00031622776,
			1
		};
		soundGetOut[]=
		{
			"",
			0.00031622776,
			1
		};
		soundServo[]=
		{
			"",
			0.0031622776,
			0.5
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			1,
			1
		};
		soundLocked[]=
		{
			"",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"",
			1,
			1
		};
		class SoundEnvironExt
		{
		};
		class SoundEquipment
		{
		};
		class SoundGear
		{
		};
		weapons[]={};
		magazines[]={};
		magazineSlot="";
		threat[]={0.69999999,0.5,0.30000001};
		class HeadLimits
		{
			initAngleX=5;
			minAngleX=-40;
			maxAngleX=40;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
			minAngleZ=-45;
			maxAngleZ=45;
			rotZRadius=0.2;
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.89999998;
			minFov=0.41999999;
			maxFov=0.89999998;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class PilotSpec
		{
			showHeadPhones=0;
		};
		selectionClan="";
		selectionDashboard="";
		selectionShowDamage="";
		selectionBackLights="";
		memoryPointSupply="doplnovani";
		class Reflectors
		{
		};
		aggregateReflectors[]={};
		class MarkerLights
		{
		};
		class NVGMarkers
		{
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		selectionDamage="zbytek";
	};
	class FakeMagazine: DefaultMagazine
	{
		scope=1;
		ammo="FakeAmmo";
		selectionFireAnim="zasleh";
		inventorySlot="magazineFakeWeapon";
	};
};
class Mode_SemiAuto
{
	multiplier=1;
	burst=1;
	displayName="";
	dispersion=0.00019999999;
	sound[]=
	{
		"",
		10,
		1
	};
	soundBegin[]=
	{
		"sound",
		1
	};
	soundEnd[]={};
	soundLoop[]={};
	soundContinuous=0;
	soundBurst=1;
	reloadTime=0.1;
	ffCount=1;
	ffMagnitude=0.5;
	ffFrequency=11;
	flash="gunfire";
	flashSize=0.1;
	recoil="Empty";
	recoilProne="Empty";
	autoFire=0;
	aiRateOfFire=0.5;
	aiRateOfFireDistance=500;
	useAction=0;
	useActionTitle="";
	showToPlayer=1;
	minRange=30;
	minRangeProbab=0.25;
	midRange=300;
	midRangeProbab=0.57999998;
	maxRange=600;
	maxRangeProbab=0.039999999;
	artilleryDispersion=1;
	artilleryCharge=1;
};
class Mode_Burst: Mode_SemiAuto
{
	displayName="";
	sound[]=
	{
		"",
		10,
		1
	};
	soundLoop[]=
	{
		"sound",
		1
	};
	soundEnd[]=
	{
		"sound",
		1
	};
	soundBurst=1;
	burst=3;
	dispersion=0.00050000002;
	minRange=10;
	minRangeProbab=0.30000001;
	midRange=60;
	midRangeProbab=0.57999998;
	maxRange=150;
	maxRangeProbab=0.039999999;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName="";
	dispersion=0.00050000002;
	sound[]=
	{
		"",
		10,
		1
	};
	soundEnd[]=
	{
		"sound",
		1
	};
	soundContinuous=0;
	reloadTime=0.079999998;
	autoFire=1;
	minRange=1;
	minRangeProbab=0.2;
	midRange=30;
	midRangeProbab=0.57999998;
	maxRange=80;
	maxRangeProbab=0.039999999;
};
class CfgWeapons
{
	access=1;
	class DefaultWeapon
	{
		access=3;
		scope=0;
		value=2;
		picture="";
		uiPicture="";
		ammo="";
		cursor="";
		cursorAim="";
		cursorSize=1;
		showAimCursorInternal=1;
		cursorAimOn="";
		laser=0;
		simulation="Weapon";
		inventorySlot="";
		attachments[]={};
		handheld=1;
		rotateDropped=0;
		rotateY=0;
		rotateZ=0;
		autoQuickbar=1;
		cargoClass="";
		itemSize[]={1,1};
		targetCategory="";
		storeVariables[]={};
		synchronizedVariables[]={};
		armAction="Rifle";
		tooltip="";
		quantity="";
		type=65536;
		displayName="";
		nameSound="";
		count=0;
		multiplier=1;
		burst=1;
		magazineReloadTime=0;
		reloadTime=1;
		sound[]=
		{
			"",
			1,
			1
		};
		soundBegin[]=
		{
			"sound",
			1
		};
		soundEnd[]=
		{
			"sound",
			1
		};
		soundLoop[]=
		{
			"sound",
			1
		};
		soundContinuous=0;
		soundBurst=1;
		drySound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			1,
			1
		};
		reloadMagazineSound[]=
		{
			"",
			1,
			1
		};
		emptySound[]=
		{
			"",
			1,
			1
		};
		soundBullet[]=
		{
			"emptySound",
			1
		};
		initSpeed=0;
		ballisticsComputer=0;
		irDistance=0;
		dispersion=0.0020000001;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		canLock=2;
		lockAcquire=1;
		enableAttack=1;
		ffMagnitude=0;
		ffFrequency=1;
		ffCount=1;
		recoil="empty";
		recoilProne="";
		model="";
		modelSpecial="";
		modelMagazine="";
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		cartridgePos="nabojnicestart";
		cartridgeVel="nabojniceend";
		selectionFireAnim="zasleh";
		memoryPointCamera="eye";
		useModelOptics=1;
		opticsID=0;
		modelOptics="";
		opticsPPEffects[]={};
		opticsFlare=1;
		optics=1;
		forceOptics=0;
		useAsBinocular=0;
		opticsDisablePeripherialVision=0.67000002;
		opticsZoomMin=0.34999999;
		opticsZoomMax=0.34999999;
		opticsZoomInit=0.34999999;
		distanceZoomMin=400;
		distanceZoomMax=400;
		primary=10;
		showSwitchAction=0;
		showEmpty=1;
		autoFire=0;
		autoReload=1;
		autoAimEnabled=1;
		showToPlayer=1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		fireLightDuration=0.050000001;
		fireLightIntensity=0.012;
		backgroundReload=0;
		reloadAction="";
		ejectType=1;
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		modes[]=
		{
			"this"
		};
		useAction=0;
		useActionTitle="";
		canDrop=1;
		weight=0;
		minRange=1;
		minRangeProbab=0.30000001;
		midRange=150;
		midRangeProbab=0.57999998;
		maxRange=500;
		maxRangeProbab=0.039999999;
		handAnim[]={};
		artilleryDispersion=1;
		artilleryCharge=1;
		fireSpreadAngle="1.25f";
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="";
		reversed=0;
		speechSingular[]={};
		speechPlural[]={};
		textSingular="";
		textPlural="";
		weaponSlots=0;
		clothingType="";
		camouflage=2;
		audible=1;
		accuracy=0;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		spotableDarkNightLightsOff=0.003;
		spotableNightLightsOff=0.035;
		spotableNightLightsOn=4;
		visibleNightLightsOff=0.1;
		visibleNightLightsOn=0.2;
		side=4;
		destrType="DestructDefault";
		portrait="";
		icon="iconObject";
		unitInfoType="RscUnitInfoTank";
		hideUnitInfo=0;
		cost=500000;
		fuelCapacity=0;
		fuelConsumptionRate="0.01f";
		armor=100;
		armorLights=0.40000001;
		damageResistance=0.0040000002;
		secondaryExplosion=-1;
		minFireTime=20;
		extCameraPosition[]={0,2,-20};
		groupCameraPosition[]={0,5,-30};
		maxSpeed=80;
		limitedSpeedCoef=0.22;
		brakeDistance=5;
		precision=5;
		formationX=10;
		formationZ=20;
		formationTime=5;
		steerAheadSimul=0.30000001;
		steerAheadPlan=0.40000001;
		predictTurnSimul=1.2;
		predictTurnPlan=1;
		driverCanEject=1;
		cargoCanEject=1;
		enableWatch=0;
		enableRadio=0;
		enableGPS=0;
		transportFuel=0;
		transportRepair=0;
		transportAmmo=0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		itemsCargoSize[]={0,0};
		attendant=0;
		engineer=0;
		lockDetectionSystem=0;
		incommingMisslieDetectionSystem=0;
		alwaysTarget=0;
		irTarget=1;
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		irScanGround=1;
		laserTarget=0;
		laserScanner=0;
		nvTarget=0;
		nvScanner=0;
		artilleryTarget=0;
		artilleryScanner=0;
		nightVision=0;
		commanderCanSee=31;
		gunnerCanSee="4+8+16";
		driverCanSee="2+8+16";
		radarType=0;
		allowTabLock=1;
		showAllTargets=0;
		HeadAimDown=0;
		preferRoads=0;
		soundEngine[]=
		{
			"",
			1,
			1
		};
		soundEnviron[]=
		{
			"",
			1,
			1
		};
		soundCrash[]=
		{
			"",
			0.31622776,
			1
		};
		soundLandCrash[]=
		{
			"",
			1,
			1
		};
		soundWaterCrash[]=
		{
			"",
			0.17782794,
			1
		};
		soundGetIn[]=
		{
			"",
			0.00031622776,
			1
		};
		soundGetOut[]=
		{
			"",
			0.00031622776,
			1
		};
		soundServo[]=
		{
			"",
			0.0031622776,
			0.5
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			1,
			1
		};
		soundLocked[]=
		{
			"",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"",
			1,
			1
		};
		class SoundEnvironExt
		{
		};
		class SoundEquipment
		{
		};
		class SoundGear
		{
		};
		weapons[]={};
		threat[]={0.69999999,0.5,0.30000001};
		class HeadLimits
		{
			initAngleX=5;
			minAngleX=-40;
			maxAngleX=40;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
			minAngleZ=-45;
			maxAngleZ=45;
			rotZRadius=0.2;
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.89999998;
			minFov=0.41999999;
			maxFov=0.89999998;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class PilotSpec
		{
			showHeadPhones=0;
		};
		selectionClan="";
		selectionDashboard="";
		selectionShowDamage="";
		selectionBackLights="";
		memoryPointSupply="doplnovani";
		class Reflectors
		{
		};
		aggregateReflectors[]={};
		class MarkerLights
		{
		};
		class NVGMarkers
		{
		};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		selectionDamage="zbytek";
	};
	class PistolCore: DefaultWeapon
	{
		dexterity=2;
		type=2;
		canLock=0;
	};
	class RifleCore: DefaultWeapon
	{
		type=1;
		dexterity=1.7;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=500;
		canLock=0;
		inventorySlot="Shoulder";
		itemSize[]={2,1};
	};
	class MGunCore: DefaultWeapon
	{
		type="1 + 4";
		dexterity=0.5;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=400;
		inventorySlot="Shoulder";
		itemSize[]={2,1};
	};
	class LauncherCore: DefaultWeapon
	{
		type=4;
		dexterity=0.5;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=300;
		count=1;
		inventorySlot="Shoulder";
		itemSize[]={2,1};
	};
	class GrenadeWeaponCore: DefaultWeapon
	{
		type=0;
		dexterity=3;
		aiRateOfFire=1;
		aiRateOfFireDistance=40;
		count=1;
		canLock=0;
	};
	class CannonCore: DefaultWeapon
	{
		type=65536;
	};
	class FakeWeapon: MGunCore
	{
		scope=1;
		type=0;
		cursor="";
		cursoraim="";
		sound[]={};
		magazines[]=
		{
			"FakeMagazine"
		};
		magazineSlot="magazineFakeWeapon";
	};
};
class CfgCloudlets
{
	access=0;
	class Default
	{
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=1;
		angle=0;
		angleVar=0;
	};
	class Explosion
	{
		access=0;
		cloudletDuration=0.2;
		cloudletAnimPeriod=0.5;
		cloudletSize=1;
		cloudletAlpha=1;
		cloudletGrowUp=0.050000001;
		cloudletFadeIn=0.0099999998;
		cloudletFadeOut=0.2;
		cloudletAccY=-0.2;
		cloudletMinYSpeed=0;
		cloudletMaxYSpeed=6;
		cloudletShape="cloudletExplosion";
		cloudletColor[]={1,1,1,0};
		interval=0.001;
		size=4;
		sourceSize=3;
		timeToLive=0;
		initT=2500;
		deltaT=-4000;
		class Table
		{
			class T14
			{
				maxT=1400;
				color[]={0.91000003,0.5,0.17,0};
			};
			class T15
			{
				maxT=1500;
				color[]={1,0.60000002,0.2,0};
			};
			class T16
			{
				maxT=1600;
				color[]={1,0.70999998,0.30000001,0};
			};
			class T17
			{
				maxT=1700;
				color[]={0.98000002,0.82999998,0.41,0};
			};
			class T18
			{
				maxT=1800;
				color[]={0.98000002,0.91000003,0.54000002,0};
			};
			class T19
			{
				maxT=1900;
				color[]={0.98000002,0.99000001,0.60000002,0};
			};
			class T20
			{
				maxT=2000;
				color[]={0.95999998,0.99000001,0.72000003,0};
			};
			class T21
			{
				maxT=2100;
				color[]={1,0.98000002,0.91000003,0};
			};
			class T22
			{
				maxT=2200;
				color[]={1,1,1,0};
			};
		};
	};
	class CraterSmoke1
	{
		access=0;
		interval="0.05 / 0.8";
		cloudletAnimPeriod="1 * 0.8";
		cloudletSize=2;
		cloudletAlpha=1;
		cloudletGrowUp="1.0 * 0.8";
		cloudletFadeIn="0.1 * 0.8";
		cloudletDuration="3.0 * 0.8";
		cloudletFadeOut="1.5 * 0.8";
		cloudletAccY=-0.1;
		cloudletMinYSpeed="0.0 / 0.8";
		cloudletMaxYSpeed="5.0 / 0.8";
		cloudletColor[]={1,1,1,0};
		initT=500;
		deltaT="-50 * 0.8";
		class Table
		{
			class T0
			{
				maxT=0;
				color[]={1,1,1,0};
			};
			class T1
			{
				maxT=500;
				color[]={0.5,0.5,0.5,0};
			};
		};
		cloudletShape="cloudletSmoke";
		density="1.0 / 0.7";
		size=1;
		timeToLive="0.4 * 0.8";
		in="0.0 * 0.8";
		out="0.0 * 0.8";
		initYSpeed="5.0 / 0.8";
	};
	class CraterSmoke2
	{
		access=0;
		interval="0.1 / 0.8";
		cloudletAnimPeriod="1 * 0.8";
		cloudletSize=2;
		cloudletAlpha=1;
		cloudletGrowUp="1.0 * 0.8";
		cloudletFadeIn="0.1 * 0.8";
		cloudletDuration="2.5 * 0.8";
		cloudletFadeOut="1.5 * 0.8";
		cloudletAccY=-0.1;
		cloudletMinYSpeed="0.0 / 0.8";
		cloudletMaxYSpeed="2.0 / 0.8";
		cloudletColor[]={1,1,1,0};
		initT=0;
		deltaT="0 * 0.8";
		class Table
		{
			class T0
			{
				maxT=0;
				color[]={1,1,1,0};
			};
		};
		cloudletShape="cloudletSmoke";
		density="1.0 / 0.7";
		size=1;
		timeToLive="1.0 * 0.8";
		in="0.0 * 0.8";
		out="2.0 * 0.8";
		initYSpeed="0 / 0.8";
	};
	class CraterSmoke3
	{
		access=0;
		interval="0.1 / 0.8";
		cloudletAnimPeriod="1 * 0.8";
		cloudletSize=1;
		cloudletAlpha=0.30000001;
		cloudletGrowUp="1.0 * 0.8";
		cloudletFadeIn="0.5 * 0.8";
		cloudletDuration="3 * 0.8";
		cloudletFadeOut="1 * 0.8";
		cloudletAccY="-0.1 * 0.8";
		cloudletMinYSpeed="0.0 / 0.8";
		cloudletMaxYSpeed="5.0 / 0.8";
		cloudletColor[]={1,1,1,0};
		initT=500;
		deltaT="-80 * 0.8";
		class Table
		{
			class T0
			{
				maxT=0;
				color[]={1,1,1,0};
			};
		};
		cloudletShape="cloudletSmoke";
		density="0.5 / 0.7";
		size=1;
		timeToLive="2.0 * 0.8";
		in="0.2 * 0.8";
		out="0.0 * 0.8";
		initYSpeed="5.0 / 0.8";
	};
	class CraterDustSmall
	{
		access=0;
		interval=0.0099999998;
		cloudletSize=1;
		cloudletAlpha=0.60000002;
		cloudletDuration=0.2;
		cloudletAnimPeriod=1;
		cloudletGrowUp=0.60000002;
		cloudletFadeIn=0;
		cloudletFadeOut=0.60000002;
		cloudletAccY=-3.5;
		cloudletMinYSpeed=-20;
		cloudletMaxYSpeed=10;
		cloudletColor[]={0.25,0.23,0.16,0};
		initT=0;
		deltaT=0;
		class Table
		{
			class T0
			{
				maxT=0;
				color[]={1,1,1,0};
			};
		};
		cloudletShape="cloudletDust";
		size=0.2;
		sourceSize=0.02;
	};
	class CraterBlood: CraterDustSmall
	{
		access=0;
		interval=0.0049999999;
		cloudletAlpha=0.5;
		cloudletDuration=0.1;
		cloudletAnimPeriod=1;
		cloudletGrowUp=0.30000001;
		cloudletFadeIn=0;
		cloudletFadeOut=0.30000001;
		cloudletAccY=-1;
		cloudletMinYSpeed=-10;
		cloudletMaxYSpeed=10;
		cloudletShape="cloudletBlood";
		cloudletColor[]={0.34999999,0,0.050000001,0};
		size=0.15000001;
		sourceSize=0.050000001;
	};
	class CraterWater: CraterDustSmall
	{
		access=0;
		interval=0.0099999998;
		cloudletAlpha=1;
		cloudletDuration=0.30000001;
		cloudletAnimPeriod=1;
		cloudletGrowUp=0.30000001;
		cloudletFadeIn=0;
		cloudletFadeOut=0.2;
		cloudletAccY=-10;
		cloudletMinYSpeed=-100;
		cloudletMaxYSpeed=100;
		cloudletShape="cloudletWater";
		cloudletColor[]={0.54000002,0.69,0.64499998,0};
		size=0.02;
		sourceSize=0.02;
	};
	class CraterDustBig: CraterDustSmall
	{
		access=0;
		cloudletDuration=2;
		cloudletGrowUp=0.2;
		cloudletFadeIn=0.2;
		cloudletFadeOut=1.5;
		cloudletAccY=-8;
		cloudletMinYSpeed=-20;
		cloudletMaxYSpeed=10;
	};
	class CloudletsMissile
	{
		access=0;
		interval=0.0049999999;
		cloudletSize=1.7;
		cloudletAlpha=0.5;
		cloudletDuration=0.44999999;
		cloudletAnimPeriod=1;
		cloudletGrowUp=0.050000001;
		cloudletFadeIn=0;
		cloudletFadeOut=0.5;
		cloudletAccY=0;
		cloudletMinYSpeed=-10;
		cloudletMaxYSpeed=10;
		cloudletColor[]={1,1,1,0};
		initT=0;
		deltaT=0;
		class Table
		{
			class T0
			{
				maxT=0;
				color[]={1,1,1,0};
			};
		};
		cloudletShape="cloudletMissile";
	};
	class CloudletsMissileManual: CloudletsMissile
	{
		cloudletSize=0.30000001;
		cloudletAlpha=0.40000001;
	};
	class CloudletsDebugTrace: CloudletsMissile
	{
		cloudletSize=0.02;
		cloudletAlpha=0.5;
		cloudletDuration=1;
		cloudletColor[]={0.5,0.5,0,0};
	};
	class CloudletsScud: CloudletsMissile
	{
		cloudletSize=5;
		cloudletAlpha=0.5;
		cloudletColor[]={1,1,1,0};
		cloudletFadeIn=0;
		cloudletDuration=1.5;
		cloudletFadeOut=0.5;
		cloudletGrowUp=1;
		cloudletAccY=0;
		cloudletMinYSpeed=-1000;
		cloudletMaxYSpeed=1000;
		interval=0.02;
		size=8;
		sourceSize=1;
	};
	class DefaultSmoke
	{
		interval=0.30000001;
		cloudletDuration=1;
		cloudletAnimPeriod=3;
		cloudletSize=1;
		cloudletAlpha=1;
		cloudletGrowUp=0.30000001;
		cloudletFadeIn=0.5;
		cloudletFadeOut=2;
		cloudletAccY=0;
		cloudletMinYSpeed=-10;
		cloudletMaxYSpeed=10;
		cloudletColor[]={1,1,1,1};
		initT=0;
		deltaT=0;
		class Table
		{
		};
		cloudletShape="cloudletSmoke";
		density=1;
		size=1;
		timeToLive=30;
		in=1;
		out=1;
		initYSpeed=3.5;
	};
	class DestructedObjectDust
	{
		interval=0.15000001;
		cloudletDuration=0.5;
		cloudletAnimPeriod=1;
		cloudletSize=0.5;
		cloudletAlpha=1;
		cloudletGrowUp=0.40000001;
		cloudletFadeIn=0.2;
		cloudletFadeOut=1.5;
		cloudletAccY=-0.5;
		cloudletMinYSpeed=-1;
		cloudletMaxYSpeed=1;
		cloudletColor[]={0.25,0.23,0.16,1};
		initT=0;
		deltaT=0;
		class Table
		{
		};
		cloudletShape="cloudletSmoke";
		density=2;
		size=0.5;
		timeToLive=0.40000001;
		in=0.80000001;
		out=0.80000001;
		initYSpeed=2.5;
	};
	class DestructedEngineSmoke
	{
		interval=0.30000001;
		cloudletDuration=0.5;
		cloudletAnimPeriod=3;
		cloudletSize=1;
		cloudletAlpha=1;
		cloudletGrowUp=0.5;
		cloudletFadeIn=0.5;
		cloudletFadeOut=3;
		cloudletAccY=-0.80000001;
		cloudletMinYSpeed=0;
		cloudletMaxYSpeed=5;
		cloudletColor[]={0.15000001,0.15000001,0.1,1};
		initT=0;
		deltaT=0;
		class Table
		{
		};
		cloudletShape="cloudletSmoke";
		density=1;
		size=1;
		timeToLive=6;
		in=1;
		out=6;
		initYSpeed=3.5;
	};
};
class CfgOpticsEffect
{
};
class MissileManualEffects
{
};
class MissileEffects
{
};
class ImpactEffectsBig
{
};
class ImpactEffectsSmall
{
};
class ImpactEffectsBlood
{
};
class ImpactEffectsWater
{
};
class ExplosionEffects
{
};
class ExhaustsEffect
{
};
class ExhaustsEffectBig
{
};
class LDustEffects
{
};
class RDustEffects
{
};
class LWaterEffects
{
};
class RWaterEffects
{
};
class LEngEffects
{
};
class REngEffects
{
};
class FDustEffects
{
};
class HeliDust
{
};
class HeliWater
{
};
class DamageSmokeHeli
{
};
class DamageSmokePlane
{
};
class ScudEffect
{
};
class CfgDestructPos
{
	class DelayedDestruction
	{
		timeBeforeHiding="0.2";
		hideDuration="0.65+lifeTime*0.05";
	};
};
class CfgDamageAround
{
	class DamageAroundHouse
	{
		radiusRatio="1.0";
		indirectHit="11";
	};
};
class WeaponFireGun
{
	access=0;
	cloudletDuration=0.2;
	cloudletAnimPeriod=1;
	cloudletSize=1;
	cloudletAlpha=1;
	cloudletGrowUp=0.2;
	cloudletFadeIn=0.0099999998;
	cloudletFadeOut=0.5;
	cloudletAccY=0;
	cloudletMinYSpeed=-100;
	cloudletMaxYSpeed=100;
	cloudletShape="cloudletFire";
	cloudletColor[]={1,1,1,0};
	interval=0.0099999998;
	size=3;
	sourceSize=0.5;
	timeToLive=0;
	initT=4500;
	deltaT=-3000;
	class Table
	{
		class T0
		{
			maxT=0;
			color[]={0.81999999,0.94999999,0.93000001,0};
		};
		class T1
		{
			maxT=200;
			color[]={0.75,0.76999998,0.89999998,0};
		};
		class T2
		{
			maxT=400;
			color[]={0.56,0.62,0.67000002,0};
		};
		class T3
		{
			maxT=600;
			color[]={0.38999999,0.46000001,0.47,0};
		};
		class T4
		{
			maxT=800;
			color[]={0.23999999,0.31,0.31,0};
		};
		class T5
		{
			maxT=1000;
			color[]={0.23,0.31,0.28999999,0};
		};
		class T6
		{
			maxT=1500;
			color[]={0.20999999,0.28999999,0.27000001,0};
		};
		class T7
		{
			maxT=2000;
			color[]={0.19,0.23,0.20999999,0};
		};
		class T8
		{
			maxT=2300;
			color[]={0.22,0.19,0.1,0};
		};
		class T9
		{
			maxT=2500;
			color[]={0.34999999,0.2,0.02,0};
		};
		class T10
		{
			maxT=2600;
			color[]={0.62,0.28999999,0.029999999,0};
		};
		class T11
		{
			maxT=2650;
			color[]={0.58999997,0.34999999,0.050000001,0};
		};
		class T12
		{
			maxT=2700;
			color[]={0.75,0.37,0.029999999,0};
		};
		class T13
		{
			maxT=2750;
			color[]={0.88,0.34,0.029999999,0};
		};
		class T14
		{
			maxT=2800;
			color[]={0.91000003,0.5,0.17,0};
		};
		class T15
		{
			maxT=2850;
			color[]={1,0.60000002,0.2,0};
		};
		class T16
		{
			maxT=2900;
			color[]={1,0.70999998,0.30000001,0};
		};
		class T17
		{
			maxT=2950;
			color[]={0.98000002,0.82999998,0.41,0};
		};
		class T18
		{
			maxT=3000;
			color[]={0.98000002,0.91000003,0.54000002,0};
		};
		class T19
		{
			maxT=3100;
			color[]={0.98000002,0.99000001,0.60000002,0};
		};
		class T20
		{
			maxT=3300;
			color[]={0.95999998,0.99000001,0.72000003,0};
		};
		class T21
		{
			maxT=3600;
			color[]={1,0.98000002,0.91000003,0};
		};
		class T22
		{
			maxT=4200;
			color[]={1,1,1,0};
		};
	};
};
class WeaponFireMGun: WeaponFireGun
{
	cloudletDuration=0;
	cloudletGrowUp=0.059999999;
	cloudletFadeIn=0;
	cloudletFadeOut=0.12;
	interval=0.0049999999;
	size=0.12;
	sourceSize=0.0099999998;
	initT=3200;
	deltaT=-4000;
};
class WeaponCloudsGun
{
	access=0;
	cloudletDuration=0.30000001;
	cloudletAnimPeriod=1;
	cloudletSize=1;
	cloudletAlpha=1;
	cloudletGrowUp=1;
	cloudletFadeIn=0.0099999998;
	cloudletFadeOut=1;
	cloudletAccY=0.40000001;
	cloudletMinYSpeed=0.2;
	cloudletMaxYSpeed=0.80000001;
	cloudletShape="cloudletClouds";
	cloudletColor[]={1,1,1,0};
	interval=0.050000001;
	size=3;
	sourceSize=0.5;
	timeToLive=0;
	initT=0;
	deltaT=0;
	class Table
	{
		class T0
		{
			maxT=0;
			color[]={1,1,1,0};
		};
	};
};
class WeaponCloudsMGun: WeaponCloudsGun
{
	access=0;
	cloudletGrowUp=0.050000001;
	cloudletFadeIn=0;
	cloudletFadeOut=0.1;
	cloudletDuration=0.050000001;
	cloudletAlpha=0.30000001;
	cloudletAccY=0;
	cloudletMinYSpeed=-100;
	cloudletMaxYSpeed=100;
	interval=0.02;
	size=0.30000001;
	sourceSize=0.02;
};
class CfgLights
{
	class ObjectDestructionLight
	{
		color[]={1.5,0.75,0};
		ambient[]={0.44999999,0.22,0};
		brightness[]=
		{
			"fireIntensity",
			0,
			0.0099999998
		};
	};
	class ExplosionLight
	{
		color[]={1,1,1};
		ambient[]={0.44999999,0.22,0};
		brightness[]=
		{
			"fireIntensity",
			0,
			0.0099999998
		};
	};
};
class CfgCloth
{
	class Flag
	{
		stepSize=0.0049999999;
		colPoints=9;
		rowPoints=9;
		stretchCoef=1000;
		fricCoef=1;
		windCoef=10;
		gravCoef=1;
	};
};
class CfgVehicleClasses
{
	access=1;
	class Men
	{
		displayName="$STR_DN_MEN";
	};
	class Animals
	{
		displayName="$STR_DN_ANIMALS";
	};
	class Car
	{
		displayName="$STR_DN_CARS";
	};
	class Armored
	{
		displayName="$STR_DN_ARMORED";
	};
	class Air
	{
		displayName="$STR_DN_AIR";
	};
	class Support
	{
		displayName="$STR_DN_SUPPORT";
	};
	class Camera
	{
		displayName="$STR_DN_CAMERAS";
	};
	class Objects
	{
		displayName="$STR_DN_OBJECTS";
	};
	class Ammo
	{
		displayName="$STR_DN_AMMO";
	};
	class Sounds
	{
		displayName="$STR_DN_SOUNDS";
	};
	class Mines
	{
		displayName="$STR_DN_MINES";
	};
	class Ship
	{
		displayName="$STR_DN_SHIP";
	};
};
class CfgFactionClasses
{
	access=1;
	class Default
	{
		displayName="$STR_disp_other";
		priority=10000;
		side=-1;
	};
};
class AirplaneHUD
{
	topLeft="HUD LH";
	topRight="HUD PH";
	bottomLeft="HUD LD";
	borderLeft=0;
	borderRight=0;
	borderTop=0;
	borderBottom=0;
	color[]={0,1,0,0.1};
	class Pos10Vector
	{
		type="vector";
		pos0[]={0.5,0.27000001};
		pos10[]=
		{
			"0.5+0.9",
			"0.27+0.7"
		};
	};
	class Bones
	{
		class AGLMove1
		{
			type="linear";
			source="altitudeAGL";
			min=0;
			max=100;
			minPos[]={0.050000001,0.1};
			maxPos[]={0.050000001,0.80000001};
		};
		class AGLMove2
		{
			type="fixed";
			pos[]={0.050000001,0.80000001};
		};
		class ASLMove1
		{
			type="linear";
			source="altitudeASL";
			min=0;
			max=500;
			minPos[]={0.1,0.1};
			maxPos[]={0.1,0.80000001};
		};
		class ASLMove2
		{
			type="fixed";
			pos[]={0.1,0.80000001};
		};
		class VertSpeed
		{
			type="linear";
			source="vSpeed";
			min=-25;
			max=25;
			minPos[]={0,-0.40000001};
			maxPos[]={0,0.40000001};
		};
		class SpdMove2
		{
			source="speed";
			min=33;
			max=200;
			type="linear";
			minPos[]={0.94,0.1};
			maxPos[]={0.94,0.87};
		};
		class ILS
		{
			type="ils";
			pos0[]={0.5,0.40000001};
			pos3[]={0.69999999,0.60000002};
		};
		class WeaponAim: Pos10Vector
		{
			source="weapon";
		};
		class Target: Pos10Vector
		{
			source="target";
		};
		class TargetDistanceMissile
		{
			type="rotational";
			source="targetDist";
			center[]={0,0};
			min=100;
			max=3000;
			minAngle=-120;
			maxAngle=120;
		};
		class TargetDistanceMGun
		{
			type="rotational";
			source="targetDist";
			center[]={0,0};
			min=100;
			max=1000;
			minAngle=-180;
			maxAngle=90;
		};
		class Level0: Pos10Vector
		{
			type="horizon";
			angle=0;
		};
		class LevelP5: Level0
		{
			angle=5;
		};
		class LevelM5: Level0
		{
			angle=-5;
		};
		class LevelP10: Level0
		{
			angle=10;
		};
		class LevelM10: Level0
		{
			angle=-10;
		};
		class LevelP15: Level0
		{
			angle=15;
		};
		class LevelM15: Level0
		{
			angle=-15;
		};
		class Velocity: Pos10Vector
		{
			type="vector";
			source="velocity";
		};
		class PlaneW
		{
			type="fixed";
			pos[]={0.5,0.27000001};
		};
	};
	class Draw
	{
		alpha=0.80000001;
		color[]={0.1,0.5,0.050000001};
		clipTL[]={0,0.050000001};
		clipBR[]={1,0.89999998};
		condition="on";
		class Altitude
		{
			type="line";
			points[]=
			{
				
				{
					"AGLMove1",
					1
				},
				
				{
					"AGLMove2",
					1
				},
				{},
				
				{
					"ASLMove2",
					1
				},
				
				{
					"ASLMove1",
					1
				},
				
				{
					"ASLMove1",
					{0.02,0},
					1
				},
				
				{
					"ASLMove1",
					{0.02,0},
					1,
					"VertSpeed",
					1
				}
			};
		};
		class DimmedBase
		{
			alpha=0.30000001;
			class AltitudeBase
			{
				type="line";
				points[]=
				{
					
					{
						"AGLMove2",
						1
					},
					
					{
						"ASLMove2",
						1
					}
				};
			};
		};
		class Speed
		{
			type="line";
			points[]=
			{
				
				{
					{0.94999999,0.87},
					1
				},
				
				{
					{0.94999999,0.1},
					1
				},
				{},
				
				{
					"SpdMove2",
					{-0.050000001,0},
					1
				},
				
				{
					"SpdMove2",
					1
				}
			};
		};
		class SpeedNumber
		{
			type="text";
			align="left";
			scale=1;
			source="speed";
			sourceScale=3.5999999;
			pos[]=
			{
				"SpdMove2",
				{-0.050000001,-0.029999999},
				1
			};
			right[]=
			{
				"SpdMove2",
				{0.0099999998,-0.029999999},
				1
			};
			down[]=
			{
				"SpdMove2",
				{-0.050000001,0.029999999},
				1
			};
		};
		class PlaneW
		{
			clipTL[]={0,0.1};
			clipBR[]={1,0.89999998};
			class LineHL
			{
				type="line";
				points[]=
				{
					
					{
						"PlaneW",
						{-0.07,0},
						1
					},
					
					{
						"PlaneW",
						{-0.02,0},
						1
					},
					
					{
						"PlaneW",
						{0,-0.02},
						1
					},
					
					{
						"PlaneW",
						{0.02,0},
						1
					},
					
					{
						"PlaneW",
						{0,0.02},
						1
					},
					
					{
						"PlaneW",
						{-0.02,0},
						1
					},
					{},
					
					{
						"PlaneW",
						{0.02,0},
						1
					},
					
					{
						"PlaneW",
						{0.07,0},
						1
					}
				};
			};
			class Velocity
			{
				type="line";
				points[]=
				{
					
					{
						"Velocity",
						{0,-0.02},
						1
					},
					
					{
						"Velocity",
						{0.02,0},
						1
					},
					
					{
						"Velocity",
						{0,0.02},
						1
					},
					
					{
						"Velocity",
						{-0.02,0},
						1
					},
					
					{
						"Velocity",
						{0,-0.02},
						1
					}
				};
			};
		};
		class MGun
		{
			condition="mgun";
			class Circle
			{
				type="line";
				points[]=
				{
					
					{
						"WeaponAim",
						{0,-0.07},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"+0.7*0.07",
							"-0.7*0.07"
						},
						1
					},
					
					{
						"WeaponAim",
						{0.07,0},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"+0.7*0.07",
							"+0.7*0.07"
						},
						1
					},
					
					{
						"WeaponAim",
						{0,0.07},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"-0.7*0.07",
							"+0.7*0.07"
						},
						1
					},
					
					{
						"WeaponAim",
						{-0.07,0},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"-0.7*0.07",
							"-0.7*0.07"
						},
						1
					},
					
					{
						"WeaponAim",
						{0,-0.07},
						1
					},
					{},
					
					{
						"WeaponAim",
						{0,-0.0099999998},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"+0.7*0.01",
							"-0.7*0.01"
						},
						1
					},
					
					{
						"WeaponAim",
						{0.0099999998,0},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"+0.7*0.01",
							"+0.7*0.01"
						},
						1
					},
					
					{
						"WeaponAim",
						{0,0.0099999998},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"-0.7*0.01",
							"+0.7*0.01"
						},
						1
					},
					
					{
						"WeaponAim",
						{-0.0099999998,0},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"-0.7*0.01",
							"-0.7*0.01"
						},
						1
					},
					
					{
						"WeaponAim",
						{0,-0.0099999998},
						1
					},
					{},
					
					{
						"WeaponAim",
						
						{
							"0.03*sin(-180)",
							"-0.03*cos(-180)"
						},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"0.07*sin(-180)",
							"-0.07*cos(-180)"
						},
						1
					},
					{},
					
					{
						"WeaponAim",
						
						{
							"0.03*sin(+90)",
							"-0.03*cos(+90)"
						},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"0.07*sin(+90)",
							"-0.07*cos(+90)"
						},
						1
					},
					{},
					
					{
						"WeaponAim",
						1,
						"TargetDistanceMGun",
						{0,0.039999999},
						1
					},
					
					{
						"WeaponAim",
						1,
						"TargetDistanceMGun",
						{0,0.07},
						1
					}
				};
			};
		};
		class Missile
		{
			condition="missile";
			class Circle
			{
				type="line";
				points[]=
				{
					
					{
						"WeaponAim",
						{0,-0.1},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"+0.7*0.1",
							"-0.7*0.1"
						},
						1
					},
					
					{
						"WeaponAim",
						{0.1,0},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"+0.7*0.1",
							"+0.7*0.1"
						},
						1
					},
					
					{
						"WeaponAim",
						{0,0.1},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"-0.7*0.1",
							"+0.7*0.1"
						},
						1
					},
					
					{
						"WeaponAim",
						{-0.1,0},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"-0.7*0.1",
							"-0.7*0.1"
						},
						1
					},
					
					{
						"WeaponAim",
						{0,-0.1},
						1
					},
					{},
					
					{
						"WeaponAim",
						
						{
							"0.1*0.8*sin(-120)",
							"-0.1*0.8*cos(-120)"
						},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"0.1*1.2*sin(-120)",
							"-0.1*1.2*cos(-120)"
						},
						1
					},
					{},
					
					{
						"WeaponAim",
						
						{
							"0.1*0.8*sin(+120)",
							"-0.1*0.8*cos(+120)"
						},
						1
					},
					
					{
						"WeaponAim",
						
						{
							"0.1*1.2*sin(+120)",
							"-0.1*1.2*cos(+120)"
						},
						1
					},
					{},
					
					{
						"WeaponAim",
						1,
						"TargetDistanceMissile",
						
						{
							0,
							"0.1*0.8"
						},
						1
					},
					
					{
						"WeaponAim",
						1,
						"TargetDistanceMissile",
						
						{
							0,
							"0.1*1.2"
						},
						1
					}
				};
			};
			class Target
			{
				type="line";
				points[]=
				{
					
					{
						"Target",
						{-0.050000001,-0.050000001},
						1
					},
					
					{
						"Target",
						{0.050000001,-0.050000001},
						1
					},
					
					{
						"Target",
						{0.050000001,0.050000001},
						1
					},
					
					{
						"Target",
						{-0.050000001,0.050000001},
						1
					},
					
					{
						"Target",
						{-0.050000001,-0.050000001},
						1
					}
				};
			};
		};
		class Horizont
		{
			clipTL[]={0.2,0.1};
			clipBR[]={0.80000001,0.89999998};
			class Dimmed
			{
				alpha=0.60000002;
				class Level0
				{
					type="line";
					points[]=
					{
						
						{
							"Level0",
							{-0.40000001,0},
							1
						},
						
						{
							"Level0",
							{-0.13,0},
							1
						},
						{},
						
						{
							"Level0",
							{0.13,0},
							1
						},
						
						{
							"Level0",
							{0.40000001,0},
							1
						}
					};
				};
			};
			class LevelP5
			{
				type="line";
				points[]=
				{
					
					{
						"LevelP5",
						{-0.15000001,0.029999999},
						1
					},
					
					{
						"LevelP5",
						{-0.15000001,0},
						1
					},
					
					{
						"LevelP5",
						{0.15000001,0},
						1
					},
					
					{
						"LevelP5",
						{0.15000001,0.029999999},
						1
					}
				};
			};
			class LevelM5
			{
				type="line";
				points[]=
				{
					
					{
						"LevelM5",
						{-0.15000001,-0.029999999},
						1
					},
					
					{
						"LevelM5",
						{-0.15000001,0},
						1
					},
					
					{
						"LevelM5",
						{0.15000001,0},
						1
					},
					
					{
						"LevelM5",
						{0.15000001,-0.029999999},
						1
					}
				};
			};
			class LevelP10
			{
				type="line";
				points[]=
				{
					
					{
						"LevelP10",
						{-0.2,0.050000001},
						1
					},
					
					{
						"LevelP10",
						{-0.2,0},
						1
					},
					
					{
						"LevelP10",
						{0.2,0},
						1
					},
					
					{
						"LevelP10",
						{0.2,0.050000001},
						1
					}
				};
			};
			class LevelM10
			{
				type="line";
				points[]=
				{
					
					{
						"LevelM10",
						{-0.2,-0.050000001},
						1
					},
					
					{
						"LevelM10",
						{-0.2,0},
						1
					},
					
					{
						"LevelM10",
						{0.2,0},
						1
					},
					
					{
						"LevelM10",
						{0.2,-0.050000001},
						1
					}
				};
			};
			class LevelP15
			{
				type="line";
				points[]=
				{
					
					{
						"LevelP15",
						{-0.2,0.07},
						1
					},
					
					{
						"LevelP15",
						{-0.2,0},
						1
					},
					
					{
						"LevelP15",
						{0.2,0},
						1
					},
					
					{
						"LevelP15",
						{0.2,0.07},
						1
					}
				};
			};
			class LevelM15
			{
				type="line";
				points[]=
				{
					
					{
						"LevelM15",
						{-0.2,-0.07},
						1
					},
					
					{
						"LevelM15",
						{-0.2,0},
						1
					},
					
					{
						"LevelM15",
						{0.2,0},
						1
					},
					
					{
						"LevelM15",
						{0.2,-0.07},
						1
					}
				};
			};
		};
		class ILS
		{
			condition="ils";
			class Glideslope
			{
				clipTL[]={0.28999999,0.28999999};
				clipBR[]={0.70999998,0.70999998};
				class ILS
				{
					type="line";
					points[]=
					{
						
						{
							"ILS",
							{-10,0},
							1
						},
						
						{
							"ILS",
							{10,0},
							1
						},
						{},
						
						{
							"ILS",
							{0,-10},
							1
						},
						
						{
							"ILS",
							{0,10},
							1
						}
					};
				};
			};
			class AOABracket
			{
				type="line";
				points[]=
				{
					
					{
						{0.41999999,0.77999997},
						1
					},
					
					{
						{0.40000001,0.77999997},
						1
					},
					
					{
						{0.40000001,0.88},
						1
					},
					
					{
						{0.41999999,0.88},
						1
					}
				};
			};
		};
	};
};
class CfgVehicles
{
	access=1;
	class All
	{
		access=0;
		scope=0;
		reversed=1;
		autocenter=1;
		animated=1;
		shadow=1;
		mapSize=10;
		featureSize=0;
		vehicleClass="";
		targetCategory="";
		icon="iconObject";
		side=4;
		faction="Default";
		displayName="$STR_DN_UNKNOWN";
		nameSound="unknown";
		speechSingular[]={};
		speechPlural[]={};
		textSingular="";
		textPlural="";
		weaponSlots=0;
		clothingType="";
		storeVariables[]={};
		synchronizedVariables[]={};
		camouflage=2;
		audible=1;
		accuracy=0;
		spotableDarkNightLightsOff=0.003;
		spotableNightLightsOff=0.035;
		spotableNightLightsOn=4;
		visibleNightLightsOff=0.1;
		visibleNightLightsOn=0.2;
		insideSoundCoef=0.5;
		outsideSoundFilter=0;
		occludeSoundsWhenIn=0.31622776;
		obstructSoundsWhenIn=0.56234133;
		obstructSoundLFRatio=0;
		occludeSoundLFRatio=0.25;
		unloadInCombat=0;
		gunnerHasFlares=1;
		enableManualFire=1;
		sensitivity=2.5;
		sensitivityEar=0.0074999998;
		model="bmp";
		picture="";
		portrait="";
		ghostPreview="";
		simulation="";
		destrType="DestructDefault";
		armor=100;
		armorLights=0.40000001;
		armorStructural=1;
		crewVulnerable=1;
		damageResistance=0.0040000002;
		replaceDamaged="";
		replaceDamagedLimit=0.89999998;
		replaceDamagedHitpoints[]={};
		cost=500000;
		fuelCapacity=0;
		fuelConsumptionRate="0.01f";
		extCameraPosition[]={0,2,-20};
		groupCameraPosition[]={0,5,-30};
		steerAheadSimul=0.30000001;
		steerAheadPlan=0.40000001;
		minFireTime=20;
		predictTurnSimul=1.2;
		predictTurnPlan=1;
		precision=5;
		brakeDistance=5;
		formationX=10;
		formationZ=20;
		formationTime=5;
		alwaysTarget=0;
		irTarget=1;
		irScanRangeMin=0;
		irScanRangeMax=0;
		irScanToEyeFactor=1;
		irScanGround=1;
		laserTarget=0;
		laserScanner=0;
		nvTarget=0;
		nvScanner=0;
		artilleryTarget=0;
		artilleryScanner=0;
		preferRoads=0;
		unitInfoType="RscUnitInfoTank";
		unitInfoTypeLite=0;
		hideUnitInfo=0;
		nightVision=0;
		driverCanEject=1;
		cargoCanEject=1;
		commanderCanSee=31;
		gunnerCanSee="4+8+16";
		driverCanSee="2+8+16";
		radarType=0;
		maxSpeed=80;
		limitedSpeedCoef=0.22;
		secondaryExplosion=-1;
		hasDriver=1;
		driverForceOptics=0;
		hideWeaponsDriver=1;
		hideWeaponsCargo=0;
		getInRadius=2.5;
		selectionClan="";
		selectionDashboard="";
		selectionShowDamage="";
		selectionBackLights="";
		memoryPointSupply="doplnovani";
		supplyRadius=-1;
		enableGPS=0;
		enableWatch=0;
		enableRadio=0;
		lockDetectionSystem=0;
		incommingMisslieDetectionSystem=0;
		usePreciseGetInAction=0;
		allowTabLock=1;
		showAllTargets=0;
		wheelCircumference=1;
		class EventHandlers
		{
		};
		class MarkerLights
		{
		};
		class NVGMarkers
		{
		};
		class NVGMarker
		{
			diffuse[]={1,1,1,1};
			ambient[]={1,1,1,1};
			brightness=1;
			blinking=0;
			onlyInNvg=0;
		};
		class Turrets
		{
		};
		class HeadLimits
		{
			initAngleX=5;
			minAngleX=-40;
			maxAngleX=40;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
			minAngleZ=-45;
			maxAngleZ=45;
			rotZRadius=0.2;
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.89999998;
			minFov=0.41999999;
			maxFov=0.89999998;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class ViewCargo
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class ViewOptics
		{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class PilotSpec
		{
			showHeadPhones=0;
		};
		class CargoSpec
		{
			class Cargo1
			{
				showHeadPhones=0;
			};
		};
		transportSoldier=0;
		transportAmmo=0;
		itemsCargoSize[]={0,0};
		transportFuel=0;
		transportRepair=0;
		transportVehiclesCount=0;
		transportVehiclesMass=0;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		attendant=0;
		engineer=0;
		soundEngine[]=
		{
			"",
			1,
			1
		};
		soundEnviron[]=
		{
			"",
			1,
			1
		};
		class SoundEnvironExt
		{
		};
		class SoundEquipment
		{
		};
		class SoundGear
		{
		};
		class SoundBreath
		{
		};
		soundCrash[]=
		{
			"",
			0.31622776,
			1
		};
		soundLandCrash[]=
		{
			"",
			1,
			1
		};
		soundWaterCrash[]=
		{
			"",
			0.17782794,
			1
		};
		soundGetIn[]=
		{
			"",
			0.00031622776,
			1
		};
		soundGetOut[]=
		{
			"",
			0.00031622776,
			1
		};
		soundServo[]=
		{
			"",
			0.0031622776,
			0.5
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffInt[]=
		{
			"",
			1,
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"",
			1,
			1
		};
		soundLocked[]=
		{
			"",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"",
			1,
			1
		};
		weapons[]={};
		magazines[]={};
		type=1;
		threat[]={0.69999999,0.5,0.30000001};
		typicalCargo[]={};
		class Reflectors
		{
		};
		aggregateReflectors[]={};
		getInAction="";
		getOutAction="";
		driverAction="";
		driverInAction="";
		cargoGetInAction[]={};
		cargoGetOutAction[]={};
		cargoAction[]={};
		cargoIsCoDriver[]={0};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		driverOpticsModel="";
		driverOpticsEffect[]={};
		driverOpticsColor[]={1,1,1,1};
		hideProxyInCombat=0;
		forceHideDriver=0;
		viewDriverShadow=1;
		viewDriverShadowDiff=1;
		viewDriverShadowAmb=1;
		viewCargoShadow=1;
		viewCargoShadowDiff=1;
		viewCargoShadowAmb=1;
		ejectDeadDriver=0;
		ejectDeadCargo=0;
		crew="Civilian";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class FxExplo
		{
			access=1;
		};
		class AnimationSources
		{
		};
		selectionFireAnim="";
		class GunFire: WeaponFireGun
		{
		};
		class GunClouds: WeaponCloudsGun
		{
		};
		class MGunClouds: WeaponCloudsMGun
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		selectionDamage="zbytek";
		HeadAimDown=0;
		class DestructionEffects
		{
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Smoke1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sparks1
			{
				simulation="particles";
				type="ObjectDestructionSparks";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
			class Sound
			{
				simulation="sound";
				type="";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class Logic: All
	{
		displayName="$STR_DN_LOGIC";
		nameSound="unknown";
		scope=2;
		vehicleClass="Objects";
		simulation="invisible";
		side=7;
		icon="#(argb,8,8,3)color(1,1,1,1)";
		model="\core\default\default.p3d";
		picture="#(argb,8,8,3)color(1,1,1,1)";
		fsmFormation="";
		fsmDanger="";
	};
	class AllVehicles: All
	{
		icon="iconVehicle";
		nameSound="unknown";
		class SquadTitles
		{
			name="clan_sign";
			color[]={0,0,0,0.75};
		};
		memoryPointDriverOptics[]=
		{
			"driverview",
			"pilot"
		};
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		memoryPointsGetInCoDriver="pos codriver";
		memoryPointsGetInCoDriverDir="pos codriver dir";
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInCargoPrecise[]=
		{
			"pos cargo"
		};
		memoryPointsLeftWaterEffect="waterEffectL";
		memoryPointsRightWaterEffect="waterEffectR";
		selectionClan="clan";
		selectionDashboard="podsvit pristroju";
		selectionShowDamage="poskozeni";
		selectionBackLights="zadni svetlo";
		class NewTurret
		{
			body="mainTurret";
			gun="mainGun";
			animationSourceBody="mainTurret";
			animationSourceGun="mainGun";
			animationSourceHatch="hatchGunner";
			proxyType="CPGunner";
			proxyIndex=1;
			gunnerName="$STR_POSITION_GUNNER";
			primaryGunner=1;
			primaryObserver=0;
			weapons[]={};
			magazines[]={};
			soundServo[]=
			{
				"",
				0.0031622776,
				1
			};
			gunBeg="";
			gunEnd="";
			minElev=-4;
			maxElev=20;
			initElev=0;
			minTurn=-360;
			maxTurn=360;
			initTurn=0;
			maxHorizontalRotSpeed=1.2;
			maxVerticalRotSpeed=1.2;
			stabilizedInAxes="StabilizedInAxesBoth";
			primary=1;
			hasGunner=1;
			commanding=1;
			gunnerGetInAction="";
			gunnerGetOutAction="";
			gunnerAction="";
			gunnerInAction="";
			class ViewGunner
			{
				initAngleX=5;
				minAngleX=-85;
				maxAngleX=85;
				initAngleY=0;
				minAngleY=-150;
				maxAngleY=150;
				initFov=0.69999999;
				minFov=0.41999999;
				maxFov=0.85000002;
				minMoveX=0;
				maxMoveX=0;
				minMoveY=0;
				maxMoveY=0;
				minMoveZ=0;
				maxMoveZ=0;
				continuous=0;
			};
			class TurretSpec
			{
				showHeadPhones=0;
			};
			gunnerOpticsModel="";
			gunnerOpticsColor[]={0,0,0,1};
			memoryPointGunnerOptics="";
			gunnerForceOptics=1;
			gunnerOpticsShowCursor=0;
			turrentInfoType="";
			gunnerOutOpticsModel="";
			gunnerOutOpticsColor[]={0,0,0,1};
			gunnerOpticsEffect[]={};
			gunnerOutOpticsEffect[]={};
			memoryPointGunnerOutOptics="";
			gunnerOutForceOptics=0;
			gunnerOutOpticsShowCursor=0;
			gunnerFireAlsoInInternalCamera=1;
			gunnerOutFireAlsoInInternalCamera=1;
			gunnerUsesPilotView=0;
			castGunnerShadow=0;
			viewGunnerShadow=1;
			viewGunnerShadowDiff=1;
			viewGunnerShadowAmb=1;
			ejectDeadGunner=0;
			hideWeaponsGunner=1;
			canHideGunner=1;
			forceHideGunner=0;
			outGunnerMayFire=0;
			inGunnerMayFire=1;
			canEject=1;
			viewGunnerInExternal=0;
			lockWhenDriverOut=0;
			lockWhenVehicleSpeed=-1;
			gunnerCompartments="Compartment1";
			LODTurnedIn=-1;
			LODTurnedOut=-1;
			startEngine=1;
			memoryPointsGetInGunner="";
			memoryPointsGetInGunnerDir="";
			memoryPointsGetInGunnerPrecise="";
			memoryPointGun="";
			selectionFireAnim="";
			missileBeg="spice rakety";
			missileEnd="konec rakety";
			armorLights=0.40000001;
			class Reflectors
			{
			};
			aggregateReflectors[]={};
			class GunFire: WeaponFireGun
			{
			};
			class GunClouds: WeaponCloudsGun
			{
			};
			class MGunClouds: WeaponCloudsMGun
			{
			};
			class HitPoints
			{
				class HitTurret
				{
					armor=0.80000001;
					material=51;
					name="turret";
					visual="turret";
					passThrough=1;
				};
				class HitGun
				{
					armor=0.60000002;
					material=52;
					name="gun";
					visual="gun";
					passThrough=1;
				};
			};
			class Turrets
			{
			};
			class ViewOptics
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=30;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=100;
				initFov=0.30000001;
				minFov=0.07;
				maxFov=0.34999999;
				minMoveX=0;
				maxMoveX=0;
				minMoveY=0;
				maxMoveY=0;
				minMoveZ=0;
				maxMoveZ=0;
			};
			forceNVG=0;
			isCopilot=0;
			gunnerLeftHandAnimName="";
			gunnerRightHandAnimName="";
			gunnerLeftLegAnimName="";
			gunnerRightLegAnimName="";
			gunnerDoor="";
			preciseGetInOut=0;
			turretFollowFreeLook=0;
			allowTabLock=1;
			showAllTargets=0;
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=1.2;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class ViewCargo
		{
			initAngleX=5;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class ViewOptics
		{
			initAngleX=0;
			minAngleX=-30;
			maxAngleX=30;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.69999999;
			minFov=0.41999999;
			maxFov=0.85000002;
			minMoveX=0;
			maxMoveX=0;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class PilotSpec
		{
			showHeadPhones=0;
		};
		class CargoSpec
		{
			class Cargo1
			{
				showHeadPhones=0;
			};
		};
		class MFD
		{
		};
		class Sounds
		{
			class Engine
			{
				sound="soundEngine";
				frequency="rpm";
				volume="rpm + speed";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="speed";
				volume="speed";
			};
		};
		class SoundEvents
		{
		};
		tracksSpeed=0;
		selectionLeftOffset="";
		selectionRightOffset="";
		class RenderTargets
		{
		};
		cargoProxyIndexes[]={};
		driverLeftHandAnimName="";
		driverRightHandAnimName="";
		driverLeftLegAnimName="";
		driverRightLegAnimName="";
		driverDoor="";
		cargoDoors[]={};
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
	};
	class Land: AllVehicles
	{
		displayName="$STR_DN_VEHICLE";
		nameSound="unknown";
		accuracy=0.00050000002;
		armor=30;
		cost=100000;
		fuelCapacity=0;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.80000001,0.80000001,0.30000001};
	};
	class LandVehicle: Land
	{
		displayName="$STR_DN_VEHICLE";
		accuracy=0.02;
		cost=500000;
		selectionBrakeLights="brzdove svetlo";
		memoryPointMissile[]=
		{
			"spice rakety",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"konec rakety",
			"konec hlavne"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffect";
			};
		};
		leftDustEffect="LDustEffects";
		rightDustEffect="RDustEffects";
		leftWaterEffect="LWaterEffects";
		rightWaterEffect="RWaterEffects";
		class Reflectors
		{
			class Left
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=0.5;
			};
			class Right
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=0.5;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		tracksSpeed=0;
		selectionLeftOffset="PasOffsetL";
		selectionRightOffset="PasOffsetP";
	};
	class Car: LandVehicle
	{
		mapSize=5;
		icon="iconCar";
		displayName="$STR_DN_CAR";
		nameSound="veh_car";
		accuracy=0.2;
		cost=40000;
		fuelCapacity=100;
		unloadInCombat=1;
		canFloat=0;
		armor=20;
		armorStructural=4;
		driverCanSee="8+2+32";
		gunnerCanSee="2+8+32";
		holdOffroadFormation=0;
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,0.75};
		};
		class HitPoints
		{
			class HitEngine
			{
				armor=1.2;
				material=60;
				name="engine";
				visual="engine";
				passThrough=1;
			};
			class HitRGlass
			{
				armor=0.5;
				material=-1;
				name="sklo predni P";
				convexComponent="sklo predni P";
				visual="";
				passThrough=1;
			};
			class HitLGlass
			{
				armor=0.5;
				material=-1;
				name="sklo predni L";
				convexComponent="sklo predni L";
				visual="";
				passThrough=1;
			};
			class HitBody
			{
				armor=0.40000001;
				material=50;
				name="karoserie";
				visual="karoserie";
				passThrough=1;
			};
			class HitFuel
			{
				armor=1.4;
				material=-1;
				name="palivo";
				visual="palivo";
				passThrough=1;
			};
			class HitLFWheel
			{
				armor=0.050000001;
				material=-1;
				name="Levy predni tlumic";
				visual="Levy predni";
				passThrough=1;
			};
			class HitRFWheel
			{
				armor=0.050000001;
				material=-1;
				name="Pravy predni tlumic";
				visual="Pravy predni";
				passThrough=1;
			};
			class HitLF2Wheel
			{
				armor=0.050000001;
				material=-1;
				name="Levy dalsi tlumic";
				visual="Levy dalsi";
				passThrough=1;
			};
			class HitRF2Wheel
			{
				armor=0.050000001;
				material=-1;
				name="Pravy dalsi tlumic";
				visual="Pravy dalsi";
				passThrough=1;
			};
			class HitLMWheel
			{
				armor=0.050000001;
				material=-1;
				name="Levy prostredni tlumic";
				visual="Levy prostredni";
				passThrough=1;
			};
			class HitRMWheel
			{
				armor=0.050000001;
				material=-1;
				name="Pravy prostredni tlumic";
				visual="Pravy prostredni";
				passThrough=1;
			};
			class HitLBWheel
			{
				armor=0.050000001;
				material=-1;
				name="Levy zadni tlumic";
				visual="Levy zadni";
				passThrough=1;
			};
			class HitRBWheel
			{
				armor=0.050000001;
				material=-1;
				name="Pravy zadni tlumic";
				visual="Pravy zadni";
				passThrough=1;
			};
		};
		selectionFireAnim="zasleh";
		alphaTracks=0.2;
		memoryPointTrackFLL="Stopa PLL";
		memoryPointTrackFLR="Stopa PLP";
		memoryPointTrackBLL="Stopa ZLL";
		memoryPointTrackBLR="Stopa ZLP";
		memoryPointTrackFRL="Stopa PPL";
		memoryPointTrackFRR="Stopa PPP";
		memoryPointTrackBRL="Stopa ZPL";
		memoryPointTrackBRR="Stopa ZPP";
		memoryPointCirculumReference="circulumReference";
		gearBox[]={-8,0,10,6.1500001,4.4400001,3.3299999};
		Scudeffect="ScudEffect";
		dammageHalf[]={};
		dammageFull[]={};
		armorLights=0.40000001;
		vehicleClass="Car";
		wheelCircumference=2.513;
		turnCoef=3;
		terrainCoef=3;
		waterSpeedFactor=0.2;
		maxSpeed=100;
		preferRoads=1;
		unitInfoType="RscUnitInfo";
		hideUnitInfo=1;
		formationX=20;
		formationZ=20;
		precision=10;
		brakeDistance=10;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnSimul=1.2;
		predictTurnPlan=1.2;
		sensitivity=3;
		soundGear[]=
		{
			"",
			0.00017782794,
			1
		};
		extCameraPosition[]={0,1,-10};
		class ViewPilot: ViewPilot
		{
			initFov=1.1;
			minFov=0.56999999;
			maxFov=1.4;
			initAngleX=15;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		simulation="car";
		weapons[]={};
		magazines[]={};
		type=0;
		threat[]={0.5,0.5,0.5};
		typicalCargo[]=
		{
			"Soldier"
		};
		audible=3;
		occludeSoundsWhenIn=0.1;
		obstructSoundsWhenIn=0.31622776;
		getInAction="";
		getOutAction="";
		scudModel="";
		damperSize=0.1;
		damperForce=1;
		damperDamping=1;
		inputTurnCurve[]=
		{
			
			{
				0,
				{0,0,1,1}
			},
			
			{
				30,
				{0,0,0.2,0.0080000004,0.40000001,0.032000002,0.60000002,0.21600001,0.80000001,0.51200002,1,1}
			}
		};
		enableGPS=0;
		soundEngine[]=
		{
			"",
			1.7782794,
			0.89999998
		};
		soundEnviron[]=
		{
			"",
			0.56234133,
			1
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound="soundEngine";
				frequency="(randomizer*0.05+0.95)*rpm*1.2";
				volume="thrust*0.5+0.5";
			};
			class Movement: Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="speed*0.03334";
			};
		};
	};
	class Motorcycle: LandVehicle
	{
		simulation="motorcycle";
		displayName="$STR_DN_MOTORCYCLE";
		accuracy=0.2;
		mapSize=5;
		icon="iconMotorcycle";
		nameSound="veh_car";
		isBicycle=0;
		unloadInCombat=1;
		ejectDeadDriver=1;
		ejectDeadCargo=1;
		armor=10;
		armorStructural=4;
		cost=500;
		fuelCapacity=50;
		damperSize=0.1;
		damperForce=1;
		damperDamping=3;
		transportSoldier=0;
		typicalCargo[]={};
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		driverCanSee="8+2+32";
		gunnerCanSee="2+8+32";
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,0.75};
		};
		class HitPoints
		{
			class HitEngine
			{
				armor=1.2;
				material=60;
				name="engine";
				visual="engine";
				passThrough=1;
			};
			class HitRGlass
			{
				armor=0.5;
				material=-1;
				name="sklo predni P";
				convexComponent="sklo predni P";
				visual="";
				passThrough=1;
			};
			class HitLGlass
			{
				armor=0.5;
				material=-1;
				name="sklo predni L";
				convexComponent="sklo predni L";
				visual="";
				passThrough=1;
			};
			class HitBody
			{
				armor=0.40000001;
				material=-1;
				name="karoserie";
				visual="karoserie";
				passThrough=1;
			};
			class HitFuel
			{
				armor=1.4;
				material=-1;
				name="palivo";
				visual="palivo";
				passThrough=1;
			};
			class HitFWheel
			{
				armor=0.050000001;
				material=-1;
				name="Pravy predni tlumic";
				visual="Pravy predni";
				passThrough=1;
			};
			class HitBWheel
			{
				armor=0.050000001;
				material=-1;
				name="Pravy zadni tlumic";
				visual="Pravy zadni";
				passThrough=1;
			};
		};
		selectionFireAnim="zasleh";
		alphaTracks=0.1;
		textureTrackWheel=1;
		memoryPointTrack1L="Stopa PPL";
		memoryPointTrack1R="Stopa PPP";
		memoryPointTrack2L="Stopa ZPL";
		memoryPointTrack2R="Stopa ZPP";
		vehicleClass="Car";
		wheelCircumference=2.513;
		turnCoef=1;
		terrainCoef=3;
		maxSpeed=120;
		gearBox[]={-8,0,10,6.1500001,4.4400001,3.3299999};
		preferRoads=1;
		unitInfoType="RscUnitInfo";
		hideUnitInfo=1;
		formationX=20;
		formationZ=20;
		precision=10;
		brakeDistance=25;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnSimul=1.2;
		predictTurnPlan=1.2;
		sensitivity=3;
		soundGear[]=
		{
			"",
			9.9999997e-006,
			1
		};
		extCameraPosition[]={0,1,-10};
		class ViewPilot: ViewPilot
		{
			initFov=1;
			minFov=0.56999999;
			maxFov=1.4;
			initAngleX=15;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class Reflectors
		{
			class Right
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.5;
				brightness=0.5;
			};
		};
		weapons[]={};
		magazines[]={};
		type=0;
		threat[]={0.5,0.5,0.5};
		audible=3;
		getInAction="";
		getOutAction="";
		class AnimationSources
		{
			class FrontDamper
			{
				source="damper";
				selection="pravy predni tlumic nerot";
			};
			class BackDamper
			{
				source="damper";
				selection="pravy zadni tlumic";
			};
		};
	};
	class Bicycle: Motorcycle
	{
		canFloat=0;
		isBicycle=1;
		hideWeaponsDriver=0;
		formationX=5;
		formationZ=5;
		precision=5;
		brakeDistance=10;
		steerAheadSimul=0.5;
		steerAheadPlan=0.69999999;
		predictTurnSimul=1.2;
		predictTurnPlan=1.2;
	};
	class Tank: LandVehicle
	{
		vehicleClass="Armored";
		icon="iconTank";
		displayName="$STR_DN_TANK";
		nameSound="veh_tank";
		accuracy=0.12;
		getInRadius=3.5;
		fuelCapacity=700;
		irScanRangeMin=500;
		irScanRangeMax=4000;
		irScanToEyeFactor=1;
		armor=400;
		armorStructural=2;
		crewVulnerable=0;
		class HitPoints
		{
			class HitEngine
			{
				armor=0.80000001;
				material=60;
				name="engine";
				visual="engine";
				passThrough=1;
			};
			class HitHull
			{
				armor=1;
				material=50;
				name="hull";
				visual="hull";
				passThrough=1;
			};
			class HitLTrack
			{
				armor=0.60000002;
				material=53;
				name="pasL";
				visual="pasL";
				passThrough=1;
			};
			class HitRTrack
			{
				armor=0.60000002;
				material=54;
				name="pasP";
				visual="pasP";
				passThrough=1;
			};
		};
		selectionFireAnim="zasleh";
		memoryPointCargoLight="cargo light";
		bounding="usti hlavne";
		fireDustEffect="FDustEffects";
		gearBox[]={-7,0,11,8,5.6999998,4.1999998};
		alphaTracks=0.69999999;
		textureTrackWheel=0;
		memoryPointTrack1L="Stopa LL";
		memoryPointTrack1R="Stopa LR";
		memoryPointTrack2L="Stopa RL";
		memoryPointTrack2R="Stopa RR";
		extCameraPosition[]={0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX=7;
			minAngleX=-15;
			maxAngleX=25;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
		};
		class ViewOptics: ViewOptics
		{
			initFov=0.30000001;
			minFov=0.07;
			maxFov=0.34999999;
		};
		cost=1000000;
		steerAheadSimul=0.40000001;
		steerAheadPlan=0.60000002;
		predictTurnSimul=1.2;
		predictTurnPlan=1.8;
		soundGear[]=
		{
			"",
			0.00031622776,
			1
		};
		occludeSoundsWhenIn=0.0099999998;
		obstructSoundsWhenIn=0.17782794;
		outsideSoundFilter=1;
		nightVision=0;
		driverAction="";
		driverInAction="";
		simulation="tank";
		formationX=20;
		formationZ=30;
		precision=5;
		brakeDistance=15;
		maxSpeed=80;
		tracksSpeed=1;
		turnCoef=1;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				commanding=1;
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						gunnerName="$STR_POSITION_COMMANDER";
						primaryGunner=0;
						primaryObserver=1;
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						animationSourceHatch="hatchCommander";
						commanding=2;
					};
				};
			};
		};
		canFloat=0;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.69999999,1,0.30000001};
		camouflage=8;
		audible=6;
		hideProxyInCombat=1;
		driverOpticsModel="optika_tank_driver";
		driverOpticsColor[]={1,1,1,1};
		class CargoLight
		{
			color[]={0,0,0,0};
			ambient[]={0.60000002,0,0.15000001,1};
			brightness=0.0070000002;
		};
		enableGPS=1;
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound="soundEngine";
				frequency="(1-(randomizer*0.05))*rpm*1.2";
				volume="thrust*0.5+0.5";
			};
			class Movement: Movement
			{
				sound="soundEnviron";
				frequency="(speed+angVelocity)*0.03334";
				volume="((speed+angVelocity)*0.03334)+(1-((speed+angVelocity)*0.03334))*0.3";
			};
		};
	};
	class APC: Tank
	{
		icon="iconAPC";
		vehicleClass="Armored";
		displayName="$STR_DN_APC";
		nameSound="veh_apc";
		accuracy=0.12;
		fuelCapacity=700;
		armor=200;
		cost=1000000;
		soundGear[]=
		{
			"",
			0.001,
			1
		};
		simulation="tank";
		maxSpeed=60;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=-4.5;
				maxElev=20;
			};
		};
		canFloat=0;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.80000001,1,0.30000001};
	};
	class Man: Land
	{
		mapSize=0.5;
		vehicleClass="Men";
		icon="iconMan";
		autocenter=0;
		isMan=1;
		displayName="$STR_DN_MAN";
		nameSound="veh_man";
		genericNames="EnglishMen";
		clothingType="male";
		extCameraPosition[]={0,1,-3.5};
		accuracy=0.25;
		audible=0.050000001;
		camouflage=1;
		sensitivity=3;
		sensitivityEar=0.13;
		class visibility
		{
			down=0.1;
			prone=0.1;
			kneel=0.5;
			stand=1;
		};
		class audibility
		{
			down=0.1;
			prone=0.1;
			kneel=0.5;
			stand=1;
		};
		formationX=5;
		formationZ=5;
		precision=1;
		brakeDistance=1;
		steerAheadSimul=0.1;
		steerAheadPlan=0.1;
		predictTurnSimul=0.2;
		predictTurnPlan=0.2;
		maxSpeed=24;
		maxTurnAngularVelocity=3;
		costTurnCoef=0.025;
		lyingLimitSpeedHiding=0.80000001;
		crouchProbabilityHiding=0.80000001;
		lyingLimitSpeedCombat=1.8;
		crouchProbabilityCombat=0.40000001;
		lyingLimitSpeedStealth=2;
		irTarget=0;
		canHideBodies=0;
		canDeactivateMines=0;
		useInternalLODInVehicles=1;
		unitInfoType="RscUnitInfoSoldier";
		hideUnitInfo=1;
		armor=3;
		armorStructural=2;
		class HitPoints
		{
			class HitHead
			{
				armor=0.69999999;
				material=-1;
				name="hlava_hit";
				visual="";
				passThrough=1;
			};
			class HitBody
			{
				armor=0.80000001;
				material=-1;
				name="telo";
				visual="";
				passThrough=1;
			};
			class HitHands
			{
				armor=0.5;
				material=-1;
				name="ruce";
				visual="";
				passThrough=1;
			};
			class HitLegs
			{
				armor=0.5;
				material=-1;
				name="nohy";
				visual="";
				passThrough=1;
			};
		};
		cost=100000;
		simulation="soldier";
		class TalkTopics
		{
		};
		class Wounds
		{
		};
		minGunElev=-60;
		maxGunElev=60;
		minGunTurn=-5;
		maxGunTurn=5;
		minGunTurnAI=-30;
		maxGunTurnAI=30;
		commanderCanSee="31+32";
		class HeadLimits: HeadLimits
		{
			initAngleX=5;
			minAngleX=-40;
			maxAngleX=40;
			initAngleY=0;
			minAngleY=-90;
			maxAngleY=90;
		};
		class ViewPilot: ViewPilot
		{
			initFov=0.94999999;
			minFov=0.40000001;
			maxFov=1.1;
			initAngleX=8;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		microMimics="Micro";
		minHeadTurnAI=-70;
		maxHeadTurnAI=70;
		weaponSlots="1  + 5 *   256  +  4096  +  2  + 4* 16  + 12* 131072";
		weapons[]={};
		magazines[]={};
		model="";
		picture="";
		boneHead="hlava";
		boneHeadCutScene="hlava";
		identityTypes[]=
		{
			"Default"
		};
		glassesEnabled=1;
		triggerAnim="";
		selectionHeadWound="head injury";
		selectionBodyWound="body injury";
		selectionLArmWound="l arm injury";
		selectionRArmWound[]=
		{
			"r arm injury",
			"p arm injury"
		};
		selectionLLegWound="l leg injury";
		selectionRLegWound[]=
		{
			"r leg injury",
			"p leg injury"
		};
		selectionHeadHide="";
		memoryPointPilot="pilot";
		memoryPointLStep="stopaL";
		memoryPointRStep="stopaP";
		memoryPointAim="zamerny";
		memoryPointCameraTarget="zamerny";
		memoryPointAimingAxis="osa mireni";
		memoryPointLeaningAxis="osa naklaneni";
		memoryPointHeadAxis="osa otaceni";
		memoryPointHandGrenade="granat";
		memoryPointCommonDamage="zamerny";
		selectionPersonality="osobnost";
		selectionGlasses="brejle";
		selectionLBrow="loboci";
		selectionMBrow="soboci";
		selectionRBrow="poboci";
		selectionLMouth="lkoutek";
		selectionMMouth="skoutek";
		selectionRMouth="pkoutek";
		selectionEyelid="vicka";
		selectionLip="spodni ret";
		hitSound1[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound2[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound3[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound4[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound5[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound6[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound7[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound8[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound9[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound10[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound11[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound12[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound13[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound14[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound15[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound16[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound17[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound18[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound19[]=
		{
			"",
			0.056234132,
			1
		};
		hitSound20[]=
		{
			"",
			0.056234132,
			1
		};
		hitSounds[]=
		{
			"hitSound1",
			0.050000001,
			"hitSound2",
			0.050000001,
			"hitSound3",
			0.050000001,
			"hitSound4",
			0.050000001,
			"hitSound5",
			0.050000001,
			"hitSound6",
			0.050000001,
			"hitSound7",
			0.050000001,
			"hitSound8",
			0.050000001,
			"hitSound9",
			0.050000001,
			"hitSound10",
			0.050000001,
			"hitSound11",
			0.050000001,
			"hitSound12",
			0.050000001,
			"hitSound13",
			0.050000001,
			"hitSound14",
			0.050000001,
			"hitSound15",
			0.050000001,
			"hitSound16",
			0.050000001,
			"hitSound17",
			0.050000001,
			"hitSound18",
			0.050000001,
			"hitSound19",
			0.050000001,
			"hitSound20",
			0.050000001
		};
		moves="NoDefaultMoves";
		gestures="";
		emptySound[]=
		{
			"",
			0,
			1
		};
		vegetationSounds[]=
		{
			"emptySound",
			0
		};
		additionalSound[]=
		{
			"",
			1e-006,
			1
		};
		class SoundEnvironExt
		{
			normalExt[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			normal[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			road[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			rock[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			water[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			gravel[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			sand[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			drygrass[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			grass[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			forest[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			mud[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			wood[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			metal[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			snow[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			hallway[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			fallbody[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			laydown[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			standup[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
			crawl[]=
			{
				
				{
					"",
					9.9999997e-006,
					1,
					0
				}
			};
		};
		class SoundEquipment
		{
			civilian[]=
			{
				
				{
					"",
					
					{
						"",
						9.9999997e-006,
						1,
						0
					}
				}
			};
			soldier[]=
			{
				
				{
					"",
					
					{
						"",
						9.9999997e-006,
						1,
						0
					}
				}
			};
		};
		class SoundGear
		{
			primary[]=
			{
				
				{
					"",
					
					{
						"",
						9.9999997e-006,
						1,
						0
					}
				}
			};
			secondary[]=
			{
				
				{
					"",
					
					{
						"",
						9.9999997e-006,
						1,
						0
					}
				}
			};
		};
		class SoundBreath
		{
			breath[]={};
		};
		class HitDamage
		{
		};
		type=0;
		threat[]={1,0.80000001,0.2};
		class Reflectors
		{
		};
		class MGunClouds: WeaponCloudsMGun
		{
		};
		class GunClouds: WeaponCloudsGun
		{
			cloudletGrowUp=0.2;
			cloudletFadeIn=0;
			cloudletFadeOut=0.40000001;
			cloudletDuration=0.2;
			cloudletAlpha=1;
			cloudletAccY=2;
			cloudletMinYSpeed=-10;
			cloudletMaxYSpeed=10;
			interval=0.02;
			size=0.30000001;
			sourceSize=0.015;
		};
		class InventorySlots
		{
		};
		fsmFormation="";
		fsmDanger="";
		enableGPS=0;
		leftArmToElbow[]={};
		leftArmFromElbow[]={};
		leftWrist="";
		leftShoulder="";
		leftHand[]={};
		leftArmPoints[]=
		{
			"",
			"",
			"",
			""
		};
		rightArmToElbow[]={};
		rightArmFromElbow[]={};
		rightWrist="";
		rightShoulder="";
		rightHand[]={};
		rightArmPoints[]=
		{
			"",
			"",
			"",
			""
		};
		leftLegToKnee[]={};
		leftLegFromKnee[]={};
		leftHeel="";
		leftHip="";
		leftFoot[]={};
		leftLegPoints[]=
		{
			"",
			"",
			"",
			""
		};
		rightLegToKnee[]={};
		rightLegFromKnee[]={};
		rightHeel="";
		rightHip="";
		rightFoot[]={};
		rightLegPoints[]=
		{
			"",
			"",
			"",
			""
		};
		weaponBone="";
		launcherBone="";
		handGunBone="";
		characterID=-1;
		emptyEyewear="";
		emptyHeadgear="";
		emptyBody="";
		emptyLegs="";
		emptyFeet="";
		emptyVest="";
		emptyGloves="";
		emptyBack="";
		emptyShoulder="";
		emptyMelee="";
		emptyMask="";
	};
	class Animal: Man
	{
		vehicleClass="Animals";
		icon="iconAnimal";
		isMan=0;
		displayName="$STR_DN_ANIMAL";
		nameSound="veh_animal";
		accuracy=0.25;
		weaponSlots=0;
		weapons[]={};
		magazines[]={};
		type=0;
		threat[]={0,0,0};
	};
	class Air: AllVehicles
	{
		icon="iconAir";
		displayName="$STR_DN_HELICOPTER";
		nameSound="veh_aircraft";
		accuracy=0.0049999999;
		formationX=50;
		formationZ=100;
		precision=100;
		brakeDistance=200;
		formationTime=10;
		armor=20;
		cost=10000000;
		fuelCapacity=1000;
		maxSpeed=400;
		insideSoundCoef=0.5;
		outsideSoundFilter=1;
		occludeSoundsWhenIn=0.031622775;
		obstructSoundsWhenIn=0.17782794;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=2;
		irScanRangeMin=2000;
		irScanRangeMax=10000;
		irScanToEyeFactor=2;
		nightVision=0;
		audible=10;
		unitInfoType="RscUnitInfoAir";
		threat[]={0.30000001,1,0.69999999};
		driverAction="";
		driverCompartments=0;
		cargoCompartments[]={0};
		gunnerCanSee="31+32";
		driverCanSee="31+32";
		typicalCargo[]=
		{
			"Soldier"
		};
		getInRadius=5;
		enableGPS=1;
		class MarkerLights
		{
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.30000001,0.029999999,0.029999999,1};
				ambient[]={0.029999999,0.003,0.003,1};
				brightness=0.0099999998;
				blinking=0;
			};
			class GreenStill
			{
				name="zeleny pozicni";
				color[]={0.029999999,0.30000001,0.029999999,1};
				ambient[]={0.003,0.029999999,0.003,1};
				brightness=0.0099999998;
				blinking=0;
			};
			class WhiteStill
			{
				name="bily pozicni";
				color[]={0.30000001,0.30000001,0.30000001,1};
				ambient[]={0.029999999,0.029999999,0.029999999,1};
				brightness=0.0099999998;
				blinking=0;
			};
			class WhiteBlinking
			{
				name="bily pozicni blik";
				color[]={1,1,1,1};
				ambient[]={0.1,0.1,0.1,1};
				brightness=0.0099999998;
				blinking=1;
			};
			class RedBlinking
			{
				name="cerveny pozicni blik";
				color[]={0.5,0.050000001,0.050000001,1};
				ambient[]={0.050000001,0.0049999999,0.0049999999,1};
				brightness=0.0099999998;
				blinking=1;
			};
		};
	};
	class Helicopter: Air
	{
		vehicleClass="Air";
		icon="iconHelicopter";
		displayName="$STR_DN_HELICOPTER";
		nameSound="veh_helicopter";
		accuracy=0.079999998;
		simulation="helicopter";
		gearRetracting=0;
		dustEffect="HeliDust";
		waterEffect="HeliWater";
		damageEffect="DamageSmokeHeli";
		gearUpTime=3.3299999;
		gearDownTime=2;
		class ViewPilot: ViewPilot
		{
			initFov=1.1;
			minFov=0.56999999;
			maxFov=1.1;
			initAngleX=10;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.34999999;
			maxMoveX=0.34999999;
			minMoveY=-0.5;
			maxMoveY=0.2;
			minMoveZ=-0.30000001;
			maxMoveZ=0.5;
		};
		class CargoSpec
		{
			class Cargo1
			{
				showHeadPhones=1;
			};
			class Cargo2
			{
				showHeadPhones=0;
			};
		};
		mainRotorSpeed=1;
		backRotorSpeed=1.5;
		maxMainRotorDive=0;
		maxBackRotorDive=0;
		minMainRotorDive=0;
		minBackRotorDive=0;
		neutralBackRotorDive=0;
		neutralMainRotorDive=0;
		selectionHRotorStill="velka vrtule staticka";
		selectionHRotorMove="velka vrtule blur";
		selectionVRotorStill="mala vrtule staticka";
		selectionVRotorMove="mala vrtule blur";
		memoryPointLMissile="L strela";
		memoryPointRMissile="P strela";
		memoryPointLRocket="L raketa";
		memoryPointRRocket="P raketa";
		memoryPointGun="";
		memoryPointPilot="pilot";
		selectionFireAnim="zasleh";
		class HitPoints
		{
			class HitHull
			{
				armor=0.5;
				material=50;
				name="trup";
				visual="trup";
				passThrough=1;
			};
			class HitEngine
			{
				armor=0.60000002;
				material=60;
				name="motor";
				visual="motor";
				passThrough=1;
			};
			class HitAvionics
			{
				armor=1.4;
				material=-1;
				name="elektronika";
				visual="elektronika";
				passThrough=1;
			};
			class HitVRotor
			{
				armor=0.5;
				material=52;
				name="mala vrtule";
				visual="mala vrtule";
				passThrough=1;
			};
			class HitHRotor
			{
				armor=0.69999999;
				material=51;
				name="velka vrtule";
				visual="velka vrtule";
				passThrough=1;
			};
			class HitMissiles
			{
				armor=1.6;
				material=-1;
				name="munice";
				visual="";
				passThrough=1;
			};
			class HitRGlass
			{
				armor=0.5;
				material=-1;
				name="sklo predni P";
				convexComponent="sklo predni P";
				visual="";
				passThrough=1;
			};
			class HitLGlass
			{
				armor=0.5;
				material=-1;
				name="sklo predni L";
				convexComponent="sklo predni L";
				visual="";
				passThrough=1;
			};
		};
		armorStructural=2;
		maxSpeed=300;
		enableSweep=1;
		envelope[]={0,0.2,0.89999998,2.0999999,2.5,3.3,3.5,3.5999999,3.7,3.8,3.8,3,0.89999998,0.69999999,0.5};
		unitInfoType="RscUnitInfoAir";
		minFireTime=20;
		steerAheadSimul=0.5;
		steerAheadPlan=0.69999999;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				outGunnerMayFire=1;
				commanding=-1;
				startEngine=0;
				class TurretSpec: TurretSpec
				{
					showHeadPhones=1;
				};
			};
		};
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=-40;
			maxAngleX=17;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.5;
			minFov=0.30000001;
			maxFov=1.2;
		};
		class MFD
		{
			class HUD: AirplaneHUD
			{
			};
		};
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		dammageHalf[]=
		{
			"jeep_kab_sklo1.paa",
			"jeep_kab_sklo1B.paa",
			"uh60_kab_sklo2.paa",
			"uh60_kab_sklo2B.paa",
			"uh60_gunner_okna.paa",
			"uh60_gunner_oknaB.paa",
			"ah-1_kabina_predokno.paa",
			"ah-1_kabina_predoknoB.paa",
			"ah-1_kabina_zadokno.paa",
			"ah-1_kabina_zadoknoB.paa",
			"ah-1_kabina_topokno.paa",
			"ah-1_kabina_topoknoB.paa"
		};
		dammageFull[]=
		{
			"jeep_kab_sklo1.paa",
			"jeep_kab_sklo1C.paa",
			"uh60_kab_sklo2.paa",
			"uh60_kab_sklo2C.paa",
			"uh60_gunner_okna.paa",
			"uh60_gunner_oknaC.paa",
			"ah-1_kabina_predokno.paa",
			"ah-1_kabina_predoknoC.paa",
			"ah-1_kabina_zadokno.paa",
			"ah-1_kabina_zadoknoC.paa",
			"ah-1_kabina_topokno.paa",
			"ah-1_kabina_topoknoC.paa"
		};
		class Reflectors
		{
			class Reflector
			{
				color[]={0.80000001,0.80000001,1,1};
				ambient[]={0.07,0.07,0.07,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=2;
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound="soundEngine";
				frequency="(1-randomizer*0.05)*rotorSpeed*(1-rotorThrust*0.1)";
				volume="1";
			};
			class Movement: Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="speed * 0.03334";
			};
		};
		soundLandingGear[]=
		{
			"",
			1,
			1
		};
		class Exhausts
		{
		};
		class RotorLibHelicopterProperties
		{
			RTDconfig="";
			hasAPU=0;
			maxTorque=10000;
			maxBatteryCharge=100;
			starterBatteryDrain=2;
			electricityBatteryDrain=0.1;
			engineBatteryRecharge=0.5;
			autoHoverCorrection[]={0,0,0};
			maxMainRotorStress=10000;
			maxTailRotorStress=10000;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			stressDamagePerSec=0.0099999998;
			temperatureEffects[]=
			{
				{0,-25,0,-15},
				{850,250,-400,-20},
				{1350,250,-600,-20}
			};
			maxEngineTemperature=1000;
			hotStartTemperature=200;
			retreatBladeStallWarningSpeed=69.400002;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			defaultCollective=0.69999999;
		};
	};
	class Plane: Air
	{
		vehicleClass="Air";
		damageEffect="DamageSmokePlane";
		icon="iconPlane";
		displayName="$STR_DN_PLANE";
		nameSound="veh_airplane";
		accuracy=0.1;
		maxSpeed=450;
		landingSpeed=0;
		flapsFrictionCoef=0.5;
		formationX=200;
		formationZ=300;
		precision=200;
		brakeDistance=500;
		steerAheadSimul=1;
		steerAheadPlan=2;
		wheelSteeringSensitivity=1;
		unitInfoType="RscUnitInfoAir";
		gearRetracting=1;
		cabinOpening=1;
		flaps=1;
		airBrake=1;
		vtol=0;
		lightOnGear=1;
		gearUpTime=3.3299999;
		gearDownTime=2;
		ejectSpeed[]={0,40,0};
		ejectDamageLimit=0.44999999;
		minFireTime=60;
		cost=2000000;
		simulation="airplane";
		minGunElev=0;
		maxGunElev=0;
		minGunTurn=0;
		maxGunTurn=0;
		gunAimDown=0;
		envelope[]={0,0.2,0.89999998,2.0999999,2.5,3.3,3.5,3.2,2.5,2,1.5,1};
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=2;
		threat[]={0.1,1,0.5};
		aileronSensitivity=1;
		elevatorSensitivity=1;
		landingAoa="10*3.1415/180";
		class ViewPilot: ViewPilot
		{
			initFov=1;
			minFov=0.56999999;
			maxFov=1.4;
			initAngleX=6;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			initFov=0.5;
			minFov=0.5;
			maxFov=0.5;
		};
		extCameraPosition[]={0,1.4,-25};
		selectionRotorStill="vrtule staticka";
		selectionRotorMove="vrtule blur";
		memoryPointLRocket="L raketa";
		memoryPointRRocket="P raketa";
		memoryPointLDust="levy prach";
		memoryPointRDust="pravy prach";
		selectionFireAnim="zasleh";
		leftDustEffect="LDustEffects";
		rightDustEffect="RDustEffects";
		dustEffect="HeliDust";
		waterEffect="HeliWater";
		class Reflectors
		{
			class Reflector
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=2;
			};
		};
		class MFD
		{
			class HUD: AirplaneHUD
			{
				borderLeft=0.090000004;
				borderRight=0.02;
				borderTop=0.02;
				borderBottom=0.1;
			};
		};
		class GunFire: WeaponFireGun
		{
		};
		class GunClouds: WeaponCloudsGun
		{
		};
		class MGunFire: WeaponFireMGun
		{
		};
		class MGunClouds: WeaponCloudsMGun
		{
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound="soundEngine";
				frequency="(1-randomizer*0.05)*(thrust+0.5)*rpm";
				volume="thrust+0.5";
			};
			class Movement: Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="speed*0.03334";
			};
		};
	};
	class Ship: AllVehicles
	{
		unitInfoType="RscUnitInfo";
		vehicleClass="Ship";
		icon="iconShip";
		cost=10000000;
		armor=1000;
		displayName="$STR_DN_SHIP";
		nameSound="veh_ship";
		accuracy=0.0049999999;
		maxSpeed=30;
		simulation="ship";
		audible=6;
		fuelCapacity=100;
		formationX=50;
		formationZ=100;
		precision=25;
		brakeDistance=50;
		formationTime=20;
		steerAheadSimul=2;
		steerAheadPlan=2.4000001;
		predictTurnSimul=2;
		predictTurnPlan=2.4000001;
		type=1;
		threat[]={0.2,0.2,0.1};
		getInRadius=10;
		driverAction="";
		cargoAction[]=
		{
			""
		};
		getInAction="";
		getOutAction="";
		pointPilot="pilot";
		pointCommander="velitel";
		selectionFireAnim="zasleh";
		selectionBrakeLights="brzdove svetlo";
		memoryPointMissile[]=
		{
			"spice rakety",
			"usti hlavne"
		};
		memoryPointMissileDir[]=
		{
			"konec rakety",
			"konec hlavne"
		};
		canFloat=1;
		soundGear[]=
		{
			"",
			0.00017782794,
			1
		};
		occludeSoundsWhenIn=0.56234133;
		obstructSoundsWhenIn=0.31622776;
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffect";
			};
		};
		leftDustEffect="LDustEffects";
		rightDustEffect="RDustEffects";
		leftWaterEffect="LWaterEffects";
		rightWaterEffect="RWaterEffects";
		leftEngineEffect="LEngEffects";
		rightEngineEffect="REngEffects";
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class HitPoints
		{
			class HitEngine
			{
				armor=1.2;
				material=60;
				name="engine";
				visual="engine";
				passThrough=1;
			};
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				commanding=-1;
				startEngine=0;
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov=1;
			minFov=0.41999999;
			maxFov=1.2;
			initAngleX=6;
			minAngleX=-85;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};
		class ViewOptics: ViewOptics
		{
			initFov=0.69999999;
			minFov=0.07;
			maxFov=0.34999999;
		};
		class MarkerLights
		{
			class RedStill
			{
				name="cerveny pozicni";
				color[]={0.30000001,0.029999999,0.029999999,1};
				ambient[]={0.029999999,0.003,0.003,1};
				brightness=0.0099999998;
				blinking=0;
			};
			class GreenStill
			{
				name="zeleny pozicni";
				color[]={0.029999999,0.30000001,0.029999999,1};
				ambient[]={0.003,0.029999999,0.003,1};
				brightness=0.0099999998;
				blinking=0;
			};
			class WhiteStill
			{
				name="bily pozicni";
				color[]={0.30000001,0.30000001,0.30000001,1};
				ambient[]={0.029999999,0.029999999,0.029999999,1};
				brightness=0.0099999998;
				blinking=0;
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound="soundEngine";
				frequency="(1-randomizer*0.05)*1.2*(thrust*0.7+0.5)";
				volume="(thrust*0.5)+0.5";
			};
			class Movement: Movement
			{
				sound="soundEnviron";
				frequency="(speed*0.03334)*1.3+(1-(speed*0.03334))*0.7";
				volume="(speed*0.03334)+(1-(speed*0.03334))*0.1";
			};
		};
	};
	class SmallShip: Ship
	{
		cost=50000;
		armor=300;
		displayName="$STR_DN_SMALL_SHIP";
		accuracy=0.2;
		fuelCapacity=700;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		maxSpeed=60;
		precision=6;
		brakeDistance=20;
		class Reflectors
		{
			class Reflector
			{
				color[]={0.89999998,0.80000001,0.80000001,1};
				ambient[]={0.1,0.1,0.1,1};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.5;
				brightness=2;
			};
		};
	};
	class BigShip: Ship
	{
		cost=10000000;
		displayName="$STR_DN_BIG_SHIP";
		accuracy=0.2;
		armor=1000;
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
	};
	class Truck: Car
	{
		nameSound="veh_truck";
		formationX=20;
		formationZ=30;
		getInAction="";
		getOutAction="";
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.30000001;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.30000001;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.30000001;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.30000001;
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.30000001;
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.30000001;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.30000001;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.30000001;
			};
		};
		damperSize=0.2;
		outsideSoundFilter=1;
		initFov=1;
		minFov=0.60000002;
		maxFov=1.4;
		steerAheadSimul=0.69999999;
		steerAheadPlan=0.60000002;
	};
	class ParachuteBase: Helicopter
	{
		scope=0;
		destrType="DestructNo";
		simulation="parachute";
		weaponSlots="1  +  4  + 10*  256  + 2* 4096  +  2  + 4* 16";
		autocenter=0;
		vehicleClass="Air";
		displayName="$STR_DN_PARACHUTE";
		nameSound="veh_parachute";
		model="para";
		picture="pictureParachute";
		icon="iconParachute";
		accuracy=0.1;
		fuelCapacity=0;
		unitInfoType="RscUnitInfoSoldier";
		hideUnitInfo=1;
		irTarget=0;
		driverCanSee="2+8+32";
		driverAction="";
		armor=10;
		memoryPointPilot="pilot";
		animationOpen="";
		animationDrop="";
		class ViewOptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=-40;
			maxAngleX=17;
			initAngleY=0;
			minAngleY=-100;
			maxAngleY=100;
			initFov=0.5;
			minFov=0.30000001;
			maxFov=1.2;
		};
		type=0;
		threat[]={0,0,0};
		cost=100000;
		weapons[]={};
		magazines[]={};
		soundGetIn[]=
		{
			"",
			0.00031622776,
			1
		};
		soundGetOut[]=
		{
			"",
			0.00031622776,
			1
		};
	};
	class LaserTarget: All
	{
		reversed=0;
		hasDriver=0;
		icon="iconLaserTarget";
		displayName="$STR_DN_LASER_TARGET";
		nameSound="obj_LaserTarget";
		accuracy=9.9999997e-005;
		model="laserTgt.p3d";
		picture="pictureLaserTarget";
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.5,0.5,0.1};
		maxSpeed=0;
		simulation="laserTarget";
		laserTarget=1;
		irTarget=0;
		destrType="DestructNo";
		side=3;
		cost=9.9999999e+014;
		armor=500;
	};
	class NVTarget: All
	{
		reversed=0;
		hasDriver=0;
		icon="iconLaserTarget";
		displayName="$STR_DN_LASER_TARGET";
		nameSound="obj_LaserTarget";
		accuracy=9.9999997e-005;
		model="laserTgt.p3d";
		picture="pictureLaserTarget";
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.5,0.5,0.1};
		maxSpeed=0;
		simulation="nvmarker";
		laserTarget=0;
		irTarget=0;
		nvTarget=1;
		destrType="DestructEngine";
		side=3;
		cost=9.9999999e+014;
		armor=500;
	};
	class ArtilleryTarget: All
	{
		reversed=0;
		hasDriver=0;
		icon="iconLaserTarget";
		displayName="ArtilleryTarget";
		nameSound="";
		accuracy=9.9999997e-005;
		model="";
		picture="pictureLaserTarget";
		weapons[]=
		{
			"FakeWeapon"
		};
		magazines[]=
		{
			"FakeWeapon"
		};
		type=1;
		threat[]={0.5,0.5,0.1};
		maxSpeed=0;
		simulation="artillerymarker";
		laserTarget=0;
		irTarget=0;
		nvTarget=0;
		artilleryTarget=1;
		destrType="DestructNo";
		side=3;
		cost=9.9999999e+014;
		armor=500;
		scope=1;
	};
	class ArtilleryTargetW: ArtilleryTarget
	{
		side=1;
		scope=1;
	};
	class ArtilleryTargetE: ArtilleryTarget
	{
		side=0;
		scope=1;
	};
	class PaperCar: Car
	{
		scope=1;
		side=3;
		picture="picturePaperCar";
		icon="iconPaperCar";
		displayName="$STR_DN_PAPER_CAR";
		model="\core\default\default.p3d";
		class Reflectors
		{
		};
	};
	class FireSectorTarget: All
	{
		scope=1;
		side=3;
		picture="";
		icon="";
		nameSound="";
		displayName="Internal: Fire Sector Target";
		vehicleClass="Objects";
		model="\core\default\default.p3d";
		weapons[]={};
		magazines[]={};
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=0;
		type=0;
		threat[]={0,0,0};
		maxSpeed=0;
		armor=100;
		simulation="house";
		accuracy=0.0049999999;
		cost=100;
		destrType=0;
		mapSize=0.1;
		reversed=0;
		hasDriver=0;
		coefInside=0;
		coefInsideHeur=0;
		windSockExist=0;
		animated=0;
		ladders[]={};
		typicalCargo[]={};
	};
	class Static: All
	{
		reversed=0;
		hasDriver=0;
		icon="iconStaticObject";
		displayName="$STR_DN_UNKNOWN";
		nameSound="obj_object";
		accuracy=0.0049999999;
		simulation="house";
		cost=1000;
		picture="pictureStaticObject";
		weapons[]={};
		magazines[]={};
		irTarget=0;
		targetCategory="building";
		type=1;
		threat[]={0,0,0};
		maxSpeed=0;
		coefInside=1;
		coefInsideHeur=4;
		windSockExist=0;
	};
	class Fortress: Static
	{
		displayName="$STR_DN_BUNKER";
		nameSound="obj_Bunker";
		armor=1000;
		cost=1000000;
		accuracy=0.2;
	};
	class Building: Static
	{
		scope=1;
		displayName="$STR_DN_BUILDING";
		nameSound="obj_building";
		armor=150;
		accuracy=0.1;
	};
	class NonStrategic: Building
	{
		side=3;
		ladders[]={};
		class DestructionEffects
		{
			class Sound
			{
				simulation="sound";
				type="DestrHouse";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.050000001;
			};
			class DestroyPhase1
			{
				simulation="destroy";
				type="DelayedDestruction";
				lifeTime=2.5;
				position="";
				intensity=1;
				interval=1;
			};
			class DamageAround1
			{
				simulation="damageAround";
				type="DamageAroundHouse";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class Strategic: Building
	{
		side=3;
		armor=250;
		cost=1000000;
		ladders[]={};
	};
	class FlagCarrierCore: Strategic
	{
		scope=1;
		animated=0;
		vehicleClass="Objects";
		icon="";
		displayName="$STR_DN_FLAG";
		simulation="flagcarrier";
		model="";
		placement="vertical";
		mapSize=5;
		animationFlag="";
	};
	class Land_VASICore: NonStrategic
	{
		scope=1;
		animated=0;
		reversed=0;
		vehicleClass="Objects";
		icon="";
		model="";
		displayName="VASI";
		accuracy=0.2;
		typicalCargo[]={};
		destrType="DestructBuilding";
		selectionWhiteLight="light-white";
		selectionRedLight="light-red";
		selectionOffLight="light-off";
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		cost=0;
		armor=100;
		mapSize=6.4000001;
		simulation="vasi";
		vasiRed[]={1,0,0};
		vasiWhite[]={1,1,1};
		vasiSlope=0.079999998;
	};
	class Thing: All
	{
		reversed=0;
		animated=0;
		icon="iconThing";
		vehicleClass="Objects";
		displayName="$STR_DN_UNKNOWN";
		nameSound="obj_object";
		accuracy=0.0049999999;
		simulation="thing";
		side=3;
		weight=0;
		class InventoryPlacements
		{
		};
		submerged=0;
		submergeSpeed=0;
		airFriction2[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction1[]={0.0099999998,0.0099999998,0.0099999998};
		airFriction0[]={0.0099999998,0.0099999998,0.0099999998};
		airRotation=0;
		gravityFactor=1;
		timeToLive=1e+010;
		disappearAtContact=0;
		hasDriver=0;
		picture="pictureThing";
		weapons[]={};
		magazines[]={};
		minHeight=0.1;
		avgHeight=0.2;
		maxHeight=0.40000001;
		type=1;
		threat[]={0,0,0};
		maxSpeed=0;
		irTarget=0;
	};
	class ThingEffect: Thing
	{
		scope=1;
		simulation="thingeffect";
		irTarget=0;
		submerged=-0.5;
		submergeSpeed=0.25;
		timeToLive=20;
	};
	class ThingEffectLight: ThingEffect
	{
		scope=0;
		airFriction2[]={1,1,8};
		airFriction1[]={1,1,4};
		airFriction0[]={0.1,0.1,0.1};
		airRotation=0.1;
		submergeSpeed=0;
		minHeight=0.1;
		avgHeight=0.2;
		maxHeight=0.40000001;
	};
	class ThingEffectFeather: ThingEffectLight
	{
		airFriction2[]={16,16,16};
		airFriction1[]={16,16,16};
		airFriction0[]={0.1,0.1,0.1};
		gravityFactor=0.050000001;
		minHeight=0.5;
		avgHeight=1.8;
		maxHeight=3;
	};
	class FxExploArmor1: ThingEffect
	{
		access=0;
		model="";
		displayName="Internal: FxExploArmor1";
	};
	class FxExploArmor2: ThingEffect
	{
		access=0;
		model="";
		displayName="Internal: FxExploArmor2";
	};
	class FxExploArmor3: ThingEffect
	{
		access=0;
		model="";
		displayName="Internal: FxExploArmor3";
	};
	class FxExploArmor4: ThingEffect
	{
		access=0;
		model="";
		displayName="Internal: FxExploArmor4";
	};
	class FxCartridge: ThingEffect
	{
		access=0;
		model="";
		displayName="$STR_DN_FX_CARTRIDGE";
		submerged=0;
		submergeSpeed=0;
		timeToLive=5;
		disappearAtContact=1;
	};
};
class CfgNonAIVehicles
{
	access=0;
	class EmptyDetector
	{
		scope=2;
		displayName="$STR_DN_EMPTY";
		simulation="detector";
		model="";
		selectionFabric="latka";
	};
	class StreetLamp
	{
		model="";
		destrType="DestructTree";
		simulation="StreetLamp";
		animated=0;
		colorDiffuse[]={0.89999998,0.80000001,0.60000002};
		colorAmbient[]={0.1,0.1,0.1};
		brightness=0.2;
		class HitPoints
		{
			class HitBulb
			{
				armor=1;
				material=60;
				name="lampa";
				passThrough=1;
			};
		};
		armorStructural=1;
		class Reflectors
		{
			class LampLight
			{
				color[]={0.89999998,0.80000001,0.60000002,1};
				ambient[]={0.1,0.1,0.1,1};
				position="Light";
				direction="";
				hitpoint="lampa";
				selection="";
				size=0.5;
				brightness=0.2;
			};
		};
		aggregateReflectors[]={};
		armorLights=1;
	};
	class EditCursor
	{
		model="\core\cursor\cursor.p3d";
		simulation="EditCursor";
	};
	class ObjView
	{
		scope=2;
		model="";
		simulation="ObjView";
	};
	class Temp
	{
		scope=2;
		model="";
		simulation="Temp";
	};
	class Bird
	{
		scope=0;
		model="";
		animated=0;
		simulation="SeaGull";
		reversed=0;
		minHeight=5;
		avgHeight=10;
		maxHeight=50;
		minSpeed=-0.5;
		maxSpeed=20;
		acceleration=7;
		turning=1;
		straightDistance=50;
		flySound[]=
		{
			"",
			0.031622775,
			1,
			1
		};
		singSound[]=
		{
			"",
			0.031622775,
			1,
			1
		};
		canBeShot=1;
		airFriction2[]={25,12,2.5};
		airFriction1[]={1500,700,100};
		airFriction0[]={40,20,60};
	};
	class Insect: Bird
	{
		animated=0;
		minHeight=-0.1;
		avgHeight=1.2;
		maxHeight=2;
		minSpeed=-0.1;
		maxSpeed=5;
		acceleration=25;
		straightDistance=2;
		turning=2;
		flySound[]=
		{
			"",
			0.031622775,
			1,
			1
		};
		singSound[]=
		{
			"",
			0.031622775,
			1,
			1
		};
		canBeShot=0;
		airFriction2[]={125,12,2.5};
		airFriction1[]={7500,700,100};
		airFriction0[]={200,20,60};
	};
	class SeaGull: Bird
	{
		scope=2;
		model="\core\default\default.p3d";
		reversed=0;
	};
	class Camera
	{
		scope=2;
		model="";
		simulation="Camera";
		crossHairs="#(argb,8,8,3)color(1,1,1,1)";
	};
	class CamConstruct
	{
		scope=2;
		model="";
		simulation="CamConstruct";
		radius=125;
		maxHAL=30;
		crossHairs="#(argb,8,8,3)color(1,1,1,1)";
	};
	class ProxyHands
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Hands";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyEyewear
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Eyewear";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyHeadgear
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Headgear";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyBody
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Body";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyLegs
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Legs";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyFeet
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Feet";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyVest
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Vest";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyGloves
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Gloves";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyBack
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Back";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyShoulder
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Shoulder";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyMelee
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Melee";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyMask
	{
		scope=2;
		simulation="ProxyInventory";
		inventorySlot="Mask";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class ProxyAttachment
	{
		scope=0;
		simulation="ProxyInventory";
		inventorySlot="";
		autocenter=0;
		animated=0;
		model="";
		shadow=1;
		reversed=1;
	};
	class Proxyus_bag: ProxyBack
	{
	};
	class ProxyHide
	{
		autocenter=0;
		scope=2;
		animated=0;
		model="";
		simulation="alwayshide";
	};
	class ProxyWreck
	{
		autocenter=0;
		scope=0;
		animated=0;
		model="";
		simulation="alwaysshow";
	};
	class ProxyCrew
	{
		autocenter=0;
		scope=1;
		model="";
		shadow=1;
		simulation="proxycrew";
		crewPosition="CPDriver";
	};
	class ProxyCommander: ProxyCrew
	{
		crewPosition="CPCommander";
	};
	class ProxyDriver: ProxyCrew
	{
		crewPosition="CPDriver";
	};
	class ProxyGunner: ProxyCrew
	{
		crewPosition="CPGunner";
	};
	class ProxyCargo: ProxyCrew
	{
		crewPosition="CPCargo";
	};
	class ProxyFlag
	{
		autocenter=0;
		scope=2;
		reversed=0;
		model="";
		shadow=1;
		simulation="flag";
		selectionFabric="latka";
	};
	class RandomShape
	{
		models[]={};
		autocenter=0;
		scope=2;
		reversed=0;
		shadow=1;
		model="";
		simulation="randomshape";
	};
	class ProxyAmmoInTruck
	{
		autocenter=0;
		scope=2;
		reversed=0;
		animated=0;
		shadow=1;
		model="";
		simulation="alwaysshow";
	};
};
class CfgSimulationCosts
{
	tank=150;
	zsu=150;
	car=120;
	motorcycle=120;
	ship=140;
	soldierold=100;
	soldier=100;
	helicopter=300;
	parachute=120;
	airplane=200;
	lasertarget=100;
	nvmarker=100;
	house=10;
	thing=10;
	thingeffect=10;
	church=100;
	fire=50;
	fountain=100;
	seagull=10;
	camera=10;
	flagcarrier=50;
	invisible=10;
	mines=10;
	sounds=10;
};
class CfgMarkedTargets
{
	class Inf
	{
		type="man";
		importance=1;
		battleRadius=50;
		farRadius=150;
	};
	class MotorInf
	{
		type="car";
		importance=3;
		battleRadius=100;
		farRadius=400;
	};
	class MechInf
	{
		type="tank";
		transportSoldiers=1;
		importance=4;
		battleRadius=100;
		farRadius=400;
	};
	class Armored
	{
		type="tank";
		importance=5;
		battleRadius=100;
		farRadius=400;
	};
	class Air
	{
		type="helicopter";
		importance=7;
		battleRadius=400;
		farRadius=800;
	};
	class Plane
	{
		type="plane";
		importance=8;
		battleRadius=400;
		farRadius=800;
	};
	class UAV
	{
		type="uav";
		importance=9;
		battleRadius=100;
		farRadius=300;
	};
	class Art
	{
		type="staticcanon";
		importance=10;
		battleRadius=400;
		farRadius=800;
	};
	class Mortar
	{
		type="staticmortar";
		importance=11;
		battleRadius=400;
		farRadius=800;
	};
};
ReportTargetsChangeFactors[]={3,2.5,2,1.6,1.3};
ReportTargetsEmptyGroupCost=0.40000001;
class CfgFSMs
{
	access=1;
};
class PreloadVehicles
{
	access=1;
};
class CfgSkeletonParameters
{
};
class CfgRecipes
{
};
class CfgObjectActions
{
};
class CfgSurfaceActions
{
};
class CfgVoice
{
	access=0;
	voices[]=
	{
		"NoVoice"
	};
	femaleVoices[]={};
	voicePlayer="NoVoice";
	micOuts[]={};
	preview="";
	default="NoVoice";
	class NoVoice
	{
		protocol="RadioProtocolBase";
		variants[]={1};
		directories[]=
		{
			"",
			""
		};
		identityTypes[]=
		{
			"Default"
		};
		scope=2;
		voiceType="";
	};
};
class CfgVoiceTypes
{
	class NoVoice
	{
		name="No voice";
		voices[]=
		{
			"NoVoice"
		};
		preview="NoVoice";
		alternative="";
	};
};
class CfgCoreData
{
	access=0;
	textureDefault="#(argb,1,1,1)color(1,1,1,1)";
	textureBlack="#(argb,1,1,1)color(0,0,0,1)";
	textureHalf="#(argb,1,1,1)color(0.5,0.5,0.5,1,dt)";
	textureZero="#(argb,1,1,1)color(0,0,0,0)";
	textureLine="#(argb,1,1,1)color(1,1,1,1)";
	textureLine3D="#(argb,1,1,1)color(1,1,1,1)";
	textureTIConversion="core\data\ticonversion.paa";
	textureTrack="#(argb,1,1,1)color(1,1,1,1)";
	textureTrackFour="#(argb,1,1,1)color(1,1,1,1)";
	maskTextureFlare="#(argb,1,1,1)color(1,1,1,0)";
	eyeFlare="#(argb,1,1,1)color(1,1,1,0)";
	lodTransitionSpeed=0.125;
	craterShell="core\default\default.p3d";
	craterBullet="core\default\default.p3d";
	slopBlood="core\default\default.p3d";
	cloudletBasic="core\default\default.p3d";
	cloudletFire="core\default\default.p3d";
	cloudletFireD="core\default\default.p3d";
	cloudletWater="core\default\default.p3d";
	cloudletMissile="core\default\default.p3d";
	cobraLight="core\default\default.p3d";
	sphereLight="core\default\default.p3d";
	halfLight="core\default\default.p3d";
	marker="core\default\default.p3d";
	footStepL="core\default\default.p3d";
	footStepR="core\default\default.p3d";
	paperCarModel="core\default\default.p3d";
	forceArrowModel="core\cursor\forcearrowmodel.p3d";
	halfspaceModel="core\default\default.p3d";
	sphereModel="core\Sphere\koule.p3d";
	rectangleModel="core\default\default.p3d";
	horizontObject="core\default\default.p3d";
	collisionShape="core\default\default.p3d";
	rayModel="core\cursor\forcearrowmodel.p3d";
	gunLightModel="core\cursor\forcearrowmodel.p3d";
};
class CfgVehicleIcons
{
	iconObject="#(argb,1,1,1)color(1,1,1,1)";
	iconLogic="#(argb,1,1,1)color(1,1,1,1)";
	iconVehicle="#(argb,1,1,1)color(1,1,1,1)";
	iconCar="#(argb,1,1,1)color(1,1,1,1)";
	iconMotorcycle="#(argb,1,1,1)color(1,1,1,1)";
	iconTank="#(argb,1,1,1)color(1,1,1,1)";
	iconAPC="#(argb,1,1,1)color(1,1,1,1)";
	iconMan="#(argb,1,1,1)color(1,1,1,1)";
	iconAnimal="#(argb,1,1,1)color(1,1,1,1)";
	iconAir="#(argb,1,1,1)color(1,1,1,1)";
	iconHelicopter="#(argb,1,1,1)color(1,1,1,1)";
	iconPlane="#(argb,1,1,1)color(1,1,1,1)";
	iconShip="#(argb,1,1,1)color(1,1,1,1)";
	iconParachute="#(argb,1,1,1)color(1,1,1,1)";
	iconStaticObject="#(argb,1,1,1)color(1,1,1,1)";
	iconThing="#(argb,1,1,1)color(1,1,1,1)";
	iconLaserTarget="#(argb,1,1,1)color(1,1,1,1)";
	iconPaperCar="#(argb,1,1,1)color(1,1,1,1)";
	pictureLogic="#(argb,1,1,1)color(1,1,1,1)";
	pictureParachute="#(argb,1,1,1)color(1,1,1,1)";
	pictureLaserTarget="#(argb,1,1,1)color(1,1,1,1)";
	picturePaperCar="#(argb,1,1,1)color(1,1,1,1)";
	pictureStaticObject="#(argb,1,1,1)color(1,1,1,1)";
	pictureThing="#(argb,1,1,1)color(1,1,1,1)";
};
class CfgCloudletShapes
{
	cloudletExplosion="\core\default\default.p3d";
	cloudletSmoke="\core\default\default.p3d";
	cloudletDust="\core\default\default.p3d";
	cloudletBlood="\core\default\default.p3d";
	cloudletWater="\core\default\default.p3d";
	cloudletMissile="\core\default\default.p3d";
	cloudletFire="\core\default\default.p3d";
	cloudletClouds="\core\default\default.p3d";
};
class CfgSaveThumbnails
{
	saveSingleMission="core\all\todo.paa";
	saveMPMission="core\all\todo.paa";
	saveCampaign="core\all\todo.paa";
	userMissionSP="core\all\todo.paa";
	userMissionMP="core\all\todo.paa";
};
class cfgFormations
{
	class West
	{
		class formColumnFixed
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
				FormationPositionInfo2[]=
				{
					0,
					0,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					0,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					0,
					-1,
					"3.14159265358979323846f"
				};
			};
			class Pattern
			{
				FormationPositionInfo1[]={-1,0,-1,0};
				FormationPositionInfo2[]=
				{
					0,
					0,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					0,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					0,
					-1,
					"3.14159265358979323846f"
				};
			};
		};
		class Staggered
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
				FormationPositionInfo2[]=
				{
					0,
					1,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					1,
					-1,
					"3.14159265358979323846f"
				};
			};
			class Pattern
			{
				FormationPositionInfo1[]={-1,-1,-1,0};
				FormationPositionInfo2[]=
				{
					0,
					1,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					1,
					-1,
					"3.14159265358979323846f"
				};
			};
		};
		class Wedge
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
				FormationPositionInfo2[]=
				{
					0,
					1,
					-1,
					"0.78539816339744830961f"
				};
			};
			class Pattern
			{
				FormationPositionInfo1[]=
				{
					-2,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo2[]=
				{
					-1,
					1,
					-1,
					"0.78539816339744830961f"
				};
			};
		};
		class EchelonLeft
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
				FormationPositionInfo2[]=
				{
					0,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					-1,
					-1,
					"-1.57079632679489661923f"
				};
			};
			class Pattern
			{
				FormationPositionInfo1[]={-1,-1,-1,0};
				FormationPositionInfo2[]=
				{
					0,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					-1,
					-1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					-1,
					-1,
					"-1.57079632679489661923f"
				};
			};
		};
		class EcholonRight
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
				FormationPositionInfo2[]=
				{
					0,
					1,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					1,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					1,
					-1,
					"1.57079632679489661923f"
				};
			};
			class Pattern
			{
				FormationPositionInfo1[]={-1,1,-1,0};
				FormationPositionInfo2[]=
				{
					0,
					1,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo3[]=
				{
					1,
					1,
					-1,
					"0.78539816339744830961f"
				};
				FormationPositionInfo4[]=
				{
					2,
					1,
					-1,
					"1.57079632679489661923f"
				};
			};
		};
		class Vee
		{
			class Fixed
			{
				FormationPositionInfo1[]=
				{
					-1,
					0,
					0,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo2[]=
				{
					0,
					1,
					0,
					"0.78539816339744830961f"
				};
			};
			class Pattern
			{
				FormationPositionInfo1[]=
				{
					-2,
					-1,
					1,
					"-0.78539816339744830961f"
				};
				FormationPositionInfo2[]=
				{
					-1,
					1,
					1,
					"0.78539816339744830961f"
				};
			};
		};
		class Line
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
				FormationPositionInfo2[]={0,1,0,0};
			};
			class Pattern
			{
				FormationPositionInfo1[]={-2,-1,0,0};
				FormationPositionInfo2[]={-1,1,0,0};
			};
		};
		class Diamond
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
			};
			class Pattern
			{
				FormationPositionInfo1[]=
				{
					-1,
					0.5,
					-0.5,
					"0.78539816339744830961f",
					0
				};
				FormationPositionInfo2[]=
				{
					0,
					-1,
					0,
					"-0.78539816339744830961f",
					0
				};
				FormationPositionInfo3[]={1,0.5,-0.5,0,0};
			};
		};
		class File
		{
			class Fixed
			{
				FormationPositionInfo1[]={-1,0,0,0};
			};
			class Pattern
			{
				FormationPositionInfo1[]=
				{
					-1,
					0,
					-0.5,
					"-0.78539816339744830961f",
					0
				};
				FormationPositionInfo2[]=
				{
					0,
					0,
					-0.5,
					"0.78539816339744830961f",
					0
				};
			};
		};
	};
	class East: West
	{
		class formColumnFixed: formColumnFixed
		{
		};
		class Staggered: Staggered
		{
		};
		class Wedge: Wedge
		{
		};
		class EchelonLeft: EchelonLeft
		{
		};
		class EcholonRight: EcholonRight
		{
		};
		class Vee: Vee
		{
		};
		class Line: Line
		{
		};
		class Diamond: Diamond
		{
		};
		class File: File
		{
		};
	};
	class Guer: West
	{
		class formColumnFixed: formColumnFixed
		{
		};
		class Staggered: Staggered
		{
		};
		class Wedge: Wedge
		{
		};
		class EchelonLeft: EchelonLeft
		{
		};
		class EcholonRight: EcholonRight
		{
		};
		class Vee: Vee
		{
		};
		class Line: Line
		{
		};
		class Diamond: Diamond
		{
		};
		class File: File
		{
		};
	};
	class Civ: West
	{
		class formColumnFixed: formColumnFixed
		{
		};
		class Staggered: Staggered
		{
		};
		class Wedge: Wedge
		{
		};
		class EchelonLeft: EchelonLeft
		{
		};
		class EcholonRight: EcholonRight
		{
		};
		class Vee: Vee
		{
		};
		class Line: Line
		{
		};
		class Diamond: Diamond
		{
		};
		class File: File
		{
		};
	};
};
class CfgVideoOptions
{
	class Visibility
	{
		minValue=500;
		maxValue=12000;
	};
	class ObjectsVisibility
	{
		minValue=500;
		maxValue=12000;
	};
	class ShadowsVisibility
	{
		minValue=50;
		maxValue=200;
	};
	class HDR
	{
		class Low
		{
			text="$STR_TERRAIN_50";
			value=8;
		};
		class Normal
		{
			text="$STR_TERRAIN_25";
			value=16;
		};
	};
	class PPAA
	{
		class Disabled
		{
			textMethod="";
			textQuality="$STR_DISABLED";
			ppaaType=0;
			ppaaLevel=0;
		};
		class FXAALow
		{
			textMethod="FXAA";
			textQuality="$STR_TERRAIN_25";
			ppaaType=1;
			ppaaLevel=0;
		};
		class FXAANormal
		{
			textMethod="FXAA";
			textQuality="$STR_TERRAIN_12_5";
			ppaaType=1;
			ppaaLevel=1;
		};
		class FXAAHigh
		{
			textMethod="FXAA";
			textQuality="$STR_TERRAIN_6_25";
			ppaaType=1;
			ppaaLevel=2;
		};
		class FXAAVeryHigh
		{
			textMethod="FXAA";
			textQuality="$STR_TERRAIN_3_125";
			ppaaType=1;
			ppaaLevel=3;
		};
		class SMAALow
		{
			textMethod="SMAA";
			textQuality="$STR_TERRAIN_25";
			ppaaType=2;
			ppaaLevel=0;
		};
		class SMAANormal
		{
			textMethod="SMAA";
			textQuality="$STR_TERRAIN_12_5";
			ppaaType=2;
			ppaaLevel=1;
		};
		class SMAAHigh
		{
			textMethod="SMAA";
			textQuality="$STR_TERRAIN_6_25";
			ppaaType=2;
			ppaaLevel=2;
		};
		class SMAAVeryHigh
		{
			textMethod="SMAA";
			textQuality="$STR_TERRAIN_3_125";
			ppaaType=2;
			ppaaLevel=3;
		};
	};
	class AnisotropicFiltering
	{
		class Disabled
		{
			text="$STR_DISABLED";
			value=0;
		};
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			value=2;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			value=4;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			value=8;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			value=12;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			value=16;
		};
	};
	class PiP
	{
		class Disabled
		{
			text="$STR_DISABLED";
			value=0;
		};
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			value=500;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			value=800;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			value=1000;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			value=1500;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			value=2000;
		};
	};
	class TextureQuality
	{
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			mipBias=5;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			mipBias=3.7;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			mipBias=2;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			mipBias=1.5;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			mipBias=1;
		};
	};
	class ObjectsQuality
	{
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			value=200000;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			value=300000;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			value=500000;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			value=750000;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			value=1000000;
		};
	};
	class TerrainQuality
	{
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			terrainGrid=50;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			terrainGrid=25;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			terrainGrid="12.5f";
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			terrainGrid="6.25f";
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			terrainGrid="3.125f";
		};
	};
	class CloudQuality
	{
		class Disabled
		{
			text="$STR_DISABLED";
			value=0;
		};
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			value=32;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			value=48;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			value=64;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			value=96;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			value=128;
		};
	};
	class ShadowQuality
	{
		class Disabled
		{
			text="$STR_DISABLED";
			shadowType=0;
			textureSize=0;
			shaderQuality=0;
		};
		class VeryLow
		{
			text="$STR_TERRAIN_50";
			shadowType=1;
			textureSize=0;
			shaderQuality=0;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			shadowType=2;
			textureSize=1024;
			shaderQuality=1;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			shadowType=2;
			textureSize=1024;
			shaderQuality=2;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			shadowType=2;
			textureSize=2048;
			shaderQuality=2;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			shadowType=2;
			textureSize=2048;
			shaderQuality=3;
		};
	};
	class ATOCQuality
	{
		class Disabled
		{
			text="$STR_DISABLED";
			grass=0;
			oldTrees=0;
			newTrees=0;
			other=0;
		};
		class Grass: Disabled
		{
			text="$STR_ATOC_GRASS";
			grass=1;
			other=1;
		};
		class OldTree: Disabled
		{
			text="$STR_ATOC_TREEA2";
			oldTrees=1;
			other=1;
		};
		class OldTreeGrass: Disabled
		{
			text="$STR_ATOC_TREEA2_GRASS";
			grass=1;
			oldTrees=1;
			other=1;
		};
		class NewTree: Disabled
		{
			text="$STR_ATOC_TREEOA";
			newTrees=1;
			other=1;
		};
		class NewTreeGrass: Disabled
		{
			text="$STR_ATOC_TREEOA_GRASS";
			grass=1;
			newTrees=1;
			other=1;
		};
		class OldTreeNewTree: Disabled
		{
			text="$STR_ATOC_TREEOA_TREEA2";
			oldTrees=1;
			newTrees=1;
			other=1;
		};
		class All: Disabled
		{
			text="$STR_ATOC_TREEOA_TREEA2_GRASS";
			grass=1;
			oldTrees=1;
			newTrees=1;
			other=1;
		};
	};
	class FSAA
	{
		class Disabled
		{
			text="$STR_DISABLED";
			value=0;
		};
		class Low
		{
			text="$STR_TERRAIN_25";
			value=1;
		};
		class Normal
		{
			text="$STR_TERRAIN_12_5";
			value=2;
		};
		class High
		{
			text="$STR_TERRAIN_6_25";
			value=3;
		};
		class VeryHigh
		{
			text="$STR_TERRAIN_3_125";
			value=4;
		};
	};
	class PPBloom
	{
		minValue=0;
		maxValue=2;
	};
	class PPDOF
	{
		minValue=0;
		maxValue=2;
	};
	class PPRotBlur
	{
		minValue=0;
		maxValue=2;
	};
	class PPRadialBlur
	{
		minValue=0;
		maxValue=2;
	};
	class DefaultSettings
	{
		text="Default";
		visibility=1600;
		objectVisibility=1200;
		shadowVisibility=100;
		hdr="Normal";
		ppaa="Disabled";
		fsaa="Disabled";
		particles="Normal";
		dynamicLights="Normal";
		anisotropicFiltering="Normal";
		pip="Normal";
		textureQuality="Normal";
		objectsQuality="Normal";
		terrainQuality="Normal";
		cloudQuality="Normal";
		shadowQuality="Normal";
		atocQuality="All";
		ppBloom=1;
		ppDOF=1;
		ppRotBlur=1;
		ppRadialBlur=1;
		postProcessQuality=3;
	};
	class OverallSettings
	{
		class VeryLow: DefaultSettings
		{
			text="$STR_TERRAIN_50";
			visibility=1000;
			objectVisibility=800;
			shadowVisibility=100;
			hdr="Normal";
			fsaa="Disabled";
			ppaa="Disabled";
			particles="Low";
			dynamicLights="VeryLow";
			anisotropicFiltering="Disabled";
			pip="VeryLow";
			textureQuality="VeryLow";
			objectsQuality="VeryLow";
			terrainQuality="Low";
			cloudQuality="VeryLow";
			shadowQuality="Low";
			atocQuality="Disabled";
			ppBloom=0;
			ppDOF=0;
			ppRotBlur=0;
			ppRadialBlur=0;
			postProcessQuality=0;
		};
		class Low: DefaultSettings
		{
			text="$STR_TERRAIN_25";
			visibility=1600;
			objectVisibility=1300;
			shadowVisibility=100;
			hdr="Normal";
			fsaa="Disabled";
			ppaa="Disabled";
			particles="Low";
			dynamicLights="Low";
			anisotropicFiltering="Low";
			pip="Low";
			textureQuality="Low";
			objectsQuality="Low";
			terrainQuality="Low";
			cloudQuality="Low";
			shadowQuality="Normal";
			atocQuality="Disabled";
			ppBloom=1;
			ppDOF=1;
			ppRotBlur=1;
			ppRadialBlur=1;
			postProcessQuality=2;
		};
		class Normal: DefaultSettings
		{
			text="$STR_TERRAIN_12_5";
			visibility=2200;
			objectVisibility=1800;
			shadowVisibility=100;
			hdr="Normal";
			fsaa="Low";
			ppaa="FXAALow";
			particles="Normal";
			dynamicLights="Normal";
			anisotropicFiltering="Normal";
			pip="Normal";
			textureQuality="Normal";
			objectsQuality="Normal";
			terrainQuality="Normal";
			cloudQuality="Normal";
			shadowQuality="Normal";
			atocQuality="All";
			ppBloom=1;
			ppDOF=1;
			ppRotBlur=1;
			ppRadialBlur=1;
			postProcessQuality=3;
		};
		class High: DefaultSettings
		{
			text="$STR_TERRAIN_6_25";
			visibility=3000;
			objectVisibility=2600;
			shadowVisibility=100;
			hdr="Normal";
			fsaa="Normal";
			ppaa="FXAANormal";
			particles="High";
			dynamicLights="High";
			anisotropicFiltering="High";
			pip="Normal";
			textureQuality="High";
			objectsQuality="Normal";
			terrainQuality="Normal";
			cloudQuality="High";
			shadowQuality="High";
			atocQuality="All";
			ppBloom=1;
			ppDOF=1;
			ppRotBlur=1;
			ppRadialBlur=1;
			postProcessQuality=4;
		};
		class VeryHigh: DefaultSettings
		{
			text="$STR_TERRAIN_3_125";
			visibility=3800;
			objectVisibility=3200;
			shadowVisibility=100;
			hdr="Normal";
			fsaa="VeryHigh";
			ppaa="FXAAVeryHigh";
			particles="High";
			dynamicLights="VeryHigh";
			anisotropicFiltering="VeryHigh";
			pip="Normal";
			textureQuality="VeryHigh";
			objectsQuality="High";
			terrainQuality="VeryHigh";
			cloudQuality="VeryHigh";
			shadowQuality="VeryHigh";
			atocQuality="All";
			ppBloom=1;
			ppDOF=1;
			ppRotBlur=1;
			ppRadialBlur=1;
			postProcessQuality=5;
		};
	};
	class Benchmark
	{
		defaultResult=1000;
		resultLimits[]={300,150,120,90,0};
	};
};
class CfgSurfaceCharacters
{
	class Empty
	{
		probability[]={};
		names[]={};
	};
};
class CfgSurfaces
{
	class Default
	{
		access=2;
		files="default";
		rough=0.075000003;
		dust=0.1;
		isWater=0;
		friction=0.89999998;
		restitution=0;
		soundEnviron="normalExt";
		character="Empty";
		visibility=1;
		audibility=1;
		impact="default_Mat";
	};
	class Water
	{
		access=2;
		files="more_anim*";
		rough=0;
		dust=0;
		soundEnviron="water";
		friction=0.89999998;
		restitution=0;
		isWater=1;
		character="Empty";
		impact="default_Mat";
	};
};
class CfgDefaultSettings
{
	defaultVisibility=8000;
	defaultTerrainGrid=10;
	defaultObjectViewDistance=1500;
	hazeDefaultDistance=-1;
	class UserInfo
	{
		version=1;
		blood=1;
		terrainGrid=10;
		volumeCD=5;
		volumeFX=5;
		volumeSpeech=5;
		singleVoice=0;
		gamma=1;
		brightness=1;
	};
};
class CfgPatches
{
	access=1;
};
class CfgFontFamilies
{
	access=0;
	class LucidaConsoleB
	{
		fonts[]=
		{
			"\core\data\fonts\lucidaConsoleB8",
			"\core\data\fonts\lucidaConsoleB11"
		};
	};
	class TahomaB
	{
		fonts[]=
		{
			"\core\data\fonts\tahomab16"
		};
	};
};
class CfgFonts
{
};
class UserActionsConflictGroups
{
	class ActionGroups
	{
		basic[]=
		{
			"ToggleWeapons",
			"DefaultAction",
			"ReloadMagazine",
			"LockTarget",
			"RevealTarget",
			"PrevAction",
			"NextAction",
			"Action",
			"ActionContext",
			"ActionFreeLook",
			"Headlights",
			"NightVision",
			"MiniMap",
			"MiniMapToggle",
			"ShowMap",
			"HideMap",
			"Help",
			"TimeInc",
			"TimeDec",
			"Optics",
			"PersonView",
			"TacticalView",
			"LiteUnitInfoToggle",
			"ZoomIn",
			"ZoomInToggle",
			"ZoomOut",
			"zoomOutToggle",
			"ZoomContIn",
			"ZoomContOut",
			"ZeroingUp",
			"ZeroingDown",
			"LookAround",
			"LookAroundToggle",
			"LookLeftDown",
			"LookDown",
			"LookRightDown",
			"LookLeft",
			"LookCenter",
			"LookRight",
			"LookLeftUp",
			"LookUp",
			"LookRightUp",
			"LookLeftCont",
			"LookRightCont",
			"LookDownCont",
			"LookUpCont",
			"PrevChannel",
			"NextChannel",
			"Chat",
			"VoiceOverNet",
			"PushToTalk",
			"PushToTalkAll",
			"PushToTalkSide",
			"PushToTalkCommand",
			"PushToTalkGroup",
			"PushToTalkVehicle",
			"PushToTalkDirect",
			"NetworkStats",
			"Turbo",
			"Slow",
			"HoldBreath",
			"IngamePause",
			"MenuSelect",
			"SwapGunner",
			"CancelAction",
			"CommandWatch",
			"Gear",
			"Cheat1",
			"Cheat2",
			"Diary",
			"Surrender",
			"GetOver",
			"Item0",
			"Item1",
			"Item2",
			"Item3",
			"Item4",
			"Item5",
			"Item6",
			"Item7",
			"Item8",
			"Item9",
			"ItemsShow"
		};
		ManBasic[]=
		{
			"TempRaiseWeapon",
			"ToggleRaiseWeapon",
			"Salute",
			"Taunt",
			"SitDown",
			"LockTargets",
			"LockEmptyTargets"
		};
		VehBasic[]=
		{
			"Fire",
			"VehicleTurbo",
			"HeliManualFire",
			"VehLockTargets",
			"VehLockEmptyTargets",
			"GetOut",
			"Eject"
		};
		ManMove[]=
		{
			"AimUp",
			"AimDown",
			"AimLeft",
			"AimRight",
			"MoveForward",
			"MoveBack",
			"TurnLeft",
			"TurnRight",
			"MoveUp",
			"MoveDown",
			"MoveFastForward",
			"MoveSlowForward",
			"MoveLeft",
			"MoveRight",
			"EvasiveForward",
			"EvasiveLeft",
			"EvasiveRight",
			"EvasiveBack",
			"Stand",
			"Crouch",
			"Prone",
			"LeanLeft",
			"LeanRight",
			"LeanLeftToggle",
			"LeanRightToggle",
			"WalkRunToggle",
			"WalkRunTemp"
		};
		AimingHead[]=
		{
			"AimHeadUp",
			"AimHeadDown",
			"AimHeadLeft",
			"AimHeadRight"
		};
		AirCraft[]=
		{
			"HeliUp",
			"HeliDown",
			"HeliThrottlePos",
			"HeliThrottleNeg",
			"HeliLeft",
			"HeliRight",
			"AirBankLeft",
			"AirBankRight",
			"HeliRudderLeft",
			"HeliRudderRight",
			"HeliForward",
			"HeliBack",
			"HeliFastForward",
			"AutoHover",
			"AutoHoverCancel",
			"LandGear",
			"LandGearUp",
			"FlapsDown",
			"FlapsUp"
		};
		Heli[]=
		{
			"HeliCollectiveRaise",
			"HeliCollectiveLower",
			"HeliCollectiveRaiseCont",
			"HeliCollectiveLowerCont",
			"HeliLeft",
			"HeliRight",
			"HeliCyclicLeft",
			"HeliCyclicRight",
			"HeliRudderLeft",
			"HeliRudderRight",
			"CyclicForward",
			"CyclicBack",
			"HeliFastForward",
			"AutoHover",
			"AutoHoverCancel",
			"LandGear",
			"LandGearUp",
			"FlapsDown",
			"FlapsUp",
			"HelicopterTrimOn",
			"HelicopterTrimOff",
			"HeliThrottleIncrease1",
			"HeliThrottleDecrease1",
			"HeliThrottleIncrease2",
			"HeliThrottleDecrease2",
			"HeliThrottleIncrease3",
			"HeliThrottleDecrease3",
			"HeliStarterToggle1",
			"HeliStarterToggle2",
			"HeliStarterToggle3",
			"HeliBatteriesToggle",
			"HeliRotorBrakeToggle",
			"HeliEnginesToggle",
			"HeliAPUToggle",
			"HeliWheelsBrake",
			"HeliTrimLeft",
			"HeliTrimRight",
			"HeliTrimForward",
			"HeliTrimBackward",
			"HeliTrimRudderLeft",
			"HeliTrimRudderRight"
		};
		CarMovement[]=
		{
			"CarLeft",
			"CarRight",
			"CarWheelLeft",
			"CarWheelRight",
			"CarForward",
			"CarBack",
			"CarFastForward",
			"CarSlowForward"
		};
		CarFreelook[]=
		{
			"CarAimUp",
			"CarAimDown",
			"CarAimLeft",
			"CarAimRight"
		};
		Tank[]=
		{
			"TurnIn",
			"TurnOut"
		};
		SeaGull[]=
		{
			"SeagullUp",
			"SeagullDown",
			"SeagullForward",
			"SeagullBack",
			"SeagullFastForward"
		};
		FreeHeadMove[]=
		{
			"FreeHeadMove"
		};
		HeadMove[]=
		{
			"LookShiftLeftCont",
			"LookShiftRightCont",
			"LookShiftUpCont",
			"LookShiftDownCont",
			"LookShiftForwardCont",
			"LookShiftBackCont",
			"LookRollLeftCont",
			"LookRollRightCont",
			"LookShiftLeft",
			"LookShiftRight",
			"LookShiftUp",
			"LookShiftDown",
			"LookShiftForward",
			"LookRollLeft",
			"LookRollRight",
			"LookShiftBack",
			"LookShiftCenter"
		};
		Command[]=
		{
			"CommandLeft",
			"CommandRight",
			"CommandForward",
			"CommandBack",
			"CommandFast",
			"CommandSlow"
		};
		buldozer[]=
		{
			"BuldSwitchCamera",
			"BuldFreeLook",
			"BuldSelect",
			"BuldResetCamera",
			"BuldMagnetizePoints",
			"BuldMagnetizePlanes",
			"BuldMagnetizeYFixed",
			"BuldTerrainRaise1m",
			"buldTerrainRaise10cm",
			"BuldTerrainLower1m",
			"BuldTerrainLower10cm",
			"BuldTerrainRaise5m",
			"BuldTerrainRaise50cm",
			"BuldTerrainLower5m",
			"BuldTerrainLower50cm",
			"BuldTerrainShowNode",
			"BuldSelectionType",
			"BuldLeft",
			"BuldRight",
			"BuldForward",
			"BuldBack",
			"BuldMoveLeft",
			"BuldMoveRight",
			"BuldMoveForward",
			"BuldMoveBack",
			"BuldTurbo",
			"BuldUp",
			"BuldDown",
			"BuldLookLeft",
			"BuldLookRight",
			"BuldLookUp",
			"BuldLookDown",
			"BuldZoomIn",
			"BuldZoomOut",
			"BuldTextureInfo"
		};
	};
	class CollisionGroups
	{
		manMain[]=
		{
			"basic",
			"manBasic"
		};
		vehMain[]=
		{
			"basic",
			"vehBasic"
		};
		manMove[]=
		{
			"manMove",
			"manBasic",
			"basic"
		};
		commander[]=
		{
			"command",
			"vehBasic",
			"basic"
		};
		aimingHead[]=
		{
			"aimingHead",
			"manBasic",
			"basic"
		};
		heli[]=
		{
			"heli",
			"vehBasic",
			"basic",
			"HeadMove"
		};
		aircraft[]=
		{
			"aircraft",
			"vehBasic",
			"basic",
			"HeadMove"
		};
		carMove[]=
		{
			"CarMovement",
			"vehBasic",
			"basic",
			"HeadMove"
		};
		carLook[]=
		{
			"CarFreelook",
			"vehBasic",
			"basic",
			"HeadMove"
		};
		TankMove[]=
		{
			"CarMovement",
			"Tank",
			"vehBasic",
			"basic",
			"HeadMove"
		};
		TankLook[]=
		{
			"CarFreelook",
			"Tank",
			"vehBasic",
			"basic",
			"HeadMove"
		};
		heliF[]=
		{
			"heli",
			"vehBasic",
			"basic",
			"FreeHeadMove"
		};
		aircraftF[]=
		{
			"aircraft",
			"vehBasic",
			"basic",
			"FreeHeadMove"
		};
		carMoveF[]=
		{
			"CarMovement",
			"vehBasic",
			"basic",
			"FreeHeadMove"
		};
		carLookF[]=
		{
			"CarFreelook",
			"vehBasic",
			"basic",
			"FreeHeadMove"
		};
		TankMoveF[]=
		{
			"CarMovement",
			"Tank",
			"vehBasic",
			"basic",
			"FreeHeadMove"
		};
		TankLookF[]=
		{
			"CarFreelook",
			"Tank",
			"vehBasic",
			"basic",
			"FreeHeadMove"
		};
		seagull[]=
		{
			"seagull"
		};
		buldozer[]=
		{
			"buldozer"
		};
	};
	class Exceptions
	{
		leftAlt[]=
		{
			"lookAround",
			"commandWatch"
		};
		map[]=
		{
			"showMap",
			"hideMap"
		};
		lockRevealTarget[]=
		{
			"lockTarget",
			"revealTarget",
			"holdBreath"
		};
		rollLeft[]=
		{
			"EvasiveLeft",
			"LeanLeft"
		};
		rollRight[]=
		{
			"EvasiveRight",
			"LeanRight"
		};
		landGear[]=
		{
			"LandGear",
			"LandGearUp"
		};
		zoomIn[]=
		{
			"zoomIn",
			"zoomInToggle"
		};
		zoomOut[]=
		{
			"zoomOut",
			"zoomOutToggle"
		};
		mouseConfirm[]=
		{
			"DefaultAction",
			"ActionContext",
			"ActionFreeLook"
		};
		moveUp[]=
		{
			"zeroingUp",
			"heliUp",
			"seagullUp"
		};
		moveDown[]=
		{
			"zeroingDown",
			"heliDown",
			"seagullDown"
		};
		autoHover[]=
		{
			"AutoHover",
			"AutoHoverCancel"
		};
	};
};
class UserActionGroups
{
	class All
	{
		name="$STR_USRACT_GROUP_ALL";
		group[]=
		{
			"InteractVeh",
			"PersItems",
			"QuickEnter",
			"MoveForward",
			"MoveBack",
			"TurnLeft",
			"TurnRight",
			"MoveUp",
			"MoveDown",
			"MoveFastForward",
			"MoveSlowForward",
			"MoveLeft",
			"MoveRight",
			"EvasiveForward",
			"EvasiveLeft",
			"EvasiveRight",
			"Stand",
			"Crouch",
			"Prone",
			"LeanLeft",
			"LeanRight",
			"LeanLeftToggle",
			"LeanRightToggle",
			"WalkRunToggle",
			"WalkRunTemp",
			"ToggleWeapons",
			"Fire",
			"DefaultAction",
			"ReloadMagazine",
			"opticsMode",
			"LockTargets",
			"LockEmptyTargets",
			"LockTarget",
			"RevealTarget",
			"TempRaiseWeapon",
			"ToggleRaiseWeapon",
			"PrevAction",
			"NextAction",
			"Action",
			"ActionContext",
			"ActionFreeLook",
			"Headlights",
			"NightVision",
			"MiniMap",
			"MiniMapToggle",
			"ShowMap",
			"HideMap",
			"Help",
			"TimeInc",
			"TimeDec",
			"Optics",
			"PersonView",
			"TacticalView",
			"LiteUnitInfoToggle",
			"ZoomIn",
			"ZoomInToggle",
			"ZoomOut",
			"zoomOutToggle",
			"ZoomContIn",
			"ZoomContOut",
			"ZeroingUp",
			"ZeroingDown",
			"LookAround",
			"LookAroundToggle",
			"LookLeftDown",
			"LookDown",
			"LookRightDown",
			"LookLeft",
			"LookCenter",
			"LookRight",
			"LookLeftUp",
			"LookUp",
			"LookRightUp",
			"LookLeftCont",
			"LookRightCont",
			"LookDownCont",
			"LookUpCont",
			"LookShiftLeftCont",
			"LookShiftRightCont",
			"LookShiftUpCont",
			"LookShiftDownCont",
			"LookShiftForwardCont",
			"LookShiftBackCont",
			"LookRollLeftCont",
			"LookRollRightCont",
			"LookShiftLeft",
			"LookShiftRight",
			"LookShiftUp",
			"LookShiftDown",
			"LookShiftForward",
			"LookShiftBack",
			"LookRollLeft",
			"LookRollRight",
			"LookShiftCenter",
			"FreeHeadMove",
			"PrevChannel",
			"NextChannel",
			"Chat",
			"VoiceOverNet",
			"PushToTalk",
			"PushToTalkAll",
			"PushToTalkSide",
			"PushToTalkCommand",
			"PushToTalkGroup",
			"PushToTalkVehicle",
			"PushToTalkDirect",
			"NetworkStats",
			"Turbo",
			"VehicleTurbo",
			"Slow",
			"HoldBreath",
			"Salute",
			"Taunt",
			"SitDown",
			"AimUp",
			"AimDown",
			"AimLeft",
			"AimRight",
			"AimHeadUp",
			"AimHeadDown",
			"AimHeadLeft",
			"AimHeadRight",
			"IngamePause",
			"MenuSelect",
			"MenuBack",
			"HeliThrottlePos",
			"HeliThrottleNeg",
			"HeliUp",
			"HeliDown",
			"HeliLeft",
			"HeliRight",
			"AirBankLeft",
			"AirBankRight",
			"HeliRudderLeft",
			"HeliRudderRight",
			"HeliForward",
			"HeliBack",
			"HeliFastForward",
			"HeliCollectiveRaise",
			"HeliCollectiveLower",
			"HeliCollectiveRaiseCont",
			"HeliCollectiveLowerCont",
			"HeliCyclicLeft",
			"HeliCyclicRight",
			"CyclicForward",
			"CyclicBack",
			"AutoHover",
			"AutoHoverCancel",
			"LandGear",
			"LandGearUp",
			"FlapsDown",
			"FlapsUp",
			"HelicopterTrimOn",
			"HelicopterTrimOff",
			"HeliThrottleIncrease1",
			"HeliThrottleDecrease1",
			"HeliThrottleIncrease2",
			"HeliThrottleDecrease2",
			"HeliThrottleIncrease3",
			"HeliThrottleDecrease3",
			"HeliStarterToggle1",
			"HeliStarterToggle2",
			"HeliStarterToggle3",
			"HeliBatteriesToggle",
			"HeliRotorBrakeToggle",
			"HeliEnginesToggle",
			"HeliAPUToggle",
			"heliWheelsBrake",
			"HeliTrimLeft",
			"HeliTrimRight",
			"HeliTrimForward",
			"HeliTrimBackward",
			"HeliTrimRudderLeft",
			"HeliTrimRudderRight",
			"SeagullUp",
			"SeagullDown",
			"SeagullForward",
			"SeagullBack",
			"SeagullFastForward",
			"CarLeft",
			"CarRight",
			"CarWheelLeft",
			"CarWheelRight",
			"CarForward",
			"CarBack",
			"CarFastForward",
			"CarSlowForward",
			"CarAimUp",
			"CarAimDown",
			"CarAimLeft",
			"CarAimRight",
			"CommandLeft",
			"CommandRight",
			"CommandForward",
			"CommandBack",
			"CommandFast",
			"CommandSlow",
			"VehLockTargets",
			"VehLockEmptyTargets",
			"SwapGunner",
			"HeliManualFire",
			"TurnIn",
			"TurnOut",
			"GetOut",
			"Eject",
			"CancelAction",
			"CommandWatch",
			"Gear",
			"Cheat1",
			"Cheat2",
			"Diary",
			"DSInterface",
			"Surrender",
			"GetOver",
			"Item0",
			"Item1",
			"Item2",
			"Item3",
			"Item4",
			"Item5",
			"Item6",
			"Item7",
			"Item8",
			"Item9",
			"ItemsShow"
		};
	};
	class BasicInfantryControls
	{
		name="$STR_USRACT_GROUP_INFANTRY";
		group[]=
		{
			"MoveForward",
			"MoveBack",
			"TurnLeft",
			"TurnRight",
			"MoveFastForward",
			"MoveSlowForward",
			"MoveLeft",
			"MoveRight",
			"EvasiveForward",
			"EvasiveLeft",
			"EvasiveRight",
			"Stand",
			"Crouch",
			"Prone",
			"LeanLeft",
			"LeanRight",
			"LeanLeftToggle",
			"LeanRightToggle",
			"WalkRunToggle",
			"WalkRunTemp",
			"ToggleWeapons",
			"DefaultAction",
			"ReloadMagazine",
			"LockTargets",
			"LockEmptyTargets",
			"LockTarget",
			"RevealTarget",
			"TempRaiseWeapon",
			"ToggleRaiseWeapon",
			"PrevAction",
			"NextAction",
			"MenuBack",
			"Action",
			"ActionContext",
			"ActionFreeLook",
			"Optics",
			"LookAround",
			"LookAroundToggle",
			"Gear",
			"MiniMap",
			"MiniMapToggle",
			"Diary",
			"Headlights",
			"NightVision",
			"ShowMap",
			"HideMap",
			"PersonView",
			"TacticalView",
			"LiteUnitInfoToggle",
			"ZoomIn",
			"ZoomInToggle",
			"ZoomOut",
			"zoomOutToggle",
			"ZeroingUp",
			"ZeroingDown",
			"HoldBreath",
			"Salute",
			"Taunt",
			"SitDown",
			"Surrender",
			"GetOver",
			"VoiceOverNet",
			"PrevChannel",
			"NextChannel",
			"Chat",
			"PushToTalk",
			"PushToTalkAll",
			"PushToTalkSide",
			"PushToTalkCommand",
			"PushToTalkGroup",
			"PushToTalkVehicle",
			"PushToTalkDirect",
			"AimUp",
			"AimDown",
			"AimLeft",
			"AimRight",
			"AimHeadUp",
			"AimHeadDown",
			"AimHeadLeft",
			"AimHeadRight",
			"LookLeftDown",
			"LookDown",
			"LookRightDown",
			"LookLeft",
			"LookCenter",
			"LookRight",
			"LookLeftUp",
			"LookUp",
			"LookRightUp",
			"LookLeftCont",
			"LookRightCont",
			"LookDownCont",
			"LookUpCont"
		};
	};
	class Car
	{
		name="$STR_USRACT_GROUP_VEHICLE";
		group[]=
		{
			"InteractVeh",
			"PersItems",
			"QuickEnter",
			"CarLeft",
			"CarRight",
			"CarWheelLeft",
			"CarWheelRight",
			"CarForward",
			"CarBack",
			"CarFastForward",
			"CarSlowForward",
			"CarAimUp",
			"CarAimDown",
			"CarAimLeft",
			"CarAimRight",
			"TurnIn",
			"TurnOut",
			"GetOut",
			"Eject",
			"Fire"
		};
	};
	class Air
	{
		name="$STR_USRACT_GROUP_FLYING";
		group[]=
		{
			"HeliUp",
			"HeliDown",
			"HeliThrottlePos",
			"HeliThrottleNeg",
			"HeliLeft",
			"HeliRight",
			"AirBankLeft",
			"AirBankRight",
			"HeliRudderLeft",
			"HeliRudderRight",
			"HeliForward",
			"HeliBack",
			"HeliFastForward",
			"HeliManualFire",
			"AutoHover",
			"AutoHoverCancel",
			"LandGear",
			"LandGearUp",
			"FlapsDown",
			"FlapsUp",
			"GetOut",
			"Eject",
			"SeagullUp",
			"SeagullDown",
			"SeagullForward",
			"SeagullBack",
			"SeagullFastForward",
			"Fire",
			"LookShiftLeftCont",
			"LookShiftRightCont",
			"LookShiftUpCont",
			"LookShiftDownCont",
			"LookShiftForwardCont",
			"LookShiftBackCont",
			"LookRollLeftCont",
			"LookRollRightCont",
			"LookShiftLeft",
			"LookShiftRight",
			"LookShiftUp",
			"LookShiftDown",
			"LookShiftForward",
			"LookShiftBack",
			"LookRollLeft",
			"LookRollRight",
			"LookShiftCenter",
			"FreeHeadMove"
		};
	};
	class Helicopter
	{
		name="$STR_USRACT_GROUP_HELI";
		group[]=
		{
			"HeliCyclicForward",
			"HeliCyclicBack",
			"HeliCyclicLeft",
			"HeliCyclicRight",
			"HeliCollectiveRaiseCont",
			"HeliCollectiveLowerCont",
			"HeliCollectiveRaise",
			"HeliCollectiveLower",
			"HeliRudderLeft",
			"HeliRudderRight",
			"HeliLeft",
			"HeliRight",
			"AutoHover",
			"AutoHoverCancel",
			"HeliThrottleIncrease1",
			"HeliThrottleDecrease1",
			"HeliThrottleIncrease2",
			"HeliThrottleDecrease2",
			"HeliThrottleIncrease3",
			"HeliThrottleDecrease3",
			"HeliStarterToggle1",
			"HeliStarterToggle2",
			"HeliStarterToggle3",
			"HeliBatteriesToggle",
			"HeliRotorBrakeToggle",
			"HeliEnginesToggle",
			"HeliAPUToggle",
			"heliWheelsBrake",
			"LandGear",
			"LandGearUp",
			"HelicopterTrimOn",
			"HelicopterTrimOff",
			"HeliTrimLeft",
			"HeliTrimRight",
			"HeliTrimForward",
			"HeliTrimBackward",
			"HeliTrimRudderLeft",
			"HeliTrimRudderRight",
			"minimap",
			"minimapToggle",
			"GetOut",
			"Eject",
			"LockTarget",
			"VehLockTargets",
			"VehLockEmptyTargets",
			"DefaultAction",
			"Fire",
			"FreeHeadMove",
			"LookShiftLeftCont",
			"LookShiftRightCont",
			"LookShiftUpCont",
			"LookShiftDownCont",
			"LookShiftForwardCont",
			"LookShiftBackCont",
			"LookRollLeftCont",
			"LookRollRightCont",
			"LookShiftLeft",
			"LookShiftRight",
			"LookShiftUp",
			"LookShiftDown",
			"LookShiftForward",
			"LookShiftBack",
			"LookRollLeft",
			"LookRollRight",
			"LookShiftCenter"
		};
	};
	class Buldozer
	{
		name="$STR_USRACT_GROUP_BULDOZER";
		group[]=
		{
			"BuldSwitchCamera",
			"BuldFreeLook",
			"BuldSelect",
			"BuldResetCamera",
			"BuldMagnetizePoints",
			"BuldMagnetizePlanes",
			"BuldMagnetizeYFixed",
			"BuldTerrainRaise1m",
			"BuldTerrainRaise10cm",
			"BuldTerrainLower1m",
			"BuldTerrainLower10cm",
			"BuldTerrainRaise5m",
			"BuldTerrainRaise50cm",
			"BuldTerrainLower5m",
			"BuldTerrainLower50cm",
			"BuldTerrainShowNode",
			"BuldSelectionType",
			"BuldLeft",
			"BuldRight",
			"BuldForward",
			"BuldBack",
			"BuldMoveLeft",
			"BuldMoveRight",
			"BuldMoveForward",
			"BuldMoveBack",
			"BuldTurbo",
			"BuldUp",
			"BuldDown",
			"BuldLookLeft",
			"BuldLookRight",
			"BuldLookUp",
			"BuldLookDown",
			"BuldZoomIn",
			"BuldZoomOut",
			"BuldTextureInfo"
		};
	};
	class UserActions
	{
		name="$STR_USRACT_GROUP_USER";
		group[]=
		{
			"User1",
			"User2",
			"User3",
			"User4",
			"User5",
			"User6",
			"User7",
			"User8",
			"User9",
			"User10",
			"User11",
			"User12",
			"User13",
			"User14",
			"User15",
			"User16",
			"User17",
			"User18",
			"User19",
			"User20"
		};
	};
};
TrackIR_Developer_ID=0;
TrackIR_Developer_AppKeyHigh=0;
TrackIR_Developer_AppKeyLow=0;
overviewLockedMission="dtaext\lockedmission";
overviewMyMissions="dtaext\mymissions";
overviewNewMission="dtaext\newmission";
fontPlate="TahomaB";
fontHelicopterHUD="TahomaB";
fontClanName="TahomaB";
class CfgEditCamera
{
	speedFwdBack=1;
	speedLeftRight=1;
	speedUpDown=1;
	speedRotate=1;
	speedElevation=1;
	speedTurboMultiplier=4;
	iconSelect="";
	iconSelectColor[]={1,1,0,1};
	iconSelectSizeX=0.75;
	iconSelectSizeY=1;
};
class CfgWrapperUI
{
	access=0;
	class Colors
	{
		color1[]={0,0,0,1};
		color2[]={0.2,0.2,0.2,1};
		color3[]={0.5,0.5,0.5,1};
		color4[]={0.60000002,0.60000002,0.60000002,1};
		color5[]={0.80000001,0.80000001,0.80000001,1};
	};
	class Background
	{
		alpha=0.75;
		texture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class TitleBar
	{
		alpha=0.30000001;
		texture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class GroupBox
	{
		alpha=0.2;
	};
	class GroupBox2
	{
		alpha=0.5;
		texture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class Button
	{
		color1[]={0,0,0,0.30000001};
		color2[]={0.2,0.2,0.2,0.30000001};
		color3[]={0.5,0.5,0.5,0.30000001};
		color4[]={0.60000002,0.60000002,0.60000002,0.30000001};
		color5[]={0.80000001,0.80000001,0.80000001,0.30000001};
	};
	class ListBox
	{
		line="#(argb,8,8,3)color(1,1,1,1)";
		thumb="#(argb,8,8,3)color(1,1,1,1)";
		arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
		arrowFull="#(argb,8,8,3)color(1,1,1,1)";
		border="#(argb,8,8,3)color(1,1,1,1)";
		boxLeft="#(argb,8,8,3)color(1,1,1,1)";
		boxRight="#(argb,8,8,3)color(1,1,1,1)";
		boxHorz="#(argb,8,8,3)color(1,1,1,1)";
	};
	class Slider
	{
		arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
		arrowFull="#(argb,8,8,3)color(1,1,1,1)";
		border="#(argb,8,8,3)color(1,1,1,1)";
		thumb="#(argb,8,8,3)color(1,1,1,1)";
	};
	class Cursors
	{
		class Arrow
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=16;
			height=16;
			hotspotX=0;
			hotspotY=0;
			color[]={0.80000001,0.80000001,0.80000001,1};
			shadow=0;
		};
		class Debug: Arrow
		{
			color[]={1,1,0.69999999,1};
			shadow=0;
		};
		class Track
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.69999999,0.1,0,1};
			shadow=0;
		};
		class Move
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0,0.60000002,0,1};
			shadow=0;
		};
		class Scroll
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.80000001,0.60000002,0,1};
			shadow=0;
		};
		class Rotate
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.1,0.1,0.89999998,1};
			shadow=0;
		};
		class Track3D
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.69999999,0.1,0,1};
			shadow=0;
		};
		class Move3D
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0,0.60000002,0,1};
			shadow=0;
		};
		class Rotate3D
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.1,0.1,0.89999998,1};
			shadow=0;
		};
		class Raise3D
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0,0.80000001,1,1};
			shadow=0;
		};
		class Wait
		{
			texture="#(argb,32,32,1)color(1,1,1,1)";
			width=24;
			height=24;
			hotspotX=0.5;
			hotspotY=0.5;
			color[]={0.1,0.1,0.89999998,1};
			shadow=0;
		};
	};
};
class CfgInGameUI
{
	access=0;
	imageCornerElement="#(argb,8,8,3)color(1,1,1,1)";
	xboxStyle=1;
	colorBackground[]={0.2,0.15000001,0.1,0.80000001};
	colorBackgroundCommand[]={0,0,0,0.30000001};
	colorBackgroundHelp[]={0.2,0.15000001,0.1,0.80000001};
	colorText[]={0.80000001,0.80000001,0.80000001,1};
	shadow=0;
	class PlayerColors
	{
		class ColNone
		{
			texture="#(argb,8,8,3)color(0,0,0,0)";
			text="None";
		};
		class ColWhite
		{
			texture="#(argb,8,8,3)color(1,1,1,1)";
			text="White";
		};
		class ColRed
		{
			texture="#(argb,8,8,3)color(1,0,0,1)";
			text="Red";
		};
		class ColOrange
		{
			texture="#(argb,8,8,3)color(1,0.53,0.12,1)";
			text="Orange";
		};
		class ColYellow
		{
			texture="#(argb,8,8,3)color(1,1,0,1)";
			text="Yellow";
		};
		class ColGreen
		{
			texture="#(argb,8,8,3)color(0,1,0,1)";
			text="Green";
		};
		class ColAqua
		{
			texture="#(argb,8,8,3)color(0,1,1,1)";
			text="Aqua";
		};
		class ColBlue
		{
			texture="#(argb,8,8,3)color(0,0,1,1)";
			text="Blue";
		};
		class ColPurple
		{
			texture="#(argb,8,8,3)color(0.75,0,0.75,1)";
			text="Purple";
		};
		class ColGrey
		{
			texture="#(argb,8,8,3)color(0.3,0.3,0.3,1)";
			text="Grey";
		};
		class ColBlack
		{
			texture="#(argb,8,8,3)color(0,0,0,1)";
			text="Black";
		};
	};
	class MPTable
	{
		color[]={0.69999999,0.69999999,0.69999999,1};
		colorTitleBg[]={0.1,0.15000001,0.15000001,1};
		colorBg[]={0.1,0.15000001,0.1,0.89999998};
		colorSelected[]={0.69999999,0.69999999,0.69999999,0.40000001};
		colorWest[]={0.69999999,0.94999999,0.69999999,1};
		colorEast[]={0.94999999,0.69999999,0.69999999,1};
		colorCiv[]={0.80000001,0.80000001,0.80000001,1};
		colorRes[]={0.69999999,0.69999999,0.94999999,1};
		font="TahomaB";
		size="( 21 / 408 )";
		shadow=0;
		class Columns
		{
			class Order
			{
				width=0.046;
				colorBg[]={0.1,0.27000001,0.1,0.80000001};
				doubleLine=0;
			};
			class Player
			{
				width=0.25;
				colorBg[]={0.1,0.23,0.1,0.80000001};
				doubleLine=1;
			};
			class KillsInfantry
			{
				width=0.11;
				doubleLine=0;
				colorBg[]={0.1,0.15000001,0.1,0.80000001};
				picture="#(argb,8,8,3)color(1,1,1,1)";
			};
			class KillsSoft
			{
				width=0.1;
				doubleLine=0;
				colorBg[]={0.1,0.15000001,0.1,0.80000001};
				picture="#(argb,8,8,3)color(1,1,1,1)";
			};
			class KillsArmor
			{
				width=0.11;
				doubleLine=0;
				colorBg[]={0.1,0.15000001,0.1,0.80000001};
				picture="#(argb,8,8,3)color(1,1,1,1)";
			};
			class KillsAir
			{
				width=0.1;
				doubleLine=1;
				colorBg[]={0.1,0.15000001,0.1,0.80000001};
				picture="#(argb,8,8,3)color(1,1,1,1)";
			};
			class Killed
			{
				width=0.1;
				doubleLine=1;
				colorBg[]={0.1,0.15000001,0.1,0.80000001};
				picture="#(argb,8,8,3)color(1,1,1,1)";
			};
			class KillsTotal
			{
				width=0.1;
				doubleLine=0;
				colorBg[]={0.1,0.34999999,0.1,0.89999998};
				picture="#(argb,8,8,3)color(1,1,1,1)";
			};
		};
	};
	class TankDirection
	{
		left=0.035;
		top=0.16;
		width=0.18000001;
		height=0.25999999;
		color[]={0.80000001,0.80000001,0.80000001,1};
		colorHalfDammage[]={0.80000001,0.60000002,0,1};
		colorFullDammage[]={0.69999999,0.1,0,1};
		imageTower="#(argb,8,8,3)color(1,1,1,1)";
		imageTurret="#(argb,8,8,3)color(0,0,0,1)";
		imageGun="#(argb,8,8,3)color(0.3,0.3,0.3,1)";
		imageObsTurret="#(argb,8,8,3)color(1,0,0,1)";
		imageEngine="#(argb,8,8,3)color(0,1,0,1)";
		imageHull="#(argb,8,8,3)color(0,0,1,1)";
		imageLTrack="#(argb,8,8,3)color(1,0.53,0.12,1)";
		imageRTrack="#(argb,8,8,3)color(0,0,0,1)";
		shadow=0;
	};
	class HelicopterHUD
	{
		shadow=0;
		font="TahomaB";
		SizeExNormal=0.035;
		SizeExSmall=0.02;
		attitudeElemmentsSize=0.1;
		attitudeFOV=1.04719;
		analogueSpeedAngleOffset=2.0943949;
		analogueAltitudeAngleOffset=2.0943949;
		analogueSpeedAngleRange=5.9341192;
		analogueAltitudeAngleRange=5.9341192;
		HUDLimitsColor[]={0,0.60000002,0,1};
		color[]={0,0.60000002,0,1};
		windDirection="#(argb,8,8,3)color(0,1,0,1)";
		stabilityVector="#(argb,8,8,3)color(0,1,0,1)";
		stabilityGrid="#(argb,8,8,3)color(0,1,0,1)";
		axis="#(argb,8,8,3)color(0,1,0,1)";
		indicator="#(argb,8,8,3)color(0,1,0,1)";
		horizonAxes="#(argb,8,8,3)color(0,1,0,1)";
		horizonVector="#(argb,8,8,3)color(0,1,0,1)";
		horizonAircraft="#(argb,8,8,3)color(0,1,0,1)";
		statusOff[]={0.80000001,0.80000001,0.80000001,1};
		statusOn[]={0,0.60000002,0,1};
		statusDamaged[]={0.80000001,0.60000002,0,1};
		statusDestroyed[]={0.69999999,0.1,0,1};
	};
	class FLIRModeNames
	{
		FLIRModeName[]=
		{
			"WHOT",
			"BHOT",
			"HOT",
			"HOT",
			"RBHOT",
			"BRHOT"
		};
	};
	class Capture
	{
		colorBackground[]={0,0,0,0.93000001};
		colorText[]={0.80000001,0.60000002,0,1};
		colorLine[]={0.80000001,0.80000001,0.80000001,1};
		shadow=0;
	};
	class Picture
	{
		color[]={0.80000001,0.80000001,0.80000001,1};
		colorProblems[]={0.69999999,0.1,0,1};
		imageBusy="#(argb,8,8,3)color(1,1,1,1)";
		imageWaiting="#(argb,8,8,3)color(1,1,1,1)";
		imageCommand="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
	class Bar
	{
		imageBar="#(argb,8,8,3)color(1,1,1,1)";
		colorBackground[]={0.1,0.40000001,0.1,0.69999999};
		colorGreen[]={0,0.60000002,0,1};
		colorYellow[]={0.80000001,0.60000002,0,1};
		colorRed[]={0.69999999,0.1,0,0.89999998};
		colorBlinkOn[]={1,0.2,0.2,1};
		colorBlinkOff[]={0.69999999,0.1,0,0.89999998};
		height=0.0099999998;
		shadow=0;
	};
	class ProgressFont
	{
		font="TahomaB";
		size="( 21 / 408 )";
		shadow=0;
	};
	class DebugFont
	{
		font="LucidaConsoleB";
		size=0.02;
	};
	class CheatXFont
	{
		font="LucidaConsoleB";
		size=0.037799999;
	};
	class FadeFont
	{
		font="LucidaConsoleB";
		size=0.037799999;
		shadow=0;
	};
	class DragAndDropFont
	{
		font="TahomaB";
		size="( 16 / 408 )";
		colorEnabled[]={0.80000001,0.80000001,0.80000001,0.75};
		colorDisabled[]={0.69999999,0.1,0,0.75};
		hideCursor=0;
		shadow=0;
	};
	class TooltipFont
	{
		font="TahomaB";
		size="( 16 / 408 )";
		shadow=0;
	};
	class Compass
	{
		left=0;
		top=0;
		width=1;
		height=0.039999999;
		color[]={0.80000001,0.80000001,0.80000001,1};
		dirColor[]={0.80000001,0.80000001,0.80000001,1};
		turretDirColor[]={0.80000001,0.60000002,0,1};
		texture0="#(argb,8,8,3)color(1,1,1,1)";
		texture90="#(argb,8,8,3)color(1,1,1,1)";
		texture180="#(argb,8,8,3)color(1,1,1,1)";
		texture270="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
	class PlayerInfo
	{
		top=0.02;
		class HealthBar
		{
			stallWarning=0.2;
		};
		dimmStartTime=5;
		dimmEndTime=10;
	};
	class Hint
	{
		dimmStartTime=30;
		dimmEndTime=35;
		sound[]=
		{
			"",
			0.31622776,
			1
		};
	};
	class TaskHint
	{
		dimmStartTime=1;
		dimShowTime=4;
		dimmEndTime=5;
	};
	class Chat
	{
		sound[]=
		{
			"",
			0.31622776,
			1
		};
	};
	class Actions
	{
		font="TahomaB";
		size="( 16 / 408 )";
		right=1;
		bottom=0.81;
		rows=4;
		arrowWidth=0.022500001;
		arrowHeight=0.029999999;
		iconArrowUp="#(argb,8,8,3)color(1,1,1,1)";
		iconArrowDown="#(argb,8,8,3)color(1,1,1,1)";
		colorBackground[]={0.2,0.15000001,0.1,0.80000001};
		colorBackgroundSelected[]={0,0,0,0};
		colorText[]={0.80000001,0.80000001,0.80000001,1};
		colorSelect[]={0.2,0.80000001,0.2,1};
		background="#(argb,8,8,3)color(0,0,0,1)";
		underlineSelected=1;
		shadow=0;
	};
	class DefaultAction
	{
		showHint=1;
		showNext=1;
		showLine=1;
		font="TahomaB";
		size="( 21 / 408 )";
		fontNext="TahomaB";
		sizeNext="( 16 / 408 )";
		offsetX=0;
		offsetY=0;
		relativeToCursor=1;
		hotspotX=0;
		hotspotY=0;
		colorText[]={1,1,1,1};
		background="#(argb,8,8,3)color(0,0,0,0)";
		shadow=0;
		textTipFade=1;
		textTipDelay=1.5;
	};
	class GroupInfo
	{
		imageDefaultWeapons="#(argb,8,8,3)color(1,1,1,1)";
		imageNoWeapons="#(argb,8,8,3)color(1,1,1,1)";
	};
	class ConnectionLost
	{
		left=0;
		top=0.44999999;
		width=1;
		height=0.1;
		font="TahomaB";
		size="( 16 / 408 )";
		color[]={1,0.5,0.25,1};
		shadow=0;
	};
	class Cursor
	{
		aim="#(argb,8,8,3)color(1,1,1,1)";
		weapon="#(argb,8,8,3)color(1,1,1,1)";
		freelook="#(argb,8,8,3)color(1,1,1,1)";
		outArrow="#(argb,8,8,3)color(1,1,1,1)";
		select_target="#(argb,8,8,3)color(1,1,1,1)";
		known_target="#(argb,8,8,3)color(1,1,1,1)";
		lock_target="#(argb,8,8,3)color(1,1,1,1)";
		gunner_lock="#(argb,8,8,3)color(1,1,1,1)";
		dimmCmdStartTime=5;
		dimmCmdEndTime=10;
		mission="#(argb,8,8,3)color(1,1,1,1)";
		missionFade=0.30000001;
		missionColor1[]={0.80000001,0.60000002,0,0.5};
		missionColor2[]={0.80000001,0.60000002,0,1};
		customMark="#(argb,8,8,3)color(1,0.53,0.12,1)";
		customMarkColor[]={0.80000001,0.80000001,0.80000001,1};
		blinkingPeriod=2;
		freeLookActionColor[]={0.69999999,0.1,0,1};
		freeLookActionColorSelected[]={0,0.60000002,0,1};
		freeLookActionColorAvailable[]={0.1,0.1,0.89999998,1};
		shadow=0;
		infoTextShadow=0;
		font="TahomaB";
		size="( 16 / 408 )";
		tactical="#(argb,8,8,3)color(1,1,1,1)";
		move="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.80000001,0.80000001,0.80000001,1};
		colorBackground[]={0,0,0,0.64999998};
		colorLocked[]={0.69999999,0.1,0,1};
		dimm=0.15000001;
		activeWidth=0.1875;
		activeHeight=0.25;
		activeMinimum=0.07;
		activeMaximum=0.12;
		throwCursorMinScale=1;
		throwCursorMaxScale=2;
		throwCursorFadeSpeed=4;
	};
	class PeripheralVision
	{
		cueTexture="#(argb,8,8,3)color(1,1,1,1)";
		bloodTexture="#(argb,8,8,3)color(1,1,1,1)";
		bloodColor[]={0.80000001,0.1,0.15000001,1};
		cueColor[]={1,1,1,0.69999999};
		cueEnemyColor[]={1,0.30000001,0.30000001,1};
		cueFriendlyColor[]={0.5,1,0.5,0.69999999};
		shadow=0;
	};
	class HitZones
	{
		hitZonesTexture="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
};
class CfgDiary
{
	class FixedPages
	{
		class Tasks
		{
			type="DiaryPageTasks";
			displayName="$STR_LOGSUBJECT_BRIEFING";
			picture="#(argb,8,8,3)color(1,1,1,1)";
			shortcuts[]={};
			showEmpty=0;
			indexTitle="%TASK_DESCRIPTION_SHORT";
			indexIcon="%ICON_TASK_STATE";
			recordTitle="%DATE, %TIME";
			text="%TASK_DESCRIPTION %LINK_SET_CURRENT_TASK";
		};
		class Diary
		{
			type="DiaryPageDiary";
			displayName="$STR_LOGSUBJECT_DIARY";
			picture="#(argb,8,8,3)color(1,1,1,1)";
			shortcuts[]={};
			showEmpty=0;
			indexTitle="%TITLE";
			indexIcon="";
			recordTitle="%DATE, %TIME";
			text="%TEXT";
		};
		class Conversation
		{
			type="DiaryPageConversation";
			displayName="$STR_LOGSUBJECT_CONVERSATION";
			picture="#(argb,8,8,3)color(1,1,1,1)";
			shortcuts[]={};
			showEmpty=0;
			indexTitle="%UNIT_NAME";
			indexIcon="";
			recordTitle="%TARGET_NAME";
			text="%TEXT";
		};
		class Units
		{
			type="DiaryPageUnits";
			displayName="$STR_DISP_SRVSETUP_UNITS";
			picture="#(argb,8,8,3)color(1,1,1,1)";
			shortcuts[]={};
			showEmpty=0;
			indexTitle="%UNIT_NAME";
			indexIcon="%ICON_UNIT_TYPE";
			recordTitle="%UNIT_NAME";
			text="%UNIT_GRP_NAME %UNIT_ID%UNIT_GRP_LEADER<br/>%$STR_GEAR_VEHICLE %UNIT_VEH_NAME %UNIT_VEH_POSITION<br/><br/>%LINK_UNIT_GEAR%LINK_UNIT_TEAMSWITCH%LINK_UNIT_CONVERSATION";
			skill=" - %SKILL_NAME ... %SKILL_LEVEL<br/>";
		};
		class Players
		{
			type="DiaryPagePlayers";
			displayName="$STR_LOGSUBJECT_PLAYERS";
			picture="#(argb,8,8,3)color(1,1,1,1)";
			shortcuts[]={};
			showEmpty=0;
			indexTitle="%PLAYER_NAME";
			indexIcon="%ICON_PLAYERS_STATE";
			recordTitle="%PLAYER_NAME";
			text="%$STR_DISP_MP_PL_NAME %PLAYER_FULLNAME<br/>%$STR_DISP_MP_PL_MAIL %PLAYER_EMAIL<br/>%$STR_DISP_MP_PL_ICQ %PLAYER_ICQ<br/>%$STR_DISP_MP_PL_REMARK %PLAYER_REMARK<br/><br/>%$STR_DISP_MP_PING %PLAYER_PING_MIN %PLAYER_PING_AVG %PLAYER_PING_MAX<br/>%$STR_DISP_MP_BANDWIDTH %PLAYER_BANDWIDTH_MIN %PLAYER_BANDWIDTH_AVG %PLAYER_BANDWIDTH_MAX<br/>%$STR_DISP_MP_DESYNC %PLAYER_DESYNC<br/><br/>%PLAYER_SQUAD<br/>%LINK_PLAYER_KICK%LINK_PLAYER_BAN%LINK_PLAYER_MUTE";
			squad="%$STR_DISP_MP_SQ<br/>  %$STR_DISP_MP_SQ_NAME %SQUAD_NAME<br/>  %$STR_DISP_MP_SQ_ID %SQUAD_ID<br/>  %$STR_DISP_MP_SQ_MAIL %SQUAD_EMAIL<br/>  %$STR_DISP_MP_SQ_WEB %SQUAD_WEB<br/>  <img image width=80 height=80 image='%SQUAD_PICTURE'><br/>%SQUAD_TITLE";
		};
		class Statistics
		{
			type="DiaryPageStatistics";
			displayName="$STR_LOGSUBJECT_STATISTICS";
			picture="#(argb,8,8,3)color(1,1,1,1)";
			shortcuts[]={};
			showEmpty=0;
			indexTitle="%$STR_LOGSUBJECT_STATISTICS";
			indexIcon="";
			recordTitle="%$STR_STAT_MISSION";
			text="%$STR_BRIEF_YOURKILLS<br/>%STAT_KILLS_ENEMY<br/>%$STR_BRIEF_YOURKILLS_FRIENDLY<br/>%STAT_KILLS_FRIENDLY<br/>%$STR_BRIEF_YOURKILLS_CIVIL<br/>%STAT_KILLS_CIVIL%<br/>%$STR_BRIEF_CASUALTIES<br/>%STAT_CASUALTIES";
			killsOnce="  %NAME<br/>";
			kills="  %COUNT x %NAME<br/>";
			casualtiesPlayerTotalOnce="  You (%NAME)<br/>";
			casualtiesPlayerTotal="  %COUNT x you (%NAME)<br/>";
			casualtiesPlayerOnce="  - by %NAME<br/>";
			casualtiesPlayer="  - %COUNT x by %NAME<br/>";
			casualtiesOnce="  %NAME<br/>";
			casualties="  %COUNT x %NAME<br/>";
		};
	};
	class Icons
	{
		unitNone="#(argb,8,8,3)color(0,0,0,0)";
		unitGroup="#(argb,8,8,3)color(0,1,0,1)";
		unitPlayable="#(argb,8,8,3)color(1,0,0,1)";
		unitGroupPlayable="#(argb,8,8,3)color(1,0.53,0.12,1)";
		taskNone="#(argb,8,8,3)color(0,0,0,0)";
		taskCreated="#(argb,8,8,3)color(0,0,0,1)";
		taskAssigned="#(argb,8,8,3)color(1,1,1,1)";
		taskSucceeded="#(argb,8,8,3)color(0,1,0,1)";
		taskFailed="#(argb,8,8,3)color(1,0,0,1)";
		taskCanceled="#(argb,8,8,3)color(1,0.53,0.12,1)";
		playerWest="#(argb,8,8,3)color(0,0,1,1)";
		playerEast="#(argb,8,8,3)color(1,0,0,1)";
		playerCiv="#(argb,8,8,3)color(1,1,1,1)";
		playerGuer="#(argb,8,8,3)color(0,1,0,1)";
		playerUnknown="#(argb,8,8,3)color(0,0,0,1)";
		playerBriefWest="#(argb,8,8,3)color(0,0,1,1)";
		playerBriefEast="#(argb,8,8,3)color(1,0,0,1)";
		playerBriefGuer="#(argb,8,8,3)color(0,1,0,1)";
		playerBriefCiv="#(argb,8,8,3)color(1,1,1,1)";
		playerBriefUnknown="#(argb,8,8,3)color(0,0,0,1)";
		playerConnecting="#(argb,8,8,3)color(0,0,0,1)";
	};
};
class CfgActions
{
	class None
	{
		priority=0;
		show=1;
		showWindow=0;
		hideOnUse=1;
		shortcut="";
		text="";
		textDefault="";
		textSimple="";
	};
	class GetInCommander: None
	{
		priority=0.89899999;
		showWindow=1;
		text="$STR_ACTION_GETIN_COMMANDER";
		textDefault="$STR_ACTION_GETIN_COMMANDER";
	};
	class GetInDriver: None
	{
		priority=0.89999998;
		showWindow=1;
		text="$STR_ACTION_GETIN_DRIVER";
		textDefault="$STR_ACTION_GETIN_DRIVER";
	};
	class GetInPilot: None
	{
		priority=0.90100002;
		showWindow=1;
		text="$STR_ACTION_GETIN_PILOT";
		textDefault="$STR_ACTION_GETIN_PILOT";
	};
	class GetInGunner: None
	{
		priority=0.898;
		showWindow=1;
		text="$STR_ACTION_GETIN_GUNNER";
		textDefault="$STR_ACTION_GETIN_GUNNER";
	};
	class GetInCargo: None
	{
		priority=0.89700001;
		showWindow=1;
		text="$STR_ACTION_GETIN_CARGO";
		textDefault="$STR_ACTION_GETIN_CARGO";
	};
	class GetInTurret: None
	{
		priority=0.898;
		showWindow=1;
		text="$STR_ACTION_GETIN_TURRET";
		textDefault="$STR_ACTION_GETIN_TURRET";
	};
	class Heal: None
	{
		priority=0.60000002;
		showWindow=1;
		text="$STR_ACTION_HEAL";
		textDefault="$STR_ACTION_HEAL";
	};
	class HealSoldier: None
	{
		priority=0.60000002;
		showWindow=1;
		text="$STR_ACTION_HEAL_SOLDIER";
		textDefault="$STR_ACTION_HEAL_SOLDIER";
	};
	class RepairVehicle: None
	{
		priority=0.60000002;
		showWindow=1;
		text="$STR_ACTION_REPAIR_VEHICLE";
		textDefault="$STR_ACTION_REPAIR_VEHICLE";
	};
	class FirstAid: None
	{
		priority=0.60000002;
		showWindow=1;
		text="$STR_ACTION_FIRST_AID";
		textDefault="$STR_ACTION_FIRST_AID";
	};
	class Repair: None
	{
		priority=0.5;
		showWindow=1;
		text="$STR_ACTION_REPAIR";
		textDefault="$STR_ACTION_REPAIR";
	};
	class Refuel: None
	{
		priority=0.5;
		showWindow=1;
		text="$STR_ACTION_REFUEL";
		textDefault="$STR_ACTION_REFUEL";
	};
	class GetOut: None
	{
		priority=0.89999998;
		showWindow=1;
		shortcut="GetOut";
		text="$STR_ACTION_GETOUT";
		textDefault="$STR_ACTION_GETOUT";
	};
	class LightOn: None
	{
		priority=0.30000001;
		text="$STR_ACTION_LIGHTON";
		textDefault="$STR_ACTION_LIGHTON";
	};
	class LightOff: LightOn
	{
		text="$STR_ACTION_LIGHTOFF";
		textDefault="$STR_ACTION_LIGHTOFF";
	};
	class SearchLightOn: None
	{
		priority=0.30000001;
		show=1;
		text="$STR_ACTION_SEARCHLIGHTS_ON";
		textDefault="$STR_ACTION_SEARCHLIGHTS_ON";
	};
	class SearchLightOff: SearchLightOn
	{
		text="$STR_ACTION_SEARCHLIGHTS_OFF";
		textDefault="$STR_ACTION_SEARCHLIGHTS_OFF";
	};
	class CollisionLightOn: None
	{
		priority=0.30000001;
		show=1;
		text="$STR_ACTION_COLLISIONLIGHTS_ON";
		textDefault="$STR_ACTION_COLLISIONLIGHTS_ON";
	};
	class CollisionLightOff: CollisionLightOn
	{
		text="$STR_ACTION_COLLISIONLIGHTS_OFF";
		textDefault="$STR_ACTION_COLLISIONLIGHTS_OFF";
	};
	class GunLightOn: None
	{
		priority=0.1;
		show=0;
		text="$STR_ACTION_LIGHTON";
		textDefault="$STR_ACTION_LIGHTON";
	};
	class GunLightOff: None
	{
		priority=0.1;
		show=0;
		text="$STR_ACTION_LIGHTOFF";
		textDefault="$STR_ACTION_LIGHTOFF";
	};
	class ArtilleryComputer: None
	{
		priority=0.1;
		show=1;
		text="$STR_artillery_computer";
		textDefault="$STR_artillery_computer";
	};
	class EngineOn: None
	{
		priority=0.1;
		text="$STR_ACTION_ENGINEON";
		textDefault="$STR_ACTION_ENGINEON";
	};
	class EngineOff: None
	{
		priority=0.1;
		text="$STR_ACTION_ENGINEOFF";
		textDefault="$STR_ACTION_ENGINEOFF";
	};
	class TakeVehicleControl: None
	{
		priority=10.1;
		text="$STR_ACTION_TAKE_CONTROL";
		textDefault="$STR_ACTION_TAKE_CONTROL";
	};
	class SuspendVehicleControl: None
	{
		priority=10.1;
		text="$STR_ACTION_SUSPEND_CONTROL";
		textDefault="$STR_ACTION_SUSPEND_CONTROL";
	};
	class LockVehicleControl: None
	{
		priority=10.1;
		text="$STR_ACTION_LOCK_CONTROL";
		textDefault="$STR_ACTION_LOCK_CONTROL";
	};
	class UnlockVehicleControl: None
	{
		priority=10.1;
		text="$STR_ACTION_UNLOCK_CONTROL";
		textDefault="$STR_ACTION_UNLOCK_CONTROL";
	};
	class SwitchMagazine: None
	{
		priority=0.5;
		shortcut="ReloadMagazine";
		text="$STR_ACTION_WEAPON";
		textDefault="$STR_ACTION_WEAPON";
	};
	class UseWeapon: None
	{
		priority=0.5;
		text="%1";
		textDefault="%1";
	};
	class LoadMagazine: None
	{
		priority=0.34999999;
		shortcut="ReloadMagazine";
		text="$STR_ACTION_MAGAZINE";
		textDefault="$STR_ACTION_MAGAZINE";
	};
	class LoadOtherMagazine: LoadMagazine
	{
	};
	class LoadEmptyMagazine: LoadMagazine
	{
		priority=1.5;
		showWindow=1;
	};
	class TakeItem: None
	{
		priority=1.6;
		showWindow=1;
		text="$STR_ACTION_TAKEITEM";
		textDefault="$STR_ACTION_TAKEITEM";
	};
	class TakeItemIntoHands: None
	{
		priority=1.6;
		showWindow=1;
		text="$STR_ACTION_TAKEITEMINTOHANDS";
		textDefault="$STR_ACTION_TAKEITEMINTOHANDS";
	};
	class DropItem: None
	{
		text="$STR_ACTION_DROPITEM";
		textDefault="$STR_ACTION_DROPITEM";
	};
	class TakeFlag: None
	{
		priority=0.99000001;
		showWindow=1;
		text="$STR_ACTION_TAKEFLAG";
		textDefault="$STR_ACTION_TAKEFLAG";
	};
	class ReturnFlag: None
	{
		priority=0.99000001;
		showWindow=1;
		text="$STR_ACTION_RETURNFLAG";
		textDefault="$STR_ACTION_RETURNFLAG";
	};
	class TurnIn: None
	{
		priority=0.94999999;
		shortcut="TurnIn";
		text="$STR_ACTION_TURNIN";
		textDefault="$STR_ACTION_TURNIN";
	};
	class TurnOut: None
	{
		priority=0.60000002;
		shortcut="TurnOut";
		text="$STR_ACTION_TURNOUT";
		textDefault="$STR_ACTION_TURNOUT";
	};
	class SitDown: None
	{
		priority=0.1;
		shortcut="SitDown";
		show=0;
		text="$STR_ACTION_SITDOWN";
		textDefault="$STR_ACTION_SITDOWN";
	};
	class Land: None
	{
		priority=0.89999998;
		text="$STR_ACTION_LAND";
		textDefault="$STR_ACTION_LAND";
	};
	class CancelLand: None
	{
		priority=0.89999998;
		text="$STR_ACTION_CANCEL_LAND";
		textDefault="$STR_ACTION_CANCEL_LAND";
	};
	class Eject: None
	{
		priority=0.050000001;
		shortcut="Eject";
		text="$STR_ACTION_EJECT";
		textDefault="$STR_ACTION_EJECT";
	};
	class MoveToDriver: None
	{
		priority=0.039999999;
		shortcut="SwapGunner";
		text="$STR_ACTION_TO_DRIVER";
		textDefault="$STR_ACTION_TO_DRIVER";
	};
	class MoveToPilot: MoveToDriver
	{
		text="$STR_ACTION_TO_PILOT";
		textDefault="$STR_ACTION_TO_PILOT";
	};
	class MoveToGunner: None
	{
		priority=0.039999999;
		shortcut="SwapGunner";
		text="$STR_ACTION_TO_GUNNER";
		textDefault="$STR_ACTION_TO_GUNNER";
	};
	class MoveToCommander: None
	{
		priority=0.039999999;
		shortcut="SwapGunner";
		text="$STR_ACTION_TO_COMMANDER";
		textDefault="$STR_ACTION_TO_COMMANDER";
	};
	class MoveToCargo: None
	{
		priority=0.0099999998;
		text="$STR_ACTION_TO_CARGO";
		textDefault="$STR_ACTION_TO_CARGO";
	};
	class MoveToTurret: None
	{
		priority=0.02;
		shortcut="SwapGunner";
		text="$STR_ACTION_TO_TURRET";
		textDefault="$STR_ACTION_TO_TURRET";
	};
	class HideBody: None
	{
		priority=0.50999999;
		text="$STR_ACTION_HIDE_BODY";
		textDefault="$STR_ACTION_HIDE_BODY";
	};
	class TouchOff: None
	{
		priority=0.51499999;
		text="$STR_ACTION_TOUCH_OFF";
		textDefault="$STR_ACTION_TOUCH_OFF";
	};
	class SetTimer: None
	{
		priority=0.51599997;
		showWindow=1;
		text="$STR_ACTION_SET_TIMER";
		textDefault="$STR_ACTION_SET_TIMER";
	};
	class StartTimer: SetTimer
	{
		text="$STR_ACTION_START_TIMER";
		textDefault="$STR_ACTION_START_TIMER";
	};
	class Deactivate: None
	{
		priority=0.514;
		showWindow=1;
		text="$STR_ACTION_DEACTIVATE";
		textDefault="$STR_ACTION_DEACTIVATE";
	};
	class NVGoggles: None
	{
		priority=0.51099998;
		text="$STR_ACTION_TAKEON_GOGGLES";
		textDefault="$STR_ACTION_TAKEON_GOGGLES";
	};
	class NVGogglesOff: NVGoggles
	{
		text="$STR_ACTION_TAKEOFF_GOGGLES";
		textDefault="$STR_ACTION_TAKEOFF_GOGGLES";
	};
	class ManualFire: None
	{
		priority=0.58999997;
		shortcut="HeliManualFire";
		text="$STR_ACTION_MANUAL_FIRE";
		textDefault="$STR_ACTION_MANUAL_FIRE";
	};
	class ManualFireCancel: ManualFire
	{
		text="$STR_ACTION_MANUAL_FIRE_CANCEL";
		textDefault="$STR_ACTION_MANUAL_FIRE_CANCEL";
	};
	class AutoHover: None
	{
		shortcut="AutoHover";
		priority=0.89999998;
		text="$STR_ACTION_HOVER";
		textDefault="$STR_ACTION_HOVER";
		showWindow=0;
	};
	class AutoHoverCancel: AutoHover
	{
		shortcut="AutoHoverCancel";
		text="$STR_ACTION_HOVER_CANCEL";
		textDefault="$STR_ACTION_HOVER_CANCEL";
		showWindow=0;
		priority=1.9;
	};
	class StrokeFist: None
	{
		priority=0.1;
		text="$STR_ACTION_STROKEFIST";
		textDefault="$STR_ACTION_STROKEFIST";
	};
	class StrokeGun: None
	{
		priority=0.1;
		text="$STR_ACTION_STROKEGUN";
		textDefault="$STR_ACTION_STROKEGUN";
	};
	class LadderUp: None
	{
		text="$STR_ACTION_LADDERUP";
		textDefault="$STR_ACTION_LADDERUP";
	};
	class LadderDown: None
	{
		text="$STR_ACTION_LADDERDOWN";
		textDefault="$STR_ACTION_LADDERDOWN";
	};
	class LadderOnDown: None
	{
		priority=10;
		showWindow=1;
		text="$STR_ACTION_LADDERDOWN";
		textDefault="$STR_ACTION_LADDERDOWN";
	};
	class LadderOnUp: None
	{
		priority=10;
		showWindow=1;
		text="$STR_ACTION_LADDERUP";
		textDefault="$STR_ACTION_LADDERUP";
	};
	class LadderOff: None
	{
		priority=10;
		text="$STR_ACTION_LADDEROFF";
		textDefault="$STR_ACTION_LADDEROFF";
	};
	class FireInflame: None
	{
		priority=0.99000001;
		showWindow=1;
		text="$STR_ACTION_FIRE_INFLAME";
		textDefault="$STR_ACTION_FIRE_INFLAME";
	};
	class FirePutDown: None
	{
		priority=0.99000001;
		showWindow=1;
		text="$STR_ACTION_FIRE_PUT_DOWN";
		textDefault="$STR_ACTION_FIRE_PUT_DOWN";
	};
	class LandGear: None
	{
		priority=0.80000001;
		hideOnUse=0;
		shortcut="LandGear";
		text="$STR_ACTION_GEAR_DOWN";
		textDefault="$STR_ACTION_GEAR_DOWN";
	};
	class LandGearUp: LandGear
	{
		shortcut="LandGearUp";
		text="$STR_ACTION_GEAR_UP";
		textDefault="$STR_ACTION_GEAR_UP";
	};
	class FlapsDown: None
	{
		priority=0.69999999;
		hideOnUse=0;
		shortcut="FlapsDown";
		text="$STR_ACTION_FLAPS_DOWN";
		textDefault="$STR_ACTION_FLAPS_DOWN";
	};
	class FlapsUp: None
	{
		priority=0.69999999;
		hideOnUse=0;
		shortcut="FlapsUp";
		text="$STR_ACTION_FLAPS_UP";
		textDefault="$STR_ACTION_FLAPS_UP";
	};
	class Salute: None
	{
		priority=0.11;
		shortcut="Salute";
		show=0;
		text="$STR_ACTION_SALUTE";
		textDefault="$STR_ACTION_SALUTE";
	};
	class Taunt: None
	{
		priority=0.1;
		shortcut="Taunt";
		show=0;
		text="$STR_ACTION_TAUNT";
		textDefault="$STR_ACTION_TAUNT";
	};
	class ScudLaunch: None
	{
		priority=0.039999999;
		text="$STR_ACTION_SCUDLAUNCH";
		textDefault="$STR_ACTION_SCUDLAUNCH";
	};
	class ScudStart: None
	{
		priority=0.039999999;
		text="$STR_ACTION_SCUDSTART";
		textDefault="$STR_ACTION_SCUDSTART";
	};
	class ScudCancel: None
	{
		priority=0.039000001;
		text="$STR_ACTION_SCUDCANCEL";
		textDefault="$STR_ACTION_SCUDCANCEL";
	};
	class User: None
	{
		priority=1.5;
		showWindow=1;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class UserType: None
	{
		priority=1.4;
		showWindow=1;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class ObjectAction: None
	{
		priority=0.1;
		showWindow=1;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class SurfaceAction: None
	{
		priority=0.1;
		showWindow=1;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class Crafting: None
	{
		priority=0.1;
		showWindow=0;
		text="%1";
		textDefault="%2";
		textToolTip="%3";
	};
	class DetachAttachment: None
	{
		priority=0.2;
		showWindow=0;
		text="$STR_ACTION_DETACH_ATTACHMENT";
		textDefault="$STR_ACTION_DETACH_ATTACHMENT";
		textToolTip="$STR_ACTION_DETACH_ATTACHMENT";
	};
	class TakeMine: None
	{
		priority=0.51200002;
		showWindow=1;
		text="$STR_ACTION_TAKE_MINE";
		textDefault="$STR_ACTION_TAKE_MINE";
	};
	class DeactivateMine: None
	{
		priority=0.51300001;
		showWindow=1;
		text="$STR_ACTION_DEACTIVATE_MINE";
		textDefault="$STR_ACTION_DEACTIVATE_MINE";
	};
	class PutItem: None
	{
		priority=0.51899999;
		text="%1";
		textDefault="%1";
	};
	class CancelAction: None
	{
		priority=20;
		showWindow=1;
		shortcut="CancelAction";
		text="$STR_ACTION_CANCEL_ACTION";
		textDefault="$STR_ACTION_CANCEL_ACTION";
	};
	class Gear: None
	{
		priority=0.51980001;
		showWindow=1;
		shortcut="Gear";
		text="$STR_ACTION_GEAR";
		textDefault="$STR_ACTION_GEAR";
	};
	class Inspect: None
	{
		priority=0;
		showWindow=0;
		text="$STR_ACTION_INSPECT";
		textDefault="$STR_ACTION_INSPECT";
	};
	class IRLaserOn: None
	{
		priority=0.1;
		show=0;
		text="Laser Enable";
		textDefault="Laser Enable";
	};
	class IRLaserOff: None
	{
		priority=0.1;
		show=0;
		text="Laser Disable";
		textDefault="Laser Disable";
	};
	class Talk: None
	{
		priority=2;
		showWindow=1;
		text="$STR_ACTION_ASK";
		textDefault="$STR_ACTION_ASK";
	};
	class Tell: None
	{
		priority=2;
		showWindow=1;
		text="""%1""";
		textDefault="""%1""";
	};
	class Surrender: None
	{
		priority=0.11;
		shortcut="Surrender";
		show=0;
		text="$STR_ACTION_SURRENDER";
		textDefault="$STR_ACTION_SURRENDER";
	};
	class GetOver: None
	{
		priority=0.11;
		shortcut="GetOver";
		show=0;
		text="$STR_ACTION_GET_OVER";
		textDefault="$STR_ACTION_GET_OVER";
	};
	class TransmitterOn: None
	{
		text="$STR_ACTION_TRANSMITTER_ON";
		textDefault="$STR_ACTION_TRANSMITTER_ON";
		priority=3;
		show=1;
	};
	class TransmitterOff: None
	{
		text="$STR_ACTION_TRANSMITTER_OFF";
		textDefault="$STR_ACTION_TRANSMITTER_OFF";
		priority=3;
		show=1;
	};
	class TransmitterNextChannel: None
	{
		text="$STR_ACTION_TRANSMITTER_NEXT";
		textDefault="$STR_ACTION_TRANSMITTER_NEXT";
		priority=3;
		show=1;
	};
	class TransmitterPrevChannel: None
	{
		text="$STR_ACTION_TRANSMITTER_PREV";
		textDefault="$STR_ACTION_TRANSMITTER_PREV";
		priority=3;
		show=1;
	};
	class RadioOn: None
	{
		text="$STR_ACTION_RADIO_ON";
		textDefault="$STR_ACTION_RADIO_ON";
		priority=3;
		show=1;
	};
	class RadioOff: None
	{
		text="$STR_ACTION_RADIO_OFF";
		textDefault="$STR_ACTION_RADIO_OFF";
		priority=3;
		show=1;
	};
	class RadioVolumeUp: None
	{
		text="$STR_ACTION_RADIO_VOLUME_UP";
		textDefault="$STR_ACTION_RADIO_VOLUME_UP";
		priority=3;
		show=1;
	};
	class RadioVolumeDown: None
	{
		text="$STR_ACTION_RADIO_VOLUME_DOWN";
		textDefault="$STR_ACTION_RADIO_VOLUME_DOWN";
		priority=3;
		show=1;
	};
	class RadioNextChannel: None
	{
		text="$STR_ACTION_RADIO_NEXT";
		textDefault="$STR_ACTION_RADIO_NEXT";
		priority=3;
		show=1;
	};
	class RadioPrevChannel: None
	{
		text="$STR_ACTION_RADIO_PREV";
		textDefault="$STR_ACTION_RADIO_PREV";
		priority=3;
		show=1;
	};
	class EnginesOnAuto: None
	{
		text="$STR_ACTION_ENGINES_AUTO_ON";
		textDefault="$STR_ACTION_ENGINES_AUTO_ON";
		priority=3;
		show=1;
	};
	class EnginesOffAuto: EnginesOnAuto
	{
		text="$STR_ACTION_ENGINES_AUTO_OFF";
		textDefault="$STR_ACTION_ENGINES_AUTO_OFF";
	};
	class HelicopterAutoTrimOn: None
	{
		text="$STR_ACTION_AUTOTRIM_ON";
		textDefault="$STR_ACTION_AUTOTRIM_ON";
		priority=3;
		show=1;
	};
	class HelicopterAutoTrimOff: None
	{
		text="$STR_ACTION_AUTOTRIM_OFF";
		textDefault="$STR_ACTION_AUTOTRIM_OFF";
		priority=3;
		show=1;
	};
	class HelicopterTrimOn: None
	{
		text="$STR_ACTION_TRIM_ON";
		textDefault="$STR_ACTION_TRIM_ON";
		priority=3;
		show=1;
	};
	class HelicopterTrimOff: None
	{
		text="$STR_ACTION_TRIM_OFF";
		textDefault="$STR_ACTION_TRIM_OFF";
		priority=3;
		show=1;
	};
	class BatteriesOn: None
	{
		text="$STR_ACTION_BATTERIES_ON";
		textDefault="$STR_ACTION_BATTERIES_ON";
		priority=3;
		show=1;
	};
	class BatteriesOff: BatteriesOn
	{
		text="$STR_ACTION_BATTERIES_OFF";
		textDefault="$STR_ACTION_BATTERIES_OFF";
	};
	class APUOn: None
	{
		text="$STR_ACTION_APU_ON";
		textDefault="$STR_ACTION_APU_ON";
		priority=3;
		show=1;
	};
	class APUOff: APUOn
	{
		text="$STR_ACTION_APU_OFF";
		textDefault="$STR_ACTION_APU_OFF";
	};
	class RotorBrakeOn: None
	{
		text="$STR_ACTION_ROTOR_BRAKE_ON";
		textDefault="$STR_ACTION_ROTOR_BRAKE_ON";
		priority=3;
		show=1;
	};
	class RotorBrakeOff: RotorBrakeOn
	{
		text="$STR_ACTION_ROTOR_BRAKE_OFF";
		textDefault="$STR_ACTION_ROTOR_BRAKE_OFF";
	};
	class StarterOn1: None
	{
		text="$STR_ACTION_STARTER1_ON";
		textDefault="$STR_ACTION_STARTER1_ON";
		priority=3;
		show=1;
	};
	class StarterOff1: StarterOn1
	{
		text="$STR_ACTION_STARTER1_OFF";
		textDefault="$STR_ACTION_STARTER1_OFF";
	};
	class StarterOn2: None
	{
		text="$STR_ACTION_STARTER2_ON";
		textDefault="$STR_ACTION_STARTER2_ON";
		priority=3;
		show=1;
	};
	class StarterOff2: StarterOn2
	{
		text="$STR_ACTION_STARTER2_OFF";
		textDefault="$STR_ACTION_STARTER2_OFF";
	};
	class StarterOn3: None
	{
		text="$STR_ACTION_STARTER3_ON";
		textDefault="$STR_ACTION_STARTER3_ON";
		priority=3;
		show=1;
	};
	class StarterOff3: StarterOn3
	{
		text="$STR_ACTION_STARTER3_OFF";
		textDefault="$STR_ACTION_STARTER3_OFF";
	};
	class ThrottleOff1: None
	{
		text="$STR_ACTION_THROTTLE1_OFF";
		textDefault="$STR_ACTION_THROTTLE1_OFF";
		priority=3;
		show=1;
	};
	class ThrottleIdle1: ThrottleOff1
	{
		text="$STR_ACTION_THROTTLE1_IDLE";
		textDefault="$STR_ACTION_THROTTLE1_IDLE";
	};
	class ThrottleFull1: ThrottleOff1
	{
		text="$STR_ACTION_THROTTLE1_FULL";
		textDefault="$STR_ACTION_THROTTLE1_FULL";
	};
	class ThrottleOff2: None
	{
		text="$STR_ACTION_THROTTLE2_OFF";
		textDefault="$STR_ACTION_THROTTLE2_OFF";
		priority=3;
		show=1;
	};
	class ThrottleIdle2: ThrottleOff2
	{
		text="$STR_ACTION_THROTTLE2_IDLE";
		textDefault="$STR_ACTION_THROTTLE2_IDLE";
	};
	class ThrottleFull2: ThrottleOff2
	{
		text="$STR_ACTION_THROTTLE2_FULL";
		textDefault="$STR_ACTION_THROTTLE2_FULL";
	};
	class ThrottleOff3: None
	{
		text="$STR_ACTION_THROTTLE3_OFF";
		textDefault="$STR_ACTION_THROTTLE3_OFF";
		priority=3;
		show=1;
	};
	class ThrottleIdle3: ThrottleOff3
	{
		text="$STR_ACTION_THROTTLE3_IDLE";
		textDefault="$STR_ACTION_THROTTLE3_IDLE";
	};
	class ThrottleFull3: ThrottleOff3
	{
		text="$STR_ACTION_THROTTLE3_FULL";
		textDefault="$STR_ACTION_THROTTLE3_FULL";
	};
	class WheelsBrakeOn: None
	{
		text="$STR_ACTION_BRAKE_ON";
		textDefault="$STR_ACTION_BRAKE_ON";
		priority=3;
		show=1;
	};
	class WheelsBrakeOff: WheelsBrakeOn
	{
		text="$STR_ACTION_BRAKE_OFF";
		textDefault="$STR_ACTION_BRAKE_OFF";
	};
};
class PreloadTextures
{
	class CfgInGameUI
	{
		imageCornerElement="*";
		class PeripheralVision
		{
			cueTexture="\*";
			bloodTexture="\*";
		};
		class Cursor
		{
			aim="*";
			weapon="*";
			select_target="*";
			lock_target="*";
			mission="*";
			tactical="*";
			move="*";
			outArrow="*";
		};
	};
	class CfgCloudletShapes
	{
		cloudletSmoke="@*";
		cloudletWater="@*";
		cloudletFire="@*";
	};
};
class CfgMissions
{
	class Cutscenes
	{
	};
	class Missions
	{
	};
	class MPMissions
	{
	};
	class Templates
	{
	};
	class MPTemplates
	{
	};
};
pboTryEntity="textLog ""%1""";
pboTryWeapon="textLog ""%1""";
pboIsEntityLocked="false";
pboIsWeaponLocked="false";
class CfgDefaultKeysPresets
{
	class Default
	{
		displayName="Default";
		default=1;
		class Mappings
		{
			moveForward[]={17,200};
			moveBack[]={31,208};
			turnLeft[]={30,203};
			turnRight[]={32,205};
			moveUp[]={};
			moveDown[]={};
			moveFastForward[]=
			{
				"256+0x11"
			};
			moveSlowForward[]={};
			moveLeft[]={211};
			moveRight[]={207};
			evasiveForward[]={};
			evasiveLeft[]={16};
			evasiveRight[]={18};
			evasiveBack[]={};
			stand[]={46};
			crouch[]={45};
			prone[]={44};
			toggleWeapons[]={33};
			fire[]=
			{
				{29,65536}
			};
			defaultAction[]={65536};
			reloadMagazine[]={19};
			lockTargets[]={15};
			lockEmptyTargets[]=
			{
				{29,15}
			};
			lockTarget[]=
			{
				"0x00010000  + 1"
			};
			revealTarget[]=
			{
				"0x00010000  + 1"
			};
			tempRaiseWeapon[]={};
			toggleRaiseWeapon[]=
			{
				{157,19},
				"256+0x1D"
			};
			prevAction[]=
			{
				26,
				"(0x00100000 +4)"
			};
			nextAction[]=
			{
				27,
				"(0x00100000 +5)"
			};
			action[]=
			{
				28,
				"0x00010000  + 2"
			};
			actionContext[]={65536};
			actionFreeLook[]={65536};
			headlights[]={38};
			nightVision[]={49};
			minimap[]={};
			minimapToggle[]=
			{
				{157,50}
			};
			showMap[]={50};
			hideMap[]={50};
			help[]={35};
			timeInc[]={13};
			timeDec[]={12};
			optics[]=
			{
				82,
				"0x00010000 +128+1"
			};
			aimWeaponHold[]={57};
			opticsMode[]={181};
			personView[]={156};
			tacticalView[]={83};
			liteUnitInfoToggle[]=
			{
				{157,35}
			};
			zoomIn[]={78};
			zoomInToggle[]=
			{
				"256+0x4E"
			};
			zoomOut[]={74};
			zoomOutToggle[]=
			{
				"256+0x4A"
			};
			zoomContIn[]={};
			zoomContOut[]={};
			zeroingUp[]={201};
			zeroingDown[]={209};
			lookAround[]={56};
			lookAroundToggle[]=
			{
				55,
				"256+0x38"
			};
			lookLeftDown[]={79};
			lookDown[]={80};
			lookRightDown[]={81};
			lookLeft[]={75};
			lookCenter[]={76};
			lookRight[]={77};
			lookLeftUp[]={71};
			lookUp[]={72};
			lookRightUp[]={73};
			lookLeftCont[]=
			{
				"0x00080000  + 1"
			};
			lookRightCont[]=
			{
				"0x00080000  + 7"
			};
			lookDownCont[]=
			{
				"0x00080000  + 0"
			};
			lookUpCont[]=
			{
				"0x00080000  + 6"
			};
			lookShiftLeftCont[]=
			{
				"0x00080000  + 3"
			};
			lookShiftRightCont[]=
			{
				"0x00080000  + 9"
			};
			lookShiftUpCont[]=
			{
				"0x00080000  + 4"
			};
			lookShiftDownCont[]={};
			lookShiftForwardCont[]=
			{
				"0x00080000  + 11"
			};
			lookShiftBackCont[]={};
			lookRollLeftCont[]=
			{
				"0x00080000  + 2"
			};
			lookRollRightCont[]=
			{
				"0x00080000  + 8"
			};
			lookShiftLeft[]={};
			lookShiftRight[]={};
			lookShiftUp[]=
			{
				{29,201}
			};
			lookShiftDown[]=
			{
				{29,209}
			};
			lookShiftForward[]={};
			lookShiftBack[]={};
			lookRollLeft[]=
			{
				{29,16}
			};
			lookRollRight[]=
			{
				{29,18}
			};
			lookShiftCenter[]=
			{
				{29,76}
			};
			freeHeadMove[]={29};
			leanLeft[]=
			{
				16,
				"0x00080000  + 3"
			};
			leanRight[]=
			{
				18,
				"0x00080000  + 9"
			};
			leanLeftToggle[]=
			{
				"256+0x10"
			};
			leanRightToggle[]=
			{
				"256+0x12"
			};
			prevChannel[]={51};
			nextChannel[]={52};
			chat[]={53};
			voiceOverNet[]=
			{
				"256+0x3A"
			};
			pushToTalk[]={58};
			networkStats[]={23};
			networkPlayers[]={25};
			DSInterface[]=
			{
				{54,25}
			};
			turbo[]={};
			vehicleTurbo[]={42};
			holdBreath[]=
			{
				"0x00010000  + 1"
			};
			salute[]={43};
			taunt[]={};
			sitDown[]={40};
			walk[]={};
			walkRunToggle[]=
			{
				"256+0x2A"
			};
			walkRunTemp[]={42};
			getOver[]={47};
			aimUp[]=
			{
				"(0x00100000 +2)"
			};
			aimDown[]=
			{
				"(0x00100000 +3)"
			};
			aimLeft[]=
			{
				"(0x00100000 +0)"
			};
			aimRight[]=
			{
				"(0x00100000 +1)"
			};
			aimHeadUp[]=
			{
				"(0x00100000 +2)"
			};
			aimHeadDown[]=
			{
				"(0x00100000 +3)"
			};
			aimHeadLeft[]=
			{
				"(0x00100000 +0)"
			};
			aimHeadRight[]=
			{
				"(0x00100000 +1)"
			};
			ingamePause[]={1};
			menuSelect[]={};
			menuBack[]=
			{
				14,
				"0x00010000 +128+1"
			};
			heliUp[]={16};
			heliDown[]={44};
			heliLeft[]=
			{
				"(0x00100000 +0)"
			};
			heliRight[]=
			{
				"(0x00100000 +1)"
			};
			airBankLeft[]={30,203};
			airBankRight[]={32,205};
			heliRudderLeft[]={45,211};
			heliRudderRight[]={46,207};
			heliForward[]=
			{
				17,
				200,
				"(0x00100000 +3)"
			};
			heliBack[]=
			{
				31,
				208,
				"(0x00100000 +2)"
			};
			heliFastForward[]={18};
			landGear[]=
			{
				{157,34}
			};
			landGearUp[]=
			{
				{157,34}
			};
			flapsDown[]=
			{
				{157,37}
			};
			flapsUp[]=
			{
				{157,38}
			};
			heliCyclicLeft[]={30,203};
			heliCyclicRight[]={32,205};
			heliCyclicForward[]=
			{
				17,
				200,
				"(0x00100000 +3)"
			};
			heliCyclicBack[]=
			{
				31,
				208,
				"(0x00100000 +2)"
			};
			heliCollectiveRaise[]={16};
			heliCollectiveLower[]={44};
			heliThrottleIncrease1[]=
			{
				{157,210}
			};
			heliThrottleDecrease1[]=
			{
				{157,211}
			};
			heliThrottleIncrease2[]=
			{
				{157,199}
			};
			heliThrottleDecrease2[]=
			{
				{157,207}
			};
			heliThrottleIncrease3[]=
			{
				{157,201}
			};
			heliThrottleDecrease3[]=
			{
				{157,209}
			};
			heliStarterToggle1[]=
			{
				{157,2}
			};
			heliStarterToggle2[]=
			{
				{157,3}
			};
			heliStarterToggle3[]=
			{
				{157,4}
			};
			heliBatteriesToggle[]=
			{
				{157,48}
			};
			heliRotorBrakeToggle[]=
			{
				{157,19}
			};
			heliEnginesToggle[]=
			{
				{157,18}
			};
			heliAPUToggle[]=
			{
				{157,30}
			};
			heliWheelsBrake[]=
			{
				{157,17}
			};
			helicopterTrimOn[]=
			{
				{157,76}
			};
			helicopterTrimOff[]=
			{
				{157,83}
			};
			HeliTrimLeft[]=
			{
				{157,75}
			};
			HeliTrimRight[]=
			{
				{157,77}
			};
			HeliTrimForward[]=
			{
				{157,72}
			};
			HeliTrimBackward[]=
			{
				{157,80}
			};
			HeliTrimRudderLeft[]=
			{
				{157,79}
			};
			HeliTrimRudderRight[]=
			{
				{157,81}
			};
			autoHover[]=
			{
				"256+0x2B"
			};
			autoHoverCancel[]={43};
			seagullUp[]=
			{
				16,
				"(0x00100000 +3)"
			};
			seagullDown[]=
			{
				44,
				"(0x00100000 +2)"
			};
			seagullForward[]={17,200};
			seagullBack[]={31,208};
			seagullFastForward[]={18};
			carLeft[]={30,203};
			carRight[]={32,205};
			carWheelLeft[]=
			{
				"(0x00100000 +0)"
			};
			carWheelRight[]=
			{
				"(0x00100000 +1)"
			};
			carForward[]={17,200};
			carBack[]={31,208};
			carFastForward[]={18};
			carSlowForward[]={16};
			carAimUp[]=
			{
				"(0x00100000 +2)"
			};
			carAimDown[]=
			{
				"(0x00100000 +3)"
			};
			carAimLeft[]=
			{
				"(0x00100000 +0)"
			};
			carAimRight[]=
			{
				"(0x00100000 +1)"
			};
			commandLeft[]={30,203};
			commandRight[]={32,205};
			commandForward[]={17,200};
			commandBack[]={31,208};
			commandFast[]={18};
			commandSlow[]={16};
			vehLockTargets[]={15};
			vehLockEmptyTargets[]=
			{
				{29,15}
			};
			swapGunner[]={};
			heliManualFire[]={40};
			turnIn[]={45,46};
			turnOut[]={44};
			cancelAction[]={};
			commandWatch[]={56};
			teamSwitch[]={20};
			teamSwitchPrev[]={21};
			teamSwitchNext[]={22};
			gear[]={34};
			cheat1[]={220,219};
			cheat2[]={184};
			buldSwitchCamera[]={210};
			buldFreeLook[]={76};
			buldSelect[]={57};
			buldResetCamera[]={82};
			buldMagnetizePoints[]={63};
			buldMagnetizePlanes[]={64};
			buldMagnetizeYFixed[]={65};
			buldTerrainRaise1m[]={24};
			buldTerrainRaise10cm[]={22};
			buldTerrainLower1m[]={38};
			buldTerrainLower10cm[]={36};
			buldTerrainRaise5m[]={25};
			buldTerrainRaise50cm[]={23};
			buldTerrainLower5m[]={39};
			buldTerrainLower50cm[]={37};
			buldTerrainShowNode[]={35};
			buldSelectionType[]={31};
			buldLeft[]={203};
			buldRight[]={205};
			buldForward[]={200};
			buldBack[]={208};
			buldMoveLeft[]=
			{
				"(0x00100000 +0)"
			};
			buldMoveRight[]=
			{
				"(0x00100000 +1)"
			};
			buldMoveForward[]=
			{
				"(0x00100000 +2)"
			};
			buldMoveBack[]=
			{
				"(0x00100000 +3)"
			};
			buldTurbo[]={42};
			buldUp[]={201,16};
			buldDown[]={209,44};
			buldLookLeft[]={75};
			buldLookRight[]={77};
			buldLookUp[]={72};
			buldLookDown[]={80};
			buldZoomIn[]={78};
			buldZoomOut[]={74};
			buldTextureInfo[]={20};
			diary[]={36};
			switchCommand[]=
			{
				{29,57},
				221
			};
			item0[]={2};
			item1[]={3};
			item2[]={4};
			item3[]={5};
			item4[]={6};
			item5[]={7};
			item6[]={8};
			item7[]={9};
			item8[]={10};
			item9[]={11};
			itemsShow[]={41};
		};
	};
};
class JoystickSchemes
{
	class Joystick1
	{
		name="$STR_CONTROLLER_SCHEME_GENERIC_STICK";
		class ActionsMapping
		{
			keyHeliCyclicForward[]=
			{
				"0x00030000 +8+1"
			};
			keyHeliCyclicBack[]=
			{
				"0x00030000 +1"
			};
			keyHeliCyclicLeft[]=
			{
				"0x00030000 +8+0"
			};
			keyHeliCyclicRight[]=
			{
				"0x00030000 +0"
			};
			keyHeliCollectiveRaiseCont[]=
			{
				"0x00030000 +8+6"
			};
			keyHeliCollectiveLowerCont[]=
			{
				"0x00030000 +6"
			};
			keyAirBankLeft[]=
			{
				"0x00030000 +8+0"
			};
			keyAirBankRight[]=
			{
				"0x00030000 +0"
			};
			keyHeliForward[]=
			{
				"0x00030000 +8+1"
			};
			keyHeliBack[]=
			{
				"0x00030000 +1"
			};
			keySeagullUp[]=
			{
				"0x00030000 +1"
			};
			keySeagullDown[]=
			{
				"0x00030000 +8+1"
			};
			keyCarLeft[]=
			{
				"0x00030000 +8+0"
			};
			keyCarRight[]=
			{
				"0x00030000 +8+1"
			};
			keyCarForward[]=
			{
				"0x00030000 +1"
			};
			keyCarBack[]=
			{
				"0x00030000 +1"
			};
			keyVehLockTargets[]=
			{
				"0x00020000 +1"
			};
			keyToggleWeapons[]=
			{
				"0x00020000 +2"
			};
			keyDefaultAction[]=
			{
				"0x00020000 +0"
			};
			keyLockTargets[]=
			{
				"0x00020000 +1"
			};
			keyPrevAction[]=
			{
				"0x00020000 +6"
			};
			keyNextAction[]=
			{
				"0x00020000 +4"
			};
			keyAction[]=
			{
				"0x00020000 +5"
			};
			keyActionContext[]=
			{
				"0x00020000 +0"
			};
			keyActionFreeLook[]=
			{
				"0x00020000 +0"
			};
			keyZoomIn[]=
			{
				"0x00020000 +3"
			};
			keyLookLeftDown[]=
			{
				"0x00040000 +5"
			};
			keyLookDown[]=
			{
				"0x00040000 +4"
			};
			keyLookRightDown[]=
			{
				"0x00040000 +3"
			};
			keyLookLeft[]=
			{
				"0x00040000 +6"
			};
			keyLookRight[]=
			{
				"0x00040000 +2"
			};
			keyLookLeftUp[]=
			{
				"0x00040000 +7"
			};
			keyLookUp[]=
			{
				"0x00040000 +0"
			};
			keyLookRightUp[]=
			{
				"0x00040000 +1"
			};
		};
	};
	class Joystick2
	{
		name="$STR_CONTROLLER_SCHEME_GENERIC_THROTTLE";
		class ActionsMapping
		{
			keyHeliCollectiveRaiseCont[]=
			{
				"0x00030000 +2"
			};
			keyHeliCollectiveLowerCont[]=
			{
				"0x00030000 +8+2"
			};
			keyLookLeftDown[]=
			{
				"0x00040000 +5"
			};
			keyLookDown[]=
			{
				"0x00040000 +4"
			};
			keyLookRightDown[]=
			{
				"0x00040000 +3"
			};
			keyLookLeft[]=
			{
				"0x00040000 +6"
			};
			keyLookRight[]=
			{
				"0x00040000 +2"
			};
			keyLookLeftUp[]=
			{
				"0x00040000 +7"
			};
			keyLookUp[]=
			{
				"0x00040000 +0"
			};
			keyLookRightUp[]=
			{
				"0x00040000 +1"
			};
		};
	};
	class Joystick3
	{
		name="$STR_CONTROLLER_SCHEME_GENERIC_PEDALS";
		class ActionsMapping
		{
			keyHeliRudderLeft[]=
			{
				"0x00030000 +8+2"
			};
			keyHeliRudderRight[]=
			{
				"0x00030000 +2"
			};
		};
	};
	class Joystick4
	{
		name="TrackIR";
		class ActionsMapping
		{
			keyLeanLeft[]=
			{
				"0x00080000 +3"
			};
			keyLeanRight[]=
			{
				"0x00080000 +9"
			};
			keyZoomContIn[]=
			{
				"0x00080000 +11"
			};
			keyZoomContOut[]=
			{
				"0x00080000 +5"
			};
			keyLookLeftCont[]=
			{
				"0x00080000 +1"
			};
			keyLookRightCont[]=
			{
				"0x00080000 +7"
			};
			keyLookDownCont[]=
			{
				"0x00080000 +0"
			};
			keyLookUpCont[]=
			{
				"0x00080000 +6"
			};
			keyLookShiftLeftCont[]=
			{
				"0x00080000 +3"
			};
			keyLookShiftRightCont[]=
			{
				"0x00080000 +9"
			};
			keyLookRollLeftCont[]=
			{
				"0x00080000 +2"
			};
			keyLookRollRightCont[]=
			{
				"0x00080000 +8"
			};
		};
	};
};
DoubleTapAndHoldActions[]=
{
	"moveForward",
	"moveBack",
	"turnLeft",
	"turnRight",
	"moveFastForward",
	"moveSlowForward",
	"moveLeft",
	"moveRight",
	"defaultAction",
	"tempRaiseWeapon",
	"compass",
	"watch",
	"lookAround",
	"minimap",
	"zoomIn",
	"zoomOut"
};
class DefaultAnalogCurveDefs
{
	class MoveBack
	{
		deadZone=0.1;
		curve[]=
		{
			"Gamma",
			1,
			4
		};
	};
	class MoveFastForward
	{
		deadZone=0.1;
		curve[]=
		{
			"Gamma",
			1,
			4
		};
	};
	class TurnLeft
	{
		deadZone=0.1;
		curve[]=
		{
			"Gamma",
			1,
			2
		};
	};
	class TurnRight
	{
		deadZone=0.1;
		curve[]=
		{
			"Gamma",
			1,
			2
		};
	};
	class AimUp
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
			{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
			{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
		};
	};
	class AimDown
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
			{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
			{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
		};
	};
	class AimLeft
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.40000001,0.1,0.89999998,0.89999998,0.99000001,1.8,1,3},
			{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,1.5,1,2.5},
			{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,0.89999998,1,1.2}
		};
	};
	class AimRight
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.40000001,0.1,0.89999998,0.89999998,0.99000001,1.8,1,3},
			{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,1.5,1,2.5},
			{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,0.89999998,1,1.2}
		};
	};
	class AimHeadUp
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			2.5
		};
	};
	class AimHeadDown
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			2.5
		};
	};
	class AimHeadLeft
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			2,
			4
		};
	};
	class AimHeadRight
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			2,
			4
		};
	};
	class CarLeft
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			2,
			3
		};
	};
	class CarRight
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			2,
			3
		};
	};
	class CarBack
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class CarFastForward
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class CarAimUp
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.2,0.050000001,0.99000001,1.8,1,5.4000001},
			{0.69999999,0.2,0.029999999,0.99000001,1.2,1,4.8000002},
			{0.30000001,0.2,0.02,0.99000001,1.8,1,3}
		};
	};
	class CarAimDown
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.2,0.050000001,0.99000001,1.8,1,5.4000001},
			{0.69999999,0.2,0.029999999,0.99000001,1.2,1,4.8000002},
			{0.30000001,0.2,0.02,0.99000001,1.8,1,3}
		};
	};
	class CarAimLeft
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.40000001,0.1,0.89999998,0.89999998,0.99000001,3.5999999,1,9},
			{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
			{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
		};
	};
	class CarAimRight
	{
		deadZone=0;
		curve[]=
		{
			"LinRampZoom",
			{1,0.40000001,0.1,0.89999998,0.89999998,0.99000001,3.5999999,1,9},
			{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
			{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
		};
	};
	class HeliUp
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliDown
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliCyclicLeft
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliCyclicRight
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliRudderLeft
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliRudderRight
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliBack
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class HeliFastForward
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class SeagullUp
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class SeagullDown
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class SeagullBack
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
	class SeagullFastForward
	{
		deadZone=0;
		curve[]=
		{
			"Gamma",
			1,
			1.5
		};
	};
};
class DefaultMouseCurveDefs
{
};
class CfgDetectors
{
	objects[]=
	{
		"EmptyDetector"
	};
};
class CfgFaceWounds
{
	access=1;
	wounds[]=
	{
		"xicht_a.paa",
		"xicht_a_zranen",
		"xicht_b.paa",
		"xicht_a_zranen",
		"xicht_c.paa",
		"xicht_a_zranen",
		"xicht_d.paa",
		"xicht_a_zranen",
		"xicht_e.paa",
		"xicht_e_zranen",
		"xicht_f.paa",
		"xicht_a_zranen",
		"xicht_g.paa",
		"xicht_a_zranen",
		"xicht_h.paa",
		"xicht_a_zranen",
		"xicht_i.paa",
		"xicht_a_zranen",
		"xicht_j.paa",
		"xicht_a_zranen",
		"xicht_k.paa",
		"xicht_a_zranen",
		"xicht_l.paa",
		"xicht_a_zranen",
		"xicht_m.paa",
		"xicht_a_zranen",
		"xicht_n.paa",
		"xicht_a_zranen",
		"xicht_o.paa",
		"xicht_o_zranen",
		"xicht_p.paa",
		"xicht_a_zranen",
		"xicht_q.paa",
		"xicht_a_zranen",
		"xicht_r.paa",
		"xicht_a_zranen",
		"xicht_s.paa",
		"xicht_a_zranen",
		"xicht_t.paa",
		"xicht_a_zranen",
		"xicht_u.paa",
		"xicht_a_zranen",
		"xicht_v.paa",
		"xicht_v_zranen",
		"xicht_w.paa",
		"xicht_w_zranen",
		"xicht_x.paa",
		"xicht_a_zranen",
		"xicht_y.paa",
		"xicht_a_zranen",
		"xicht_z.paa",
		"xicht_a_zranen",
		"xicht_2a.paa",
		"xicht_a_zranen",
		"xicht_2b.paa",
		"xicht_w_zranen",
		"xicht_2c.paa",
		"xicht_a_zranen",
		"xicht_2d.paa",
		"xicht_v_zranen",
		"xicht_2e.paa",
		"xicht_a_zranen",
		"xicht_2f.paa",
		"xicht_a_zranen",
		"xicht_2g.paa",
		"xicht_w_zranen",
		"xicht_2h.paa",
		"xicht_a_zranen",
		"xicht_2i.paa",
		"xicht_a_zranen",
		"xicht_2j.paa",
		"xicht_a_zranen",
		"xicht_2k.paa",
		"xicht_a_zranen",
		"xicht_2l.paa",
		"xicht_a_zranen",
		"xicht_2m.paa",
		"xicht_a_zranen",
		"xicht_2n.paa",
		"xicht_a_zranen",
		"xicht_2o.paa",
		"xicht_a_zranen",
		"xicht_2p.paa",
		"xicht_2p_zranen",
		"xicht_2q.paa",
		"xicht_a_zranen",
		"xicht_2r.paa",
		"xicht_e_zranen",
		"xicht_2s.paa",
		"xicht_a_zranen",
		"xicht_2t.paa",
		"xicht_a_zranen",
		"xicht_2u.paa",
		"xicht_a_zranen",
		"xicht_2v.paa",
		"xicht_a_zranen",
		"xicht_2w.paa",
		"xicht_w_zranen",
		"xicht_2x.paa",
		"xicht_a_zranen",
		"xicht_2y.paa",
		"xicht_a_zranen",
		"xicht_2z.paa",
		"xicht_a_zranen",
		"\o\char\faceR01.paa",
		"\o\char\faceR01_d.pac",
		"\o\misc\eva.pac",
		"\o\misc\eva_d.pac",
		"\o\misc\kamila.pac",
		"\o\misc\kamila_d.pac",
		"\o\misc\lada.pac",
		"\o\misc\lada_d.pac",
		"\o\misc\lucie.pac",
		"\o\misc\lucie_d.pac",
		"\o\misc\marketa.pac",
		"\o\misc\marketa_d.pac",
		"\o\misc\nada.pac",
		"\o\misc\nada_d.pac",
		"armstrong_hh.pac",
		"armstrong_hi.pac",
		"blake_hh.pac",
		"blake_hi.pac",
		"gastovski_hh.pac",
		"gastovski_hh.pac",
		"geronimo_hh.pac",
		"geronimo_hi.pac",
		"gray_beard_hh.pac",
		"gray_beard_hi.pac",
		"guba_hh.pac",
		"guba_hi.pac",
		"mr_black_hh.pac",
		"mr_black_hi.pac",
		"troska_hh.pac",
		"troska_hi.pac",
		"Adam_hh.pac",
		"blackhair_shaved_HI.pac",
		"Andrew_hh.pac",
		"brown_shaved_HI.pac",
		"Andy_hh.pac",
		"brown_shaved_HI.pac",
		"Armstrong_HH.pac",
		"armstrong_HI.pac",
		"Baldhead_hh.pac",
		"baldhead_oholen_HI.pac",
		"Bart_hh.pac",
		"blackhair_shaved_HI.pac",
		"Black_beard_hh.pac",
		"blackhair_beard_HI.pac",
		"Black_shaved_hh.pac",
		"blackhair_shaved_HI.pac",
		"Blake_hh.pac",
		"blake_HI.pac",
		"Brown_beard_hh.pac",
		"brown_shaved_HI.pac",
		"Brown_Shaved_hh.pac",
		"brown_shaved_HI.pac",
		"Bud_beard_hh.pac",
		"blackhair_fullbea_HI.pac",
		"Earl_black_hh.pac",
		"blackhair_shaved_HI.pac",
		"Earl_brown_hh.pac",
		"brown_shaved_HI.pac",
		"George_black_hh.pac",
		"baldhead_oholen_HI.pac",
		"George_brown_hh.pac",
		"brown_shaved_HI.pac",
		"Gray_beard_hh.pac",
		"gray_beard_HI.pac",
		"Charles_black_hh.pac",
		"blackhair_shaved_HI.pac",
		"Charles_gray_hh.pac",
		"gray_shaved_HI.pac",
		"Charles_scar_hh.pac",
		"brown_shaved_HI.pac",
		"Jack_brown_hh.pac",
		"brown_shaved_HI.pac",
		"Jack_gray_hh.pac",
		"gray_shaved_HI.pac",
		"John_hh.pac",
		"blackhair_fullbea_HI.pac",
		"Joris_HH.pac",
		"baldhead_oholen_HI.pac",
		"Luke_hh.pac",
		"blackhair_beard_HI.pac",
		"MarekPetr_HH.pac",
		"baldhead_unshaved_HI.pac",
		"mareks_hh.pac",
		"baldhead_oholen_HI.pac",
		"MarekTomas_HH.pac",
		"blackhair_shaved_HI.pac",
		"Markus_hh.pac",
		"blackhair_beard_HI.pac",
		"Michael_hh.pac",
		"blackhair_fullbea_HI.pac",
		"Mr_Black_HH.pac",
		"Mr_Black_HI.pac",
		"Newman_black_hh.pac",
		"blackhair_shaved_HI.pac",
		"Newman_shaved_hh.pac",
		"baldhead_oholen_HI.pac",
		"Pete_brown_hh.pac",
		"brown_shaved_HI.pac",
		"Peterp_hh.pac",
		"baldhead_unshaved_HI.pac",
		"PetrxMarek_HH.pac",
		"baldhead_oholen_HI.pac",
		"Rasta_face_HH.paa",
		"baldhead_beard_HI.pac",
		"Rasta_face_HH.pac",
		"baldhead_beard_HI.pac",
		"Sebastian_bird_hh.pac",
		"baldhead_oholen_HI.pac",
		"Sebastian_black_hh.pac",
		"blackhair_shaved_HI.pac",
		"Tom_hh.pac",
		"blackhair_shaved_HI.pac",
		"Tomas_HH.pac",
		"blackhair_beard_HI.pac",
		"TomasMarek_HH.pac",
		"baldhead_oholen_HI.pac",
		"Troska_hh.pac",
		"troska_HI.pac",
		"Waldez_hh.pac",
		"brown_shaved_HI.pac",
		"Young_beaver_hh.pac",
		"blackhair_shaved_HI.pac"
	};
};
class CfgGlasses
{
	class None
	{
		scope=2;
		name="None";
		model="";
		identityTypes[]={};
	};
};
class CfgFaces
{
	class Default
	{
		class Default
		{
			name="";
			head="";
			material="";
			texture="#(rgb,8,8,3)color(0.5,0.5,1,1)";
			east=0;
			west=0;
			identityTypes[]=
			{
				"Default"
			};
		};
		class Custom
		{
			name="";
			head="";
			material="";
			texture="#(rgb,8,8,3)color(1,1,1,1)";
			front="#(rgb,8,8,3)color(1,1,1,1)";
			side="#(rgb,8,8,3)color(1,1,1,1)";
			back="#(rgb,8,8,3)color(1,1,1,1)";
			east=0;
			west=0;
			identityTypes[]={};
		};
	};
};
class CfgMimics
{
	access=1;
	class HeadPreview
	{
		microMimics="Micro";
		boneHead="head";
	};
	class Micro
	{
		lBrow[]={0.0020000001,0.0020000001,0.001,0.60000002,3};
		mBrow[]={0.0020000001,0.0020000001,0.001,0.60000002,2.5};
		rBrow[]={0.0020000001,0.0020000001,0.001,0.60000002,3};
		lMouth[]={0.001,0.0020000001,0.001,0.60000002,2};
		mMouth[]={0,0,0,0.60000002,3};
		rMouth[]={0.001,0.0020000001,0.001,0.60000002,2};
	};
	class NoMicro
	{
		lBrow[]={0,0,0,0.60000002,3};
		mBrow[]={0,0,0,0.60000002,2.5};
		rBrow[]={0,0,0,0.60000002,3};
		lMouth[]={0,0,0,0.60000002,2};
		mMouth[]={0,0,0,0.60000002,3};
		rMouth[]={0,0,0,0.60000002,2};
	};
	class States
	{
		class Default
		{
			lBrow[]={0,0};
			mBrow[]={0,0};
			rBrow[]={0,0};
			lMouth[]={0,0};
			mMouth[]={0,0};
			rMouth[]={0,0};
		};
		class Normal
		{
			lBrow[]={0,0};
			mBrow[]={0,0};
			rBrow[]={0,0};
			lMouth[]={0,0};
			mMouth[]={0,0};
			rMouth[]={0,0};
		};
		class Smile
		{
			lBrow[]={0,0.25};
			mBrow[]={0,0.25};
			rBrow[]={0,0.25};
			lMouth[]={-0.5,0.60000002};
			mMouth[]={0,0};
			rMouth[]={0.5,0.60000002};
		};
		class Hurt
		{
			lBrow[]={0,-0.34999999};
			mBrow[]={0,-0.5};
			rBrow[]={0,-0.60000002};
			lMouth[]={0.5,-0.30000001};
			mMouth[]={0,0.30000001};
			rMouth[]={-0.5,-0.60000002};
		};
		class Ironic
		{
			lBrow[]={0,-0.34999999};
			mBrow[]={0,-0.34999999};
			rBrow[]={0,-0.34999999};
			lMouth[]={0.1,0.30000001};
			mMouth[]={0,0.89999998};
			rMouth[]={-0.1,0.30000001};
		};
		class Sad
		{
			lBrow[]={0,0.2};
			mBrow[]={0,0.2};
			rBrow[]={0,0.2};
			lMouth[]={0.1,-0.5};
			mMouth[]={0,-0.5};
			rMouth[]={-0.1,-0.5};
		};
		class Cynic
		{
			lBrow[]={0,-0.34999999};
			mBrow[]={0,0};
			rBrow[]={0,0.050000001};
			lMouth[]={0.2,-0.89999998};
			mMouth[]={0,-0.2};
			rMouth[]={0,0};
		};
		class Surprised
		{
			lBrow[]={0,0.5};
			mBrow[]={0,0.5};
			rBrow[]={0,0.5};
			lMouth[]={0,-0.30000001};
			mMouth[]={0,0.30000001};
			rMouth[]={0,-0.2};
		};
		class Agresive
		{
			lBrow[]={0,-0.25};
			mBrow[]={0,-0.40000001};
			rBrow[]={0,-0.30000001};
			lMouth[]={0.40000001,0.5};
			mMouth[]={0,0.5};
			rMouth[]={-0.40000001,-0.5};
		};
		class Angry
		{
			lBrow[]={0.40000001,-0.5};
			mBrow[]={0.1,-0.40000001};
			rBrow[]={-0.40000001,-0.5};
			lMouth[]={0.40000001,-0.89999998};
			mMouth[]={0,-0.2};
			rMouth[]={-0.40000001,-0.80000001};
		};
	};
	combat[]=
	{
		"Sad",
		0.1,
		"Surprised",
		0.1,
		"Cynic",
		0.30000001,
		"Angry",
		0.1,
		"Normal"
	};
	aware[]=
	{
		"Angry",
		0.2,
		"Normal"
	};
	safe[]=
	{
		"Smile",
		0.1,
		"Surprised",
		0.1,
		"Normal"
	};
	neutral[]=
	{
		"Surprised",
		0.1,
		"Sad",
		0.1,
		"Normal"
	};
	danger[]=
	{
		"Surprised",
		0.40000001,
		"Sad"
	};
	dead[]=
	{
		"Hurt"
	};
	hurt[]=
	{
		"Hurt"
	};
};
class CfgEnvSounds
{
	class Default
	{
		name="$STR_CFG_ENVSOUNDS_DEFAULT";
		sound[]=
		{
			"$DEFAULT$",
			0,
			1
		};
		soundNight[]=
		{
			"$DEFAULT$",
			0,
			1
		};
	};
	class Rain
	{
		name="";
		sound[]=
		{
			"",
			0.0017782794,
			1
		};
		volume="rain";
	};
	class Sea
	{
		name="";
		sound[]=
		{
			"",
			0.00031622776,
			1
		};
		volume="sea";
	};
	class Meadows
	{
		name="";
		sound[]=
		{
			"",
			5.6234134e-005,
			1
		};
		volume="meadow*(1-rain)*(1-night)";
	};
	class Trees
	{
		name="";
		sound[]=
		{
			"",
			0.00017782794,
			1
		};
		volume="trees*(1-rain)*(1-night)";
	};
	class MeadowsNight
	{
		name="";
		sound[]=
		{
			"",
			5.6234134e-005,
			1
		};
		volume="meadow*(1-rain)*night";
	};
	class TreesNight
	{
		name="";
		sound[]=
		{
			"",
			0.00017782794,
			1
		};
		volume="trees*(1-rain)*night";
	};
	class Hills
	{
		name="";
		sound[]=
		{
			"",
			0.00017782794,
			1
		};
		volume="hills";
	};
	class Wind
	{
		name="";
		sound[]=
		{
			"",
			0.00017782794,
			1
		};
		volume="(1-hills)*windy*0.5";
	};
};
class CfgHQIdentities
{
	access=0;
	class Base
	{
		name="$STR_CFG_PAPABEAR";
		speaker="NoVoice";
		pitch=0.94999999;
	};
	class HQ
	{
		name="$STR_CFG_PAPABEAR";
		speaker="NoVoice";
		pitch=1.05;
	};
	class PAPA_BEAR
	{
		name="$STR_CFG_PAPABEAR";
		speaker="NoVoice";
		pitch=1.05;
	};
	class AirBase
	{
		name="$STR_CFG_FIREFLYBASE";
		speaker="NoVoice";
		pitch=1.05;
	};
};
class CfgHeads
{
	access=1;
	class Air
	{
		friction=10;
		movement=160;
		maxAmp=0.050000001;
		maxSpeed=3;
		radius=0.2;
	};
	class Land
	{
		friction=20;
		movement=260;
		maxAmp=0.1;
		maxSpeed=4;
		radius=0.30000001;
	};
};
class CfgMusic
{
	access=1;
};
class CfgSounds
{
	access=1;
};
class CfgWhistleSound
{
	sound[]=
	{
		"",
		1,
		1
	};
	downTime=0.5;
	silentTime=1;
	upTime=4;
};
class CfgTitles
{
	access=1;
	defaultSpeed=1;
	defaultIn=0.5;
	defaultTime=10;
	defaultOut=0.5;
	titles[]=
	{
		"Sphere",
		"BISLogo",
		"TVSet"
	};
	class Sphere
	{
		access=0;
		name="$STR_CFG_TITLES_SPHERE";
		model="koule.p3d";
		duration=5;
		camera[]={0,0,-10};
	};
	class BISLogo
	{
		access=0;
		name="$STR_CFG_TITLES_BISLOGO";
		model="bohemiaolor2.p3d";
		duration=3;
		camera[]={0,0,-200};
	};
	class TVSet
	{
		access=0;
		name="$STR_CFG_TITLES_TVSET";
		duration=1000;
		model="TVhi.p3d";
		camera[]={0,0,-1.2};
	};
};
class CfgIntro
{
};
class CfgCredits
{
	cutscene="";
};
class CfgCutScenes
{
	access=1;
	class Refuel
	{
		sound[]=
		{
			"",
			0.5,
			0.2
		};
		titleType=1;
		title="$STR_CFG_CUTSCENES_REFUEL";
	};
	class Rearm
	{
		sound[]=
		{
			"",
			0.30000001,
			1
		};
		titleType=1;
		title="$STR_CFG_CUTSCENES_REARM";
	};
	class Repair
	{
		sound[]=
		{
			"",
			0.1,
			1
		};
		titleType=1;
		title="$STR_CFG_CUTSCENES_REPAIR";
	};
};
class CfgCameraEffects
{
	access=1;
	class Interpolated
	{
		access=0;
		type=0;
		scale=0.1;
		duration=5;
		spline=1;
		show=2;
	};
	class Exact: Interpolated
	{
		scale=-1;
	};
	class Chain
	{
		access=0;
		type=3;
		show=2;
	};
	class Array
	{
		class Terminate
		{
			access=0;
			name="$STR_CFG_CAMEFFECTS_TERMINATE";
			type=4;
			show=0;
		};
		class Internal
		{
			access=0;
			name="$STR_CFG_CAMEFFECTS_INTERNAL";
			type=5;
			show=2;
		};
		class Fixed: Interpolated
		{
			name="$STR_CFG_CAMEFFECTS_FIXED";
			type=1;
			duration=10;
		};
		class FixedWithZoom: Fixed
		{
			name="$STR_CFG_CAMEFFECTS_FIXEDZOOM";
			type=2;
			duration=10;
		};
		class External: Fixed
		{
			name="$STR_CFG_CAMEFFECTS_EXTERNAL";
			type=0;
			duration=5;
			file="";
		};
	};
};
class CfgMarkers
{
	class Empty
	{
		name="empty";
		icon="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.2,0.1,0.40000001,1};
		size=0;
		scope=2;
	};
};
class CfgMarkerColors
{
};
class CfgMarkerBrushes
{
	class Solid
	{
		name="$STR_CFG_MARKERBR_SOLID";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		drawBorder=0;
	};
};
class CfgLocationTypes
{
	class Mount
	{
		name="$STR_GETIN";
		drawStyle="mount";
		texture="";
		color[]={0,0,0,1};
		size=0;
		font="TahomaB";
		textSize=0.039999999;
		shadow=1;
	};
	class Name
	{
		name="$STR_NAME";
		drawStyle="name";
		texture="";
		color[]={0,0,0,1};
		size=0;
		font="TahomaB";
		textSize=0.039999999;
		shadow=1;
	};
	class Strategic: Name
	{
		name="Strategic key point";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.25,0.40000001,0.2,1};
		size=16;
		textSize=0.050000001;
	};
	class StrongpointArea: Strategic
	{
		name="Strongpoint area";
	};
	class FlatArea: Strategic
	{
		name="Flat area";
	};
	class FlatAreaCity: FlatArea
	{
		name="Flat area in city";
	};
	class FlatAreaCitySmall: FlatAreaCity
	{
		name="Flat area in city - small";
	};
	class CityCenter: Strategic
	{
		name="Center of the village/town/city";
	};
	class Airport: Strategic
	{
		name="Airport";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		importance=20;
	};
	class NameMarine: Name
	{
		name="$STR_NAME_MARINE";
		color[]={0,0.5,0.94999999,0.5};
		textSize=0.050000001;
		importance=3;
	};
	class NameCityCapital: Name
	{
		name="$STR_NAME_CAPITAL";
		textSize=0.07;
		importance=7;
	};
	class NameCity: Name
	{
		name="$STR_NAME_CITY";
		textSize=0.059999999;
		importance=6;
	};
	class NameVillage: Name
	{
		name="$STR_NAME_VILLAGE";
		textSize=0.050000001;
		importance=5;
	};
	class NameLocal: Name
	{
		name="$STR_NAME_LOCALNAME";
		color[]={0,0,0,0.5};
		textSize=0.050000001;
		importance=4;
	};
	class Hill: Name
	{
		name="$STR_NAME_HILL";
		drawStyle="icon";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0,0,0,1};
		size=14;
		textSize=0.039999999;
		shadow=0;
		importance=2;
	};
	class ViewPoint: Hill
	{
		name="$STR_NAME_VIEWPOINT";
		drawStyle="icon";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.77999997,0,0.050000001,1};
		size=12;
		textSize=0.039999999;
		shadow=0;
		importance=1;
	};
	class RockArea: Hill
	{
		name="$STR_NAME_ROCKAREA";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0,0,0,1};
		size=12;
		shadow=0;
		importance=2;
	};
	class BorderCrossing: Hill
	{
		name="$STR_NAME_BCROSS";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.77999997,0,0.050000001,1};
		size=16;
		shadow=0;
		importance=1;
	};
	class VegetationBroadleaf: Hill
	{
		name="$STR_NAME_VEGB";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.25,0.40000001,0.2,1};
		size=18;
		shadow=0;
		importance=2;
	};
	class VegetationFir: Hill
	{
		name="$STR_NAME_VEGF";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.25,0.40000001,0.2,1};
		size=18;
		shadow=0;
		importance=2;
	};
	class VegetationPalm: Hill
	{
		name="$STR_NAME_VEGP";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.25,0.40000001,0.2,1};
		size=18;
		shadow=0;
		importance=2;
	};
	class VegetationVineyard: Hill
	{
		name="$STR_NAME_VEGV";
		texture="#(argb,8,8,3)color(1,1,1,1)";
		color[]={0.25,0.40000001,0.2,1};
		size=16;
		shadow=0;
		importance=2;
	};
};
class CfgWorlds
{
	access=0;
	class GenericNames
	{
		access=0;
		class Default
		{
			class FirstNames
			{
				default="Unknown";
			};
			class LastNames
			{
				default="Entity";
			};
		};
		class RussianMen
		{
			class FirstNames
			{
				ivan="Ivan";
				mikhail="Mikhail";
				vasili="Vasili";
				boris="Boris";
				pavel="Pavel";
				vladimir="Vladimir";
				oleg="Oleg";
				daniil="Daniil";
				fedor="Fedor";
				kiril="Kiril";
				pyotr="Pyotr";
				filip="Filip";
				fyodor="Fyodor";
				andrey="Andrey";
				igor="Igor";
				aleksander="Aleksander";
				lev="Lev";
				dimitri="Dimitri";
				viktor="Viktor";
				vasil="Vasil";
				ruslan="Ruslan";
				vadim="Vadim";
				stepan="Stepan";
				roman="Roman";
				nikolay="Nikolay";
				yuri="Yuri";
				aleksei="Aleksei";
				maksim="Maksim";
				valery="Valery";
				vyacheslav="Vyacheslav";
				egor="Egor";
				vitaly="Vitaly";
				nikita="Nikita";
				konstantin="Konstantin";
				timofey="Timofey";
				valentin="Valentin";
				leonid="Leonid";
				ilya="Ilya";
				grigoriy="Grigoriy";
				abram="Abram";
				alyosha="Alyosha";
				arkadiy="Arkadiy";
				german="German";
				kuzma="Kuzma";
				semyon="Semyon";
				yevgeniy="Yevgeniy";
			};
			class LastNames
			{
				produnov="Produnov";
				zubov="Zubov";
				blagonravov="Blagonravov";
				davidov="Davidov";
				gusakov="Gusakov";
				nikolayev="Nikolayev";
				ivanov="Ivanov";
				maksimov="Maksimov";
				fisenko="Fisenko";
				shcherbakov="Shcherbakov";
				zverev="Zverev";
				zykov="Zykov";
				doronin="Doronin";
				turchinsky="Turchinsky";
				malyukov="Malyukov";
				rogozhkin="Rogozhkin";
				bychkov="Bychkov";
				zhegalov="Zhegalov";
				soloveychik="Soloveychik";
				strugackiy="Strugackiy";
				bulgakov="Bulgakov";
				tolstoy="Tolstoy";
				pushkin="Pushkin";
				dobryakov="Dobryakov";
				timoshenko="Timoshenko";
				alekseev="Alekseev";
				zhitkov="Zhitkov";
				potapenko="Potapenko";
				yefremov="Yefremov";
				krasko="Krasko";
				pashinin="Pashinin";
				yeltsin="Yeltsin";
				medvedev="Medvedev";
				putin="Putin";
				smirnov="Smirnov";
				kuznetsov="Kuznetsov";
				vasilyev="Vasilyev";
				petrov="Petrov";
				golovko="Golovko";
				chapayev="Chapayev";
				mamayev="Mamayev";
				baranov="Baranov";
				beregovoi="Beregovoi";
				derevenko="Derevenko";
				glebov="Glebov";
				gorbunov="Gorbunov";
				pecharov="Pecharov";
				kirygin="Kirygin";
				lermontov="Lermontov";
				litvinov="Litvinov";
				maryshkin="Naryshkin";
				morozov="Morozov";
				molotov="Molotov";
				popov="Popov";
				privalov="Privalov";
				titov="Titov";
				sudakov="Sudakov";
				kamenev="Kamenev";
				yakushkin="Yakushkin";
				yagudin="Yagudin";
			};
		};
		class RussianWomen
		{
			class FirstNames
			{
				alena="Alena";
				galina="Galina";
				ekaterina="Ekaterina";
				irina="Irina";
				ksenia="Ksenia";
				natasha="Natasha";
				ludmila="Ludmila";
				marina="Marina";
				yelena="Yelena";
				nadezhda="Nadezhda";
				olga="Olga";
				oksana="Oksana";
				raisa="Raisa";
				svetlana="Svetlana";
				tamara="Tamara";
				tatyana="Tatyana";
				vera="Vera";
				zoya="Zoya";
				zhenya="Zhenya";
				katya="Katya";
				nadya="Nadya";
				sasha="Sasha";
				yulya="Yulya";
				lena="Lena";
				karina="Karina";
				nina="Nina";
				natalia="Natalia";
			};
			class LastNames
			{
				produnova="Produnova";
				zubova="Zubova";
				blagonravova="Blagonravova";
				davidova="Davidova";
				gusakova="Gusakova";
				nikolayeva="Nikolayeva";
				ivanova="Ivanova";
				maksimova="Maksimova";
				fisenkova="Fisenkova";
				shcherbakova="Shcherbakova";
				zvereva="Zvereva";
				zykova="Zykova";
				doronina="Doronina";
				turchinskaya="Turchinskaya";
				malyukova="Malyukova";
				rogozhkina="Rogozhkina";
				bychkova="Bychkova";
				zhegalova="Zhegalova";
				soloveychika="Soloveychika";
				strugackaya="Strugackaya";
				bulgakova="Bulgakova";
				tolstoyeva="Tolstoyeva";
				pushkina="Pushkina";
				dobryakova="Dobryakova";
				timoshenkoa="Timoshenkoa";
				alekseeva="Alekseeva";
				zhitkova="Zhitkova";
				potapenkova="Potapenkova";
				yefremova="Yefremova";
				kraskova="Kraskova";
				pashinina="Pashinina";
				yeltsina="Yeltsina";
				medvedeva="Medvedeva";
				putina="Putina";
				smirnova="Smirnova";
				kuznetsova="Kuznetsova";
				vasilyeva="Vasilyeva";
				petrova="Petrova";
				golovkoa="Golovkoa";
				chapayeva="Chapayeva";
				mamayeva="Mamayeva";
				baranova="Baranova";
				beregovoia="Beregovoia";
				derevenkova="Derevenkova";
				glebova="Glebova";
				gorbunova="Gorbunova";
				kirygina="Kirygina";
				lermontova="Lermontova";
				litvinova="Litvinova";
				maryshkina="Naryshkina";
				morozova="Morozova";
				molotova="Molotova";
				popova="Popova";
				privalova="Privalova";
				titova="Titova";
				sudakova="Sudakova";
				kameneva="Kameneva";
				yakushkina="Yakushkina";
				yagudina="Yagudina";
			};
		};
		class EnglishMen
		{
			class FirstNames
			{
				michael="Michael";
				jacob="Jacob";
				matthew="Matthew";
				joseph="Joseph";
				christopher="Christopher";
				nicholas="Nicholas";
				andrew="Andrew";
				william="William";
				joshua="Joshua";
				daniel="Daniel";
				tyler="Tyler";
				ryan="Ryan";
				anthony="Anthony";
				alexander="Alexander";
				zachary="Zachary";
				david="David";
				james="James";
				john="John";
				christian="Christian";
				justin="Justin";
				benjamin="Benjamin";
				austin="Austin";
				brandon="Brandon";
				samuel="Samuel";
				dylan="Dylan";
				noah="Noah";
				bobby="Bobby";
				nathan="Nathan";
				ethan="Ethan";
				jonathan="Jonathan";
				harry="Harry";
				sean="Sean";
				jeremy="Jeremy";
				cameron="Cameron";
				edgar="Edgar";
				carlos="Carlos";
				eric="Eric";
				miguel="Miguel";
				ian="Ian";
				chad="Chad";
				bryan="Bryan";
				travis="Travis";
				peter="Peter";
				jesse="Jesse";
				mark="Mark";
				jared="Jared";
				richard="Richard";
				mario="Mario";
				george="George";
				edward="Edward";
				steven="Steven";
				mike="Mike";
				evan="Evan";
				simon="Simon";
				alan="Alan";
			};
			class LastNames
			{
				smith="Smith";
				johnson="Johnson";
				williams="Williams";
				jones="Jones";
				brown="Brown";
				davis="Davis";
				miller="Miller";
				wilson="Wilson";
				moore="Moore";
				taylor="Taylor";
				anderson="Anderson";
				thomas="Thomas";
				jackson="Jackson";
				white="White";
				harris="Harris";
				martin="Martin";
				thompson="Thompson";
				garcia="Garcia";
				martinez="Martinez";
				robinson="Robinson";
				clark="Clark";
				lewis="Lewis";
				lee="Lee";
				walker="Walker";
				hall="Hall";
				allen="Allen";
				young="Young";
				king="King";
				wright="Wright";
				hill="Hill";
				scott="Scott";
				doe="Doe";
				vomacka="Vomacka";
				carey="Carey";
				melvin="Melvin";
				gluck="Gluck";
				eady="Eady";
				richardson="Richardson";
				shannon="Shannon";
				mcgregor="McGregor";
				hoffman="Hoffman";
				killoran="Killoran";
				rochelle="Rochelle";
				goben="Goben";
				hanau="Hanau";
				bircsak="Bircsak";
				wagner="Wagner";
				green="Green";
				adams="Adams";
				gonzales="Gonzales";
				carter="Carter";
				campbell="Campbell";
				collins="Collins";
				rodriguez="Rodriguez";
				mitchell="Mitchell";
				lopez="Lopez";
				pound="Pound";
				self="Self";
				bruning="Bruning";
				hirasaki="Hirasaki";
				byrd="Byrd";
				sissman="Sissman";
				hutchinson="Hutchinson";
				nielsen="Nielsen";
			};
		};
		class EnglishWomen
		{
			class FirstNames
			{
				hannah="Hannah";
				emily="Emily";
				madison="Madison";
				elizabeth="Elizabeth";
				alexis="Alexis";
				sarah="Sarah";
				taylor="Taylor";
				lauren="Lauren";
				jessica="Jessica";
				ashley="Ashley";
				samantha="Samantha";
				brianna="Brianna";
				kayla="Kayla";
				olivia="Olivia";
				abigail="Abigail";
				anna="Anna";
				alyssa="Alyssa";
				emma="Emma";
				jennifer="Jennifer";
				nicole="Nicole";
				grace="Grace";
				alexandra="Alexandra";
				sydney="Sydney";
				rachel="Rachel";
				victoria="Victoria";
				morgan="Morgan";
				haley="Haley";
				katherine="Katherine";
				amanda="Amanda";
				megan="Megan";
			};
			class LastNames
			{
				smith="Smith";
				johnson="Johnson";
				williams="Williams";
				jones="Jones";
				brown="Brown";
				davis="Davis";
				miller="Miller";
				wilson="Wilson";
				moore="Moore";
				taylor="Taylor";
				anderson="Anderson";
				thomas="Thomas";
				jackson="Jackson";
				white="White";
				harris="Harris";
				martin="Martin";
				thompson="Thompson";
				garcia="Garcia";
				martinez="Martinez";
				robinson="Robinson";
				clark="Clark";
				lewis="Lewis";
				lee="Lee";
				walker="Walker";
				hall="Hall";
				allen="Allen";
				young="Young";
				king="King";
				wright="Wright";
				hill="Hill";
				doe="Doe";
				green="Green";
				adams="Adams";
				gonzales="Gonzales";
				carter="Carter";
				campbell="Campbell";
				collins="Collins";
				rodriguez="Rodriguez";
				scott="Scott";
				mitchell="Mitchell";
				lopez="Lopez";
				pound="Pound";
				self="Self";
				bruning="Bruning";
				hirasaki="Hirasaki";
				byrd="Byrd";
				sissman="Sissman";
				hutchinson="Hutchinson";
				nielsen="Nielsen";
			};
		};
		class CzechMen
		{
			class FirstNames
			{
				rostislav="Rostislav";
				matous="Matous";
				ivan="Ivan";
				jakub="Jakub";
				josef="Josef";
				zdislav="Zdislav";
				lukas="Lukas";
				vilem="Vilem";
				michal="Michal";
				martin="Martin";
				jiri="Jiri";
				vasil="Vasil";
				bohuslav="Bohuslav";
				boris="Boris";
				pavel="Pavel";
				vladimir="Vladimir";
				oleg="Oleg";
				daniel="Daniel";
				marek="Marek";
				fedor="Fedor";
				vlastimil="Vlastimil";
				frantisek="Frantisek";
				jan="Jan";
				radim="Radim";
				kiril="Kiril";
				petr="Petr";
				filip="Filip";
				miro="Miro";
				bronislav="Bronislav";
				marian="Marian";
				libor="Libor";
				ctibor="Ctibor";
				karel="Karel";
				jaroslav="Jaroslav";
				dalibor="Dalibor";
				jaromir="Jaromir";
				otakar="Otakar";
				slavomir="Slavomir";
				vojtech="Vojtech";
				dobromil="Dobromil";
				ladislav="Ladislav";
				taras="Taras";
				miroslav="Miroslav";
				ctirad="Ctirad";
				andrej="Andrej";
				igor="Igor";
				alexandr="Alexandr";
				lev="Lev";
				dmytro="Dmytro";
				bogdan="Bogdan";
				viktor="Viktor";
				stanislav="Stanislav";
				ruslan="Ruslan";
				vadim="Vadim";
				semen="Semen";
				stepan="Stepan";
				roman="Roman";
				nikol="Nikola";
			};
			class LastNames
			{
				novak="Novak";
				masin="Masin";
				jiroutek="Jiroutek";
				benes="Benes";
				zemanek="Zemanek";
				vosahlo="Vosahlo";
				svoboda="Svoboda";
				hajek="Hajek";
				kral="Kral";
				novotny="Novotny";
				dvorak="Dvorak";
				moravec="Moravec";
				valenta="Valenta";
				hruby="Hruby";
				mach="Mach";
				liska="Liska";
				klima="Klima";
				kulhanek="Kulhanek";
				jelinek="Jelinek";
				zapletal="Zapletal";
				hanak="Hanak";
				slama="Slama";
				korinek="Korinek";
				martinek="Martinek";
				zelenka="Zelenka";
				kalina="Kalina";
				kvapil="Kvapil";
				skala="Skala";
				hujer="Hujer";
				peterka="Peterka";
				kozal="Kozel";
				smolik="Smolik";
				mucha="Mucha";
				smetana="Smetana";
				sejkora="Sejkora";
				nejedly="Nejedly";
				homolka="Homolka";
				hron="Hron";
				spanel="Spanel";
				vymazal="Vymazal";
				duda="Duda";
				vrzal="Vrzal";
				skopek="Skopek";
				horvat="Horvat";
				vitek="Vitek";
				nedbal="Nedbal";
				jelen="Jelen";
				starecek="Starecek";
				planicka="Planicka";
				konopnik="Konopnik";
				troska="Troska";
				bobek="Bobek";
				zajic="Zajic";
				nohavica="Nohavica";
				janda="Janda";
				koukal="Koukal";
				beran="Beran";
				beranek="Beranek";
				jary="Jary";
				lebeda="Lebeda";
				kropacek="Kropacek";
				horacek="Horacek";
				pazout="Pazout";
				pernica="Pernica";
				kana="Kana";
				macecek="Macecek";
				chlup="Chlup";
				brazda="Brazda";
				tuma="Tuma";
				matejka="Matejka";
				havel="Havel";
				prutko="Prutko";
				kravchuk="Kravchuk";
				guglava="Guglava";
				bulba="Bulba";
				horyna="Horyna";
				vanek="Vanek";
				grygar="Grygar";
				macura="Macura";
				kubik="Kubik";
				bednar="Bednar";
				hlinik="Hlinik";
				jurcik="Jurcik";
				janko="Janko";
				mazur="Mazur";
				ledvina="Ledvina";
				fojt="Fojt";
				gazda="Gazda";
				mironov="Mironov";
				antonov="Antonov";
				tkachuk="Tkachuk";
				petrenko="Petrenko";
				vandrovec="Vandrovec";
				korolenko="Korolenko";
				brodsky="Brodsky";
				rybski="Rybski";
				trachnikov="Trachnikov";
				nobski="Nobski";
				cerny="Cerny";
				suhaj="Suhaj";
			};
		};
		class CzechWomen
		{
			class FirstNames
			{
				ludmila="Ludmila";
				ivana="Ivana";
				anna="Anna";
				petra="Petra";
				katerina="Katerina";
				vera="Vera";
				hana="Hana";
				daniela="Daniela";
				eva="Eva";
				magda="Magda";
				bozena="Bozena";
				darja="Darja";
				natalia="Natalia";
				natasha="Natasha";
				irina="Irina";
				olga="Olga";
				zuzana="Zuzana";
				marie="Marie";
				martina="Martina";
				pavla="Pavla";
				marta="Marta";
				zlata="Zlata";
				kazi="Kazi";
				libuse="Libuse";
				teta="Teta";
				linda="Linda";
				marketa="Marketa";
				eliska="Eliska";
				apolena="Apolena";
				vladimira="Vladimira";
				jana="Jana";
				dagmar="Dagmar";
				jaroslava="Jaroslava";
				nela="Nela";
				sara="Sara";
				karolina="Karolina";
				nikola="Nikola";
				gabriela="Gabriela";
			};
			class LastNames
			{
				novakova="Novakova";
				kubikova="Kubikova";
				masinova="Masinova";
				jiroutkova="Jiroutkova";
				benesova="Benesova";
				zemankova="Zemankova";
				vosahlova="Vosahlova";
				svobodova="Svobodova";
				hajkova="Hajkova";
				kralova="Kralova";
				novotna="Novotna";
				dvorakova="Dvorakova";
				moravcova="Moravcova";
				valentova="Valentova";
				hruba="Hruba";
				machova="Machova";
				liskova="Liskova";
				klimova="Klimova";
				kulhankova="Kulhankova";
				jelinkova="Jelinkova";
				zapletalova="Zapletalova";
				hanakova="Hanakova";
				slamova="Slamova";
				korinkova="Korinkova";
				martinkova="Martinkova";
				zelenkova="Zelenkova";
				kalinova="Kalinova";
				kvapilova="Kvapilova";
				skalova="Skalova";
				hujerova="Hujerova";
				peterkova="Peterkova";
				kozlova="Kozlova";
				smolikova="Smolikova";
				muchova="Muchova";
				smetanova="Smetanova";
				sejkorova="Sejkorova";
				nejedla="Nejedla";
				homolkova="Homolkova";
				hronova="Hronova";
				spanelova="Spanelova";
				vymazalova="Vymazalova";
				dudova="Dudova";
				vrzalova="Vrzalova";
				skopkova="Skopkova";
				horvatova="Horvatova";
				vitkova="Vitkova";
				nedbalova="Nedbalova";
				jelenova="Jelenova";
				planickova="Planickova";
				konopnikova="Konopnikova";
				troskova="Troskova";
				bobkova="Bobkova";
				zajicova="Zajicova";
				nohavicova="Nohavicova";
				jandova="Jandova";
				koukalova="Koukalova";
				beranova="Beranova";
				berankova="Berankova";
				jara="Jara";
				lebedova="Lebedova";
				kropackova="Kropackova";
				horackova="Horackova";
				pazoutova="Pazoutova";
				pernicova="Perniaova";
				kanava="Kanava";
				maceckova="Maceckova";
				chlupova="Chlupova";
				brazdaova="Brazdaova";
				tumova="Tumova";
				matejkova="Matejkova";
				havlova="Havlova";
				prutkova="Prutkova";
				kravchukova="Kravchukova";
				guglavova="Guglavova";
				bulbova="Bulbova";
				horynova="Horynova";
				vankova="Vankova";
				grygarova="Grygarova";
				macuraova="Macuraova";
				bednarova="Bednarova";
				hlinikova="Hlinikova";
				jurcikova="Jurcikova";
				jankova="Jankova";
				mazurova="Mazurova";
				ledvinova="Ledvinova";
				stareckova="Stareckova";
				fojtova="Fojtova";
				gazdova="Gazdova";
				mironovova="Mironovova";
				antonovova="Antonovova";
				tkachukova="Tkachukova";
				petrenkova="Petrenkova";
				vandrovcova="Vandrovcova";
				korolenkova="Korolenkova";
				brodska="Brodska";
				rybska="Rybska";
				trachnikovova="Trachnikovova";
				nobska="Nobska";
				cerna="Cerna";
				suhajova="Suhajova";
			};
		};
		class CivilianMen
		{
			class FirstNames
			{
				rostislav="Rostislav";
				matous="Matous";
				ivan="Ivan";
				jakub="Jakub";
				josef="Josef";
				zdislav="Zdislav";
				lukas="Lukas";
				vilem="Vilem";
				michal="Michal";
				martin="Martin";
				jiri="Jiri";
				vasil="Vasil";
				bohuslav="Bohuslav";
				boris="Boris";
				pavel="Pavel";
				vladimir="Vladimir";
				oleg="Oleg";
				daniel="Daniel";
				marek="Marek";
				fedor="Fedor";
				vlastimil="Vlastimil";
				frantisek="Frantisek";
				jan="Jan";
				radim="Radim";
				kiril="Kiril";
				petr="Petr";
				filip="Filip";
				miro="Miro";
				bronislav="Bronislav";
				marian="Marian";
				libor="Libor";
				ctibor="Ctibor";
				karel="Karel";
				jaroslav="Jaroslav";
				dalibor="Dalibor";
				jaromir="Jaromir";
				otakar="Otakar";
				slavomir="Slavomir";
				vojtech="Vojtech";
				dobromil="Dobromil";
				ladislav="Ladislav";
				taras="Taras";
				miroslav="Miroslav";
				ctirad="Ctirad";
				andrej="Andrej";
				igor="Igor";
				alexandr="Alexandr";
				lev="Lev";
				dmytro="Dmytro";
				bogdan="Bogdan";
				viktor="Viktor";
				stanislav="Stanislav";
				ruslan="Ruslan";
				vadim="Vadim";
				semen="Semen";
				stepan="Stepan";
				roman="Roman";
				nikol="Nikola";
				yuri="Yuri";
				aleksei="Aleksei";
				maksim="Maksim";
				valery="Valery";
				vyacheslav="Vyacheslav";
				vitaly="Vitaly";
				nikita="Nikita";
				timofey="Timofey";
				valentin="Valentin";
				leonid="Leonid";
				ilya="Ilya";
				grigoriy="Grigoriy";
				abram="Abram";
				arkadiy="Arkadiy";
				german="German";
				kuzma="Kuzma";
				semyon="Semyon";
				yevgeniy="Yevgeniy";
			};
			class LastNames
			{
				novak="Novak";
				masin="Masin";
				jiroutek="Jiroutek";
				benes="Benes";
				zemanek="Zemanek";
				vosahlo="Vosahlo";
				svoboda="Svoboda";
				hajek="Hajek";
				kral="Kral";
				novotny="Novotny";
				dvorak="Dvorak";
				moravec="Moravec";
				valenta="Valenta";
				hruby="Hruby";
				mach="Mach";
				liska="Liska";
				klima="Klima";
				kulhanek="Kulhanek";
				jelinek="Jelinek";
				zapletal="Zapletal";
				hanak="Hanak";
				slama="Slama";
				korinek="Korinek";
				martinek="Martinek";
				zelenka="Zelenka";
				kalina="Kalina";
				kvapil="Kvapil";
				skala="Skala";
				hujer="Hujer";
				peterka="Peterka";
				kozal="Kozel";
				smolik="Smolik";
				mucha="Mucha";
				smetana="Smetana";
				sejkora="Sejkora";
				nejedly="Nejedly";
				homolka="Homolka";
				hron="Hron";
				spanel="Spanel";
				vymazal="Vymazal";
				duda="Duda";
				vrzal="Vrzal";
				skopek="Skopek";
				horvat="Horvat";
				vitek="Vitek";
				nedbal="Nedbal";
				jelen="Jelen";
				planicka="Planicka";
				konopnik="Konopnik";
				troska="Troska";
				bobek="Bobek";
				zajic="Zajic";
				nohavica="Nohavica";
				janda="Janda";
				koukal="Koukal";
				beran="Beran";
				beranek="Beranek";
				jary="Jary";
				lebeda="Lebeda";
				kropacek="Kropacek";
				horacek="Horacek";
				pazout="Pazout";
				pernica="Pernica";
				kana="Kana";
				macecek="Macecek";
				chlup="Chlup";
				brazda="Brazda";
				tuma="Tuma";
				matejka="Matejka";
				havel="Havel";
				prutko="Prutko";
				kravchuk="Kravchuk";
				guglava="Guglava";
				bulba="Bulba";
				horyna="Horyna";
				vanek="Vanek";
				grygar="Grygar";
				macura="Macura";
				bednar="Bednar";
				hlinik="Hlinik";
				jurcik="Jurcik";
				janko="Janko";
				mazur="Mazur";
				ledvina="Ledvina";
				fojt="Fojt";
				gazda="Gazda";
				mironov="Mironov";
				antonov="Antonov";
				tkachuk="Tkachuk";
				petrenko="Petrenko";
				vandrovec="Vandrovec";
				korolenko="Korolenko";
				brodsky="Brodsky";
				rybski="Rybski";
				trachnikov="Trachnikov";
				nobski="Nobski";
				cerny="Cerny";
				suhaj="Suhaj";
				moricky="Moricky";
				maksimov="Maksimov";
				fisenko="Fisenko";
				shcherbakov="Shcherbakov";
				zverev="Zverev";
				turchinsky="Turchinsky";
				malyukov="Malyukov";
				bychkov="Bychkov";
				zhegalov="Zhegalov";
				dobryakov="Dobryakov";
				timoshenko="Timoshenko";
				alekseev="Alekseev";
				zhitkov="Zhitkov";
				potapenko="Potapenko";
				yefremov="Yefremov";
				krasko="Krasko";
				pashinin="Pashinin";
				smirnov="Smirnov";
				kuznetsov="Kuznetsov";
				vasilyev="Vasilyev";
				jagos="Jagos";
				pravda="Pravda";
			};
		};
		class CivilianWomen
		{
			class FirstNames
			{
				ludmila="Ludmila";
				ivana="Ivana";
				anna="Anna";
				petra="Petra";
				katerina="Katerina";
				vera="Vera";
				hana="Hana";
				daniela="Daniela";
				eva="Eva";
				magda="Magda";
				bozena="Bozena";
				darja="Darja";
				natalia="Natalia";
				natasha="Natasha";
				irina="Irina";
				olga="Olga";
				marie="Marie";
				martina="Martina";
				pavla="Pavla";
				marta="Marta";
				zlata="Zlata";
				kazi="Kazi";
				libuse="Libuse";
				teta="Teta";
				linda="Linda";
				marketa="Marketa";
				eliska="Eliska";
				apolena="Apolena";
				vladimira="Vladimira";
				jana="Jana";
				dagmar="Dagmar";
				jaroslava="Jaroslava";
				nela="Nela";
				sara="Sara";
				karolina="Karolina";
				nikola="Nikola";
				oksana="Oksana";
				raisa="Raisa";
				svetlana="Svetlana";
				tamara="Tamara";
				tatyana="Tatyana";
				zoya="Zoya";
				zhenya="Zhenya";
				katya="Katya";
				nadya="Nadya";
				sasha="Sasha";
				yulya="Yulya";
				lena="Lena";
				karina="Karina";
				nina="Nina";
				yelena="Yelena";
				viktorie="Viktorie";
				gabriela="Gabriela";
			};
			class LastNames
			{
				novakova="Novakova";
				masinova="Masinova";
				jiroutkova="Jiroutkova";
				benesova="Benesova";
				zemankova="Zemankova";
				vosahlova="Vosahlova";
				svobodova="Svobodova";
				hajkova="Hajkova";
				kralova="Kralova";
				novotna="Novotna";
				dvorakova="Dvorakova";
				moravcova="Moravcova";
				valentova="Valentova";
				hruba="Hruba";
				machova="Machova";
				liskova="Liskova";
				klimova="Klimova";
				kulhankova="Kulhankova";
				jelinkova="Jelinkova";
				zapletalova="Zapletalova";
				hanakova="Hanakova";
				slamova="Slamova";
				korinkova="Korinkova";
				martinkova="Martinkova";
				zelenkova="Zelenkova";
				kalinova="Kalinova";
				kvapilova="Kvapilova";
				skalova="Skalova";
				hujerova="Hujerova";
				peterkova="Peterkova";
				kozlova="Kozlova";
				smolikova="Smolikova";
				muchova="Muchova";
				smetanova="Smetanova";
				sejkorova="Sejkorova";
				nejedla="Nejedla";
				homolkova="Homolkova";
				hronova="Hronova";
				spanelova="Spanelova";
				vymazalova="Vymazalova";
				dudova="Dudova";
				vrzalova="Vrzalova";
				skopkova="Skopkova";
				horvatova="Horvatova";
				vitkova="Vitkova";
				nedbalova="Nedbalova";
				jelenova="Jelenova";
				planickova="Planickova";
				konopnikova="Konopnikova";
				troskova="Troskova";
				bobkova="Bobkova";
				zajicova="Zajicova";
				nohavicova="Nohavicova";
				jandova="Jandova";
				koukalova="Koukalova";
				beranova="Beranova";
				berankova="Berankova";
				jara="Jara";
				lebedova="Lebedova";
				kropackova="Kropackova";
				horackova="Horackova";
				pazoutova="Pazoutova";
				pernicova="Perniaova";
				kanova="Kanova";
				maceckova="Maceckova";
				chlupova="Chlupova";
				brazdaova="Brazdaova";
				tumova="Tumova";
				matejkova="Matejkova";
				havlova="Havlova";
				prutkova="Prutkova";
				kravchukova="Kravchukova";
				guglavova="Guglavova";
				bulbova="Bulbova";
				horynova="Horynova";
				vankova="Vankova";
				grygarova="Grygarova";
				macuraova="Macuraova";
				bednarova="Bednarova";
				hlinikova="Hlinikova";
				jurcikova="Jurcikova";
				jankova="Jankova";
				mazurova="Mazurova";
				ledvinova="Ledvinova";
				fojtova="Fojtova";
				gazdova="Gazdova";
				mironovova="Mironovova";
				antonovova="Antonovova";
				tkachukova="Tkachukova";
				petrenkova="Petrenkova";
				vandrovcova="Vandrovcova";
				korolenkova="Korolenkova";
				brodska="Brodska";
				rybska="Rybska";
				trachnikovova="Trachnikovova";
				nobska="Nobska";
				cerna="Cerna";
				suhajova="Suhajova";
				produnova="Produnova";
				zubova="Zubova";
				blagonravova="Blagonravova";
				davidova="Davidova";
				gusakova="Gusakova";
				nikolayeva="Nikolayeva";
				ivanova="Ivanova";
				maksimova="Maksimova";
				fisenkova="Fisenkova";
				shcherbakova="Shcherbakova";
				zvereva="Zvereva";
				zykova="Zykova";
				doronina="Doronina";
				turchinskaya="Turchinskaya";
				malyukova="Malyukova";
				rogozhkina="Rogozhkina";
				bychkova="Bychkova";
				zhegalova="Zhegalova";
				soloveychika="Soloveychika";
				strugackaya="Strugackaya";
				bulgakova="Bulgakova";
				tolstoyeva="Tolstoyeva";
				pushkina="Pushkina";
				dobryakova="Dobryakova";
				timoshenkova="Timoshenkova";
				alekseeva="Alekseeva";
				kanalosova="Kanalosova";
				moricka="Moricka";
			};
		};
	};
	class DefaultLighting
	{
		access=3;
		groundReflection[]={0.085000001,0.068000004,0.034000002};
		moonObjectColorFull[]={0.89999998,0.89999998,1,0.69999999};
		moonHaloObjectColorFull[]={0.89999998,0.89999998,1,0.0099999998};
		moonsetObjectColor[]={0.89999998,0.75,0.40000001};
		moonsetHaloObjectColor[]={0.89999998,0.5,0.2};
		nightAngle=5;
		sunSunset=20;
		endSunset=10;
	};
	class DefaultWorld
	{
		access=0;
		worldId=0;
		plateFormat="$$$  ## - ##";
		plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		centerPosition[]={6400,6400,0};
		latitude=-40;
		longitude=15;
		class Music: CfgMusic
		{
		};
		class EnvSounds: CfgEnvSounds
		{
		};
		cutscenes[]=
		{
			"intro"
		};
		class ReplaceObjects
		{
		};
		landGrid=50;
		gridNumbersOverLines=0;
		class Grid
		{
			offsetX=0;
			offsetY=0;
			class Zoom1
			{
				zoomMax=0.1;
				format="XY";
				formatX="Aa";
				formatY="00";
				stepX=128;
				stepY=128;
			};
			class Zoom2
			{
				zoomMax=1e+030;
				format="XY";
				formatX="A";
				formatY="0";
				stepX=1280;
				stepY=1280;
			};
		};
		startTime="16:45";
		startDate="17/11/2006";
		startWeather=0.12;
		startFog=0;
		startWind=0.1;
		forecastWeather=0.30000001;
		forecastFog=0;
		forecastWind=0.1;
		class Lighting: DefaultLighting
		{
		};
		class DayLightingBrightAlmost
		{
			deepNight[]=
			{
				-15,
				{0.050000001,0.050000001,0.059999999},
				{0.001,0.001,0.0020000001},
				{0.02,0.02,0.050000001},
				{0.003,0.003,0.003},
				{0.003,0.003,0.0060000001},
				{0.003,0.003,0.0060000001},
				0
			};
			fullNight[]=
			{
				-5,
				{0.050000001,0.050000001,0.059999999},
				{0.02,0.02,0.02},
				{0.039999999,0.039999999,0.039999999},
				{0.039999999,0.039999999,0.039999999},
				{0.0099999998,0.0099999998,0.02},
				{0.079999998,0.059999999,0.059999999},
				0
			};
			sunMoon[]=
			{
				-3.75,
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.035,0.039999999},
				{0.11,0.079999998,0.090000004},
				0.5
			};
			earlySun[]=
			{
				-2.5,
				{0.31999999,0.23999999,0.28},
				{0.079999998,0.059999999,0.07},
				{0.31999999,0.23999999,0.28},
				{0.079999998,0.059999999,0.07},
				{0.079999998,0.07,0.079999998},
				{0.14,0.1,0.12},
				1
			};
			sunrise[]=
			{
				0,
				
				{
					{0.69999999,0.44999999,0.44999999},
					"5.5+(-4)"
				},
				
				{
					{0.07,0.090000004,0.12},
					"4.5+(-4)"
				},
				
				{
					{0.60000002,0.47,0.25},
					"4.7+(-4)"
				},
				
				{
					{0.1,0.090000004,0.1},
					"4.4+(-4)"
				},
				
				{
					{0.5,0.40000001,0.40000001},
					"4.5+(-4)"
				},
				
				{
					{0.88,0.50999999,0.23999999},
					"6+(-4)"
				},
				1
			};
			earlyMorning[]=
			{
				5,
				
				{
					{0.64999998,0.55000001,0.55000001},
					"6+(-4)"
				},
				
				{
					{0.079999998,0.090000004,0.11},
					"5+(-4)"
				},
				
				{
					{0.55000001,0.47,0.25},
					"5.75+(-4)"
				},
				
				{
					{0.1,0.090000004,0.1},
					"4.75+(-4)"
				},
				
				{
					{0.5,0.40000001,0.40000001},
					"7.5+(-4)"
				},
				
				{
					{0.88,0.50999999,0.23999999},
					"8.75+(-4)"
				},
				1
			};
			midMorning[]=
			{
				15,
				
				{
					{0.98000002,0.85000002,0.80000001},
					"10.5+(-4)"
				},
				
				{
					{0.079999998,0.090000004,0.11},
					"6.5+(-4)"
				},
				
				{
					{0.87,0.47,0.25},
					"9.5+(-4)"
				},
				
				{
					{0.090000004,0.090000004,0.1},
					"7.5+(-4)"
				},
				
				{
					{0.5,0.40000001,0.40000001},
					"9.5+(-4)"
				},
				
				{
					{0.88,0.50999999,0.23999999},
					"9.75+(-4)"
				},
				1
			};
			morning[]=
			{
				25,
				
				{
					{1,1,0.89999998},
					"15.5+(-4)"
				},
				
				{
					{0.17,0.18000001,0.19},
					"12.5+(-4)"
				},
				
				{
					{1,1,0.89999998},
					"14.5+(-4)"
				},
				
				{
					{0.17,0.18000001,0.19},
					"13+(-4)"
				},
				
				{
					{0.15000001,0.15000001,0.15000001},
					"14.5+(-4)"
				},
				
				{
					{0.17,0.17,0.15000001},
					"15.5+(-4)"
				},
				1
			};
			noon[]=
			{
				70,
				
				{
					{0.95999998,0.98000002,1},
					"15.75+(-4)"
				},
				
				{
					{0.36000001,0.49000001,0.61000001},
					"13+(-4)"
				},
				
				{
					{1,1,1},
					"15+(-4)"
				},
				
				{
					{0.36000001,0.37,0.38},
					"13.5+(-4)"
				},
				
				{
					{0.89999998,0.89999998,0.89999998},
					"15+(-4)"
				},
				
				{
					{1,1,0.89999998},
					"16+(-4)"
				},
				1
			};
		};
		class DayLightingRainy
		{
			deepNight[]=
			{
				-15,
				{0.0034,0.0034,0.0040000002},
				{0.003,0.003,0.003},
				{0.0034,0.0034,0.0040000002},
				{0.003,0.003,0.003},
				{0.003,0.003,0.0060000001},
				{0.003,0.003,0.0060000001},
				0
			};
			fullNight[]=
			{
				-5,
				{0.023,0.023,0.023},
				{0.02,0.02,0.02},
				{0.023,0.023,0.023},
				{0.02,0.02,0.02},
				{0.0099999998,0.0099999998,0.02},
				{0.079999998,0.059999999,0.059999999},
				0
			};
			sunMoon[]=
			{
				-3.75,
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.035,0.039999999},
				{0.11,0.079999998,0.090000004},
				0.5
			};
			earlySun[]=
			{
				-2.5,
				{0.068899997,0.068899997,0.080399998},
				{0.059999999,0.059999999,0.07},
				{0.068899997,0.068899997,0.080399998},
				{0.059999999,0.059999999,0.07},
				{0.079999998,0.07,0.079999998},
				{0.14,0.1,0.12},
				0.5
			};
			earlyMorning[]=
			{
				0,
				
				{
					{1,1,1},
					"(-4)+3.95"
				},
				
				{
					{1,1,1},
					"(-4)+3.75"
				},
				
				{
					{1,1,1},
					"(-4)+3.95"
				},
				
				{
					{1,1,1},
					"(-4)+3.75"
				},
				
				{
					{1,1,1},
					"(-4)+4"
				},
				
				{
					{1,1,1},
					"(-4)+4.5"
				},
				1
			};
			morning[]=
			{
				5,
				
				{
					{1,1,1},
					"(-4)+5.7"
				},
				
				{
					{1,1,1},
					"(-4)+5.5"
				},
				
				{
					{1,1,1},
					"(-4)+5.7"
				},
				
				{
					{1,1,1},
					"(-4)+5.5"
				},
				
				{
					{1,1,1},
					"(-4)+7"
				},
				
				{
					{1,1,1},
					"(-4)+7.5"
				},
				1
			};
			lateMorning[]=
			{
				25,
				
				{
					{1,1,1},
					"(-4)+10.45"
				},
				
				{
					{1,1,1},
					"(-4)+10.25"
				},
				
				{
					{1,1,1},
					"(-4)+10.45"
				},
				
				{
					{1,1,1},
					"(-4)+10.25"
				},
				
				{
					{1,1,1},
					"(-4)+12"
				},
				
				{
					{1,1,1},
					"(-4)+12.5"
				},
				1
			};
			noon[]=
			{
				70,
				
				{
					{1,1,1},
					"(-4)+10.7"
				},
				
				{
					{1,1,1},
					"(-4)+10.5"
				},
				
				{
					{1,1,1},
					"(-4)+10.7"
				},
				
				{
					{1,1,1},
					"(-4)+10.5"
				},
				
				{
					{1,1,1},
					"(-4)+12.25"
				},
				
				{
					{1,1,1},
					"(-4)+12.75"
				},
				1
			};
		};
		class Weather
		{
			godraysTexture="core\data\godrays.paa";
			rainTexture="core\data\raindrops_8888.paa";
			class Overcast
			{
				class Weather1
				{
					overcast=0;
					sky="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					skyR="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					horizon="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					alpha=0;
					bright=0.5;
					speed=0.2;
					size=0.2;
					height=1;
					through=1;
					lightingOvercast=0;
					diffuse=1;
					cloudDiffuse=1;
					waves=0.15000001;
				};
				class Weather2
				{
					overcast=0.1;
					sky="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					skyR="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					horizon="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					alpha=0.30000001;
					size=0.30000001;
					height=0.89999998;
					bright=0.5;
					speed=0.25;
					through=1;
					lightingOvercast=0.1;
					diffuse=1;
					cloudDiffuse=0.89999998;
					waves=0.22;
				};
				class Weather3
				{
					overcast=0.40000001;
					sky="#(argb,8,8,3)color(0.51,0.57,0.79,1)";
					skyR="#(argb,8,8,3)color(0.51,0.57,0.79,1)";
					horizon="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					alpha=0.98000002;
					size=0.5;
					height=0.80000001;
					bright=0.44999999;
					speed=0.40000001;
					through=0.80000001;
					lightingOvercast=0.60000002;
					diffuse=0.69999999;
					cloudDiffuse=0.40000001;
					waves=0.5;
				};
				class Weather4
				{
					overcast=0.69999999;
					sky="#(argb,8,8,3)color(0.56,0.6,0.76,1)";
					skyR="#(argb,8,8,3)color(0.56,0.6,0.76,1)";
					horizon="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					alpha=0.97000003;
					size=0.75;
					height=0.75;
					bright=0.44999999;
					speed=0.69999999;
					through=0.2;
					diffuse=0.40000001;
					lightingOvercast=0.89999998;
					cloudDiffuse=0.75;
					waves=0.60000002;
				};
				class Weather5
				{
					overcast=1;
					sky="#(argb,8,8,3)color(0.39,0.39,0.4,1)";
					skyR="#(argb,8,8,3)color(0.39,0.39,0.4,1)";
					horizon="#(argb,8,8,3)color(0.46,0.51,0.67,1)";
					alpha=0.98000002;
					size=0.89999998;
					height=0.69999999;
					bright=0.44999999;
					speed=1;
					through=0;
					diffuse=0.2;
					cloudDiffuse=0.94999999;
					waves=0.69999999;
					lightingOvercast=1;
				};
			};
			class Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast=0;
				};
				class Rainy: DayLightingRainy
				{
					overcast=1;
				};
			};
			class ThunderboltNorm
			{
				model="\core\default\default.p3d";
				soundNear[]=
				{
					"",
					0.31622776,
					1
				};
				soundFar[]=
				{
					"",
					0.31622776,
					1
				};
			};
			class ThunderboltHeavy
			{
				model="\core\default\default.p3d";
				soundNear[]=
				{
					"",
					0.31622776,
					1
				};
				soundFar[]=
				{
					"",
					0.31622776,
					1
				};
			};
			temperatureDayMax[]={10,12,15,20,25,35,35,35,25,20,10,10};
			temperatureDayMin[]={-10,-6,-5,-1,5,6,7,10,5,2,-5,-10};
			temperatureNightMax[]={5,6,8,10,13,18,26,25,15,13,8,4};
			temperatureNightMin[]={-10,-10,-10,-5,0,4,5,6,5,0,-5,-10};
			overcastTemperatureFactor=0.40000001;
			blackSurfaceTemperatureDelta=5;
			whiteSurfaceTemperatureDelta=-2;
		};
		class Rain
		{
			texture="core\default_co.paa";
			speed=1;
			levels[]={8,2};
			raindrop="\core\default\default.p3d";
		};
		class SimulWeather
		{
			noiseTexture="core\data\noise_raw.paa";
			numKeyframesPerDay=48;
			windSpeedCoef="10.0f";
			moonIrradianceCoef="10.0f";
			fadeMaxDistanceKm=300;
			fadeMaxAltitudeKm=15;
			fadeNumAltitudes=4;
			fadeNumElevations=8;
			fadeNumDistances=8;
			fadeEarthTest=0;
			autoBrightness=1;
			autoBrightnessStrength=0.1;
			cloudGridWidth=128;
			cloudGridLength=128;
			cloudGridHeight=16;
			helperGridElevationSteps=24;
			helperGridAzimuthSteps=15;
			helperEffectiveEarthRadius=6378000;
			helperCurvedEarth=1;
			helperAdjustCurvature=0;
			helperNumLayers=64;
			helperMaxDistance=200000;
			helperNearCloudFade=0.5;
			helperChurn=10;
			cloudWidth=60000;
			cloudLength=60000;
			wrapClouds=1;
			noiseResolution=8;
			noisePeriod=4;
			opticalDensity=1.8;
			alphaSharpness=0.15000001;
			selfShadowScale=0.001;
			mieAsymmetry=0.87;
			minimumLightElevationDegrees=3;
			directLightCoef=0.25;
			indirectLightCoef=0.0099999998;
			fogStart=200000;
			fogEnd=300000;
			class DefaultKeyframe
			{
				rayleigh[]={0.0074900002,0.01388,0.02878};
				mie[]={0.0046000001,0.0046000001,0.0046000001};
				haze=1;
				hazeBaseKm=1;
				hazeScaleKm=0.5;
				hazeEccentricity=0.81999999;
				brightnessAdjustment=1;
				cloudiness=0.5;
				cloudBaseKm=3.2;
				cloudHeightKm=6;
				directLight=1;
				indirectLight=1;
				ambientLight=1;
				noiseOctaves=3;
				noisePersistence=0.55000001;
				fractalAmplitude=2.2;
				fractalWavelength=220;
				extinction=1.8;
				diffusivity=0.0099999998;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast=0;
					cloudiness=0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast=0.2;
					cloudiness=0.1;
				};
				class Weather3: DefaultKeyframe
				{
					overcast=0.40000001;
					cloudiness=0.2;
				};
				class Weather4: DefaultKeyframe
				{
					overcast=0.60000002;
					cloudiness=0.40000001;
				};
				class Weather5: DefaultKeyframe
				{
					overcast=0.80000001;
					cloudiness=0.5;
				};
				class Weather6: DefaultKeyframe
				{
					overcast=1;
					cloudiness=0.60000002;
				};
			};
		};
		skyTexture="#(argb,8,8,3)color(0.35,0.47,0.66,1)";
		skyTextureR="#(argb,8,8,3)color(0.35,0.47,0.66,1)";
		seaTexture="#(rgb,8,8,3)color(0,0,0,1)";
		midDetailTexture="#(rgb,1,1,1)color(0.5,0.5,0.5,1,cdt)";
		outsideMaterial="";
		outsideHeight=-10;
		minHeight=-10;
		shoreTop=0;
		peakWaveTop=-1;
		peakWaveBottom=-5;
		clouds[]=
		{
			"core\default\default.p3d",
			"core\default\default.p3d",
			"core\default\default.p3d",
			"core\default\default.p3d"
		};
		noDetailDist=50;
		fullDetailDist=20;
		satelliteNormalBlendStart=80;
		satelliteNormalBlendEnd=100;
		hazeDistCoef=-1;
		hazeFogCoef=-1;
		clutterGrid=2;
		clutterDist=50;
		clutterRadius=1;
		class DefaultClutter
		{
			affectedByWind=0;
			relativeColor[]={1,1,1,1};
			scaleMin=0.5;
			scaleMax=1;
			swLighting=1;
		};
		class Clutter
		{
		};
		skyObject="core\skyobject\skyobject.p3d";
		starsObject="core\default\default.p3d";
		pointObject="core\default\default.p3d";
		horizontObject="core\default\default.p3d";
		haloObject="core\default\default.p3d";
		sunObject="core\default\default.p3d";
		rainbowObject="core\default\default.p3d";
		moonObject="core\default\default.p3d";
		waterTexture="#(argb,8,8,3)color(0.35,0.47,0.66,1)";
		envTexture="";
		satelliteMap="";
		layerMask="";
		seaMaterial="#water";
		shoreMaterial="#shore";
		shoreFoamMaterial="#shoreFoam";
		shoreWetMaterial="#shoreWet";
		terrainMaterial="#terrain";
		class Subdivision
		{
			class Fractal
			{
				rougness=10;
				maxRoad=0.2;
				maxTrack=1;
				maxSlopeFactor=0.050000001;
			};
			class WhiteNoise
			{
				rougness=5;
				maxRoad=0.1;
				maxTrack=0.5;
				maxSlopeFactor=0.025;
			};
			minY=-0;
			minSlope=0.02;
		};
		class Ambient
		{
		};
	};
	initWorld="";
	demoWorld="";
};
class CfgWorldList
{
	access=1;
};
class CfgGroups
{
};
class CfgAddons
{
	access=1;
	class PreloadBanks
	{
	};
	class PreloadAddons
	{
	};
};
class CfgEditorObjects
{
	prefix_editor="bin\prefix.cpp";
	postfix_editor="bin\postfix.cpp";
	marker="bin\marker.cpp";
	script="bin\script.cpp";
	intel="bin\intel.cpp";
	unit="bin\unit.cpp";
	vehicle="bin\vehicle.cpp";
	item="bin\item.cpp";
};
class CfgMPGameTypes
{
	class Unknown
	{
		name="$STR_XBOX_MPTYPE_UNKNOWN";
		shortcut="$STR_XBOX_MPTYPE_UNKNOWN_SHORT";
		statsStandard="StandardUnknown";
		statsRanked="RankedUnknown";
		id=0;
	};
	class DM
	{
		name="$STR_XBOX_MPTYPE_DM";
		shortcut="$STR_XBOX_MPTYPE_DM_SHORT";
		statsStandard="StandardDM";
		statsRanked="RankedDM";
		id=1;
	};
	class CTF
	{
		name="$STR_XBOX_MPTYPE_CTF";
		shortcut="$STR_XBOX_MPTYPE_CTF_SHORT";
		statsStandard="StandardCTF";
		statsRanked="RankedCTF";
		id=2;
	};
	class FF
	{
		name="$STR_XBOX_MPTYPE_FF";
		shortcut="$STR_XBOX_MPTYPE_FF_SHORT";
		statsStandard="StandardFF";
		statsRanked="RankedFF";
		id=3;
	};
	class Coop
	{
		name="$STR_XBOX_MPTYPE_COOP";
		shortcut="$STR_XBOX_MPTYPE_COOP_SHORT";
		statsStandard="";
		statsRanked="";
		id=4;
	};
	class Team
	{
		name="$STR_XBOX_MPTYPE_TEAM";
		shortcut="$STR_XBOX_MPTYPE_TEAM_SHORT";
		statsStandard="StandardTeam";
		statsRanked="RankedTeam";
		id=5;
	};
	class SCont
	{
		name="$STR_XBOX_MPTYPE_SCONTROL";
		shortcut="$STR_XBOX_MPTYPE_SCONTROL_SHORT";
		statsStandard="StandardSControl";
		statsRanked="RankedSControl";
		id=6;
	};
	class Hold
	{
		name="$STR_XBOX_MPTYPE_HOLDLOCATION";
		shortcut="$STR_XBOX_MPTYPE_HOLDLOCATION_SHORT";
		statsStandard="StandardHold";
		statsRanked="RankedHold";
		id=7;
	};
	class CTI
	{
		name="$STR_XBOX_MPTYPE_CTI";
		shortcut="$STR_XBOX_MPTYPE_CTI_SHORT";
		statsStandard="StandardCTI";
		statsRanked="RankedCTI";
		id=8;
	};
};
class CfgLiveStats
{
	class TrueSkill
	{
		name="TrueSkill™ rankings";
		board=-65535;
		class Columns
		{
			class Rank
			{
				id=-1;
				name="$STR_LIVE_STATS_RANK";
				width=0.1;
				format="%d.";
				align=1;
			};
			class Gamertag
			{
				id=-2;
				name="$STR_LIVE_STATS_NAME";
				width=0.5;
				format="%s";
				align=0;
			};
			class Skill
			{
				id=61;
				name="TrueSkill™ rank";
				width=0.2;
				format="%d";
				align=1;
			};
			class GamesPlayed
			{
				id=62;
				name="Games played";
				width=0.2;
				format="%d";
				align=1;
			};
		};
	};
	class StandardDM
	{
		name="Standard - Death Match";
		board=1;
		algorithm=2;
		dropouts=1;
		coefWin=10;
		coefLoose=-10;
		coefM1=1;
		coefS1=100;
		coefM2=1;
		coefS2=100;
		coefMin=0.1;
		coefMax=10;
		class Columns
		{
			class Rank
			{
				id=-1;
				name="$STR_LIVE_STATS_RANK";
				width=0.1;
				format="%d.";
				align=1;
			};
			class Gamertag
			{
				id=-2;
				name="$STR_LIVE_STATS_NAME";
				width=0.5;
				format="%s";
				align=0;
			};
			class Score
			{
				id=-3;
				name="Score";
				width=0.2;
				format="%I64d";
				align=1;
			};
			class GamesPlayed
			{
				id=1;
				name="Games played";
				width=0.2;
				format="%d";
				align=1;
			};
		};
	};
	class StandardCTF
	{
		name="Standard - Capture The Flag";
		board=2;
		algorithm=3;
		dropouts=1;
		coefWin=10;
		coefLoose=-10;
		coefM1=1;
		coefS1=100;
		coefM2=1;
		coefS2=100;
		coefMin=0.1;
		coefMax=10;
		coefAI=0.5;
		class Columns
		{
			class Rank
			{
				id=-1;
				name="$STR_LIVE_STATS_RANK";
				width=0.1;
				format="%d.";
				align=1;
			};
			class Gamertag
			{
				id=-2;
				name="$STR_LIVE_STATS_NAME";
				width=0.5;
				format="%s";
				align=0;
			};
			class Score
			{
				id=-3;
				name="Score";
				width=0.2;
				format="%I64d";
				align=1;
			};
			class GamesPlayed
			{
				id=1;
				name="Games played";
				width=0.2;
				format="%d";
				align=1;
			};
		};
	};
	class StandardFF: StandardDM
	{
		name="Standard - Flag Fight";
		board=3;
	};
	class StandardTeam: StandardCTF
	{
		name="Standard - Team Mission";
		board=4;
	};
	class StandardSControl: StandardCTF
	{
		name="Standard - Sector Control";
		board=5;
	};
	class StandardHold: StandardCTF
	{
		name="Standard - Hold Location";
		board=6;
	};
	class StandardUnknown: StandardDM
	{
		name="Standard - Unknown";
		board=7;
	};
	class RankedDM: StandardDM
	{
		name="Ranked - Death Match";
		board=8;
	};
	class RankedCTF: StandardCTF
	{
		name="Ranked - Capture The Flag";
		board=9;
	};
	class RankedFF: StandardFF
	{
		name="Ranked - Flag Fight";
		board=10;
	};
	class RankedTeam: StandardTeam
	{
		name="Ranked - Team Mission";
		board=11;
	};
	class RankedSControl: StandardSControl
	{
		name="Ranked - Sector Control";
		board=12;
	};
	class RankedHold: StandardHold
	{
		name="Ranked - Hold Location";
		board=13;
	};
	class RankedUnknown: StandardUnknown
	{
		name="Ranked - Unknown";
		board=14;
	};
};
class CfgAchievements
{
	class Quartermaster
	{
		id=1;
		name="Quartermaster";
		description="Unlock all Armory items.";
		descriptionUnachieved="Unlock all Armory items.";
		picture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class Marksman
	{
		id=2;
		name="Marksman";
		description="Complete the Firing Range with 100% accuracy and at least 20 shots fired.";
		descriptionUnachieved="Complete the Firing Range with 100% accuracy and at least 20 shots fired.";
		picture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class Speedfreak
	{
		id=3;
		name="Speedfreak";
		description="Complete the Mobility Range in under 1:00.";
		descriptionUnachieved="Complete the Mobility Range in under 1:00.";
		picture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class SkyHigh
	{
		id=4;
		name="Sky High";
		description="Get to 2000 meters altitude.";
		descriptionUnachieved="Get to 2000 meters altitude.";
		picture="#(argb,8,8,3)color(1,1,1,1)";
	};
	class Hunter
	{
		id=5;
		name="Hunter";
		description="Shoot down 100 seagulls.";
		descriptionUnachieved="Shoot down 100 seagulls.";
		picture="#(argb,8,8,3)color(1,1,1,1)";
	};
};
class CfgVoiceMask
{
	class None
	{
		name="$STR_VOICE_MASK_NONE";
		specEnergyWeight=-1;
		pitchScale=-1;
		whisperValue=-1;
		roboticValue=-1;
	};
	class Anonymous
	{
		name="$STR_VOICE_MASK_ANONYMOUS";
		specEnergyWeight=0.94999999;
		pitchScale=0.5;
		whisperValue=0.34999999;
		roboticValue=-1;
	};
	class Cartoon
	{
		name="$STR_VOICE_MASK_CARTOON";
		specEnergyWeight=0.1;
		pitchScale=-1;
		whisperValue=-1;
		roboticValue=-1;
	};
	class BigGuy
	{
		name="$STR_VOICE_MASK_BIGGUY";
		specEnergyWeight=0.89999998;
		pitchScale=0.050000001;
		whisperValue=-1;
		roboticValue=-1;
	};
	class Child
	{
		name="$STR_VOICE_MASK_CHILD";
		specEnergyWeight=0.1;
		pitchScale=0.69999999;
		whisperValue=-1;
		roboticValue=-1;
	};
	class Robot
	{
		name="$STR_VOICE_MASK_ROBOT";
		specEnergyWeight=0.5;
		pitchScale=-1;
		whisperValue=-1;
		roboticValue=0.050000001;
	};
	class DarkMaster
	{
		name="$STR_VOICE_MASK_DARKMASTER";
		specEnergyWeight=1;
		pitchScale=0;
		whisperValue=-1;
		roboticValue=-1;
	};
	class Whisper
	{
		name="$STR_VOICE_MASK_WHISPER";
		specEnergyWeight=0.5;
		pitchScale=-1;
		whisperValue=0.0099999998;
		roboticValue=-1;
	};
};
class CfgRumble
{
	coefEngineToLeft="1.5*0.9";
	coefEngineToRight="1.2*0.9";
	coefSurfaceToLeft=0.25;
	coefSurfaceToRight=0.44999999;
	coefWeaponToLeft=4;
	coefWeaponToRight=4;
};
class ButtonDeadZonesDefault
{
	deadZone_A[]={64,48};
	deadZone_B[]={64,48};
	deadZone_X[]={64,48};
	deadZone_Y[]={64,48};
	deadZone_Up[]={64,48};
	deadZone_Down[]={64,48};
	deadZone_Left[]={64,48};
	deadZone_Right[]={64,48};
	deadZone_Start[]={64,48};
	deadZone_Back[]={64,48};
	deadZone_LeftBumper[]={64,48};
	deadZone_RightBumper[]={64,48};
	deadZone_LeftThumb[]={64,48};
	deadZone_RightThumb[]={64,48};
};
class ControllerTypes
{
	class Gamepad
	{
		resource="RscDisplayProfileController";
		hint="$STR_XBOX_GAMEPAD";
		imageRightA=0;
		imageRightB=0;
		imageRightY=0;
		imageRightX=0;
		imageRightWhite=0;
		imageRightBlack=0;
		imageRightLeft=1;
		imageRightRight=1;
		imageRightUp=1;
		imageRightDown=1;
		imageRightBack=1;
		imageRightStart=1;
	};
	class Joystick
	{
		resource="RscDisplayProfileControllerJoystick";
		hint="$STR_XBOX_JOYSTICK";
		imageRightA=0;
		imageRightB=0;
		imageRightY=1;
		imageRightX=1;
		imageRightWhite=1;
		imageRightBlack=1;
		imageRightLeft=1;
		imageRightRight=1;
		imageRightUp=1;
		imageRightDown=1;
		imageRightBack=0;
		imageRightStart=0;
	};
	class Wheel
	{
		resource="RscDisplayProfileControllerWheel";
		hint="$STR_XBOX_WHEEL";
		imageRightA=0;
		imageRightB=0;
		imageRightY=0;
		imageRightX=0;
		imageRightWhite=0;
		imageRightBlack=0;
		imageRightLeft=1;
		imageRightRight=1;
		imageRightUp=1;
		imageRightDown=1;
		imageRightBack=1;
		imageRightStart=1;
	};
};
class ControllerSchemes
{
	defaultScheme="Default";
	defaultSchemeMovementLeftBrakeTriggerAccTrigger="Default";
	defaultSchemeMovementLeftBrakeTriggerAccButton="Default";
	defaultSchemeMovementLeftBrakeButtonAccTrigger="Default";
	defaultSchemeMovementLeftBrakeButtonAccButton="Default";
	defaultSchemeMovementRightBrakeTriggerAccTrigger="Default";
	defaultSchemeMovementRightBrakeTriggerAccButton="Default";
	defaultSchemeMovementRightBrakeButtonAccTrigger="Default";
	defaultSchemeMovementRightBrakeButtonAccButton="Default";
	class Default
	{
		name="$STR_XBOX_CONTROLER_SCHEME_DEFAULT";
		class Gamepad
		{
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[]={192,128};
				deadZone_RightTrigger[]={80,64};
			};
			class ThumbStickDeadZones
			{
				leftX=0.20999999;
				leftY=0.23;
				rightX=0.20999999;
				rightY=0.23;
			};
			class Actions
			{
				ToggleWeapons[]=
				{
					"0x00050000 + 3"
				};
				DefaultAction[]=
				{
					"0x00050000 + 13"
				};
				ReloadMagazine[]=
				{
					"0x00050000 + 2"
				};
				LockTarget[]={};
				RevealTarget[]=
				{
					"0x00050000 + 12"
				};
				VehLockTargets[]=
				{
					"0x00050000 + 14"
				};
				PrevAction[]=
				{
					"0x00050000 + 4"
				};
				NextAction[]=
				{
					"0x00050000 + 5"
				};
				Action[]=
				{
					"0x00050000 + 0"
				};
				MenuSelect[]=
				{
					"0x00050000 + 7"
				};
				MenuBack[]=
				{
					"0x00050000 + 6"
				};
				CancelAction[]=
				{
					"0x00050000 + 2"
				};
				Diary[]={};
				ShowMap[]=
				{
					"0x00050000 + 11"
				};
				HideMap[]={};
				ZoomContIn[]=
				{
					"0x00050000 + 12"
				};
				PersonView[]=
				{
					"0x00050000 + 9"
				};
				IngamePause[]=
				{
					"0x00050000 + 8"
				};
				Optics[]=
				{
					"0x00050000 + 15"
				};
				class CommandLeft
				{
					keys[]=
					{
						"0x00050000 + 20"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandRight
				{
					keys[]=
					{
						"0x00050000 + 16"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandForward
				{
					keys[]=
					{
						"0x00050000 + 17"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				class CommandBack
				{
					keys[]=
					{
						"0x00050000 + 21"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				CommandFast[]={};
				CommandSlow[]={};
			};
		};
		class Joystick
		{
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[]={192,128};
				deadZone_RightTrigger[]={80,64};
			};
			class ThumbStickDeadZones
			{
				leftX=0.20999999;
				leftY=0.23;
				rightX=0.20999999;
				rightY=0.23;
			};
			class Actions
			{
				ToggleWeapons[]=
				{
					"0x00050000 + 3"
				};
				DefaultAction[]=
				{
					"0x00050000 + 0"
				};
				ReloadMagazine[]=
				{
					"0x00050000 + 2"
				};
				LookAround[]=
				{
					"0x00050000 + 15"
				};
				LockTarget[]={};
				RevealTarget[]=
				{
					"0x00050000 + 15"
				};
				VehLockTargets[]=
				{
					"0x00050000 + 11"
				};
				PrevAction[]=
				{
					"0x00050000 + 4"
				};
				NextAction[]=
				{
					"0x00050000 + 5"
				};
				Action[]=
				{
					"0x00050000 + 14"
				};
				MenuSelect[]=
				{
					"0x00050000 + 7"
				};
				MenuBack[]=
				{
					"0x00050000 + 6"
				};
				CancelAction[]=
				{
					"0x00050000 + 2"
				};
				Diary[]=
				{
					"0x00050000 + 11"
				};
				ShowMap[]={};
				HideMap[]={};
				ZoomContIn[]=
				{
					"0x00050000 + 15"
				};
				PersonView[]=
				{
					"0x00050000 + 9"
				};
				IngamePause[]=
				{
					"0x00050000 + 8"
				};
				Optics[]={};
				class CommandLeft
				{
					keys[]=
					{
						"0x00050000 + 22"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandRight
				{
					keys[]=
					{
						"0x00050000 + 18"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandForward
				{
					keys[]=
					{
						"0x00050000 + 13"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				class CommandBack
				{
					keys[]=
					{
						"0x00050000 + 12"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				CommandFast[]={};
				CommandSlow[]={};
			};
		};
		class Wheel
		{
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[]={192,128};
				deadZone_RightTrigger[]={80,64};
			};
			class ThumbStickDeadZones
			{
				leftX=0.20999999;
				leftY=0.23;
				rightX=0.20999999;
				rightY=0.23;
			};
			class Actions
			{
				ToggleWeapons[]=
				{
					"0x00050000 + 3"
				};
				DefaultAction[]=
				{
					"0x00050000 + 10"
				};
				ReloadMagazine[]=
				{
					"0x00050000 + 2"
				};
				LookAround[]=
				{
					"0x00050000 + 11"
				};
				LockTarget[]={};
				RevealTarget[]=
				{
					"0x00050000 + 12"
				};
				VehLockTargets[]={};
				PrevAction[]=
				{
					"0x00050000 + 4"
				};
				NextAction[]=
				{
					"0x00050000 + 5"
				};
				Action[]=
				{
					"0x00050000 + 0"
				};
				MenuSelect[]=
				{
					"0x00050000 + 7"
				};
				MenuBack[]=
				{
					"0x00050000 + 6"
				};
				CancelAction[]=
				{
					"0x00050000 + 2"
				};
				Diary[]=
				{
					"0x00050000 + 11"
				};
				ShowMap[]={};
				HideMap[]={};
				ZoomContIn[]=
				{
					"0x00050000 + 11"
				};
				PersonView[]=
				{
					"0x00050000 + 9"
				};
				Optics[]={};
				IngamePause[]=
				{
					"0x00050000 + 8"
				};
				class CommandLeft
				{
					keys[]=
					{
						"0x00050000 + 20"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandRight
				{
					keys[]=
					{
						"0x00050000 + 16"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandForward
				{
					keys[]=
					{
						"0x00050000 + 17"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				class CommandBack
				{
					keys[]=
					{
						"0x00050000 + 21"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				CommandFast[]={};
				CommandSlow[]={};
			};
		};
		class Vehicles
		{
			class Characters
			{
				name="$STR_XBOX_CONTROLER_CHARACTERS";
				axisY=0;
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_MOVE";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_STRAFE";
					textLThumbPS="$STR_XBOX_CONTROLER_LS_UP";
					textRThumb="$STR_XBOX_CONTROLER_AIM";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_UD_AIM";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_LR_AIM";
					textRThumbPS="$STR_XBOX_CONTROLER_RS_OPTICS";
					class Actions
					{
						class MoveBack
						{
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class MoveFastForward
						{
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class TurnLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						class TurnRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						MoveUp[]=
						{
							"0x00050000 + 14"
						};
						MoveDown[]=
						{
							"0x00050000 + 1"
						};
						class AimUp
						{
							actionNameYAxis="AimDown";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimDown
						{
							actionNameYAxis="AimUp";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimHeadUp
						{
							actionNameYAxis="AimHeadDown";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadDown
						{
							actionNameYAxis="AimHeadUp";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
					};
				};
				class Joystick
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_MOVE";
					textLThumbLR="$STR_XBOX_CONTROLER_RS_STRAFE";
					textLThumbPS="$STR_XBOX_CONTROLER_RS_KNEEL";
					textRThumb="$STR_XBOX_CONTROLER_AIM";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_UD_AIM";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_LR_AIM";
					textRThumbPS="$STR_XBOX_CONTROLER_LS_ZOOM";
					class Actions
					{
						class MoveBack
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class MoveFastForward
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class TurnLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						class TurnRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						MoveUp[]={};
						MoveDown[]=
						{
							"0x00050000 + 1"
						};
						class AimUp
						{
							actionNameYAxis="AimDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimDown
						{
							actionNameYAxis="AimUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimHeadUp
						{
							actionNameYAxis="AimHeadDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadDown
						{
							actionNameYAxis="AimHeadUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
					};
				};
				class Wheel
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_MOVE";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_STRAFE";
					textLThumbPS="";
					textRThumb="";
					textRThumbLR="";
					textRThumbUD="";
					textRThumbPS="";
					class Actions
					{
						class MoveBack
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class MoveFastForward
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class TurnLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1.5,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1.5,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1.5,
								4
							};
						};
						class TurnRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1.5,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1.5,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1.5,
								4
							};
						};
						MoveUp[]={};
						MoveDown[]={};
						AimUp[]={};
						AimDown[]={};
						AimLeft[]={};
						AimRight[]={};
						AimHeadUp[]={};
						AimHeadDown[]={};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
					};
				};
			};
			class Ground
			{
				name="$STR_XBOX_CONTROLER_VEHICLE_GROUND";
				axisY=0;
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_MOVE";
					textLThumbLR="";
					textLThumbPS="";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbUD="";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_TURN";
					textRThumbPS="";
					class Actions
					{
						class CarLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						class CarRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						CarForward[]={};
						class CarBack
						{
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class CarFastForward
						{
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						CarSlowForward[]={};
						class CarAimUp
						{
							actionNameYAxis="CarAimDown";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
						};
						class CarAimDown
						{
							actionNameYAxis="CarAimUp";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
						};
						class CarAimLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
						};
						class CarAimRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
						};
						class AimHeadUp
						{
							actionNameYAxis="AimHeadDown";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadDown
						{
							actionNameYAxis="AimHeadUp";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						SwapGunner[]=
						{
							"0x00050000 + 1"
						};
					};
				};
				class Joystick
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_MOVE";
					textLThumbLR="";
					textLThumbPS="";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbUD="";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_TURN";
					textRThumbPS="";
					class Actions
					{
						class CarLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						class CarRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						CarForward[]={};
						class CarBack
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class CarFastForward
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						CarSlowForward[]={};
						class CarAimUp
						{
							actionNameYAxis="CarAimDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
						};
						class CarAimDown
						{
							actionNameYAxis="CarAimUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
						};
						class CarAimLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
						};
						class CarAimRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
						};
						SwapGunner[]=
						{
							"0x00050000 + 1"
						};
					};
				};
				class Wheel
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_STRAFE";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_MOVE";
					textLThumbPS="";
					textRThumb="";
					textRThumbLR="";
					textRThumbUD="";
					textRThumbPS="";
					class Actions
					{
						class CarLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						class CarRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						CarForward[]={};
						class CarBack
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class CarFastForward
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						CarSlowForward[]={};
						CarAimUp[]={};
						CarAimDown[]={};
						class CarAimLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class CarAimRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						SwapGunner[]=
						{
							"0x00050000 + 0"
						};
					};
				};
			};
			class Aircraft
			{
				name="$STR_XBOX_CONTROLER_AIR";
				axisY=1;
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_FLY";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_RUDDER";
					textLThumbPS="$STR_XBOX_CONTROLER_LS_LOCK";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_TILT_MOVE";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_TILT";
					textRThumbPS="";
					class Actions
					{
						class HeliCyclicBack
						{
							actionNameYAxis="HeliCyclicForward";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicForward
						{
							actionNameYAxis="HeliCyclicBack";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderLeft
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderRight
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCollectiveRaise
						{
							keys[]=
							{
								"0x00050000 + 11"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCollectiveLower
						{
							keys[]=
							{
								"0x00050000 + 10"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						HeliBack[]={};
						HeliFastForward[]={};
						HeliForward[]={};
						class SeagullUp
						{
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullDown
						{
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullBack
						{
							actionNameYAxis="SeagullFastForward";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullFastForward
						{
							actionNameYAxis="SeagullBack";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class AimHeadUp
						{
							actionNameYAxis="AimHeadDown";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadDown
						{
							actionNameYAxis="AimHeadUp";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimDown
						{
							actionNameYAxis="AimUp";
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimUp
						{
							actionNameYAxis="AimDown";
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						SeagullForward[]={};
						HeliManualFire[]=
						{
							"0x00050000 + 1"
						};
						Diary[]={};
						ZoomContIn[]={};
						LookAround[]={};
						ShowMap[]={};
						keyLookCenter[]=
						{
							"0x00050000 + 15"
						};
						AutoHover[]=
						{
							"0x00050000 + 2"
						};
						AutoHoverCancel[]=
						{
							"0x00050000 + 2"
						};
						LookAroundToggle[]=
						{
							"0x00050000 + 1"
						};
					};
				};
				class Joystick
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_FLY";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_RUDDER";
					textLThumbPS="$STR_XBOX_CONTROLER_LS_LOCK";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_TILT_MOVE";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_TILT";
					textRThumbPS="";
					class Actions
					{
						class HeliUp
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliDown
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliBack
						{
							actionNameYAxis="HeliFastForward";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliFastForward
						{
							actionNameYAxis="HeliBack";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						HeliForward[]={};
						HeliManualFire[]=
						{
							"0x00050000 + 1"
						};
						class SeagullUp
						{
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullDown
						{
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullBack
						{
							actionNameYAxis="SeagullFastForward";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullFastForward
						{
							actionNameYAxis="SeagullBack";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						SeagullForward[]={};
					};
				};
				class Wheel
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_TURN";
					textLThumbUD="";
					textLThumbPS="";
					textRThumb="";
					textRThumbLR="";
					textRThumbUD="";
					textRThumbPS="";
					class Actions
					{
						HeliUp[]={};
						HeliDown[]={};
						HeliCyclicLeft[]={};
						HeliCyclicRight[]={};
						class HeliRudderLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliBack
						{
							actionNameYAxis="HeliFastForward";
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliFastForward
						{
							actionNameYAxis="HeliBack";
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						HeliForward[]={};
						HeliManualFire[]=
						{
							"0x00050000 + 0"
						};
						SeagullUp[]={};
						SeagullDown[]={};
						class SeagullBack
						{
							actionNameYAxis="SeagullFastForward";
							keys[]=
							{
								"0x00050000 + 12"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullFastForward
						{
							actionNameYAxis="SeagullBack";
							keys[]=
							{
								"0x00050000 + 13"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						SeagullForward[]={};
					};
				};
			};
		};
	};
	class LeftHanded: Default
	{
		name="Left Handed";
		class Gamepad
		{
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[]={192,128};
				deadZone_RightTrigger[]={80,64};
			};
			class ThumbStickDeadZones
			{
				leftX=0.20999999;
				leftY=0.23;
				rightX=0.20999999;
				rightY=0.23;
			};
			class Actions
			{
				ToggleWeapons[]=
				{
					"0x00050000 + 3"
				};
				DefaultAction[]=
				{
					"0x00050000 + 12"
				};
				ReloadMagazine[]=
				{
					"0x00050000 + 2"
				};
				LookAround[]=
				{
					"0x00050000 + 13"
				};
				LockTarget[]={};
				RevealTarget[]=
				{
					"0x00050000 + 13"
				};
				VehLockTargets[]=
				{
					"0x00050000 + 15"
				};
				PrevAction[]=
				{
					"0x00050000 + 4"
				};
				NextAction[]=
				{
					"0x00050000 + 5"
				};
				Action[]=
				{
					"0x00050000 + 0"
				};
				MenuSelect[]=
				{
					"0x00050000 + 7"
				};
				MenuBack[]=
				{
					"0x00050000 + 6"
				};
				CancelAction[]=
				{
					"0x00050000 + 2"
				};
				Diary[]=
				{
					"0x00050000 + 11"
				};
				ShowMap[]={};
				HideMap[]={};
				ZoomContIn[]=
				{
					"0x00050000 + 13"
				};
				PersonView[]=
				{
					"0x00050000 + 9"
				};
				IngamePause[]=
				{
					"0x00050000 + 8"
				};
				Optics[]=
				{
					"0x00050000 + 14"
				};
				class CommandLeft
				{
					keys[]=
					{
						"0x00050000 + 22"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandRight
				{
					keys[]=
					{
						"0x00050000 + 18"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandForward
				{
					keys[]=
					{
						"0x00050000 + 19"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				class CommandBack
				{
					keys[]=
					{
						"0x00050000 + 23"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				CommandFast[]={};
				CommandSlow[]={};
			};
		};
		class Joystick
		{
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[]={192,128};
				deadZone_RightTrigger[]={80,64};
			};
			class ThumbStickDeadZones
			{
				leftX=0.20999999;
				leftY=0.23;
				rightX=0.20999999;
				rightY=0.23;
			};
			class Actions
			{
				ToggleWeapons[]=
				{
					"0x00050000 + 3"
				};
				DefaultAction[]=
				{
					"0x00050000 + 3"
				};
				ReloadMagazine[]=
				{
					"0x00050000 + 2"
				};
				LookAround[]=
				{
					"0x00050000 + 12"
				};
				LockTarget[]={};
				RevealTarget[]={};
				VehLockTargets[]={};
				PrevAction[]=
				{
					"0x00050000 + 4"
				};
				NextAction[]=
				{
					"0x00050000 + 5"
				};
				Action[]=
				{
					"0x00050000 + 0"
				};
				MenuSelect[]=
				{
					"0x00050000 + 7"
				};
				MenuBack[]=
				{
					"0x00050000 + 6"
				};
				CancelAction[]=
				{
					"0x00050000 + 2"
				};
				Diary[]=
				{
					"0x00050000 + 11"
				};
				ShowMap[]={};
				HideMap[]={};
				ZoomContIn[]={};
				PersonView[]=
				{
					"0x00050000 + 9"
				};
				Optics[]=
				{
					"0x00050000 + 10"
				};
				IngamePause[]=
				{
					"0x00050000 + 8"
				};
				class CommandLeft
				{
					keys[]=
					{
						"0x00050000 + 20"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandRight
				{
					keys[]=
					{
						"0x00050000 + 16"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandForward
				{
					keys[]=
					{
						"0x00050000 + 17"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				class CommandBack
				{
					keys[]=
					{
						"0x00050000 + 21"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				CommandFast[]={};
				CommandSlow[]={};
			};
		};
		class Wheel
		{
			class ButtonDeadZones: ButtonDeadZonesDefault
			{
				deadZone_LeftTrigger[]={192,128};
				deadZone_RightTrigger[]={80,64};
			};
			class ThumbStickDeadZones
			{
				leftX=0.20999999;
				leftY=0.23;
				rightX=0.20999999;
				rightY=0.23;
			};
			class Actions
			{
				ToggleWeapons[]=
				{
					"0x00050000 + 3"
				};
				DefaultAction[]=
				{
					"0x00050000 + 10"
				};
				ReloadMagazine[]=
				{
					"0x00050000 + 2"
				};
				LookAround[]=
				{
					"0x00050000 + 11"
				};
				LockTarget[]={};
				RevealTarget[]=
				{
					"0x00050000 + 12"
				};
				VehLockTargets[]={};
				PrevAction[]=
				{
					"0x00050000 + 4"
				};
				NextAction[]=
				{
					"0x00050000 + 5"
				};
				Action[]=
				{
					"0x00050000 + 0"
				};
				MenuSelect[]=
				{
					"0x00050000 + 7"
				};
				MenuBack[]=
				{
					"0x00050000 + 6"
				};
				CancelAction[]=
				{
					"0x00050000 + 2"
				};
				Diary[]=
				{
					"0x00050000 + 11"
				};
				ShowMap[]={};
				HideMap[]={};
				ZoomContIn[]=
				{
					"0x00050000 + 11"
				};
				PersonView[]=
				{
					"0x00050000 + 9"
				};
				Optics[]={};
				IngamePause[]=
				{
					"0x00050000 + 8"
				};
				class CommandLeft
				{
					keys[]=
					{
						"0x00050000 + 20"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandRight
				{
					keys[]=
					{
						"0x00050000 + 16"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						2,
						3
					};
					curveMedium[]=
					{
						"Gamma",
						2,
						3
					};
					curveHigh[]=
					{
						"Gamma",
						2,
						3
					};
				};
				class CommandForward
				{
					keys[]=
					{
						"0x00050000 + 17"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				class CommandBack
				{
					keys[]=
					{
						"0x00050000 + 21"
					};
					deadZone=0;
					curveLow[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveMedium[]=
					{
						"Gamma",
						1,
						1.5
					};
					curveHigh[]=
					{
						"Gamma",
						1,
						1.5
					};
				};
				CommandFast[]={};
				CommandSlow[]={};
			};
		};
		class Vehicles: Vehicles
		{
			class Characters: Characters
			{
				name="characTers";
				axisY=0;
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_AIM";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_LR_AIM";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_UD_AIM";
					textLThumbPS="$STR_XBOX_CONTROLER_LS_OPTICS";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_STRAFE";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_MOVE";
					textRThumbPS="$STR_XBOX_CONTROLER_RS_UP";
					class Actions
					{
						class MoveBack
						{
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class MoveFastForward
						{
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class TurnLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						class TurnRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						MoveUp[]=
						{
							"0x00050000 + 15"
						};
						MoveDown[]=
						{
							"0x00050000 + 1"
						};
						class AimUp
						{
							actionNameYAxis="AimDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimDown
						{
							actionNameYAxis="AimUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimHeadUp
						{
							actionNameYAxis="AimHeadDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadDown
						{
							actionNameYAxis="AimHeadUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
					};
				};
				class Joystick: Joystick
				{
				};
				class Wheel: Wheel
				{
				};
			};
			class Ground: Ground
			{
				name="groUnd";
				axisY=0;
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_TURN";
					textLThumbUD="";
					textLThumbPS="";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbLR="";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_MOVE";
					textRThumbPS="";
					class Actions
					{
						class CarLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						class CarRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								2,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								2,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								2,
								3
							};
						};
						CarForward[]={};
						class CarBack
						{
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class CarFastForward
						{
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						CarSlowForward[]={};
						class CarAimUp
						{
							actionNameYAxis="CarAimDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
						};
						class CarAimDown
						{
							actionNameYAxis="CarAimUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.80000001,0.1,0.89999998,0.14,1,1},
								{0.69999999,0.80000001,0.079999998,0.89999998,0.12,1,0.80000001},
								{0.30000001,0.80000001,0.059999999,0.89999998,0.090000004,1,0.60000002}
							};
						};
						class CarAimLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
						};
						class CarAimRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								
								{
									1,
									0.40000001,
									0.1,
									0.89999998,
									"0.90 0.99",
									3.5999999,
									1,
									9
								},
								{0.69999999,0.40000001,0.1,0.89999998,0.75,0.99000001,3,1,8},
								{0.30000001,0.40000001,0.1,0.89999998,0.60000002,0.99000001,1.8,1,5}
							};
						};
						SwapGunner[]=
						{
							"0x00050000 + 1"
						};
					};
				};
				class Joystick: Joystick
				{
				};
				class Wheel: Wheel
				{
				};
			};
			class Aircraft: Aircraft
			{
				name="aIr";
				axisY=1;
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_TILT";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_TILT_MOVE";
					textLThumbPS="";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_FLY";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_RUDDER";
					textRThumbPS="$STR_XBOX_CONTROLER_RS_LOCK";
					class Actions
					{
						class HeliUp
						{
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliDown
						{
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliCyclicRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliRudderRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliBack
						{
							actionNameYAxis="HeliFastForward";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class HeliFastForward
						{
							actionNameYAxis="HeliBack";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						HeliForward[]={};
						HeliManualFire[]=
						{
							"0x00050000 + 1"
						};
						class SeagullUp
						{
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullDown
						{
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullBack
						{
							actionNameYAxis="SeagullFastForward";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						class SeagullFastForward
						{
							actionNameYAxis="SeagullBack";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								1.5
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								1.5
							};
						};
						SeagullForward[]={};
					};
				};
				class Joystick: Joystick
				{
				};
				class Wheel: Wheel
				{
				};
			};
		};
	};
	class SpecialSoldier: Default
	{
		name="Special Soldier";
		class Gamepad: Gamepad
		{
		};
		class Joystick: Joystick
		{
		};
		class Wheel: Wheel
		{
		};
		class Vehicles: Vehicles
		{
			class Characters: Characters
			{
				class Gamepad
				{
					textDPad="$STR_XBOX_CONTROLER_DP_MENU";
					textLThumb="$STR_XBOX_CONTROLER_AIM";
					textLThumbLR="$STR_XBOX_CONTROLER_LS_LR_AIM";
					textLThumbUD="$STR_XBOX_CONTROLER_LS_UD_AIM";
					textLThumbPS="$STR_XBOX_CONTROLER_LS_UP";
					textRThumb="$STR_XBOX_CONTROLER_MOVEMENT";
					textRThumbLR="$STR_XBOX_CONTROLER_RS_STRAFE";
					textRThumbUD="$STR_XBOX_CONTROLER_RS_MOVE";
					textRThumbPS="$STR_XBOX_CONTROLER_RS_OPTICS";
					class Actions
					{
						class MoveBack
						{
							keys[]=
							{
								"0x00050000 + 23"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class MoveFastForward
						{
							keys[]=
							{
								"0x00050000 + 19"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								4
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								4
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								4
							};
						};
						class TurnLeft
						{
							keys[]=
							{
								"0x00050000 + 22"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						class TurnRight
						{
							keys[]=
							{
								"0x00050000 + 18"
							};
							deadZone=0.1;
							curveLow[]=
							{
								"Gamma",
								1,
								2
							};
							curveMedium[]=
							{
								"Gamma",
								1,
								2
							};
							curveHigh[]=
							{
								"Gamma",
								1,
								2
							};
						};
						MoveUp[]=
						{
							"0x00050000 + 14"
						};
						MoveDown[]=
						{
							"0x00050000 + 1"
						};
						class AimUp
						{
							actionNameYAxis="AimDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimDown
						{
							actionNameYAxis="AimUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.2,0.050000001,0.99000001,0.80000001,1,1.8},
								{0.69999999,0.2,0.029999999,0.99000001,0.60000002,1,1.6},
								{0.30000001,0.2,0.02,0.99000001,0.40000001,1,1}
							};
						};
						class AimLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveMedium[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
							curveHigh[]=
							{
								"LinRampZoom",
								{1,0.40000001,0.1,0.80000001,1.4400001,0.99000001,2.8800001,1,3.9000001},
								{0.69999999,0.40000001,0.1,0.80000001,1.2,0.99000001,2.4000001,1,3.25},
								{0.30000001,0.40000001,0.1,0.80000001,0.95999998,0.99000001,1.4400001,1,1.5599999}
							};
						};
						class AimHeadUp
						{
							actionNameYAxis="AimHeadDown";
							keys[]=
							{
								"0x00050000 + 17"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadDown
						{
							actionNameYAxis="AimHeadUp";
							keys[]=
							{
								"0x00050000 + 21"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								6,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								6,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								6,
								3
							};
						};
						class AimHeadLeft
						{
							keys[]=
							{
								"0x00050000 + 20"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
						class AimHeadRight
						{
							keys[]=
							{
								"0x00050000 + 16"
							};
							deadZone=0;
							curveLow[]=
							{
								"Gamma",
								8,
								3
							};
							curveMedium[]=
							{
								"Gamma",
								8,
								3
							};
							curveHigh[]=
							{
								"Gamma",
								8,
								3
							};
						};
					};
				};
				class Joystick: Joystick
				{
				};
				class Wheel: Wheel
				{
				};
			};
			class Ground: Ground
			{
				class Gamepad: Gamepad
				{
				};
				class Joystick: Joystick
				{
				};
				class Wheel: Wheel
				{
				};
			};
			class Aircraft: Aircraft
			{
				class Gamepad: Gamepad
				{
				};
				class Joystick: Joystick
				{
				};
				class Wheel: Wheel
				{
				};
			};
		};
	};
};
class DefaultTextAttributes
{
	font="TahomaB";
	color="#ffffff";
	size=1;
	align="left";
	valign="middle";
	shadow="true";
	shadowOffset=0.1;
	shadowColor="#000000";
	underline="false";
};
class DefaultSounds
{
	soundOK[]=
	{
		"",
		0.1,
		1
	};
	soundCancel[]=
	{
		"",
		0.1,
		1
	};
	soundChangeFocus[]=
	{
		"",
		0.1,
		1
	};
	soundFail[]=
	{
		"",
		0.1,
		1
	};
};
class RscText
{
	access=0;
	type=0;
	idc=-1;
	style=0;
	w=0.1;
	h=0.050000001;
	font="TahomaB";
	sizeEx=0.039999999;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	text="";
	fixedWidth=0;
	shadow=0;
};
class RscTextSmall: RscText
{
	h=0.029999999;
	sizeEx=0.027000001;
};
class RscTitle: RscText
{
	style=2;
	x=0.15000001;
	y=0.059999999;
	w=0.69999999;
	shadow=0;
};
class RscProgress
{
	access=0;
	type=8;
	style=0;
	colorFrame[]={1,1,1,1};
	colorBar[]={1,1,1,1};
	texture="#(argb,8,8,3)color(1,1,1,1)";
	w=1.2;
	h=0.029999999;
	shadow=0;
};
class RscProgressNotFreeze
{
	idc=-1;
	type=45;
	style=0;
	shadow=0;
	x=0;
	y=0;
	w=0.5;
	h=0.1;
	texture="#(argb,8,8,3)color(0,0,0,0)";
};
class RscPicture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
};
class RscHTML
{
	access=0;
	type=9;
	idc=-1;
	style=0;
	filename="";
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	colorBold[]={0,0,0.2,1};
	colorLink[]={1,0.5,0,1};
	colorLinkActive[]={1,0.5,0,1};
	colorPicture[]={1,1,1,1};
	colorPictureLink[]={1,1,1,1};
	colorPictureSelected[]={1,1,1,1};
	colorPictureBorder[]={0,0,0,0};
	tooltipColorText[]={0,0,0,1};
	tooltipColorBox[]={0,0,0,0.5};
	tooltipColorShade[]={1,1,0.69999999,1};
	shadow=0;
	prevPage="#(argb,8,8,3)color(1,1,1,1)";
	nextPage="#(argb,8,8,3)color(1,1,1,1)";
	class H1
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
	class H2
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
	class H3
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
	class H4
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
	class H5
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
	class H6
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
	class P
	{
		font="TahomaB";
		fontBold="TahomaB";
		sizeEx=0.039999999;
	};
};
class RscButton
{
	access=0;
	type=1;
	style=0;
	x=0;
	y=0;
	w=0.30000001;
	h=0.1;
	text="";
	font="TahomaB";
	sizeEx=0.039999999;
	colorText[]={0,0,0,1};
	colorDisabled[]={0.30000001,0.30000001,0.30000001,1};
	colorBackground[]={0.60000002,0.60000002,0.60000002,1};
	colorBackgroundDisabled[]={0.60000002,0.60000002,0.60000002,1};
	colorBackgroundActive[]={1,0.5,0,1};
	offsetX=0.0040000002;
	offsetY=0.0040000002;
	offsetPressedX=0.0020000001;
	offsetPressedY=0.0020000001;
	colorFocused[]={0,0,0,1};
	colorShadow[]={0,0,0,1};
	shadow=0;
	colorBorder[]={0,0,0,1};
	borderSize=0.0080000004;
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundPush[]=
	{
		"",
		0.1,
		1
	};
	soundClick[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.1,
		1
	};
};
class RscShortcutButton
{
	type=16;
	style=0;
	x=0.1;
	y=0.1;
	w=0.30000001;
	h=0.050000001;
	shadow=0;
	class HitZone
	{
		left=0;
		top=0;
		right=1;
		bottom=1;
	};
	class ShortcutPos
	{
		left=0.0049999999;
		top=0.0049999999;
		w=0.022500001;
		h=0.029999999;
	};
	class TextPos
	{
		left=0.02;
		top=0.0049999999;
		right=0.0049999999;
		bottom=0.0049999999;
	};
	animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled="#(argb,8,8,3)color(0.3,0.3,0.3,1)";
	animTextureOver="#(argb,8,8,3)color(0.8,0.3,0,1)";
	animTextureFocused="#(argb,8,8,3)color(1,0.5,0,1)";
	animTexturePressed="#(argb,8,8,3)color(1,0,0,1)";
	animTextureDefault="#(argb,8,8,3)color(0,1,0,1)";
	period=0.1;
	periodFocus=0.40000001;
	periodOver=0.40000001;
	shortcuts[]={};
	textureNoShortcut="#(argb,8,8,3)color(0,0,0,0)";
	color[]={0,0,0,0.60000002};
	color2[]={0,0,0,1};
	colorDisabled[]={0,0,0,0.30000001};
	colorBackground[]={1,1,1,1};
	colorBackground2[]={1,1,1,0.5};
	text="";
	size=0.039999999;
	class Attributes
	{
		font="TahomaB";
		color="#000000";
		align="left";
		shadow=0;
	};
};
class RscButtonSmall: RscButton
{
	w=0.12;
};
class RscEdit
{
	access=0;
	type=2;
	style=0;
	x=0;
	y=0;
	h=0.039999999;
	w=0.2;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	colorSelection[]={1,1,1,0.25};
	font="TahomaB";
	sizeEx=0.039999999;
	autocomplete="";
	text="";
	size=0.2;
	shadow=0;
};
class RscCombo
{
	access=0;
	type=4;
	style=0;
	h=0.050000001;
	wholeHeight=0.25;
	colorSelect[]={0.60000002,0.60000002,0.60000002,1};
	colorText[]={1,1,1,1};
	colorBackground[]={0.2,0.2,0.2,1};
	colorScrollbar[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0.039999999;
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
	soundExpand[]=
	{
		"",
		0.1,
		1
	};
	soundCollapse[]=
	{
		"",
		0.1,
		1
	};
	maxHistoryDelay=1;
	shadow=0;
	class ScrollBar
	{
		color[]={1,1,1,0.60000002};
		colorActive[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.30000001};
		thumb="#(argb,8,8,3)color(1,1,1,1)";
		arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
		arrowFull="#(argb,8,8,3)color(1,1,1,1)";
		border="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
};
class RscListBox
{
	access=0;
	type=5;
	style=0;
	w=0.40000001;
	h=0.40000001;
	font="TahomaB";
	sizeEx=0.039999999;
	rowHeight=0;
	colorText[]={1,1,1,1};
	colorScrollbar[]={1,1,1,1};
	colorSelect[]={0,0,0,1};
	colorSelect2[]={1,0.5,0,1};
	colorSelectBackground[]={0.60000002,0.60000002,0.60000002,1};
	colorSelectBackground2[]={0.2,0.2,0.2,1};
	colorBackground[]={0,0,0,1};
	maxHistoryDelay=1;
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
	period=1;
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
	arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
	arrowFull="#(argb,8,8,3)color(1,1,1,1)";
	shadow=0;
	class ScrollBar
	{
		color[]={1,1,1,0.60000002};
		colorActive[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.30000001};
		thumb="#(argb,8,8,3)color(1,1,1,1)";
		arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
		arrowFull="#(argb,8,8,3)color(1,1,1,1)";
		border="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
};
class RscListNBox
{
	access=0;
	type=102;
	style=0;
	w=0.40000001;
	h=0.40000001;
	font="TahomaB";
	sizeEx=0.039999999;
	rowHeight=0;
	colorText[]={1,1,1,1};
	colorScrollbar[]={1,1,1,1};
	colorSelect[]={0,0,0,1};
	colorSelect2[]={1,0.5,0,1};
	colorSelectBackground[]={0.60000002,0.60000002,0.60000002,1};
	colorSelectBackground2[]={0.2,0.2,0.2,1};
	colorBackground[]={0,0,0,1};
	maxHistoryDelay=1;
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
	period=1;
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
	arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
	arrowFull="#(argb,8,8,3)color(1,1,1,1)";
	drawSideArrows=0;
	columns[]={0.30000001,0.60000002,0.69999999};
	idcLeft=-1;
	idcRight=-1;
	shadow=0;
	class ScrollBar
	{
		color[]={1,1,1,0.60000002};
		colorActive[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.30000001};
		thumb="#(argb,8,8,3)color(1,1,1,1)";
		arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
		arrowFull="#(argb,8,8,3)color(1,1,1,1)";
		border="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
};
class RscXListBox
{
	idc=-1;
	style=0;
	type=42;
	x=0.1;
	y=0.1;
	w=0.30000001;
	h=0.050000001;
	shadow=0;
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.30000001};
	arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
	arrowFull="#(argb,8,8,3)color(1,0.5,0,1)";
	border="#(argb,8,8,3)color(0,0,0,1)";
	colorSelect[]={1,1,1,1};
	colorText[]={1,1,1,0.80000001};
	font="TahomaB";
	sizeEx=0.039999999;
	soundSelect[]=
	{
		"",
		0.1,
		1
	};
};
class RscTree
{
	access=0;
	type=12;
	style=0;
	colorBackground[]={0.34999999,0.38,0.36000001,1};
	colorSelect[]={1,1,1,1};
	colorText[]={1,1,1,0.75};
	colorBorder[]={1,1,1,1};
	colorArrow[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0.039999999;
	maxHistoryDelay=1;
	shadow=0;
};
class RscSlider
{
	access=0;
	type=3;
	style=1024;
	h=0.028000001;
	w=0.30000001;
	color[]={1,1,1,1};
	colorActive[]={1,1,1,1};
	shadow=0;
};
class RscSliderH: RscSlider
{
};
class RscXSliderH
{
	type=43;
	style="0x400  + 0x10";
	h="scalar";
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisable[]={1,1,1,0.40000001};
	arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
	arrowFull="#(argb,8,8,3)color(1,1,1,1)";
	border="#(argb,8,8,3)color(1,1,1,1)";
	thumb="#(argb,8,8,3)color(1,1,1,1)";
	shadow=0;
};
class RscActiveText
{
	access=0;
	type=11;
	style=2;
	h=0.050000001;
	w=0.15000001;
	font="TahomaB";
	sizeEx=0.039999999;
	color[]={1,1,1,1};
	colorActive[]={1,0.5,0,1};
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundPush[]=
	{
		"",
		0.1,
		1
	};
	soundClick[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.1,
		1
	};
	text="";
	default=0;
	shadow=0;
};
class RscStructuredText
{
	access=0;
	type=13;
	idc=-1;
	style=0;
	h=0.050000001;
	text="";
	size=0.039999999;
	colorText[]={1,1,1,1};
	shadow=0;
	class Attributes
	{
		font="TahomaB";
		color="#ffffff";
		align="center";
		shadow=1;
	};
};
class RscControlsGroup
{
	type=15;
	idc=-1;
	style=0;
	x=0;
	y=0;
	w=1;
	h=1;
	shadow=0;
	class VScrollbar
	{
		color[]={1,1,1,1};
		width=0.021;
		autoScrollSpeed=-1;
		autoScrollDelay=5;
		autoScrollRewind=0;
		shadow=0;
	};
	class HScrollbar
	{
		color[]={1,1,1,1};
		height=0.028000001;
		shadow=0;
	};
	class ScrollBar
	{
		color[]={1,1,1,0.60000002};
		colorActive[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.30000001};
		thumb="#(argb,8,8,3)color(1,1,1,1)";
		arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
		arrowFull="#(argb,8,8,3)color(1,1,1,1)";
		border="#(argb,8,8,3)color(1,1,1,1)";
		shadow=0;
	};
	class Controls
	{
	};
};
class RscBackgroundStripeTop: RscText
{
	access=0;
	x=-10;
	y=-10;
	w=21;
	h=10.125;
	text="";
	colorBackground[]={0.1,0.1,0.1,1};
};
class RscBackgroundStripeBottom: RscText
{
	access=0;
	x=-10;
	y=0.875;
	w=21;
	h=10.125;
	text="";
	colorBackground[]={0.1,0.1,0.1,1};
};
class RscDisplayBackgroundStripes
{
	access=0;
	class Background1: RscBackgroundStripeTop
	{
	};
	class Background2: RscBackgroundStripeBottom
	{
	};
};
class RscCinemaBorder: RscDisplayBackgroundStripes
{
	idd=-1;
	movingEnable=0;
	enableSimulation=1;
	class controlsBackground
	{
		class Background1: RscBackgroundStripeTop
		{
			colorBackground[]={0,0,0,1};
		};
		class Background2: RscBackgroundStripeBottom
		{
			colorBackground[]={0,0,0,1};
		};
	};
};
class RscToolbox
{
	access=0;
	type=6;
	style=2;
	colorText[]={1,1,1,1};
	color[]={1,1,1,1};
	colorTextSelect[]={1,1,1,1};
	colorSelect[]={1,1,1,1};
	colorTextDisable[]={1,1,1,1};
	colorDisable[]={1,1,1,1};
	coloSelectedBg[]={0,0,0,255};
	font="TahomaB";
	sizeEx=0.027000001;
	shadow=0;
};
class RscXKeyShadow
{
	type=40;
	idc=-1;
	style=0;
	h=0.059999999;
	size="( 21 / 408 )";
	shadow=0;
	class Attributes
	{
		font="FontX";
		color="#C0C1BF";
		align="left";
	};
	class AttributesImage
	{
		color="#ffffff";
	};
};
class RscXKey: RscXKeyShadow
{
	class Attributes
	{
		shadow=0;
	};
};
class RscMapControl
{
	access=0;
	type=101;
	idc=51;
	style=48;
	shadow=0;
	colorBackground[]={1,1,1,1};
	colorOutside[]={1,0,0,1};
	colorText[]={0,0,0,1};
	font="TahomaB";
	sizeEx=0.039999999;
	colorSea[]={0.56,0.80000001,0.98000002,0.5};
	colorForest[]={0.60000002,0.80000001,0.2,0.5};
	colorRocks[]={0.5,0.5,0.5,0.5};
	colorCountlines[]={0.64999998,0.44999999,0.27000001,0.5};
	colorMainCountlines[]={0.64999998,0.44999999,0.27000001,1};
	colorCountlinesWater[]={0,0.52999997,1,0.5};
	colorMainCountlinesWater[]={0,0.52999997,1,1};
	colorForestBorder[]={0.40000001,0.80000001,0,1};
	colorRocksBorder[]={0.5,0.5,0.5,1};
	colorPowerLines[]={0,0,0,1};
	colorRailWay[]={0.80000001,0.2,0.30000001,1};
	colorNames[]={0,0,0,1};
	colorLevels[]={0,0,0,1};
	fontLabel="TahomaB";
	sizeExLabel=0.039999999;
	fontGrid="TahomaB";
	sizeExGrid=0.039999999;
	fontNames="TahomaB";
	sizeExNames=0.039999999;
	fontInfo="TahomaB";
	sizeExInfo=0.039999999;
	fontLevel="TahomaB";
	sizeExLevel=0.039999999;
	text="#(argb,8,8,3)color(1,1,1,1)";
	stickX[]=
	{
		0.2,
		
		{
			"Gamma",
			1,
			1.5
		}
	};
	stickY[]=
	{
		0.2,
		
		{
			"Gamma",
			1,
			1.5
		}
	};
	ptsPerSquareSea=6;
	ptsPerSquareTxt=8;
	ptsPerSquareCLn=8;
	ptsPerSquareCost=8;
	ptsPerSquareFor="4.0f";
	ptsPerSquareForEdge="10.0f";
	ptsPerSquareRoad=2;
	ptsPerSquareObj=10;
	showCountourInterval="true";
	maxSatelliteAlpha=0.66000003;
	alphaFadeStartScale=0.050000001;
	alphaFadeEndScale=0.15000001;
	colorFriendly[]={0,0.5,0,1};
	colorEnemy[]={0.5,0,0,1};
	colorNeutral[]={0.5,0.5,0.5,1};
	colorCivilian[]={0,0,1,1};
	colorUnknown[]={0.5,0.5,0,1};
	iconPlayer="#(argb,8,8,3)color(1,1,1,1)";
	iconCheckpoint="#(argb,8,8,3)color(1,1,1,1)";
	iconCamera="#(argb,8,8,3)color(1,1,1,1)";
	iconSelect="#(argb,8,8,3)color(1,1,1,1)";
	iconSensor="#(argb,8,8,3)color(1,1,1,1)";
	sizeLeader=24;
	size=20;
	sizePlayer=16;
	colorMe[]={0.69999999,0.1,0,1};
	colorPlayable[]={0.69999999,0,0.69999999,1};
	colorSelect[]={0,0.60000002,0,0.5};
	colorCamera[]={0.1,0.1,0.89999998,1};
	colorSensor[]={0.1,0.1,0.89999998,1};
	colorDragging[]={0.80000001,0.80000001,0.80000001,1};
	colorInactive[]={1,1,1,0.60000002};
	colorTracks[]={0.34999999,0.2,0.1,0.80000001};
	colorRoads[]={0.34999999,0.2,0.1,1};
	colorMainRoads[]={0,0,0,1};
	colorTracksFill[]={0,0,0,0};
	colorRoadsFill[]={1,0.92000002,0.74000001,1};
	colorMainRoadsFill[]={0.93000001,0.11,0.14,0.80000001};
	colorGrid[]={0.15000001,0.15000001,0.050000001,0.89999998};
	colorGridMap[]={0.25,0.25,0.1,0.75};
	colorCheckpoints[]={0.2,0.2,0.2,1};
	colorMissions[]={0.5,0.5,0,0.5};
	colorActiveMission[]={0,0,0,1};
	colorPath[]={0,1,1,1};
	colorPathDone[]={0,1,0,0.80000001};
	texturePath="#(argb,8,8,3)color(1,1,1,1)";
	texturePathDone="#(argb,8,8,3)color(1,1,1,1)";
	sizePath=10;
	sizePathDone=2;
	colorInfoMove[]={1,1,1,1};
	colorGroups[]={0,0.5,0.5,0.5};
	colorActiveGroup[]={0,1,1,1};
	colorSync[]={0,0,1,1};
	colorDetectorSync[]={0,1,0,1};
	colorLabelBackground[]={0,0,0,1};
	cursorLineWidth=3;
	class Legend
	{
		x=0.69999999;
		y=0.85000002;
		w=0.25;
		h=0.1;
		font="TahomaB";
		sizeEx=0.039999999;
		colorBackground[]={1,1,1,1};
		color[]={0,0,0,1};
	};
	class ActiveMarker
	{
		color[]={0.30000001,0.1,0.89999998,1};
		size=50;
	};
	class Task
	{
		icon="#(argb,8,8,3)color(0,1,0,1)";
		iconCreated="#(argb,8,8,3)color(1,1,1,1)";
		iconCanceled="#(argb,8,8,3)color(0,0,1,1)";
		iconDone="#(argb,8,8,3)color(0,0,0,1)";
		iconFailed="#(argb,8,8,3)color(1,0,0,1)";
		colorCreated[]={1,1,1,1};
		colorCanceled[]={1,1,1,1};
		colorDone[]={1,1,1,1};
		colorFailed[]={1,1,1,1};
		color[]={1,1,1,1};
		size=18;
		importance=1;
		coefMin=1;
		coefMax=1;
	};
	class CustomMark
	{
		icon="#(argb,8,8,3)color(1,0.5,0,1)";
		color[]={1,1,1,1};
		size=18;
		importance=1;
		coefMin=1;
		coefMax=1;
	};
	class Tree
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="0.9 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class SmallTree
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="0.6 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Bush
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="0.2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Church
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Chapel
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Cross
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="0.7 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Rock
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="1.5 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Bunker
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="1.5 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fortress
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fountain
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class ViewTower
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="2.5 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Lighthouse
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="3 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Quay
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Fuelstation
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,0,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Hospital
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={1,0,0,1};
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class BusStop
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=8;
		importance="1 * 8 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Transmitter
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=8;
		importance="1 * 8 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Stack
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=8;
		importance="1 * 8 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Ruin
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=8;
		importance="1 * 8 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Tourism
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=8;
		importance="1 * 8 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Watertower
	{
		icon="#(argb,8,8,3)color(0,0,0,1)";
		color[]={0,0,1,1};
		size=8;
		importance="1 * 8 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
};
class RscObject
{
	access=0;
	type=80;
	scale=1;
	direction[]={0,0,1};
	up[]={0,1,0};
	shadow=0;
};
class RscStandardDisplay
{
	access=0;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=0;
};
class RscLineBreak
{
	idc=-1;
	type=98;
	shadow=0;
};
class RscCompass
{
	x=0.5;
	y=0.5;
	w=0.5;
	h=0.5;
	z=1;
};
class RscWatch
{
	x=0;
	y=0.5;
	w=0.5;
	h=0.5;
	z=1;
};
class RscMiniMap
{
	access=0;
	idd=133;
	movingEnable=0;
	enableSimulation=1;
	enableDisplay=1;
	class controls
	{
		class MiniMap: RscMapControl
		{
			IDC=101;
			x=0.1;
			y=0.1;
			w=0.30000001;
			h=0.30000001;
			showCountourInterval="false";
		};
	};
};
class RscMiniMapSmall: RscMiniMap
{
};
class RscButtonImages
{
};
class RscObjectives
{
	access=0;
	done="#(argb,8,8,3)color(1,1,1,1)";
	failed="#(argb,8,8,3)color(1,1,1,1)";
	active="#(argb,8,8,3)color(1,1,1,1)";
	cancled="#(argb,8,8,3)color(1,1,1,1)";
};
class RscMsgBox
{
	access=0;
	class Top
	{
		class Title: RscText
		{
			x=0.15000001;
			y=0.40000001;
			w=0.69999999;
			h=0.1;
			colorBackground[]={0.2,0.2,0.2,1};
			text="ArmA 2";
			style=2;
		};
	};
	class Middle
	{
		class Background: RscText
		{
			x=0.15000001;
			y=0.40000001;
			w=0.69999999;
			h=0.2;
			colorBackground[]={0.25,0.25,0.25,1};
		};
		class SubBackground: RscText
		{
			x=0.17;
			y=0.47999999;
			w=0.66000003;
			h=0.039999999;
			colorBackground[]={0.75,0.75,0.75,1};
		};
		class Text: RscStructuredText
		{
			idc=101;
			x=0.19;
			y=0.5;
			w=0.62;
			h=0;
			size=0.039999999;
			class Attributes
			{
				font="TahomaB";
				color="#000000";
				align="center";
				shadow=0;
			};
		};
	};
	class Bottom
	{
		class Button1: RscShortcutButton
		{
			type=16;
			idc=1;
			text="$STR_DISP_OK";
			style=0;
			default=0;
			x=0.40000001;
			y=0.54000002;
			w=0.2;
			h=0.039999999;
			color[]={1,1,1,1};
			colorText[]={1,0.537,0,1};
			colorDisabled[]={1,1,1,0.25};
			colorBackground[]={1,0.537,0,0.60000002};
			colorActiveBackground[]={1,0.537,0,1};
			period=0.5;
			font="TahomaB";
			size=0.039999999;
			sizeEx=0.039999999;
			soundEnter[]=
			{
				"",
				0.1,
				1
			};
			soundPush[]=
			{
				"",
				0.1,
				1
			};
			soundClick[]=
			{
				"",
				0.1,
				1
			};
			soundEscape[]=
			{
				"",
				0.1,
				1
			};
			action="";
			class Attributes
			{
				font="TahomaB";
				color="#E5E5E5";
				align="center";
			};
			class AttributesImage
			{
				font="TahomaB";
				color="#E5E5E5";
				align="center";
			};
		};
		class Button2: Button1
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			default=1;
			x=0.63;
		};
	};
};
class RscMsgBox3
{
	access=0;
	class Top
	{
		class Title: RscText
		{
			x=0.15000001;
			y=0.40000001;
			w=0.69999999;
			h=0.1;
			colorBackground[]={0.2,0.2,0.2,1};
			text="ArmA 2";
			style=2;
		};
	};
	class Middle
	{
		class Background: RscText
		{
			x=0.15000001;
			y=0.40000001;
			w=0.69999999;
			h=0.2;
			colorBackground[]={0.25,0.25,0.25,1};
		};
		class SubBackground: RscText
		{
			x=0.17;
			y=0.47999999;
			w=0.66000003;
			h=0.039999999;
			colorBackground[]={0.75,0.75,0.75,1};
		};
		class Text: RscStructuredText
		{
			idc=101;
			x=0.19;
			y=0.5;
			w=0.62;
			h=0;
			size=0.039999999;
			class Attributes
			{
				font="TahomaB";
				color="#000000";
				align="center";
				shadow=0;
			};
		};
	};
	class Bottom
	{
		class Button1: RscShortcutButton
		{
			type=16;
			idc=1;
			text="$STR_DISP_OK";
			style=0;
			default=0;
			x=0.18000001;
			y=0.50999999;
			w=0.2;
			h=0.1;
			color[]={1,1,1,1};
			colorText[]={1,0.537,0,1};
			colorDisabled[]={1,1,1,0.25};
			colorBackground[]={1,0.537,0,0.60000002};
			colorActiveBackground[]={1,0.537,0,1};
			period=0.5;
			font="TahomaB";
			size=0.039999999;
			sizeEx=0.039999999;
			soundEnter[]=
			{
				"",
				0.1,
				1
			};
			soundPush[]=
			{
				"",
				0.1,
				1
			};
			soundClick[]=
			{
				"",
				0.1,
				1
			};
			soundEscape[]=
			{
				"",
				0.1,
				1
			};
			action="";
			class Attributes
			{
				font="TahomaB";
				color="#E5E5E5";
				align="center";
			};
			class AttributesImage
			{
				font="TahomaB";
				color="#E5E5E5";
				align="center";
			};
		};
		class Button2: Button1
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			default=1;
			x=0.62;
		};
		class Button3: Button1
		{
			idc=6;
			text="$STR_DISP_LATER";
			x=0.40000001;
		};
	};
};
class RscMap
{
	access=0;
	class controls
	{
		class Map: RscMapControl
		{
			moveOnEdges=0;
			x=0;
			y=0;
			w=0.82999998;
			h=1;
			shadow=0;
		};
	};
};
class RscDisplayChannel
{
	idd=63;
	class controls
	{
		class Channel: RscText
		{
			idc=101;
			x=0.41;
			y=0.74000001;
			w=0.18000001;
			h=0.039999999;
			style=2;
			text="$STR_DISP_ERROR";
			colorBackground[]={0,0,0,0.75};
		};
		class Background: RscText
		{
			x=0.41;
			y=0.62;
			w=0.18000001;
			h=0.12;
			colorBackground[]={0,0,0,0.75};
			colorText[]={0,0,0,1};
			text="";
		};
		class Picture: RscPicture
		{
			idc=102;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x=0.46000001;
			y=0.63;
			w=0.079999998;
			h=0.1;
			colorText[]={1,1,1,1};
		};
	};
};
class RscDisplayChat
{
	idd=24;
	class controls
	{
		class Background: RscText
		{
			x=0.14;
			y=0.81;
			w=0.5;
			colorBackground[]={0,0,0,0.75};
			colorText[]={0,0,0,1};
			text="";
		};
		class Line: RscEdit
		{
			idc=101;
			x=0.14;
			y=0.81;
			w=0.5;
			text="";
			colorBackground[]={0,0,0,0.5};
			colorText[]={1,1,1,1};
			autocomplete="general";
		};
	};
};
class RscDisplayVoiceChat
{
	idd=55;
	class controls
	{
		class Background: RscText
		{
			x=0.015;
			y=0.773;
			w=0.039999999;
			h=0.050000001;
			colorBackground[]={0,0,0,0.75};
			colorText[]={0,0,0,1};
			text="";
		};
		class Picture: RscPicture
		{
			idc=101;
			text="#(argb,8,8,3)color(1,1,1,1)";
			x=0.015;
			y=0.773;
			w=0.039999999;
			h=0.050000001;
			colorText[]={1,1,1,1};
		};
	};
};
class RscDisplayMissionEditor
{
	idd=128;
	colorAttrDialog[]={1,1,1,1};
	colorAttrPosition[]={0,1,0,1};
	colorAttrDirection[]={0,1,0,1};
	colorAttrLink[]={0,0,1,1};
	colorAttrParent[]={1,0,0,1};
	colorAttrCounter[]={0.5,0,0.5,1};
	class ControlsBackground
	{
		class Background: RscListBox
		{
			idc=203;
			x=0;
			y=0;
			w=1;
			h=1;
			colorBackground[]={0,0,0,0};
		};
	};
	class Controls
	{
		class T_Background1: RscText
		{
			x=0;
			y=0;
			w=1;
			h=0.059999999;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class T_Frame1: RscText
		{
			x=0;
			y=0;
			w=1;
			h=0.059999999;
			style=64;
		};
		class B_Load: RscButton
		{
			idc=206;
			x=0.28999999;
			y=0.0099999998;
			w=0.1;
			h=0.039999999;
			sizeEx=0.027000001;
			text="$STR_DISP_ARCMAP_LOAD";
			toolTip="$STR_UI_EDITOR_LOAD_T";
			default=0;
		};
		class B_Save: B_Load
		{
			idc=205;
			x=0.40000001;
			text="$STR_DISP_ARCMAP_SAVE";
			toolTip="$STR_UI_EDITOR_SAVE_T";
		};
		class B_Restart: B_Load
		{
			idc=207;
			x=0.50999999;
			text="$STR_UI_EDITOR_RESTART";
			toolTip="$STR_UI_EDITOR_RESTART_T";
		};
		class B_Clear: B_Load
		{
			idc=210;
			x=0.62;
			text="$STR_DISP_ARCMAP_CLEAR";
			toolTip="$STR_UI_EDITOR_CLEAR_T";
		};
		class B_Preview: B_Load
		{
			idc=208;
			x=0.73000002;
			text="$STR_DISP_ARCMAP_PREVIEW";
			toolTip="$STR_UI_EDITOR_PREVIEW_T";
			default=1;
		};
		class B_Map: B_Load
		{
			idc=209;
			x=0.83999997;
			text="$STR_UI_EDITOR_HIDE_MAP";
			toolTip="$STR_UI_EDITOR_HIDE_MAP_T";
		};
		class B_Exit: B_Load
		{
			idc=2;
			x=0.94999999;
			w=0.039999999;
			text="X";
			toolTip="$STR_UI_EDITOR_QUIT_T";
		};
		class T_Background2: RscText
		{
			x=0.75;
			y=0.059999999;
			w=0.25;
			h=0.94;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class T_ObjectBrowser: RscTree
		{
			idc=201;
			style=0;
			x=0.75;
			y=0.059999999;
			w=0.25;
			h=0.30000001;
			sizeEx=0.017999999;
			colorBackground[]={0,0,0,0};
		};
		class T_Help1: RscText
		{
			idc=220;
			style=16;
			sizeEx=0.027000001;
			lineSpacing=1;
			x=0.75;
			y=0.36000001;
			w=0.25;
			h=0.28999999;
		};
		class L_ObjectInfo: RscListBox
		{
			idc=202;
			x=0.75;
			y=0.64999998;
			w=0.25;
			h=0.175;
			sizeEx=0.027000001;
			colorSelect[]={0,0,0,1};
			colorSelect2[]={0,0,0,1};
			colorSelectBackground[]={1,1,1,1};
			colorSelectBackground2[]={1,1,1,1};
			rowHeight=0.028999999;
			period=0;
		};
		class L_NewObject: RscListBox
		{
			idc=211;
			x=0.75;
			y=0.82499999;
			w=0.25;
			h=0.175;
			sizeEx=0.027000001;
			colorSelect[]={0,0,0,1};
			colorSelect2[]={0,0,0,1};
			colorSelectBackground[]={1,1,1,1};
			colorSelectBackground2[]={1,1,1,1};
			rowHeight=0.028999999;
			period=0;
		};
		class M_Map: RscMapControl
		{
			moveOnEdges=0;
			x=0;
			y=0.059999999;
			w=0.75;
			h=0.94;
			iconCamera="#(argb,8,8,3)color(1,1,1,1)";
			iconCameraColor[]={0,0.60000002,0,1};
			iconCameraSize=24;
		};
	};
	class Menu
	{
		type=14;
		idc=204;
		style=0;
		x=0;
		y=0;
		w=0;
		h=0;
		colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		colorBorder[]={1,1,1,1};
		colorSeparator[]={1,1,1,1};
		colorSelectBackground[]={1,1,1,0.30000001};
		colorChecked[]={0,0,1,1};
		colorEnabled[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.5};
		sizeEx=0.025;
		font="TahomaB";
	};
};
class RscDisplayEditObject
{
	idd=121;
	class Controls
	{
		class T_Background: RscText
		{
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
			x=0.02;
			y=0.079999998;
			w=0.70999998;
			h=0.89999998;
		};
		class T_Title: RscTitle
		{
			style="0x20 + 0x02";
			x=0.02;
			y=0.090000004;
			w=0.70999998;
			text="$STR_UI_EDITOR_OBJECT_PROPERTIES";
		};
		class G_ControlsGroup: RscControlsGroup
		{
			idc=101;
			x=0.02;
			y=0.15000001;
			w=0.70999998;
			h=0.73000002;
			class Controls
			{
			};
		};
		class B_OK: RscShortcutButton
		{
			idc=1;
			x=0.23;
			y=0.91500002;
			w=0.13;
			h=0.050000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_OK
		{
			idc=2;
			x=0.37;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
	class Title: RscText
	{
		x=0.02;
		y=0;
		w=0.18000001;
		h=0.025;
		sizeEx=0.025;
		text="";
	};
	class Preview: RscText
	{
		style=48;
		x=0.02;
		y=0.029999999;
		w=0.18000001;
		h=0.23999999;
		sizeEx=0.025;
		text="";
	};
	class Edit: RscEdit
	{
		x=0.20999999;
		y=0;
		w=0.47;
		h=0.025;
		sizeEx=0.025;
		text="";
		colorSelection[]={1,1,1,0.25};
	};
	class EditLong: Edit
	{
		h=0.5;
		style=16;
	};
	class Combo: RscCombo
	{
		x=0.20999999;
		y=0;
		w=0.47;
		h=0.025;
		wholeHeight=0.125;
		sizeEx=0.025;
	};
	class Slider: RscSliderH
	{
		x=0.20999999;
		y=0;
		w=0.47;
		h=0.025;
	};
	class Tree: RscTree
	{
		x=0.20999999;
		y=0;
		w=0.47;
		h=0.38999999;
		sizeEx=0.025;
	};
};
class RscDisplayMissionLoad
{
	idd=122;
	class Controls
	{
		class T_Background: RscText
		{
			x=0.175;
			y=0.31999999;
			w=0.40000001;
			h=0.30000001;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class T_Title: RscTitle
		{
			style="0x20 + 0x02";
			x=0.175;
			y=0.33000001;
			w=0.40000001;
			text="$STR_UI_EDITOR_LOAD_TITLE";
		};
		class T_Island: RscText
		{
			x=0.18000001;
			y=0.40000001;
			w=0.14;
			h=0.029999999;
			sizeEx=0.029999999;
			text="$STR_UI_EDITOR_LOAD_ISLAND";
		};
		class C_Island: RscCombo
		{
			idc=101;
			x=0.32499999;
			y=0.40000001;
			w=0.23999999;
			h=0.029999999;
			wholeHeight=0.23999999;
			sizeEx=0.029999999;
		};
		class T_Mission: T_Island
		{
			y=0.44999999;
			text="$STR_UI_EDITOR_LOAD_MISSION";
		};
		class C_Mission: C_Island
		{
			idc=102;
			y=0.44999999;
		};
		class B_OK: RscShortcutButton
		{
			idc=1;
			x=0.23999999;
			y=0.55000001;
			w=0.13;
			h=0.050000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_OK
		{
			idc=2;
			x=0.38;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
};
class RscDisplayMissionSave
{
	idd=123;
	class Controls
	{
		class T_Background: RscText
		{
			x=0.175;
			y=0.31999999;
			w=0.40000001;
			h=0.30000001;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class T_Title: RscTitle
		{
			style="0x20 + 0x02";
			x=0.175;
			y=0.33000001;
			w=0.40000001;
			text="$STR_UI_EDITOR_SAVE_TITLE";
		};
		class T_Mission: RscText
		{
			x=0.18000001;
			y=0.40000001;
			w=0.14;
			h=0.029999999;
			sizeEx=0.029999999;
			text="$STR_UI_EDITOR_SAVE_MISSION";
		};
		class E_Mission: RscEdit
		{
			idc=101;
			x=0.32499999;
			y=0.40000001;
			w=0.23999999;
			h=0.029999999;
			sizeEx=0.029999999;
		};
		class T_Placement: T_Mission
		{
			y=0.44999999;
			text="$STR_UI_EDITOR_SAVE_EXPORT";
		};
		class C_Placement: RscCombo
		{
			idc=104;
			x=0.32499999;
			y=0.44999999;
			w=0.23999999;
			h=0.029999999;
			wholeHeight=0.23999999;
			sizeEx=0.029999999;
		};
		class B_OK: RscShortcutButton
		{
			idc=1;
			x=0.23999999;
			y=0.55000001;
			w=0.13;
			h=0.050000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_OK
		{
			idc=2;
			x=0.38;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
};
class RscDisplayScriptingHelp
{
	idd=-1;
	class Controls
	{
		class Background: RscText
		{
			x=0.2;
			y=0.2;
			w=0.60000002;
			h=0.60000002;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class Content: RscHTML
		{
			idc=101;
			x=0.22;
			y=0.22;
			w=0.56;
			h=0.46000001;
			class H1
			{
				font="TahomaB";
				fontBold="TahomaB";
				sizeEx=0.039999999;
			};
			class H2
			{
				font="TahomaB";
				fontBold="TahomaB";
				sizeEx=0.027000001;
			};
			class P
			{
				font="TahomaB";
				fontBold="TahomaB";
				sizeEx=0.017999999;
			};
		};
		class Back: RscButtonSmall
		{
			idc=102;
			x=0.22;
			y=0.70999998;
			w=0.050000001;
			h=0.050000001;
			text="<-";
		};
		class Forward: RscButtonSmall
		{
			idc=103;
			x=0.28999999;
			y=0.70999998;
			w=0.050000001;
			h=0.050000001;
			text="->";
		};
		class CopyExample: RscButtonSmall
		{
			idc=104;
			x=0.46000001;
			y=0.70999998;
			w=0.15000001;
			h=0.050000001;
			text="Copy example";
		};
		class Done: RscButtonSmall
		{
			idc=2;
			x=0.63;
			y=0.70999998;
			w=0.15000001;
			h=0.050000001;
			text="$STR_DISP_CLOSE";
			default=1;
		};
	};
};
class RscDisplayCapture
{
	idd=149;
	class Controls
	{
		class Background: RscText
		{
			x=0.029999999;
			y=0.1;
			w=0.89999998;
			h=0.85000002;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
			moving=1;
		};
		class Index: RscTree
		{
			idc=101;
			x="0.03 + 0.02";
			y=0.12;
			w="0.90 - 0.04";
			h=0.40000001;
		};
		class TimeLines
		{
			type=99;
			style=0;
			idc=102;
			shadow=0;
			x="0.03 + 0.02";
			y=0.52999997;
			w="0.90 - 0.04";
			h=0.25999999;
			class Scrollbar
			{
			};
			font="TahomaB";
			colorLines[]={0,0,0,1};
			colorBackground[]={1,1,1,1};
			colorBar[]={0.80000001,0.80000001,0.80000001,1};
			colorSelection[]={1,0,0,1};
		};
		class Info: RscText
		{
			idc=106;
			x="0.03 + 0.02";
			y=0.79500002;
			w="0.90 - 0.04";
			h=0.035;
			text="Info about the selection";
			sizeEx=0.027000001;
		};
		class ZoomIn: RscShortcutButton
		{
			idc=103;
			shortcuts[]=
			{
				"0x00050000 + 2"
			};
			x=0.029999999;
			y=0.81;
			w="0.90 * 0.33";
			h=0.11;
			text="Zoom +";
		};
		class ZoomOut: RscShortcutButton
		{
			idc=104;
			shortcuts[]=
			{
				"0x00050000 + 3"
			};
			x="0.03 + 0.33 * 0.90";
			y=0.81;
			w="0.90 * 0.33";
			h=0.11;
			text="Zoom -";
		};
		class Done: RscShortcutButton
		{
			idc=2;
			shortcuts[]=
			{
				"0x00050000 + 1"
			};
			x="0.03 + 0.66 * 0.90";
			y=0.81;
			w="0.90 * 0.33";
			h=0.11;
			text="$STR_DISP_CLOSE";
		};
		class Export: RscShortcutButton
		{
			idc=105;
			shortcuts[]=
			{
				"0x00050000 + 11"
			};
			x=0.029999999;
			y=0.86500001;
			w="0.90 * 0.33";
			h=0.11;
			text="Copy";
		};
		class ExportAll: RscShortcutButton
		{
			idc=107;
			shortcuts[]={};
			x="0.03 + 0.33 * 0.90";
			y=0.86500001;
			w="0.90 * 0.33";
			h=0.11;
			text="Copy All";
		};
		class ImportAll: RscShortcutButton
		{
			idc=108;
			shortcuts[]={};
			x="0.03 + 0.66 * 0.90";
			y=0.86500001;
			w="0.90 * 0.33";
			h=0.11;
			text="Paste All";
		};
	};
};
class RscDisplayInterruptEditorPreview: RscStandardDisplay
{
	idd=49;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_INT_TITLE";
		};
		class B_Edit2D: RscButton
		{
			idc=113;
			x=0.34999999;
			y=0.2;
			h=0.079999998;
			text="$STR_UI_EDITOR_INT_EDIT2D";
			default=0;
		};
		class B_Edit3D: B_Edit2D
		{
			idc=114;
			y=0.28;
			text="$STR_UI_EDITOR_INT_EDIT3D";
		};
		class B_Restart: B_Edit2D
		{
			idc=105;
			y=0.36000001;
			text="$STR_UI_EDITOR_RESTART";
		};
		class B_Options: B_Edit2D
		{
			idc=101;
			y=0.51999998;
			text="$STR_DISP_INT_OPTIONS";
		};
		class B_Quit: B_Edit2D
		{
			idc=104;
			y=0.68000001;
			text="$STR_UI_EDITOR_INT_QUIT";
		};
		class B_Cancel: B_Edit2D
		{
			idc=2;
			y=0.75999999;
			text="$STR_UI_EDITOR_INT_CONTINUE";
			default=1;
		};
	};
};
class RscDisplayInterruptEditor3D: RscStandardDisplay
{
	idd=49;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_INT_3DEDIT_TITLE";
		};
		class B_Edit2D: RscButton
		{
			idc=113;
			x=0.34999999;
			y=0.2;
			h=0.079999998;
			text="$STR_UI_EDITOR_INT_EDIT2D";
			default=0;
		};
		class B_Preview: B_Edit2D
		{
			idc=115;
			y=0.28;
			text="$STR_DISP_ARCMAP_PREVIEW";
		};
		class B_Restart: B_Edit2D
		{
			idc=105;
			y=0.36000001;
			text="$STR_UI_EDITOR_RESTART";
		};
		class B_Options: B_Edit2D
		{
			idc=101;
			y=0.51999998;
			text="$STR_DISP_INT_OPTIONS";
		};
		class B_Quit: B_Edit2D
		{
			idc=104;
			y=0.68000001;
			text="$STR_UI_EDITOR_INT_QUIT";
		};
		class B_Cancel: B_Edit2D
		{
			idc=2;
			y=0.75999999;
			text="$STR_UI_EDITOR_INT_CONTINUE";
			default=1;
		};
	};
};
class RscDisplayAddonActions
{
	idd=156;
	class Controls
	{
		class T_Background: RscText
		{
			x=0.175;
			y=0.31999999;
			w=0.40000001;
			h=0.30000001;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class T_Title: RscTitle
		{
			style="0x20 + 0x02";
			x=0.175;
			y=0.33000001;
			w=0.40000001;
			text="$STR_DISP_ADDON_ACTIONS_TITLE";
		};
		class T_Actions: RscText
		{
			x=0.18000001;
			y=0.40000001;
			w=0.14;
			h=0.029999999;
			sizeEx=0.029999999;
			text="$STR_DISP_ADDON_ACTIONS_ACTIONS";
		};
		class C_Actions: RscCombo
		{
			idc=101;
			x=0.32499999;
			y=0.40000001;
			w=0.23999999;
			h=0.029999999;
			wholeHeight=0.23999999;
			sizeEx=0.029999999;
		};
		class B_OK: RscShortcutButton
		{
			idc=1;
			x=0.23999999;
			y=0.55000001;
			w=0.13;
			h=0.050000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_NewMod: B_OK
		{
			idc=102;
			x=0.51999998;
			text="New Mod";
			default=0;
		};
		class B_Cancel: B_OK
		{
			idc=2;
			x=0.38;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
};
class RscDisplayNewMod: RscStandardDisplay
{
	idd=158;
	class Controls
	{
		class Title: RscTitle
		{
			text="Install New Mod";
		};
		class TextName: RscText
		{
			x=0.025;
			y=0.12;
			w=0.30000001;
			text="Mod name";
		};
		class ValueName: RscEdit
		{
			idc=101;
			x=0.34999999;
			y=0.12;
			w=0.40000001;
		};
		class TextDir: RscText
		{
			x=0.025;
			y=0.22;
			w=0.30000001;
			text="Mod directory";
		};
		class ValueDir: RscEdit
		{
			idc=102;
			x=0.34999999;
			y=0.22;
			w=0.40000001;
		};
		class B_Cancel: RscShortcutButton
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.5;
			y=0.89999998;
			w=0.25;
			h=0.1;
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.75;
			default=1;
		};
	};
};
class RscDisplayBookViewer: RscStandardDisplay
{
	idd=166;
	footerFormat="- %d -";
	class Controls
	{
		class Background: RscText
		{
			x=0.050000001;
			y=0.050000001;
			w=0.89999998;
			h=0.80000001;
			colorBackground[]={1,1,1,1};
		};
		class Content: RscHTML
		{
			idc=101;
			columns=2;
			columnsSpace=0.02;
			x=0.050000001;
			y=0.1;
			w=0.89999998;
			h=0.69999999;
			colorBackground[]={0,0,0,0};
			colorText[]={0.2,0.2,0.2,1};
			colorBold[]={0,0,0,1};
			colorLink[]={0.2,0.2,1,1};
			colorLinkActive[]={1,0.2,1,1};
			prevPage="";
			nextPage="";
		};
		class PrevPage: RscActiveText
		{
			idc=102;
			style=0;
			text="previous page";
			x=0.050000001;
			y=0.80000001;
			w=0.15000001;
			h=0.050000001;
			color[]={0.2,0.2,1,1};
			colorActive[]={0.80000001,0.2,1,1};
		};
		class NextPage: RscActiveText
		{
			idc=103;
			style=1;
			text="next page";
			x=0.80000001;
			y=0.80000001;
			w=0.15000001;
			h=0.050000001;
			color[]={0.2,0.2,1,1};
			colorActive[]={0.80000001,0.2,1,1};
		};
		class LeftHeader: RscText
		{
			idc=104;
			style=2;
			text="TITLE";
			x=0.050000001;
			y=0.050000001;
			w=0.44;
			h=0.050000001;
			colorText[]={0.2,0.2,0.2,1};
		};
		class RightHeader: RscText
		{
			idc=105;
			style=2;
			text="AUTHOR";
			x=0.50999999;
			y=0.050000001;
			w=0.44;
			h=0.050000001;
			colorText[]={0.2,0.2,0.2,1};
		};
		class LeftFooter: RscText
		{
			idc=106;
			style=2;
			text="PAGE";
			x=0.2;
			y=0.80000001;
			w=0.14;
			h=0.050000001;
			colorText[]={0.2,0.2,0.2,1};
		};
		class RightFooter: RscText
		{
			idc=107;
			style=2;
			text="PAGE";
			x=0.66000003;
			y=0.80000001;
			w=0.14;
			h=0.050000001;
			colorText[]={0.2,0.2,0.2,1};
		};
	};
};
class RscDisplayInsertMarker
{
	idd=54;
	movingEnable=0;
	class controls
	{
		class Picture: RscPicture
		{
			idc=102;
			x=0;
			y=0;
			w=0.050000001;
			h="0.05 * 4 / 3";
			colorText[]={0,0,0,1};
		};
		class Text: RscEdit
		{
			idc=101;
			x=0.039999999;
			y=0;
			w=0.15000001;
			h=0.039999999;
			text="";
		};
		class ButtonOK: RscActiveText
		{
			idc=1;
			x=0;
			y=0;
			w=0;
			h=0;
			default=1;
		};
	};
};
class RscDisplayDebug
{
	idd=56;
	movingEnable=1;
	onLoad="private [""_ctrlB_Camera"", ""_script""]; _ctrlB_Camera = (_this select 0) displayCtrl 666; _script = getText (configFile >> ""cameraScript""); if (!(isNil ""BIS_DEBUG_CAM"") || ((typeOf cameraOn) == ""EditCursor"") || (isNull player) || (_script == """")) then {_ctrlB_Camera ctrlEnable false; _ctrlB_Camera ctrlShow false}";
	class Controls
	{
		class Background1: RscText
		{
			x="SafezoneX+0.1";
			y="SafezoneY+0.0";
			w="SafezoneW-0.2";
			h="SafeZoneH";
			colorBackground[]={0,0,0,0.75};
		};
		class Background2: RscText
		{
			x=0.1;
			y="SafezoneY+0.0";
			w=0.80000001;
			h="SafeZoneH";
			colorBackground[]={1,1,1,0.025};
		};
		class Title: RscTitle
		{
			x="SafezoneX+0.1";
			y="SafezoneY+0.02";
			w="SafezoneW-0.2";
			h=0.035;
			moving=1;
			text="$STR_UI_DEBUG_TITLE";
			sizeEx=0.027000001;
			colorBackground[]={0.30000001,0,0,1};
			colorText[]={0.89999998,0.89999998,0.89999998,1};
		};
		class G_Expression: RscControlsGroup
		{
			x="SafezoneX+0.1";
			y="SafezoneY+0.055";
			w="SafezoneW-0.2";
			h=0.23;
			class VScrollbar
			{
				color[]={0,0,0,0};
				width=0.001;
				autoScrollSpeed=-1;
				autoScrollDelay=5;
				autoScrollRewind=0;
			};
			class HScrollbar
			{
				color[]={0,0,0,0};
				height=0.001;
			};
			class ScrollBar
			{
				color[]={1,1,1,0.60000002};
				colorActive[]={1,1,1,1};
				colorDisabled[]={1,1,1,0.30000001};
				thumb="#(argb,8,8,3)color(1,1,1,1)";
				arrowEmpty="#(argb,8,8,3)color(1,1,1,1)";
				arrowFull="#(argb,8,8,3)color(1,1,1,1)";
				border="#(argb,8,8,3)color(1,1,1,1)";
				shadow=0;
			};
			class Controls
			{
				class TextExpression: RscText
				{
					x=0.0099999998;
					y=0;
					w=0.2;
					h=0.029999999;
					sizeEx=0.027000001;
					text="$STR_UI_DEBUG_EXPRESSION";
				};
				class ValueExpression: RscEdit
				{
					idc=101;
					style=16;
					x=0.017999999;
					y=0.029999999;
					w="SafezoneW-1+0.76";
					h=0.16;
					sizeEx=0.027000001;
					colorBackground[]={0,0,0,1};
					colorSelection[]={0,0.40000001,0,1};
					autocomplete="scripting";
				};
				class B_Apply: RscButton
				{
					idc=102;
					x="0.018+0.1";
					y=0.19499999;
					w="SafezoneW-1+0.76-0.1";
					h=0.029999999;
					sizeEx=0.027000001;
					text="$STR_UI_DEBUG_BUT_APPLY";
					default=0;
				};
			};
		};
		class G_Watch: G_Expression
		{
			x="SafezoneX+0.1";
			y="SafezoneY+0.262";
			w="SafezoneW-0.2";
			h=0.36000001;
			class Controls
			{
				class TextWatch: RscText
				{
					x=0.0099999998;
					y=0;
					w=0.1;
					h=0.029999999;
					sizeEx=0.027000001;
					text="$STR_UI_DEBUG_WATCH";
				};
				class TextVar1: RscText
				{
					x=0.0099999998;
					y=0.029999999;
					w=0.050000001;
					h=0.029999999;
					sizeEx=0.027000001;
					text="$STR_UI_DEBUG_1";
				};
				class ValueExp1: RscEdit
				{
					idc=121;
					x=0.039999999;
					y=0.029999999;
					w="SafezoneW-1+0.738";
					h=0.029999999;
					sizeEx=0.027000001;
					colorSelection[]={0,0.40000001,0,1};
					autocomplete="scripting";
				};
				class ValueRes1: RscEdit
				{
					idc=141;
					style=16;
					x=0.017999999;
					y=0.059999999;
					w="SafezoneW-1+0.76";
					h=0.052000001;
					lineSpacing=1;
					sizeEx=0.027000001;
					autocomplete="scripting";
				};
				class TextVar2: TextVar1
				{
					y=0.113;
					text="$STR_UI_DEBUG_2";
				};
				class ValueExp2: ValueExp1
				{
					idc=122;
					y=0.113;
				};
				class ValueRes2: ValueRes1
				{
					idc=142;
					y=0.14300001;
				};
				class TextVar3: TextVar1
				{
					y=0.19599999;
					text="$STR_UI_DEBUG_3";
				};
				class ValueExp3: ValueExp1
				{
					idc=123;
					y=0.19599999;
				};
				class ValueRes3: ValueRes1
				{
					idc=143;
					y=0.226;
				};
				class TextVar4: TextVar1
				{
					y=0.27900001;
					text="$STR_UI_DEBUG_4";
				};
				class ValueExp4: ValueExp1
				{
					idc=124;
					y=0.27900001;
				};
				class ValueRes4: ValueRes1
				{
					idc=144;
					y=0.30899999;
				};
			};
		};
		class G_But: G_Expression
		{
			x="SafezoneX+0.1";
			y="SafezoneY+0.64";
			w="SafezoneW-0.2";
			h=0.12;
			class Controls
			{
				class TextSwitch: RscText
				{
					x="(-SafeZoneX)+0.01";
					y=0;
					w=0.1;
					h=0.029999999;
					sizeEx=0.027000001;
					text="$STR_UI_DEBUG_SWITCH";
				};
				class ButtonA1: RscButton
				{
					idc=-1;
					x="(-SafeZoneX)+0.01 + 0.083  * 1";
					y=0;
					w=0.079999998;
					h=0.039999999;
					text="$STR_UI_DEBUG_BUT_ALL";
					action="""all"" diag_enable true";
					sizeEx=0.027000001;
				};
				class ButtonA2: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 2";
					text="$STR_UI_DEBUG_BUT_NO";
					action="""all"" diag_enable false";
				};
				class ButtonA3: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 3";
					text="$STR_UI_DEBUG_BUT_COMBAT";
					action="diag_toggle ""combat""";
				};
				class ButtonA4: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 4";
					text="$STR_UI_DEBUG_BUT_COST";
					action="diag_toggle ""costmap""";
				};
				class ButtonA5: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 5";
					text="$STR_UI_DEBUG_BUT_TRANSPARENT";
					action="diag_toggle ""transparent""";
				};
				class ButtonA6: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 6";
					text="$STR_UI_DEBUG_BUT_COLLISION";
					action="diag_toggle ""collision""";
				};
				class ButtonA7: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 7";
					text="$STR_UI_DEBUG_BUT_PATH";
					action="diag_toggle ""path""";
				};
				class B_Functions: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 8";
					text="Functions";
					action="[] spawn {if (isnil 'bis_fnc_init') then {createcenter sidelogic; _logicGrp = creategroup sidelogic; _logicFnc = _logicGrp createunit ['FunctionsManager',[1,1,1],[],0,'none']}; waituntil {!isnil 'bis_fnc_init'};[] call bis_fnc_help}";
					onButtonClick="(ctrlParent (_this select 0)) closeDisplay 2";
				};
				class ButtonA8: ButtonA1
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 1";
					y=0.041000001;
					text="$STR_UI_DEBUG_BUT_FORCE";
					action="diag_toggle ""force""";
				};
				class ButtonA9: ButtonA8
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 2";
					text="$STR_UI_DEBUG_BUT_ANIMATION";
					action="diag_toggle ""animation""";
				};
				class ButtonB1: ButtonA8
				{
					idc=-1;
					x="(-SafeZoneX)+0.01 + 0.083 * 3";
					text="$STR_UI_DEBUG_BUT_NORMAL";
					action="diag_drawmode ""Normal""";
					sizeEx=0.027000001;
				};
				class ButtonB2: ButtonA8
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 4";
					text="$STR_UI_DEBUG_BUT_FIREGEOMETRY";
					action="diag_drawmode ""FireGeometry""";
				};
				class ButtonB3: ButtonA8
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 5";
					text="$STR_UI_DEBUG_BUT_VIEWGEOMETRY";
					action="diag_drawmode ""ViewGeometry""";
				};
				class ButtonB4: ButtonA8
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 6";
					text="$STR_UI_DEBUG_BUT_GEOMETRY";
					action="diag_drawmode ""Geometry""";
				};
				class B_ConfigViewer: ButtonA8
				{
					x="(-SafeZoneX)+0.01 + 0.083 * 7";
					text="Config";
					action="[] spawn {if (isnil 'bis_fnc_init') then {createcenter sidelogic; _logicGrp = creategroup sidelogic; _logicFnc = _logicGrp createunit ['FunctionsManager',[1,1,1],[],0,'none']}; waituntil {!isnil 'bis_fnc_init'};[] call bis_fnc_configviewer}";
					onButtonClick="(ctrlParent (_this select 0)) closeDisplay 2";
				};
				class B_Camera: ButtonA8
				{
					idc=666;
					x="(-SafeZoneX)+0.01 + 0.083 * 8";
					text="Camera";
					action="cameraOn exec (getText (configFile >> ""cameraScript""))";
					onButtonClick="(ctrlParent (_this select 0)) closeDisplay 2";
				};
			};
		};
		class G_Log: G_Expression
		{
			x=0.1;
			y="SafeZoneY+0.74";
			w=0.64999998;
			h="0.29+(SafeZoneH-1)";
			class Controls
			{
				class TextFilter: RscText
				{
					x=0.0099999998;
					y=0;
					w=0.1;
					h=0.029999999;
					sizeEx=0.027000001;
					text="Log Filter:";
				};
				class ValueRes1: RscEdit
				{
					idc=152;
					style=16;
					x=0.017999999;
					y=0.027000001;
					w=0.63;
					h=0.029999999;
					lineSpacing=1;
					sizeEx=0.027000001;
				};
				class TextLog: RscText
				{
					x=0.0099999998;
					y=0.07;
					w=0.1;
					h=0.029999999;
					sizeEx=0.027000001;
					text="$STR_UI_DEBUG_LOG";
				};
				class ValueLog: RscListBox
				{
					idc=103;
					sizeEx=0.027000001;
					x=0.017999999;
					y=0.1;
					w=0.63;
					h="0.13+(SafeZoneH-1)";
					colorSelect[]={1,1,1,1};
					colorSelect2[]={1,1,1,1};
					colorSelectBackground[]={0,0.40000001,0,1};
					colorSelectBackground2[]={0,0.40000001,0,1};
					rowHeight=0.028571401;
				};
			};
		};
		class B_Clear: RscButton
		{
			idc=151;
			x=0.77499998;
			y=0.80299997;
			w=0.092;
			h=0.039999999;
			text="Clear";
			sizeEx=0.027000001;
			default=0;
		};
		class B_OK: B_Clear
		{
			idc=1;
			y=0.875;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_Clear
		{
			idc=2;
			y=0.917;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
};
class RscChatListDefault
{
	x=0;
	y=0;
	w=1;
	h=0.043000001;
	font="TahomaB";
	size=0.039000001;
	rows=2;
	colorBackground[]={0,0,0,0.5};
	colorGlobalChannel[]={0.80000001,0.80000001,0.80000001,1};
	colorSideChannel[]={0,0.89999998,0.89999998,1};
	colorCommandChannel[]={0,0,1,1};
	colorGroupChannel[]={0.1,0.89999998,0.2,1};
	colorVehicleChannel[]={0.89999998,0.80000001,0,1};
	colorDirectChannel[]={0.89999998,0,0.80000001,1};
	colorPlayerChannel[]={1,1,1,1};
	colorPlayerBackground[]={0,0,0,1};
	shadow=2;
	shadowColor[]={0,0,0,1};
};
class RscChatListMission: RscChatListDefault
{
	x=0;
	y=0.80000001;
	w=1;
	rows=5;
};
class RscChatListBriefing: RscChatListDefault
{
	x=0;
	y=0.80000001;
	w=1;
	rows=2;
};
class RscChatListMap: RscChatListDefault
{
	x=0;
	y=0.80000001;
	w=1;
	rows=2;
};
class RscTitlesText
{
	access=0;
	fontBasic="TahomaB";
	sizeExBasic="( 21 / 408 )";
	fontDown="TahomaB";
	sizeExDown="( 21 / 408 )";
	offsetDown=0.245;
	class Attributes
	{
		shadow=1;
		shadowOffset=0.059999999;
		shadowColor="#000000";
	};
};
class RscIGText: RscText
{
	access=0;
	h=0.039999999;
	colorText[]={0.80000001,0.80000001,0.80000001,1};
	font="TahomaB";
	sizeEx=0.024;
	style="0x00 + 0x100";
};
class RscIGProgress: RscProgress
{
	style=0;
	h=0.017999999;
	colorFrame[]={0.80000001,0.80000001,0.80000001,0.75};
	colorBar[]={0.80000001,0.80000001,0.80000001,0.5};
	texture="#(argb,8,8,3)color(0,1,0,1)";
};
class RscDisplayHintC
{
	access=0;
	idd=57;
	movingEnable=1;
	class controls
	{
		class Background: RscText
		{
			idc=101;
			style=128;
			moving=1;
			x=0.34999999;
			y=0.40000001;
			w=0.5;
			h=0.059999999;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Hint: RscIGText
		{
			idc=102;
			style=16;
			lineSpacing=1;
			sizeEx="( 16 / 408 )";
			x=0.36000001;
			y=0.41;
			w=0.47999999;
			colorBackground[]={0,0,0,0};
			text="STR_DISP_ERROR";
		};
		class continue: RscActiveText
		{
			idc=2;
			style=1;
			font="TahomaB";
			sizeEx="( 16 / 408 )";
			x=0.55000001;
			y=0.41;
			w=0.30000001;
			h=0.035;
			text="$STR_DISP_HINTC_CONTINUE";
			color[]={0.80000001,0.80000001,0.80000001,1};
			colorActive[]={0.80000001,0.80000001,0,1};
		};
	};
};
class RscDisplayHintCEx
{
	access=0;
	idd=72;
	movingEnable=1;
	soundOpen[]=
	{
		"",
		0.5,
		1
	};
	indent="#(argb,8,8,3)color(1,1,1,1)";
	class controls
	{
		class Background: RscText
		{
			idc=101;
			style=128;
			moving=1;
			x=0.15000001;
			y=0.40000001;
			w=0.69999999;
			h=0.155;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Title: RscText
		{
			idc=103;
			style=0;
			x=0.17;
			y=0.41999999;
			w=0.66000003;
			h=0.059999999;
			text="STR_DISP_ERROR";
			colorText[]={0.80000001,0.80000001,0.80000001,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class Line1: RscText
		{
			idc=105;
			style=176;
			x=0.17;
			y=0.47999999;
			w=0.66000003;
			h=0;
			text="";
			colorBackground[]={0.80000001,0.80000001,0.80000001,1};
			colorText[]={1,1,1,1};
		};
		class Hint: RscStructuredText
		{
			idc=102;
			style=0;
			x=0.17;
			y=0.47999999;
			w=0.66000003;
			h=0;
			size="( 16 / 408 )";
			text="STR_DISP_ERROR";
			class Attributes
			{
				font="TahomaB";
				color="#e0e0e0";
				shadow=0;
			};
		};
		class Line2: RscText
		{
			idc=106;
			style=176;
			x=0.17;
			y=0.47999999;
			w=0.66000003;
			h=0;
			text="";
			colorBackground[]={0.80000001,0.80000001,0.80000001,1};
			color[]={0.80000001,0.80000001,0.80000001,1};
			colorText[]={0.80000001,0.80000001,0.80000001,1};
		};
		class continue: RscActiveText
		{
			idc=104;
			style=1;
			font="TahomaB";
			sizeEx="( 16 / 408 )";
			x=0.17;
			y=0.49000001;
			w=0.66000003;
			h=0.035;
			text="$STR_DISP_HINTC_CONTINUE";
			color[]={0.80000001,0.80000001,0.80000001,1};
			colorActive[]={0.80000001,0.80000001,0,1};
		};
	};
};
class RscInGameUI
{
	access=0;
	colorReady[]={0.5,0.85000002,0.5,1};
	colorPrepare[]={0.69,0.69999999,0.1,1};
	colorUnload[]={0.75,0.28999999,0.28999999,1};
	class RscUnitInfoSoldier
	{
		idd=300;
		movingEnable=0;
		controls[]=
		{
			"Background",
			"Weapon",
			"Ammo"
		};
		class Background: RscText
		{
			idc=124;
			style=128;
			x=0;
			y=0;
			w=0.38499999;
			h=0.050000001;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx="( 16 / 408 )";
			fixedWidth=0;
		};
		class Weapon: RscIGText
		{
			idc=118;
			x=0;
			y=0.0080000004;
			w=0.28200001;
			text="$STR_DISP_ERROR";
		};
		class Ammo: RscIGText
		{
			idc=119;
			style="0x01 + 0x100";
			x=0;
			y=0.0089999996;
			w=0.37799999;
			text="$STR_DISP_ERROR";
		};
	};
	class RscUnitInfoTank
	{
		idd=300;
		movingEnable=0;
		controls[]=
		{
			"Background",
			"Weapon",
			"Ammo",
			"Commander",
			"Gunner",
			"Driver",
			"Heading"
		};
		class Background: RscText
		{
			idc=124;
			style=128;
			x=0.02;
			y=0.18000001;
			w=0.20999999;
			h=0.25;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Weapon: RscIGText
		{
			idc=118;
			x=0.025;
			y=0.38;
			w=0.19;
			text="$STR_DISP_ERROR";
		};
		class Ammo: RscIGText
		{
			idc=119;
			style="0x01 + 0x100";
			x=0.035;
			y=0.38;
			w=0.19;
			text="$STR_DISP_ERROR";
		};
		class Commander: RscIGText
		{
			idc=125;
			x=0.025;
			y="0.38 + 0.04";
			w=0.19;
			text="$STR_DISP_ERROR";
		};
		class Gunner: RscIGText
		{
			idc=127;
			x=0.025;
			y="0.38 + 2 * 0.04";
			w=0.19;
			text="$STR_DISP_ERROR";
		};
		class Driver: RscIGText
		{
			idc=126;
			x=0.025;
			y="0.38 + 3 * 0.04";
			w=0.19;
			text="$STR_DISP_ERROR";
		};
		class Heading: RscIGText
		{
			idc=148;
			style="0x00  + 0x100";
			x=0.017000001;
			y=0.0099999998;
			w=0.17;
		};
	};
	class RscUnitInfo
	{
		idd=300;
		movingEnable=0;
		controls[]=
		{
			"Background",
			"Background2",
			"ValueArmor",
			"ValueFuel",
			"Speed",
			"Alt",
			"TextArmor",
			"TextFuel",
			"Weapon",
			"Ammo",
			"Heading"
		};
		class Background: RscText
		{
			idc=124;
			style=128;
			x=0;
			y=0.138;
			w=0.33000001;
			h=0.090000004;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Background2: RscText
		{
			idc=124;
			style=128;
			x=0.67000002;
			y=0.138;
			w=0.33000001;
			h=0.090000004;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
		};
		class Speed: RscIGText
		{
			idc=121;
			x=0.0049999999;
			y=0.145;
			w=0.2;
			text="$STR_DISP_ERROR";
		};
		class Alt: RscIGText
		{
			idc=122;
			style="0x01+0x100";
			x=0.16;
			y=0.145;
			w=0.16;
			text="$STR_DISP_ERROR";
		};
		class TextArmor: RscIGText
		{
			x=0.68000001;
			y=0.145;
			w=0.19;
			text="$STR_UI_ABAR";
		};
		class ValueArmor: RscIGText
		{
			idc=111;
			x=0.81999999;
			y=0.155;
			w=0.16500001;
			h=0.025;
		};
		class TextFuel: RscIGText
		{
			x=0.68000001;
			y=0.185;
			w=0.19;
			text="$STR_UI_FBAR";
		};
		class ValueFuel: RscIGProgress
		{
			idc=113;
			x=0.81999999;
			y=0.19;
			w=0.16500001;
			h=0.025;
		};
		class ValueReload: RscIGProgress
		{
			idc=154;
			x=0.92000002;
			y=0.19;
			w=0.16500001;
			h=0.025;
		};
		class Weapon: RscIGText
		{
			idc=118;
			x=0.0049999999;
			y=0.185;
			w=0.25;
			text="$STR_DISP_ERROR";
		};
		class Ammo: RscIGText
		{
			idc=119;
			style="0x01 + 0x100";
			x=0.17;
			y=0.19;
			w=0.15000001;
			text="$STR_DISP_ERROR";
		};
		class Heading: RscIGText
		{
			idc=148;
			style="0x00  + 0x100";
			x=0.017000001;
			y=0.0099999998;
			w=0.17;
		};
	};
	class RscUnitInfoAir: RscUnitInfo
	{
	};
	class UnitInfoSoldier: RscUnitInfoSoldier
	{
	};
	class UnitInfoTank: RscUnitInfoTank
	{
	};
	class UnitInfoCar: RscUnitInfo
	{
	};
	class UnitInfoShip: RscUnitInfo
	{
	};
	class UnitInfoAirplane: RscUnitInfoAir
	{
	};
	class UnitInfoHelicopter: RscUnitInfoAir
	{
	};
	class RscHint
	{
		idd=301;
		movingEnable=0;
		controls[]=
		{
			"Background",
			"Hint"
		};
		class Background: RscText
		{
			idc=101;
			style=128;
			x=0;
			y=0.02;
			w=0.28;
			h=0.059999999;
			text="";
			colorBackground[]={0.2,0.15000001,0.1,0.80000001};
			colorText[]={0,0,0,0};
			font="TahomaB";
			sizeEx=0;
			fixedWidth=0;
			shadow=0;
		};
		class Hint: RscStructuredText
		{
			idc=102;
			x=0.001;
			y=0.030999999;
			w=0.27500001;
			h=0.039999999;
			style=16;
			lineSpacing=1;
			sizeEx=0.027000001;
			colorText[]={1,1,1,1};
			colorBackground[]={0,0,0,0};
			font="TahomaB";
			size=0.027000001;
			text="$STR_DISP_ERROR";
			class Attributes: Attributes
			{
				color="#ffffff";
				align="center";
				shadow=0;
			};
		};
	};
	class RscTaskHint
	{
		idd=302;
		movingEnable=0;
		class controlsBackground
		{
			class Background: RscText
			{
				idc=103;
				style=128;
				x=0.36000001;
				y=0.22;
				w=0.28;
				h=0.059999999;
				text="";
				colorBackground[]={0.2,0.15000001,0.1,0.80000001};
				colorText[]={0,0,0,0};
				font="TahomaB";
				sizeEx=0;
				fixedWidth=0;
				shadow=0;
			};
		};
		class Controls
		{
			class Hint: RscStructuredText
			{
				idc=104;
				x=0.40400001;
				y=0.23100001;
				w=0.23;
				h=0.039999999;
				style=16;
				lineSpacing=1;
				sizeEx=0.027000001;
				colorText[]={1,1,1,1};
				colorBackground[]={0,0,0,0};
				font="TahomaB";
				size=0.027000001;
				text="$STR_DISP_ERROR";
				class Attributes: Attributes
				{
					color="#ffffff";
					align="left";
					shadow=0;
				};
			};
		};
		class TaskIcon
		{
			x=0.36500001;
			y=0.235;
			w=0.039999999;
			h=0.079999998;
		};
	};
};
class RscTitles
{
	class default: RscText
	{
		idd=-1;
		movingEnable=0;
		duration=4;
	};
	class DefPic: default
	{
		idc=-1;
		style=48;
		colorBackground[]={0,0,0,0};
		colorText[]={1,1,1,1};
		font="TahomaB";
		sizeEx=0;
		fixedWidth=0;
	};
	class BIS
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="BI Studio";
		controls[]=
		{
			"Background",
			"BIS1",
			"BIS2",
			"WWW"
		};
		class BIS1: RscPicture
		{
			text="BI1fit.pac";
			x=0.1;
			y=0.23;
			w=0.30000001;
			h=0.40000001;
		};
		class BIS2: RscPicture
		{
			text="BI2fit.pac";
			x=0.5;
			y=0.23;
			w=0.30000001;
			h=0.40000001;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class WWW: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="w w w . b i s t u d i o . c o m";
			x=0.050000001;
			y=0.67000002;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class Publisher
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Publisher";
		controls[]=
		{
			"Background",
			"CM1",
			"CM2",
			"CM3"
		};
		class CM1: RscPicture
		{
			text="CM1fit.paa";
			x=0.050000001;
			y=0.15000001;
			w=0.30000001;
			h=0.69999999;
		};
		class CM2: RscPicture
		{
			text="CM2fit.paa";
			x=0.34999999;
			y=0.15000001;
			w=0.30000001;
			h=0.69999999;
		};
		class CM3: RscPicture
		{
			text="CM3fit.paa";
			x=0.64999998;
			y=0.15000001;
			w=0.30000001;
			h=0.69999999;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class LegalScreen
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="Copyrights";
		controls[]=
		{
			"Background",
			"CM4",
			"CM1",
			"CM2",
			"CM3",
			"CopText",
			"InfoText"
		};
		class CopText: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1.5;
			text="Copyright � 2004 Bohemia Interactive Studio s.r.o. \nAll rights reserved.";
			x=0.050000001;
			y=0.30000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 16 / 408 )";
		};
		class InfoText: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1.5;
			text="Counterfeit copying or trading in counterfeit copies is illegal.\nThis software is protected from unauthorized copying by a unique system. In counterfeit copies, the gameplay will degrade after a period of time to a point where the game is no longer playable. This does not happen to genuine software. if you are any doubt about the authenticity of your disc, make sure you have original packaging and a printed silver disc. \nCOUNTERFEIT SOFTWARE IS NOT WORTH PURCHASING.";
			x=0.050000001;
			y=0.60000002;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,0.5,1};
			font="TahomaB";
			sizeEx="( 16 / 408 )";
		};
		class CM1: RscPicture
		{
			text="CM1fit.paa";
			x=0.34999999;
			y=0.1;
			w=0.1;
			h=0.13333;
		};
		class CM2: RscPicture
		{
			text="CM2fit.paa";
			x=0.44999999;
			y=0.1;
			w=0.1;
			h=0.13333;
		};
		class CM3: RscPicture
		{
			text="CM3fit.paa";
			x=0.55000001;
			y=0.1;
			w=0.1;
			h=0.13333;
		};
		class CM4: RscPicture
		{
			text="CMsign.paa";
			x=0.55000001;
			y=0.1;
			w=0.1;
			h=0.13333;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class Features1
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="Features";
		controls[]=
		{
			"Background",
			"Back",
			"FP1",
			"FP2",
			"FP3",
			"Text1",
			"Text2"
		};
		class Text1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="� The best of cold war military equipment: battling on foot, in armor and in the sky\n\n� 30+ playable vehicles, 20+ different infantry weapons: guns, missiles, explosives\n\n� Leadership of up to 12 units in the squad: simple point and click interface \n\n� Over 50 missions on 3 huge islands: featuring a campaign with exciting storyline\n\n� Intuitive mission editor: players can create own missions and campaigns \n\n� Multiplayer combat over LAN or Internet: including Voice Over Net";
			x=0;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 16 / 408 )";
		};
		class Back: RscText
		{
			x=0;
			y=0.23999999;
			w=1;
			h=0.60000002;
			text="";
			colorBackground[]={0.12,0.15000001,0.039999999,1};
		};
		class Text2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="OUT NOW!";
			x=0.050000001;
			y=0.88999999;
			w=0.89999998;
			h=0.5;
			colorText[]={0.23,0.30000001,0.079999998,0.5};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class FP1: RscPicture
		{
			colorText[]={0.23,0.30000001,0.079999998,0.5};
			text="OFPlogo1.paa";
			x=0.31999999;
			y=0.07;
			w=0.12;
			h=0.133;
		};
		class FP2: RscPicture
		{
			colorText[]={0.23,0.30000001,0.079999998,0.5};
			text="OFPlogo2.paa";
			x=0.44;
			y=0.07;
			w=0.12;
			h=0.133;
		};
		class FP3: RscPicture
		{
			colorText[]={0.23,0.30000001,0.079999998,0.5};
			text="OFPlogo3.paa";
			x=0.56;
			y=0.07;
			w=0.12;
			h=0.133;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class Features
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="Features";
		controls[]=
		{
			"CGW1",
			"CGW2",
			"CGW3",
			"CGW4"
		};
		class CGW1: RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW1.jpg";
			x=0;
			y=0;
			w=0.5;
			h=0.66600001;
		};
		class CGW2: RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW2.jpg";
			x=0.5;
			y=0;
			w=0.5;
			h=0.66600001;
		};
		class CGW3: RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW3.jpg";
			x=0;
			y=0.66600001;
			w=0.5;
			h=0.333;
		};
		class CGW4: RscPicture
		{
			colorText[]={1,1,1,1};
			text="\img\CGW4.jpg";
			x=0.5;
			y=0.66600001;
			w=0.5;
			h=0.333;
		};
	};
	class Project_name
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Project";
		controls[]=
		{
			"Background",
			"FP1",
			"FP2",
			"FP3"
		};
		class FP1: RscPicture
		{
			text="OFPlogo1.paa";
			x=0.050000001;
			y=0.31999999;
			w=0.30000001;
			h=0.33000001;
		};
		class FP2: RscPicture
		{
			text="OFPlogo2.paa";
			x=0.34999999;
			y=0.31999999;
			w=0.30000001;
			h=0.33000001;
		};
		class FP3: RscPicture
		{
			text="OFPlogo3.paa";
			x=0.64999998;
			y=0.31999999;
			w=0.30000001;
			h=0.33000001;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class resistance
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Resistance logo";
		controls[]=
		{
			"Background",
			"RE1",
			"RE2",
			"RE3"
		};
		class RE1: RscPicture
		{
			text="\o\misc\OFPRlogo01.paa";
			x=0.050000001;
			y=0.31999999;
			w=0.30000001;
			h=0.33000001;
		};
		class RE2: RscPicture
		{
			text="\o\misc\OFPRlogo02.paa";
			x=0.34999999;
			y=0.31999999;
			w=0.30000001;
			h=0.33000001;
		};
		class RE3: RscPicture
		{
			text="\o\misc\OFPRlogo03.paa";
			x=0.64999998;
			y=0.31999999;
			w=0.30000001;
			h=0.33000001;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class creditsback
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="Creditsback";
		controls[]=
		{
			"Back",
			"background"
		};
		class Back: RscText
		{
			x=0.72000003;
			y=0;
			w=0.5;
			h=1;
			text="";
			colorBackground[]={0,0,0,1};
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class creditsbackBIS
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="CreditsbackBIS";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"dev"
		};
		class Back: RscText
		{
			x=0.72000003;
			y=0;
			w=0.5;
			h=1;
			text="";
			colorBackground[]={0,0,0,1};
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class BIS1: RscPicture
		{
			text="BI1fit.pac";
			x=0.75999999;
			y=0.039999999;
			w=0.1;
			h=0.12;
		};
		class BIS2: RscPicture
		{
			text="BI2fit.pac";
			x=0.86000001;
			y=0.039999999;
			w=0.1;
			h=0.12;
		};
		class web: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="www.bistudio.com";
			x=0.41;
			y=0.94999999;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class dev: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS12a";
			x=0.41;
			y=0.02;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class BISleader: creditsbackBIS
	{
		name="BISleader";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"name1",
			"dev"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS01";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN01";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class BISprogram: creditsbackBIS
	{
		name="BISprogrammer";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"name1",
			"dev"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS02";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN02";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class BISart: creditsbackBIS
	{
		name="BISart";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"name1",
			"dev"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS03";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN03";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class BISdesign: creditsbackBIS
	{
		name="BISdesign";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"name1",
			"dev"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS04";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN04";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class BISother1: creditsbackBIS
	{
		name="BISother1";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"work2",
			"work3",
			"name1",
			"name2",
			"name3",
			"dev"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS05";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN05";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class work2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS06";
			x=0.36000001;
			y=0.44999999;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN06";
			x=0.36000001;
			y=0.5;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class work3: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS07";
			x=0.36000001;
			y=0.60000002;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name3: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN07";
			x=0.36000001;
			y=0.64999998;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class BISmusic: creditsbackBIS
	{
		name="BISmusic";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"name1",
			"name2",
			"name3",
			"name4",
			"dev"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS09";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN09";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN09a";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name3: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN09b";
			x=0.36000001;
			y=0.60000002;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name4: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN09c";
			x=0.36000001;
			y=0.63;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class BISsfx: creditsbackBIS
	{
		name="BISsfx";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work1",
			"work2",
			"name1",
			"name2",
			"dev",
			"copy"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS10";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.98000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN10";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.98000002;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class work2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS08";
			x=0.36000001;
			y=0.55000001;
			w=1;
			h=0.98000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN08";
			x=0.36000001;
			y=0.60000002;
			w=1;
			h=0.98000002;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class copy: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_COPY";
			x=0.36000001;
			y=0.69999999;
			w=1;
			h=0.98000002;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class BISthx: creditsbackBIS
	{
		name="BISthx";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"BIS1",
			"BIS2",
			"work2",
			"name2",
			"dev"
		};
		class work2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS11";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN11";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class creditsbackCM
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="CreditsbackCM";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub"
		};
		class Back: RscText
		{
			x=0.72000003;
			y=0;
			w=0.5;
			h=1;
			text="";
			colorBackground[]={0,0,0,1};
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class CM1: RscPicture
		{
			text="CM1fit.paa";
			x=0.74000001;
			y=0.029999999;
			w=0.079999998;
			h=0.1;
		};
		class CM2: RscPicture
		{
			text="CM2fit.paa";
			x=0.81999999;
			y=0.029999999;
			w=0.079999998;
			h=0.1;
		};
		class CM3: RscPicture
		{
			text="CM3fit.paa";
			x=0.89999998;
			y=0.029999999;
			w=0.079999998;
			h=0.1;
		};
		class CM4: RscPicture
		{
			text="CMsign.paa";
			x=0.89999998;
			y=0.029999999;
			w=0.079999998;
			h=0.1;
		};
		class pub: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS12";
			x=0.41;
			y=0.015;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class web: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="www.publisher.com";
			x=0.41;
			y=0.94999999;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class CMProducer: creditsbackCM
	{
		name="CMproducer";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS13";
			x=0.36000001;
			y=0.40000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN13";
			x=0.36000001;
			y=0.44999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class CMdesign: creditsbackCM
	{
		name="CMdesign";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS14";
			x=0.36000001;
			y=0.30000001;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN14";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class CMQA: creditsbackCM
	{
		name="CMQA";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS15";
			x=0.36000001;
			y=0.2;
			w=1;
			h=0.93000001;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN15";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.93000001;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class CMMrkev: creditsbackCM
	{
		name="CMMrkev";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS16";
			x=0.36000001;
			y=0.2;
			w=1;
			h=0.93000001;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN16";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.93000001;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class CMVoice: creditsbackCM
	{
		name="CMVoice";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"work2",
			"name2",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS17";
			x=0.36000001;
			y=0.2;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN17";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class work2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS18";
			x=0.36000001;
			y=0.44999999;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN18";
			x=0.36000001;
			y=0.5;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class CMlocal: creditsbackCM
	{
		name="CMlocal";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"work2",
			"name2",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS19";
			x=0.36000001;
			y=0.2;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN19";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class work2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS20";
			x=0.36000001;
			y=0.34999999;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN20";
			x=0.36000001;
			y=0.40000001;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class CMlegal: creditsbackCM
	{
		name="CMlegal";
		controls[]=
		{
			"Back",
			"background",
			"web",
			"CM1",
			"CM2",
			"CM3",
			"CM4",
			"pub",
			"work1",
			"work2",
			"name2",
			"name1"
		};
		class work1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS21";
			x=0.36000001;
			y=0.2;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN21";
			x=0.36000001;
			y=0.25;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
		class work2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS22";
			x=0.36000001;
			y=0.44999999;
			w=1;
			h=0.73000002;
			colorText[]={0.75,0.75,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class name2: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITSN22";
			x=0.36000001;
			y=0.5;
			w=1;
			h=0.52999997;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.050000001;
		};
	};
	class Endof
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="Endof";
		controls[]=
		{
			"Back2",
			"background",
			"copy"
		};
		class Back2: RscText
		{
			x=-0.1;
			y=0.80000001;
			w=1.8;
			h=1.2;
			text="";
			colorBackground[]={0,0,0,0.5};
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class copy: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS23";
			x=0.029999999;
			y=0.85000002;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class foto
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="foto";
		fadein=0;
		controls[]=
		{
			"background",
			"copy",
			"up",
			"down",
			"right",
			"left"
		};
		class up: RscText
		{
			x=-0.1;
			y=-0.1;
			w=1.1;
			h=0.1;
			text="";
			colorBackground[]={0.89999998,0.89999998,0.89999998,1};
		};
		class down: RscText
		{
			x=-0.1;
			y=1;
			w=1.2;
			h=1.2;
			text="";
			colorBackground[]={0.89999998,0.89999998,0.89999998,1};
		};
		class left: RscText
		{
			x=-0.1;
			y=-0.1;
			w=0.1;
			h=1.1;
			text="";
			colorBackground[]={0.89999998,0.89999998,0.89999998,1};
		};
		class right: RscText
		{
			x=1;
			y=-0.1;
			w=1;
			h=1.2;
			text="";
			colorBackground[]={0.89999998,0.89999998,0.89999998,1};
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class copy: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS23";
			x=0.029999999;
			y=0.81999999;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class Endof2
	{
		idd=-1;
		movingEnable=0;
		duration=10000;
		name="Endof2";
		controls[]=
		{
			"Back2",
			"background",
			"copy"
		};
		class Back2: RscText
		{
			x=0;
			y=0;
			w=1;
			h=1;
			text="";
			colorBackground[]={0,0,0,0.69999999};
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=-0.1;
			y=-0.1;
			w=1.1;
			h=1.1;
			colorText[]={0,0,0,0};
		};
		class copy: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_CREDITS24";
			x=0.029999999;
			y=0.5;
			w=0.89999998;
			h=0.69999999;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
	};
	class maintitles1
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="maintitles1";
		controls[]=
		{
			"Background",
			"maintitles_01",
			"maintitles_02"
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class maintitles_01: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_01";
			x=0.050000001;
			y=0.45699999;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
		class maintitles_02: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_02";
			x=0.050000001;
			y=0.55000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.059999999;
		};
	};
	class maintitles2
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="maintitles2";
		controls[]=
		{
			"Background",
			"maintitles_03",
			"maintitles_04",
			"maintitles_05"
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class maintitles_03: RscText
		{
			style="0x10 + 0x00 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_03";
			x=0.094999999;
			y=0.49900001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.059999999;
		};
		class maintitles_04: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_04";
			x=0.050000001;
			y=0.46700001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
		class maintitles_05: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_05";
			x=0.050000001;
			y=0.55000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
	};
	class maintitles3
	{
		idd=-1;
		movingEnable=0;
		duration=6;
		name="maintitles3";
		controls[]=
		{
			"Background",
			"maintitles_06",
			"maintitles_07"
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,0};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
		class maintitles_06: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_06";
			x=0.050000001;
			y=0.40000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
		class maintitles_07: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="$STR_MAINTITLES_07";
			x=0.050000001;
			y=0.5;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
	};
	class binocular
	{
		idd=-1;
		movingEnable=0;
		duration=1000;
		name="binocular";
		class objects
		{
			class binocular: RscObject
			{
				model="optika_dalekohled.p3d";
				idc=-1;
				position[]={0,0,0.052999999};
				direction[]=
				{
					"sin 0",
					"sin 180 * cos 0",
					"cos 180 * cos 0"
				};
				up[]=
				{
					0,
					"cos 180",
					"-sin 180"
				};
			};
		};
	};
	class reslogo
	{
		idd=-1;
		movingEnable=0;
		duration=1000;
		name="reslogo";
		class objects
		{
			class binocular: RscObject
			{
				model="\o\misc\Resistance_logo.p3d";
				idc=-1;
				position[]={0,0,3.5};
				direction[]=
				{
					"sin 0",
					"sin 180 * cos 0",
					"cos 180 * cos 0"
				};
				up[]=
				{
					0,
					"cos 0",
					"-sin 180"
				};
			};
		};
	};
	class Demo1
	{
		idd=-1;
		movingEnable=0;
		duration=4;
		name="Demo 1";
		controls[]=
		{
			"Text"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="Your transport is down. \nYou're about to ditch in hostile territory.";
			x=0.050000001;
			y=0.40000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.059999999;
		};
	};
	class Demo2
	{
		idd=-1;
		movingEnable=0;
		duration=2;
		name="Demo 2 - Think fast";
		controls[]=
		{
			"Text"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="Think fast, what are your options?";
			x=0.050000001;
			y=0.40000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.059999999;
		};
	};
	class Demo3
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 3 - Hide";
		controls[]=
		{
			"Text"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="Hide?";
			x=0.050000001;
			y=0.40000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
	};
	class Demo4
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 4 - Fight";
		controls[]=
		{
			"Text"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="Fight?";
			x=0.050000001;
			y=0.40000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
	};
	class Demo5
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 5 - Surrender";
		controls[]=
		{
			"Text"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="Surrender?";
			x=0.050000001;
			y=0.40000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.079999998;
		};
	};
	class Demo6
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 6 - OFP your call";
		controls[]=
		{
			"Background",
			"FP1",
			"FP2",
			"FP3",
			"Text"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="YOUR CALL.";
			x=0.050000001;
			y=0.5;
			w=0.89999998;
			h=0.30000001;
			colorText[]={1,1,1,0.5};
			font="TahomaB";
			sizeEx=0.079999998;
		};
		class FP1: RscPicture
		{
			colorText[]={0.23,0.30000001,0.079999998,0.30000001};
			text="OFPlogo1.paa";
			x=0.050000001;
			y=0.2;
			w=0.30000001;
			h=0.33000001;
		};
		class FP2: RscPicture
		{
			colorText[]={0.23,0.30000001,0.079999998,0.30000001};
			text="OFPlogo2.paa";
			x=0.34999999;
			y=0.2;
			w=0.30000001;
			h=0.33000001;
		};
		class FP3: RscPicture
		{
			colorText[]={0.23,0.30000001,0.079999998,0.30000001};
			text="OFPlogo3.paa";
			x=0.64999998;
			y=0.2;
			w=0.30000001;
			h=0.33000001;
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class Demo7
	{
		idd=-1;
		movingEnable=0;
		duration=1;
		name="Demo 7 TBC";
		controls[]=
		{
			"Background",
			"Text",
			"Text1"
		};
		class Text: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="JOIN NOW!";
			x=0.050000001;
			y=0.44999999;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx=0.059999999;
		};
		class Text1: RscText
		{
			style="0x10 + 0x02 + 0x200";
			lineSpacing=1;
			text="The ultimate test of your combat skills on PC CD-ROM.";
			x=0.050000001;
			y=0.55000001;
			w=0.89999998;
			h=0.5;
			colorText[]={1,1,1,1};
			font="TahomaB";
			sizeEx="( 21 / 408 )";
		};
		class Background: RscText
		{
			text="";
			colorBackground[]={0,0,0,1};
			x=0;
			y=0;
			w=1;
			h=1;
			colorText[]={0,0,0,0};
		};
	};
	class UnlockMission
	{
		idd=-1;
		movingEnable=0;
		duration=2;
		name="UnlockMission - show in script";
		controls[]=
		{
			"Text"
		};
		class Text: RscText
		{
			style=2;
			blinkingPeriod=2;
			x=0;
			y=0.050000001;
			w=1;
			h=0.050000001;
			text="$STR_UNLOCKED_MISSION";
			font="TahomaB";
			sizeEx=0.059999999;
			colorText[]={0.80000001,0.1,0.1,1};
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=-1;
			movingEnable=0;
			class controlsBackground
			{
				class Background1: RscText
				{
					x=0;
					y=0;
					w=1;
					h=1;
					colorBackground[]={0.30000001,0.30000001,0.30000001,1};
				};
			};
			class controls
			{
				class Name: RscText
				{
					idc=101;
					text="$STR_DISP_ERROR";
					style=2;
					x=0;
					y=0.039999999;
					w=1;
				};
				class Date: RscText
				{
					idc=102;
					text="$STR_DISP_ERROR";
					style=2;
					x=0;
					y=0.69999999;
					w=1;
				};
				class FakeProgress: RscText
				{
					x=0.25;
					y=0.5;
					w=0.5;
					colorBackground[]={0.80000001,0.80000001,0.80000001,0.2};
				};
				class Progress: RscProgress
				{
					idc=104;
					x=0.25;
					y=0.5;
					w=0.5;
					h=0.050000001;
				};
				class Progress2: RscProgress
				{
					idc=103;
					x=0.40000001;
					y=0.60000002;
					w=0.2;
					h=0.029999999;
				};
				class TextLoad: RscText
				{
					style=2;
					x=0.25;
					y=0.44999999;
					w=0.5;
					text="$STR_LOADING";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	idd=-1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_LOADING";
		};
		class Name: RscText
		{
			idc=101;
			style=2;
			x=0;
			y=0.12;
			w=1;
		};
		class Briefing: RscHTML
		{
			idc=56;
			x=0.090000004;
			y=0.18000001;
			w=0.85000002;
			h=0.60000002;
		};
		class Progress: RscProgress
		{
			idc=104;
			x=0.15000001;
			y=0.84799999;
			w=0.69999999;
			h=0.050000001;
		};
		class Progress2: RscProgress
		{
			idc=103;
			x=0.40000001;
			y=0.89999998;
			w=0.2;
			h=0.029999999;
		};
		class Date: RscText
		{
			idc=102;
			text="$STR_DISP_ERROR";
			style=2;
			x=0;
			y=0.94;
			w=1;
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	idd=-1;
	class controls
	{
		class Text: RscText
		{
			idc=101;
			style=2;
			x=0;
			y=0.44999999;
			w=1;
		};
		class Progress: RscProgress
		{
			idc=104;
			x=0.30000001;
			y=0.5;
			w=0.40000001;
			h=0.050000001;
		};
		class Progress2: RscProgress
		{
			idc=103;
			x=0.40000001;
			y=0.60000002;
			w=0.2;
			h=0.029999999;
		};
	};
};
class RscDisplayNotFreezeBig: RscStandardDisplay
{
	idd=-1;
	class controls
	{
		class Text: RscText
		{
			idc=101;
			style=2;
			x=0;
			y=0.44999999;
			w=1;
		};
		class Progress: RscProgress
		{
			idc=104;
			x=0.30000001;
			y=0.5;
			w=0.40000001;
			h=0.050000001;
		};
		class Progress2: RscProgress
		{
			idc=103;
			x=0.40000001;
			y=0.60000002;
			w=0.2;
			h=0.029999999;
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	idd=-1;
	class controls
	{
		class Text: RscText
		{
			idc=101;
			style=2;
			x=0;
			y=0.44999999;
			w=1;
		};
		class Progress: RscProgress
		{
			idc=104;
			x=0.30000001;
			y=0.5;
			w=0.40000001;
			h=0.050000001;
		};
		class Progress2: RscProgress
		{
			idc=103;
			x=0.40000001;
			y=0.60000002;
			w=0.2;
			h=0.029999999;
		};
	};
};
class RscDisplayEditDiaryRecord
{
	access=0;
	idd=125;
	movingEnable=1;
	class Controls
	{
		class RecordBackground: RscText
		{
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
			x=0.51999998;
			y=0.155;
			w=0.44999999;
			h=0.34;
		};
		class RecordTitle: RscTitle
		{
			style="0x20 + 0x02";
			text="$STR_UI_RECORD_TITLE";
			x=0.51999998;
			y=0.16500001;
			w=0.44999999;
		};
		class Record: RscEdit
		{
			idc=101;
			style=16;
			x=0.52999997;
			y=0.23;
			w=0.43000001;
			h=0.2;
			sizeEx=0.027000001;
		};
		class B_OK: RscButton
		{
			idc=1;
			x=0.52999997;
			y=0.435;
			w=0.2;
			h=0.050000001;
			text="$STR_DISP_OK";
			sizeEx=0.027000001;
			default=1;
		};
		class B_Cancel: B_OK
		{
			idc=2;
			x=0.75999999;
			text="$STR_DISP_CANCEL";
			default=0;
		};
		class Title: RscEdit
		{
			idc=102;
			x=0.52999997;
			y=0.52999997;
			w=0.43000001;
			h=0.2;
			sizeEx=0.027000001;
		};
	};
};
class RscDisplayDiary
{
	access=0;
	idd=129;
	movingEnable=1;
	onKeyDown="if ((_this select 1) == 22) then {closeDialog 129; true} else {false}";
	class Controls
	{
		class DiaryBackground: RscText
		{
			x=0.1;
			y=0.025;
			w=0.80000001;
			h=0.94999999;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class DiaryTitle: RscTitle
		{
			style="0x20 + 0x02";
			text="$STR_UI_DIARY_TITLE";
			x=0.1;
			y=0.035;
			w=0.80000001;
		};
		class DiaryPage: RscCombo
		{
			idc=103;
			x=0.60000002;
			y=0.1;
			w=0.28999999;
			h=0.050000001;
			sizeEx=0.027000001;
		};
		class B_Add: RscButton
		{
			idc=104;
			x=0.60000002;
			y=0.155;
			w=0.28999999;
			h=0.050000001;
			colorText[]={1,1,1,1};
			text="$STR_UI_DIARY_ADDRECORD";
			sizeEx=0.027000001;
		};
		class DiaryIndex: RscListBox
		{
			idc=102;
			x=0.60000002;
			y=0.20999999;
			w=0.28999999;
			h=0.69999999;
		};
		class B_Quit: B_Add
		{
			idc=2;
			y=0.91500002;
			text="$STR_UI_DIARY_QUIT";
			default=1;
		};
		class Diary: RscHTML
		{
			idc=101;
			x=0.11;
			y=0.1;
			w=0.47999999;
			h=0.86500001;
			colorBackground[]={0.60000002,0.60000002,0.60000002,1};
			colorText[]={1,1,1,1};
			class H1
			{
				font="TahomaB";
				fontBold="TahomaB";
				sizeEx=0.039999999;
			};
			class P
			{
				font="TahomaB";
				fontBold="TahomaB";
				sizeEx=0.027000001;
			};
		};
	};
};
class RscDisplayMainMap
{
	access=0;
	idd=12;
	movingEnable=0;
	saveParams=0;
	class controlsBackground
	{
		class Map: RscMapControl
		{
			moveOnEdges=1;
			x=-0.088;
			y=-0.088;
			w=1.176;
			h=1.176;
			class Command
			{
				icon="#(argb,8,8,3)color(1,1,1,1)";
				color[]={0,0,0,1};
				size=18;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class ActiveMarker
			{
				color[]={0.30000001,0.1,0.89999998,1};
				size=50;
			};
		};
	};
	class controls
	{
	};
	class objects
	{
		class Watch: RscObject
		{
			idc=101;
			type=80;
			model="\core\watch\watch.p3d";
			selectionDate1="date1";
			selectionDate2="date2";
			selectionDay="day";
			x=0.69999999;
			xBack=0.69999999;
			y=0.12;
			yBack=0.12;
			z=0.22;
			zBack=0.22;
			inBack=0;
			enableZoom=0;
			direction[]={0,0,1};
			up[]={0,1,0};
			zoomDuration=1;
			scale=0.69999999;
			waitForLoad=0;
		};
		class Compass: RscObject
		{
			idc=102;
			type=80;
			model="\core\compass\compass.p3d";
			selectionArrow="arrow";
			x=0.92000002;
			xBack=0.92000002;
			y=0.079999998;
			yBack=0.079999998;
			z=0.22;
			zBack=0.22;
			inBack="False";
			enableZoom=0;
			direction[]={1,0,0};
			up[]={0,1,0};
			zoomDuration=1;
			scale=0.60000002;
			waitForLoad=0;
		};
		class GPS: RscObject
		{
			idc=106;
			type=82;
			model="\core\gps\gps.p3d";
			x=0.30000001;
			xBack=0.30000001;
			y=0.079999998;
			yBack=0.079999998;
			z=0.22;
			zBack=0.22;
			inBack=0;
			enableZoom=0;
			up[]={0,1,0};
			direction[]={0,50,1};
			zoomDuration=1;
			scale=1;
			waitForLoad=0;
			class Areas
			{
				class Display
				{
					selection="display";
					class controls
					{
						class GPSSquare: RscText
						{
							style=2;
							idc=75;
							x=0;
							y="0 * 0.660";
							w=1;
							h="1 * 0.660";
							color[]={0,0,0,1};
							sizeEx="1 * 0.660";
							text="";
						};
					};
				};
			};
		};
		class WalkieTalkie: RscObject
		{
			idc=103;
			type=82;
			model="\core\radio\radio.p3d";
			position[]={0.093999997,-0.043000001,0.25};
			scale=1.3;
			direction[]={0,1,0};
			up[]={0,0,-1};
			positionBack[]={0.28,-0.155,0.625};
			inBack=1;
			enableZoom=1;
			zoomDuration=0.5;
			class Areas
			{
				class Papir
				{
					selection="papir";
					class controls
					{
						class RscRadioText: RscActiveText
						{
							idc=-1;
							sizeEx="0.12 * 1.359";
							color[]={0,0,0,1};
							colorActive[]={0.30000001,0.30000001,0.30000001,1};
							style=0;
							x=0.050000001;
							y="0.02 * 1.359";
							w=0.94999999;
							h="0.08 * 1.359";
						};
						class RadioAlpha: RscRadioText
						{
							idc=63;
							y="0.02 * 1.359";
						};
						class RadioBravo: RscRadioText
						{
							idc=64;
							y="0.12 * 1.359";
						};
						class RadioCharlie: RscRadioText
						{
							idc=65;
							y="0.22 * 1.359";
						};
						class RadioDelta: RscRadioText
						{
							idc=66;
							y="0.32 * 1.359";
						};
						class RadioEcho: RscRadioText
						{
							idc=67;
							y="0.42 * 1.359";
						};
						class RadioFoxtrot: RscRadioText
						{
							idc=68;
							y="0.52 * 1.359";
						};
						class RadioGolf: RscRadioText
						{
							idc=69;
							y="0.62 * 1.359";
						};
						class RadioHotel: RscRadioText
						{
							idc=70;
							y="0.72 * 1.359";
						};
						class RadioIndia: RscRadioText
						{
							idc=71;
							y="0.82 * 1.359";
						};
						class RadioJuliet: RscRadioText
						{
							idc=72;
							y="0.92 * 1.359";
						};
					};
				};
			};
		};
		class Notepad: RscObject
		{
			idc=104;
			type=82;
			model="\core\notepad\notepad.p3d";
			selectionPaper="paper";
			position[]={-0.079999998,0,0.31999999};
			scale=1.2;
			positionBack[]={-0.32499999,0.197,0.80000001};
			inBack=0;
			enableZoom=1;
			zoomDuration=0.5;
			paper1="#(argb,8,8,3)color(1,1,1,1)";
			paper2="#(argb,8,8,3)color(1,1,1,1)";
			paper3="#(argb,8,8,3)color(1,1,1,1)";
			paper4="#(argb,8,8,3)color(1,1,1,1)";
			paper5="#(argb,8,8,3)color(1,1,1,1)";
			paper6="#(argb,8,8,3)color(1,1,1,1)";
			paper7="#(argb,8,8,3)color(1,1,1,1)";
			class Areas
			{
				class Paper
				{
					selection="paper";
					class controls
					{
						class Name: RscText
						{
							sizeEx="0.04 * 2.082";
							color[]={1,1,1,1};
							idc=73;
							style=2;
							x=0;
							y="0 * 2.082";
							w=1;
							h="0.05 * 2.082";
						};
						class RscBookmarkText: RscActiveText
						{
							idc=-1;
							sizeEx="0.04 * 2.082";
							color[]={1,1,1,1};
							colorActive[]={0.85000002,0.85000002,0.85000002,1};
							style=2;
							x=0;
							y="0.05 * 2.082";
							w=0.25;
							h="0.05 * 2.082";
						};
						class Bookmark1: RscBookmarkText
						{
							idc=58;
							x=0;
							text="$STR_MAP_PLAN";
						};
						class Bookmark2: RscBookmarkText
						{
							idc=57;
							x=0.25;
							text="$STR_MAP_NOTES";
						};
						class Bookmark3: RscBookmarkText
						{
							idc=60;
							x=0.5;
							text="$STR_MAP_GROUP";
						};
						class Bookmark4: RscBookmarkText
						{
							idc=59;
							x=0.75;
							text="$STR_BRIEF_TEAM_SWITCH";
						};
						class Briefing: RscHTML
						{
							size="1 * 2.082";
							idc=56;
							x=0.02;
							y="0.11 * 2.082";
							w=0.98000002;
							h="0.89 * 2.082";
							class H1: H1
							{
								sizeEx="0.04 * 2.082";
							};
							class H2: H2
							{
								sizeEx="0.04 * 2.082";
							};
							class H3: H3
							{
								sizeEx="0.04 * 2.082";
							};
							class H4: H4
							{
								sizeEx="0.04 * 2.082";
							};
							class H5: H5
							{
								sizeEx="0.04 * 2.082";
							};
							class H6: H6
							{
								sizeEx="0.04 * 2.082";
							};
							class P: P
							{
								sizeEx="0.04 * 2.082";
							};
						};
					};
				};
			};
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	idd=0;
	class controls
	{
		class Version: RscText
		{
			idc=118;
			style=2;
			x=0.2;
			y=0.1;
			w=0.2;
			sizeEx=0.027000001;
		};
		class ModList: RscStructuredText
		{
			idc=139;
			style=0;
			x=0.75;
			y=0.40000001;
			w=0.23999999;
			h=0.5;
			size="( 16 / 408 )";
			class Attributes
			{
				font="TahomaB";
				color="#ffffff";
				align="right";
				shadow=0;
			};
		};
		class Date: Version
		{
			idc=112;
			x=0.60000002;
		};
		class B_Campaign: RscButton
		{
			idc=101;
			x=0.133;
			y=0.2;
			text="$STR_DISP_MAIN_XBOX_CAMPAIGN";
		};
		class B_SingleMission: B_Campaign
		{
			idc=117;
			y="0.2 + 0.1";
			text="$STR_DISP_MAIN_SINGLE";
			default=1;
		};
		class B_MultiPlayer: B_Campaign
		{
			idc=105;
			y="0.2 + 0.2";
			text="$STR_DISP_MAIN_MULTI";
		};
		class B_MissionEditor: B_Campaign
		{
			idc=115;
			y="0.2 + 0.3";
			text="$STR_DISP_MAIN_CUSTOM";
		};
		class B_SinglePlayer: B_Campaign
		{
			idc=138;
			y="0.2 + 0.4";
			text="$STR_DISP_MAIN_SINGLE_PLAYER";
		};
		class B_Options: RscButton
		{
			idc=102;
			x=0.56599998;
			y=0.2;
			text="$STR_DISP_MAIN_OPTIONS";
		};
		class B_Player: B_Options
		{
			idc=109;
			y="0.2 + 0.1";
			text="$STR_DISP_ERROR";
		};
		class B_Credits: B_Options
		{
			idc=107;
			y="0.2 + 0.2";
			text="$STR_DISP_MAIN_CREDITS";
		};
		class B_Expansions: B_Options
		{
			idc=140;
			y="0.2 + 0.5";
			text="Expansions";
		};
		class B_Quit: B_Options
		{
			idc=106;
			y="0.2 + 0.3";
			text="$STR_DISP_MAIN_QUIT";
		};
		class ModIcons: RscControlsGroup
		{
			idc=141;
			x="SafeZoneX+0.03";
			y="(SafeZoneH + SafeZoneY) - (0.113*SafeZoneH)";
			w=0.80000001;
			h=0.2;
			class Controls
			{
			};
		};
	};
	class IconPicture: RscPicture
	{
		x=0;
		y=0;
		w="0.07*SafeZoneH";
		h="0.093*SafeZoneH";
		spacing=0.0070000002;
		text="";
	};
};
class RscDisplaySingleplayer
{
	idd=140;
	movingEnable=1;
	enableSimulation=1;
	enableDisplay=1;
	class controls
	{
		class B_Campaign: RscButton
		{
			x=0.133;
			y=0.2;
		};
		class B_SingleMission: B_Campaign
		{
			idc=103;
			y="0.2 + 0.1";
			text="$STR_DISP_MAIN_SINGLE";
			default=1;
		};
		class B_MissionEditor: B_Campaign
		{
			idc=102;
			y="0.2 + 0.2";
			text="$STR_DISP_MAIN_CUSTOM";
		};
		class B_Training: B_Campaign
		{
			idc=101;
			y="0.2 + 0.3";
			text="$STR_DISP_MAIN_TRAINING";
		};
		class B_Back: B_Campaign
		{
			idc=2;
			y="0.2 + 0.4";
			text="$STR_DISP_BACK";
		};
	};
};
class RscDisplaySingleMission: RscStandardDisplay
{
	idd=2;
	none="#(argb,8,8,3)color(1,1,1,1)";
	done="#(argb,8,8,3)color(1,1,1,1)";
	locked="#(argb,8,8,3)color(1,1,1,1)";
	package="#(argb,8,8,3)color(1,1,1,1)";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_SINGLE_TITLE";
		};
		class Missions: RscListBox
		{
			idc=101;
			x=0.067000002;
			y=0.15000001;
			h=0.64999998;
		};
		class Overview: RscHTML
		{
			idc=102;
			x=0.52999997;
			y=0.15000001;
			w=0.40000001;
			h=0.64999998;
		};
		class B_Difficulty: RscActiveText
		{
			idc=104;
			x=0.029999999;
			y=0.89999998;
		};
		class B_Cancel: B_Difficulty
		{
			idc=2;
			x=0.20999999;
			text="$STR_DISP_CANCEL";
		};
		class B_Start: B_Difficulty
		{
			idc=105;
			x=0.38999999;
		};
		class B_Continue: B_Difficulty
		{
			idc=1;
			x=0.56999999;
			w=0.40000001;
			default=1;
		};
	};
};
class RscDisplaySelectDifficulty: RscStandardDisplay
{
	idd=85;
	class controls
	{
		class Difficulty: RscListBox
		{
			idc=101;
			x=0.029999999;
			y=0.2;
			w=0.44;
			h=0.16;
		};
		class Description: RscHTML
		{
			idc=102;
			x=0.51999998;
			y=0.15000001;
			w=0.41999999;
			h=0.69999999;
			align="center";
		};
	};
};
class RscDisplayDifficultySelect
{
	idd=152;
	class controls
	{
		class Difficulty: RscListBox
		{
			idc=101;
			x=0.029999999;
			y=0.2;
			w=0.44;
			h=0.16;
		};
		class Description: RscHTML
		{
			idc=102;
			x=0.51999998;
			y=0.15000001;
			w=0.41999999;
			h=0.69999999;
			align="center";
		};
	};
};
class RscDisplayGetReady: RscDisplayMainMap
{
	idd=37;
	showGearOnExit=0;
	class controlsBackground
	{
		class Background1: RscText
		{
			x=0;
			y=0;
			w=0.5;
			h=1;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
		class Background2: Background1
		{
			x=0.5;
			y=0;
			h=0.050000001;
		};
		class Background3: Background2
		{
			y=0.94999999;
		};
		class Background4: Background1
		{
			x=0.94999999;
			w=0.050000001;
		};
	};
	class controls
	{
		class Title: RscTitle
		{
			idc=114;
			x=0;
			w=0.5;
		};
		class B_Continue: RscActiveText
		{
			idc=1;
			x=0.1;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CONTINUE";
			default=1;
		};
		class B_Cancel: B_Continue
		{
			idc=2;
			x=0.25;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
};
class RscDisplayInspect
{
	idd=169;
	movingEnable=1;
	class ControlsBackground
	{
		class Title: RscText
		{
			idc=101;
			x=0;
			y=0;
			w=0.89999998;
			h=0.075000003;
		};
		class Description: RscStructuredText
		{
			idc=103;
			x=0;
			y=0.075000003;
			w=0.25;
			h=0.92500001;
		};
		class ButtonClose: RscActiveText
		{
			idc=2;
			x=0.89999998;
			y=0;
			w=0.1;
			h=0.075000003;
			text="X";
			style=2;
		};
	};
	class Objects
	{
		class Preview: RscObject
		{
			idc=102;
			model="\core\empty\empty.p3d";
			x=0.25;
			y=0.075000003;
			w=0.75;
			h=0.92500001;
			z=3;
			colorBackground[]={0.5,0.5,1,0.5};
			colorBorder[]={0.5,0.5,0.5,1};
		};
	};
};
class CfgInventorySlots
{
};
class RscDisplayInventory
{
	idd=106;
	movingEnable=1;
	dragZ=2;
	dragGridW=0.050000001;
	dragGridH=0.050000001;
	dragColorNone[]={1,0,0,1};
	dragColorMove[]={0,1,0,1};
	dragColorCraft[]={0.92000002,0.67000002,0.090000004,1};
	dragColorSwap[]={0,1,1,1};
	tooltipHeight=0.2;
	tooltipImageWidth=0.1;
	tooltipTextWidth=0.2;
	tooltipTextSize=0.02;
	tooltipBgColor[]={0.5,0.5,0.5,1};
	tooltipLineColor[]={0,0,0,1};
	class ControlsBackground
	{
		class TitleSoldier: RscText
		{
			idc=110;
			x=0.23999999;
			y=0;
			w=0.25;
			h=0.075000003;
		};
		class TitleHands: RscText
		{
			idc=112;
			x=0.61000001;
			y=0.505;
			w=0.30000001;
			h=0.075000003;
		};
		class TitleContent: RscText
		{
			idc=111;
			x=0.61000001;
			y=0;
			w=0.30000001;
			h=0.075000003;
		};
	};
	class Objects
	{
		class Container: RscObject
		{
			idc=106;
			model="\core\empty\empty.p3d";
			x=0.02;
			y=0.075000003;
			w=0.2;
			h=0.80000001;
			z=3;
			titleW=0.079999998;
			titleH=0.079999998;
			attachmentW=0.059999999;
			attachmentH=0.059999999;
			gridW=0.039999999;
			gridH=0.039999999;
			font="TahomaB";
			sizeEx=0.017999999;
			colorBackground[]={0.5,0.5,1,0.5};
			colorHeaderBackground[]={0.40000001,0.40000001,0.40000001,0.5};
			colorBorder[]={0.5,0.5,0.5,1};
			colorText[]={0.80000001,0.80000001,0.80000001,1};
			colorItemBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorNoItemBackground[]={0.60000002,0.60000002,0.60000002,1};
			colorItemInHandsBackground[]={0.80000001,0.80000001,0.80000001,1};
			expanded="#(argb,8,8,3)color(0,1,0,1)";
			collapsed="#(argb,8,8,3)color(1,0,0,1)";
			class ScrollBar
			{
			};
		};
		class Soldier: RscObject
		{
			idc=103;
			model="\core\empty\empty.p3d";
			boneHead="head";
			boneLEye="eyeleft";
			boneREye="eyeright";
			boneLEyelidUp="face_eyelidupperleft";
			boneREyelidUp="face_eyelidupperright";
			boneLEyelidDown="face_eyelidlowerleft";
			boneREyelidDown="face_eyelidlowerright";
			boneLPupil="l_pupila";
			boneRPupil="l_pupila";
			animation="\dz\anims\data\anim\sdr\menu\unarmed\menu_idleUnarmedMain.rtm";
			animSpeed=0.12605;
			x=0.23999999;
			y=0.075000003;
			w=0.25;
			h=0.505;
			z=3;
			colorBackground[]={1,1,1,0.2};
			colorBorder[]={0.5,0.5,0.5,1};
		};
		class Hands: RscObject
		{
			idc=109;
			model="\core\empty\empty.p3d";
			x=0.61000001;
			y=0.57999998;
			w=0.30000001;
			h=0.22;
			z=2;
			gridW=0.050000001;
			gridH=0.050000001;
			font="TahomaB";
			sizeEx=0.017999999;
			colorBackground[]={0.80000001,0.80000001,0.80000001,0.5};
			colorBorder[]={0.5,0.5,0.5,1};
			colorText[]={0.80000001,0.80000001,0.80000001,1};
			colorItemBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorNoItemBackground[]={0.60000002,0.60000002,0.60000002,1};
		};
		class Content: RscObject
		{
			idc=107;
			model="\core\empty\empty.p3d";
			x=0.61000001;
			y=0.075000003;
			w=0.30000001;
			h=0.72500002;
			z=3;
			titleW=0.079999998;
			titleH=0.079999998;
			attachmentW=0.059999999;
			attachmentH=0.059999999;
			gridW=0.039999999;
			gridH=0.039999999;
			font="TahomaB";
			sizeEx=0.017999999;
			colorBackground[]={0.80000001,0.80000001,0.80000001,0.5};
			colorHeaderBackground[]={0.40000001,0.40000001,0.40000001,0.5};
			colorBorder[]={0.5,0.5,0.5,1};
			colorText[]={0.80000001,0.80000001,0.80000001,1};
			colorItemBackground[]={0.40000001,0.40000001,0.40000001,1};
			colorNoItemBackground[]={0.60000002,0.60000002,0.60000002,1};
			colorItemInHandsBackground[]={0.80000001,0.80000001,0.80000001,1};
			expanded="#(argb,8,8,3)color(0,1,0,1)";
			collapsed="#(argb,8,8,3)color(1,0,0,1)";
			class ScrollBar
			{
			};
		};
		class Shortcut1: RscObject
		{
			idc=104;
			index=0;
			model="\core\empty\empty.p3d";
			x=0.23999999;
			y=0.82499999;
			w=0.050000001;
			h=0.050000001;
			z=3;
			colorBackground[]={1,1,0.5,0.5};
			colorBackgroundInHands[]={1,1,1,0.5};
			colorBorder[]={0.5,0.5,0.5,1};
			colorText[]={1,1,1,1};
			colorBackgroundInactive[]={1,1,0.5,0.25};
			colorBorderInactive[]={0.5,0.5,0.5,0.5};
			colorTextInactive[]={1,1,1,0.5};
			font="TahomaB";
			sizeEx=0.027000001;
		};
		class Shortcut2: Shortcut1
		{
			index=1;
			x=0.28999999;
		};
		class Shortcut3: Shortcut1
		{
			index=2;
			x=0.34;
		};
		class Shortcut4: Shortcut1
		{
			index=3;
			x=0.38999999;
		};
		class Shortcut5: Shortcut1
		{
			index=4;
			x=0.44;
		};
		class Shortcut6: Shortcut1
		{
			index=5;
			x=0.49000001;
		};
		class Shortcut7: Shortcut1
		{
			index=6;
			x=0.54000002;
		};
		class Shortcut8: Shortcut1
		{
			index=7;
			x=0.58999997;
		};
		class Shortcut9: Shortcut1
		{
			index=8;
			x=0.63999999;
		};
		class Shortcut10: Shortcut1
		{
			index=9;
			x=0.69;
		};
	};
	class Controls
	{
		class ButtonContinue: RscButton
		{
			idc=1;
			x=0.77499998;
			y=0.82499999;
			text="$STR_DISP_CLOSE";
			default=1;
		};
	};
	class Menu
	{
		type=14;
		idc=108;
		style=0;
		x=0;
		y=0;
		w=0;
		h=0;
		colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		colorBorder[]={1,1,1,1};
		colorSeparator[]={1,1,1,1};
		colorSelectBackground[]={1,1,1,0.30000001};
		colorChecked[]={0,0,1,1};
		colorEnabled[]={1,1,1,1};
		colorDisabled[]={1,1,1,0.5};
		sizeEx=0.025;
		font="TahomaB";
	};
};
class RscDisplayArtillery: RscStandardDisplay
{
	idd=-1;
	enableSimulation=1;
	movingEnable=0;
	class controls
	{
	};
};
class RscDisplayEmpty
{
	access=0;
	movingEnable=0;
	class controls
	{
	};
};
class RscDisplayMission: RscDisplayEmpty
{
	access=0;
	idd=46;
	class Objects
	{
		class Shortcut1: RscObject
		{
			idc=104;
			index=0;
			model="\core\empty\empty.p3d";
			x=0.23999999;
			y=0.82499999;
			w=0.050000001;
			h=0.050000001;
			z=3;
			colorBackground[]={1,1,0.5,0.5};
			colorBackgroundInHands[]={1,1,1,0.5};
			colorBorder[]={0.5,0.5,0.5,1};
			colorText[]={1,1,1,1};
			colorBackgroundInactive[]={1,1,0.5,0.25};
			colorBorderInactive[]={0.5,0.5,0.5,0.5};
			colorTextInactive[]={1,1,1,0.5};
			font="TahomaB";
			sizeEx=0.027000001;
		};
		class Shortcut2: Shortcut1
		{
			index=1;
			x=0.28999999;
		};
		class Shortcut3: Shortcut1
		{
			index=2;
			x=0.34;
		};
		class Shortcut4: Shortcut1
		{
			index=3;
			x=0.38999999;
		};
		class Shortcut5: Shortcut1
		{
			index=4;
			x=0.44;
		};
		class Shortcut6: Shortcut1
		{
			index=5;
			x=0.49000001;
		};
		class Shortcut7: Shortcut1
		{
			index=6;
			x=0.54000002;
		};
		class Shortcut8: Shortcut1
		{
			index=7;
			x=0.58999997;
		};
		class Shortcut9: Shortcut1
		{
			index=8;
			x=0.63999999;
		};
		class Shortcut10: Shortcut1
		{
			index=9;
			x=0.69;
		};
	};
};
class RscDisplayIntro: RscDisplayEmpty
{
	access=0;
	idd=47;
};
class RscDisplayOutro: RscDisplayEmpty
{
	access=0;
	idd=48;
};
class RscDisplayMissionEnd: RscStandardDisplay
{
	idd=58;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_MISSION_KILLED";
		};
		class Quotation: RscText
		{
			idc=102;
			style=16;
			lineSpacing=1;
			x=0.1;
			y=0.69999999;
			w=0.85000002;
			h=0.2;
		};
		class Author: RscText
		{
			idc=103;
			style=1;
			x=0.44999999;
			y=0.85000002;
			w=0.40000001;
		};
		class B_Load: RscButton
		{
			idc=105;
			x=0.34999999;
			y=0.2;
			text="$STR_DISP_ME_LOAD";
		};
		class B_Retry: B_Load
		{
			idc=104;
			y="0.2 + 0.1";
			text="$STR_DISP_ME_RETRY";
			default=1;
		};
		class B_Restart: B_Load
		{
			idc=106;
			y="0.2 + 0.2";
			text="$STR_XBOX_PLAY_AGAIN";
		};
		class B_Abort: B_Load
		{
			idc=2;
			y="0.2 + 0.3";
			text="$STR_DISP_ME_ABORT";
		};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	idd=49;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_INT_TITLE";
		};
		class B_Continue: RscButton
		{
			idc=2;
			x=0.34999999;
			y=0.2;
			h=0.079999998;
			text="$STR_DISP_INT_CONTINUE";
			default=1;
		};
		class B_Save: B_Continue
		{
			idc=103;
			y="0.2 + 0.08";
			text="$STR_DISP_INT_SAVE";
			default=0;
		};
		class B_Load: B_Continue
		{
			idc=102;
			y="0.2 + 0.16";
			text="$STR_DISP_INT_LOAD";
			default=0;
		};
		class B_Retry: B_Continue
		{
			idc=105;
			y="0.2 + 0.24";
			text="$STR_DISP_INT_RETRY";
			default=0;
		};
		class B_Options: B_Continue
		{
			idc=101;
			y="0.2 + 0.32";
			text="$STR_DISP_INT_OPTIONS";
			default=0;
		};
		class B_Abort: B_Continue
		{
			idc=104;
			y="0.2 + 0.56";
			text="$STR_DISP_INT_ABORT";
			default=0;
		};
		class B_Diary: RscButton
		{
			idc=118;
			x=0.34999999;
			y="MP_Interrupt_Y + 0.70";
			h=0.079999998;
			text="$STR_ACTION_DIARY";
			default=0;
		};
		class B_Revert: RscButton
		{
			idc=119;
			x=0.34999999;
			y="MP_Interrupt_Y + 0.78";
			h=0.079999998;
			text="$STR_DISP_REVERT";
			default=0;
		};
	};
};
class RscDisplayInterruptRevert: RscStandardDisplay
{
	idd=144;
	movingEnable=0;
	class Controls
	{
		class Background: RscText
		{
			x=0.60000002;
			y=0;
			w=0.40000001;
			h=0.40000001;
			style=128;
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class RevertTypes: RscListBox
		{
			idc=101;
			x=0.61000001;
			y=0.0099999998;
			w=0.38999999;
			h=0.28999999;
		};
		class ButtonOK: RscButton
		{
			idc=1;
			x=0.61000001;
			y=0.31;
			w=0.19;
			h=0.079999998;
			text="$STR_DISP_OK";
			default=1;
		};
		class ButtonCancel: RscButton
		{
			idc=2;
			x=0.81;
			y=0.31;
			w=0.19;
			h=0.079999998;
			text="$STR_DISP_CANCEL";
		};
		class MissionTitle: RscText
		{
			idc=120;
			x=0.85000002;
			y=0.40000001;
			text="";
		};
		class DifficultyTitle: RscText
		{
			idc=121;
			x=0.85000002;
			y=0.5;
			text="";
		};
	};
};
class RscDisplaySelectSave: RscStandardDisplay
{
	idd=154;
	movingEnable=0;
	class Controls
	{
		class Background: RscText
		{
			x=0.60000002;
			y=0;
			w=0.40000001;
			h=0.40000001;
			style=128;
			colorBackground[]={0.1,0.1,0.1,1};
		};
		class SaveTypes: RscListBox
		{
			idc=101;
			x=0.61000001;
			y=0.0099999998;
			w=0.38999999;
			h=0.28999999;
		};
		class ButtonOK: RscButton
		{
			idc=1;
			x=0.61000001;
			y=0.31;
			w=0.19;
			h=0.079999998;
			text="$STR_DISP_OK";
			default=1;
		};
		class ButtonCancel: RscButton
		{
			idc=2;
			x=0.81;
			y=0.31;
			w=0.19;
			h=0.079999998;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayMPInterrupt: RscStandardDisplay
{
	idd=49;
	class controls
	{
		class Title: RscTitle
		{
			idc=111;
		};
		class B_Continue: RscButton
		{
			idc=2;
			x=0.34999999;
			y=0.2;
			h=0.079999998;
			text="$STR_DISP_INT_CONTINUE";
			default=1;
		};
		class B_Players: B_Continue
		{
			idc=109;
			y="0.2 + 0.08";
			text="$STR_MPTABLE_PLAYERS";
			default=0;
		};
		class B_Options: B_Continue
		{
			idc=107;
			y="0.2 + 0.16";
			text="$STR_DISP_INT_OPTIONS";
			default=0;
		};
		class B_Retry: B_Continue
		{
			idc=105;
			y="0.2 + 0.40";
			text="$STR_DISP_INT_RETRY";
			default=0;
		};
		class B_Abort: B_Continue
		{
			idc=104;
			y="0.2 + 0.56";
			text="$STR_DISP_INT_ABORT";
			default=0;
		};
		class B_Diary: RscButton
		{
			idc=118;
			x=0.34999999;
			y="0.2 + 0.70";
			h=0.079999998;
			text="$STR_ACTION_DIARY";
			default=0;
		};
		class MissionTitle: RscText
		{
			idc=120;
			x=0.85000002;
			y=0.40000001;
			text="";
		};
		class DifficultyTitle: RscText
		{
			idc=121;
			x=0.85000002;
			y=0.60000002;
			text="";
		};
	};
};
class RscDisplayMultiplayerRestart: RscStandardDisplay
{
	idd="IDD_MP_RESTART";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_MP_RESTART";
		};
		class MissionTitle: RscText
		{
			x=0.25;
			y=0.050000001;
			w=0.5;
			h=0.050000001;
			idc="IDC_MP_RESTART_TITLE";
		};
		class B_Restart: RscActiveText
		{
			idc="IDC_MP_RESTART_RESTART";
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_MP_RESTART_RESTART";
		};
		class B_Continue: B_Restart
		{
			idc=2;
			x=0.80000001;
			text="$STR_DISP_MP_RESTART_DISCONNECT";
			default=1;
		};
	};
};
class RscDisplayMissionFail: RscStandardDisplay
{
	idd=58;
	statisticsLinks=0;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_DEBRIEFING";
		};
		class MissionTitle: RscText
		{
			x=0.25;
			y=0.050000001;
			w=0.5;
			h=0.050000001;
			idc=112;
		};
		class MissionResult: RscText
		{
			x=0.25;
			y=0.15000001;
			w=0.5;
			h=0.050000001;
			idc=111;
		};
		class DebriefingInfo: RscHTML
		{
			idc=115;
			x=0.25;
			y=0.25;
			w=0.5;
			h=0.2;
		};
		class DebriefingText: RscHTML
		{
			idc=113;
			x=0.25;
			y=0.5;
			w=0.5;
			h=0.2;
		};
		class DebriefingObjectives: RscHTML
		{
			idc=114;
			x=0.25;
			y=0.75;
			w=0.5;
			h=0.2;
		};
		class Right: RscHTML
		{
			idc=102;
			x=0.75;
			y=0.050000001;
			w=0.40000001;
			h=0.15000001;
		};
		class Left: RscHTML
		{
			idc=103;
			x=0.25;
			y=0.18000001;
			w=0.5;
			h=0.1;
		};
		class PlayersTitle: RscText
		{
			idc=107;
			x=0.69999999;
			y=0.69999999;
			w=0.25;
			text="$STR_DISP_SRVSETUP_PLAYERS";
			style="0x00 + 0xA0";
		};
		class Players: RscListBox
		{
			idc=109;
			x=0.69999999;
			y=0.75;
			w=0.25;
			h=0.125;
		};
		class B_Load: RscButton
		{
			idc=105;
			x=0.34999999;
			y=0.2;
			text="$STR_DISP_ME_LOAD";
		};
		class B_Retry: RscButton
		{
			idc=104;
			y="0.2 + 0.1";
			x=0.34999999;
			text="$STR_DISP_ME_RETRY";
			default=1;
		};
		class B_Restart: RscButton
		{
			idc=106;
			y="0.2 + 0.2";
			x=0.34999999;
			text="$STR_XBOX_PLAY_AGAIN";
		};
		class B_Abort: RscButton
		{
			idc=2;
			y="0.2 + 0.3";
			x=0.34999999;
			text="$STR_DISP_ME_ABORT";
		};
	};
};
class RscDisplayLogin: RscStandardDisplay
{
	idd=31;
};
class RscDisplayNewUser: RscStandardDisplay
{
	idd=42;
	class controls
	{
		class Title: RscTitle
		{
			idc=105;
		};
		class TextName: RscText
		{
			x=0.025;
			y=0.25;
			w=0.44999999;
			text="$STR_DISP_NEW_USER_NAME";
		};
		class ValueName: RscEdit
		{
			idc=101;
			x=0.025;
			y=0.30000001;
			w=0.44999999;
			h=0.059999999;
		};
		class ValueId: RscText
		{
			idc=110;
			x=0.025;
			y=0.2;
			w=0.44999999;
		};
		class TextFace: RscText
		{
			x=0.52499998;
			y=0.2;
			w=0.44999999;
			text="$STR_DISP_NEW_USER_FACE";
		};
		class ValueFace: RscListBox
		{
			idc=102;
			x=0.52499998;
			y=0.25;
			w=0.44999999;
			h=0.18000001;
			rows=3;
		};
		class TextGlasses: RscText
		{
			x=0.52499998;
			y=0.44999999;
			w=0.44999999;
			text="$STR_DISP_NEW_USER_GLASSES";
		};
		class ValueGlasses: RscListBox
		{
			idc=107;
			x=0.52499998;
			y=0.5;
			w=0.44999999;
			h=0.12;
			rows=2;
		};
		class TextSpeaker: RscText
		{
			x=0.52499998;
			y=0.64999998;
			w=0.44999999;
			text="$STR_DISP_NEW_USER_SPEAKER";
		};
		class ValueSpeaker: RscListBox
		{
			idc=103;
			x=0.52499998;
			y=0.69999999;
			w=0.44999999;
			h=0.12;
			rows=2;
		};
		class TextPitch: RscText
		{
			x=0.025;
			y=0.5;
			w=0.44999999;
			text="$STR_DISP_NEW_USER_PITCH";
		};
		class ValuePitch: RscSlider
		{
			idc=104;
			x=0.025;
			y=0.55000001;
			w=0.44999999;
			h=0.050000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.69999999;
			y=0.89999998;
			w=0.15000001;
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.85000002;
			default=1;
		};
	};
};
class RscDisplayModLauncher: RscStandardDisplay
{
	idd=157;
	class controls
	{
		class Title: RscTitle
		{
			text="Expansions";
		};
		class ValueMods: RscListBox
		{
			idc=101;
			x=0.1;
			y=0.2;
			w=0.44999999;
			h=0.5;
			rows=10;
			active="#(argb,8,8,3)color(0,1,0,1)";
			enabled="#(argb,8,8,3)color(1,1,1,1)";
			disabled="#(argb,8,8,3)color(1,0,0,1)";
		};
		class ModPicture: RscPicture
		{
			idc=102;
			x=0.60000002;
			y=0.2;
			w=0.15000001;
			h=0.2;
		};
		class B_Up: RscActiveText
		{
			idc=103;
			x=0.64999998;
			y=0.40000001;
			w=0.2;
			text="Up";
		};
		class B_Down: RscActiveText
		{
			idc=104;
			x=0.64999998;
			y=0.44999999;
			w=0.2;
			text="Down";
		};
		class B_DisableEnable: RscActiveText
		{
			idc=105;
			x=0.64999998;
			y=0.5;
			w=0.2;
			text="Disable";
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.44999999;
			y=0.89999998;
			w=0.12;
			text="$STR_DISP_CANCEL";
		};
		class B_ModAction: RscActiveText
		{
			idc=106;
			x=0.64999998;
			y=0.89999998;
			w=0.12;
			text="Mod Info";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.85000002;
			default=1;
		};
	};
};
class RscDisplayOptions
{
	idd=3;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_TITLE";
		};
		class Video: RscButton
		{
			idc=301;
			style=2;
			x=0.34999999;
			y=0.2;
			h=0.050000001;
			w=0.30000001;
			text="$STR_DISP_OPTIONS_VIDEO";
		};
		class Audio: Video
		{
			idc=302;
			y="0.2 + 0.1";
			text="$STR_DISP_OPTIONS_AUDIO";
		};
		class Configure: Video
		{
			idc=303;
			y="0.2 + 0.2";
			text="$STR_DISP_OPTIONS_CONFIGURE";
		};
		class GameOptions: Video
		{
			idc=307;
			y="0.2 + 0.3";
			text="$STR_DISP_OPTIONS_GAME_OPTIONS";
		};
		class B_Credits: RscActiveText
		{
			idc=306;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_MAIN_CREDITS";
		};
		class B_Perspective: RscButton
		{
			idc=353;
			x="0.24";
			y="0.36";
			w="0.25";
			h="0.05";
		};
		class B_InvertMouse: RscButton
		{
			idc=105;
			x="0.24";
			y="0.42";
			w="0.25";
			h="0.05";
		};
		class FieldOfViewSlider: RscSlider
		{
			idc=354;
			x="0.24";
			y="0.48";
			w="0.25";
			h="0.05";
			colorBackground[]={0,0,0,0.5};
		};
		class B_Close: B_Credits
		{
			idc=2;
			x=0.85000002;
			text="$STR_DISP_CLOSE";
			default=1;
		};
	};
};
class RscDisplayOptionsInGame
{
	idd=3;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_TITLE";
		};
		class Video: RscButton
		{
			idc=301;
			style=2;
			x=0.34999999;
			y=0.2;
			h=0.050000001;
			text="$STR_DISP_OPTIONS_VIDEO";
		};
		class Audio: Video
		{
			idc=302;
			y="0.2 + 0.1";
			text="$STR_DISP_OPTIONS_AUDIO";
		};
		class Configure: Video
		{
			idc=303;
			y="0.2 + 0.2";
			text="$STR_DISP_OPTIONS_CONFIGURE";
		};
		class GameOptions: Video
		{
			idc=307;
			y="0.2 + 0.3";
			text="$STR_DISP_OPTIONS_GAME_OPTIONS";
		};
		class B_Credits: RscActiveText
		{
			idc=306;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_MAIN_CREDITS";
		};
		class B_Close: B_Credits
		{
			idc=2;
			x=0.85000002;
			text="$STR_DISP_CLOSE";
			default=1;
		};
	};
};
class RscDisplayOptionsVideo
{
	idd=5;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_VIDEO";
		};
		class TextIGUISize: RscText
		{
			x=0.018999999;
			y=0.13500001;
			w=0.2;
			text="IGUI size";
		};
		class ValueIGUISize: RscListBox
		{
			idc=136;
			x=0.018999999;
			y=0.18000001;
			w=0.185;
			h=0.20999999;
		};
		class TextResolution: TextIGUISize
		{
			x=0.018999999;
			text="$STR_DISP_OPT_RESOLUTION";
		};
		class ValueResolution: ValueIGUISize
		{
			idc=113;
			x=0.018999999;
		};
		class TextAspectRatio: TextIGUISize
		{
			x=0.214;
			text="$STR_DISP_OPT_ASPECT_RATIO";
		};
		class ValueAspectRatio: ValueIGUISize
		{
			idc=134;
			x=0.214;
		};
		class TextRefresh: TextIGUISize
		{
			x=0.40900001;
			text="$STR_DISP_OPT_REFRESH";
		};
		class ValueRefresh: ValueIGUISize
		{
			idc=114;
			x=0.40900001;
			w=0.145;
		};
		class TextObjectsDetail: RscText
		{
			x=0.018999999;
			y=0.41499999;
			w=0.185;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_OBJECTS_DETAIL";
		};
		class ValueObjectsDetail: RscListBox
		{
			idc=124;
			x=0.018999999;
			y=0.46000001;
			w=0.185;
			h=0.13500001;
			sizeEx=0.027000001;
			rows=5;
		};
		class TextTextureDetail: TextObjectsDetail
		{
			x=0.214;
			y=0.41499999;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_TEXTURE_DETAIL";
		};
		class ValueTextureDetail: ValueObjectsDetail
		{
			idc=125;
			sizeEx=0.027000001;
			x=0.214;
			y=0.46000001;
		};
		class TextQualityPreference: TextObjectsDetail
		{
			x=0.40900001;
			y=0.41499999;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_QUALITY_PREFERENCE";
		};
		class ValueQualityPreference: ValueObjectsDetail
		{
			idc=126;
			x=0.40900001;
			y=0.46000001;
			sizeEx=0.027000001;
		};
		class TextShadingDetail: TextObjectsDetail
		{
			x=0.018999999;
			y=0.61500001;
			text="$STR_DISP_OPT_SHADING_DETAIL";
			sizeEx=0.027000001;
		};
		class ValueShadingDetail: ValueObjectsDetail
		{
			idc=127;
			x=0.018999999;
			y=0.66000003;
			sizeEx=0.027000001;
		};
		class TextTerrain: TextObjectsDetail
		{
			x=0.214;
			y=0.61500001;
			text="$STR_DISP_OPT_TERRAIN";
			sizeEx=0.027000001;
		};
		class ValueTerrain: ValueObjectsDetail
		{
			idc=123;
			x=0.214;
			y=0.66000003;
			sizeEx=0.027000001;
		};
		class TextShadowDetail: TextObjectsDetail
		{
			x=0.40900001;
			y=0.61500001;
			text="$STR_DISP_OPT_SHADOW_DETAIL";
			sizeEx=0.027000001;
		};
		class ValueShadowDetail: ValueObjectsDetail
		{
			idc=128;
			x=0.40900001;
			y=0.66000003;
			sizeEx=0.027000001;
		};
		class TextHDRDetail: TextObjectsDetail
		{
			x=0.60399997;
			y=0.41499999;
			text="$STR_DISP_OPT_HDR_DETAIL";
			sizeEx=0.027000001;
		};
		class ValueHDRDetail: ValueObjectsDetail
		{
			idc=131;
			x=0.60399997;
			y=0.46000001;
			sizeEx=0.027000001;
		};
		class TextAnisotropicDetail: TextObjectsDetail
		{
			x=0.60399997;
			y=0.61500001;
			text="$STR_DISP_OPT_ANISO_DETAIL";
			sizeEx=0.027000001;
		};
		class ValueAnisotropicDetail: ValueObjectsDetail
		{
			idc=130;
			x=0.60399997;
			y=0.66000003;
			sizeEx=0.027000001;
		};
		class TextVsync: TextObjectsDetail
		{
			x=0.60399997;
			y=0.815;
			text="Vsync";
			sizeEx=0.027000001;
		};
		class ValueVsync: ValueObjectsDetail
		{
			idc=140;
			x=0.60399997;
			y=0.86000001;
			sizeEx=0.027000001;
		};
		class TextPostprocessEffects: TextObjectsDetail
		{
			x=0.79900002;
			y=0.41499999;
			text="$STR_DISP_OPT_POSTPROCESS_EFFECTS";
			sizeEx=0.027000001;
		};
		class ValuePostprocessEffects: ValueObjectsDetail
		{
			idc=132;
			x=0.79900002;
			y=0.46000001;
			sizeEx=0.027000001;
		};
		class TextAntialiasing: TextObjectsDetail
		{
			x=0.79900002;
			y=0.61500001;
			text="$STR_DISP_OPT_FSAA_DETAIL";
			sizeEx=0.027000001;
		};
		class ValueAntialiasing: ValueObjectsDetail
		{
			idc=133;
			x=0.79900002;
			y=0.66000003;
			sizeEx=0.027000001;
		};
		class TextPIPDetail: TextObjectsDetail
		{
			x=0.050000001;
			y=0.15000001;
			text="$STR_DISP_OPT_PIP";
			sizeEx=0.027000001;
		};
		class ValuePIPDetail: RscListBox
		{
			idc=334;
			x=0.34999999;
			y=0.15000001;
			sizeEx=0.027000001;
			w=0.185;
			h=0.13500001;
			rows=2;
		};
		class ValueFXAADetail: RscListBox
		{
			idc=336;
			x=0.34999999;
			y=0.15000001;
			sizeEx=0.027000001;
			w=0.185;
			h=0.13500001;
			rows=2;
		};
		class TextSWDetail: TextObjectsDetail
		{
			x=0.55000001;
			y=0.15000001;
			text="$STR_DISP_OPT_CLOUDS";
			sizeEx=0.027000001;
		};
		class ValueSWDetail: RscListBox
		{
			idc=335;
			x=0.75;
			y=0.15000001;
			sizeEx=0.027000001;
			w=0.185;
			h=0.13500001;
			rows=2;
		};
		class TextWBuffer: RscTextSmall
		{
			x=0.018999999;
			y=0.815;
			w=0.30000001;
			text="$STR_DISP_OPT_WBUFFER";
		};
		class ValueWBuffer: RscActiveText
		{
			idc=121;
			x=0.17900001;
			y=0.815;
			w=0.15000001;
			h=0.029999999;
			sizeEx=0.027000001;
		};
		class TextBrightness: RscText
		{
			x=0.56;
			y=0.13500001;
			w=0.30000001;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_BRIGHT";
		};
		class ValueBrightness: RscText
		{
			idc=111;
			x=0.86000001;
			y=0.13500001;
			w=0.1;
			sizeEx=0.027000001;
		};
		class SliderBrightness: RscSlider
		{
			idc=112;
			x=0.56;
			y=0.19;
			w=0.41499999;
		};
		class TextGamma: RscText
		{
			x=0.56;
			y=0.22499999;
			w=0.30000001;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_GAMMA";
		};
		class ValueGamma: RscText
		{
			idc=109;
			x=0.86000001;
			y=0.22499999;
			w=0.1;
			sizeEx=0.027000001;
		};
		class SliderGamma: RscSlider
		{
			idc=110;
			x=0.56;
			y=0.28;
			w=0.41499999;
		};
		class TextVisibility: RscText
		{
			x=0.56;
			y=0.315;
			w=0.30000001;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_VISIBILITY";
		};
		class ValueVisibility: RscText
		{
			idc=103;
			x=0.86000001;
			y=0.315;
			w=0.1;
			sizeEx=0.027000001;
		};
		class SliderVisibility: RscSlider
		{
			idc=104;
			x=0.56;
			y=0.37;
			w=0.41499999;
		};
		class TextShadowVisibility: RscText
		{
			idc=313;
			x=0.050000001;
			y=0.050000001;
			w=0.30000001;
			sizeEx=0.027000001;
			text="$STR_DISP_OPT_SHADOW_DIST";
		};
		class ValueShadowVisibility: RscText
		{
			idc=311;
			x=0.40000001;
			y=0.050000001;
			w=0.1;
			sizeEx=0.027000001;
		};
		class SliderShadowVisibility: RscSlider
		{
			idc=312;
			x=0.55000001;
			y=0.050000001;
			w=0.41499999;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.60000002;
			y=0.89999998;
			w=0.13;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.85000002;
			default=1;
		};
		class B_Default: RscActiveText
		{
			idc=129;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_DEFAULT";
		};
	};
};
class RscDisplayOptionsAudio
{
	idd=6;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_AUDIO";
		};
		class TextEffects: RscText
		{
			x=0.34999999;
			y=0.2;
			w=0.30000001;
			text="$STR_DISP_OPT_EFFECTS";
		};
		class ValueEffects: RscText
		{
			idc=103;
			x=0.5;
			y=0.2;
		};
		class SliderEffects: RscSlider
		{
			idc=104;
			x=0.2;
			y=0.25;
			w=0.60000002;
		};
		class TextVoices: RscText
		{
			x=0.34999999;
			y=0.30000001;
			w=0.30000001;
			text="$STR_DISP_OPT_VOICES";
		};
		class ValueVoices: RscText
		{
			idc=105;
			x=0.5;
			y=0.30000001;
		};
		class SliderVoices: RscSlider
		{
			idc=106;
			x=0.2;
			y=0.34999999;
			w=0.60000002;
		};
		class ValueVON: RscText
		{
			idc=113;
			x=0.5;
			y=0.69999999;
		};
		class SliderVON: RscSlider
		{
			idc=114;
			x=0.2;
			y=0.75;
			w=0.60000002;
		};
		class ValueSamplesCount: RscText
		{
			idc=115;
			x=0.5;
			y=0.69999999;
		};
		class SliderSamplesCount: RscSlider
		{
			idc=116;
			x=0.2;
			y=0.85000002;
			w=0.60000002;
		};
		class TextMusic: RscText
		{
			x=0.34999999;
			y=0.40000001;
			w=0.30000001;
			text="$STR_DISP_OPT_MUSIC";
		};
		class ValueMusic: RscText
		{
			idc=101;
			x=0.5;
			y=0.40000001;
		};
		class SliderMusic: RscSlider
		{
			idc=102;
			x=0.2;
			y=0.44999999;
			w=0.60000002;
		};
		class TextMicSensitivity: RscText
		{
			x=0.159803;
			y="(0.420549 + 3*0.069854)";
			text="Mic. sens.:";
		};
		class SliderMicSensitivity: RscSlider
		{
			idc=117;
			x=0.2;
			y="(0.420549 + 3*0.069854)";
			w=0.40000001;
		};
		class AutoAdjustMicSensitivity: RscActiveText
		{
			idc=118;
			x=0.30000001;
			y=0.69999999;
			w=0.60000002;
			text="Auto adjust";
		};
		class TextHWAcc: RscText
		{
			x=0.22;
			y=0.60000002;
			w=0.40000001;
			text="$STR_DISP_OPT_HWACC";
		};
		class ValueHWAcc: RscListBox
		{
			idc=108;
			x=0.62;
			y=0.60000002;
			w=0.15000001;
			h=0.079999998;
		};
		class TextEAX: TextHWAcc
		{
			y="0.6 + (1 * 0.09)";
			text="$STR_DISP_OPT_EAX";
		};
		class ValueEAX: ValueHWAcc
		{
			idc=109;
			y="0.6 + (1 * 0.09)";
		};
		class TextPlayerVoice: TextHWAcc
		{
			y="0.6 + (2 * 0.09)";
			text="$STR_DISP_OPT_PLAYER_VOICE";
		};
		class ValuePlayerVoice: ValueHWAcc
		{
			idc=110;
			y="0.6 + (2 * 0.09)";
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.60000002;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.85000002;
			default=1;
		};
		class B_Default: RscActiveText
		{
			idc=111;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_DEFAULT";
		};
	};
};
class RscDisplayMicSensitivityOptions
{
	idd=262;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="Microphone sensitivity adjustment";
		};
		class B_Start: RscActiveText
		{
			idc=1001;
			x=0.1;
			y=0.15000001;
			w=0.15000001;
			text="Start";
		};
		class TextProgress: RscText
		{
			x=0.25;
			y=0.15000001;
			w=0.30000001;
			text="Done:";
		};
		class TextProgressVal: RscText
		{
			x=0.30000001;
			y=0.15000001;
			w=0.30000001;
			text=" 0%";
			idc=1002;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.1;
			y=0.2;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.2;
			y=0.2;
			default=1;
		};
	};
};
class RscDisplayGameOptions
{
	idd=151;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_GAME_OPTIONS";
		};
		class TextSubtitles: RscText
		{
			x=0.025;
			y=0.2;
			w="0.95 * 0.6";
			text="$STR_OPT_SUBTITLES";
		};
		class RadioSubtitles: TextSubtitles
		{
			y=0.30000001;
			text="$STR_OPT_RADIO_SUBTITLES";
		};
		class TextGore: TextSubtitles
		{
			idc=122;
			y=0.40000001;
			text="$STR_DISP_OPT_BLOOD";
		};
		class TextLanguage: TextSubtitles
		{
			y=0.5;
			text="$STR_DISP_OPT_LANGUAGE";
		};
		class TextFloatingZone: RscText
		{
			x=0.60000002;
			y=0.60000002;
			w=0.15000001;
			text="$STR_DISP_CONF_FLOATING_ZONE";
		};
		class Subtitles: RscListBox
		{
			idc=102;
			x=0.60000002;
			y=0.2;
			w=0.15000001;
			h=0.079999998;
		};
		class Radio: Subtitles
		{
			idc=103;
			x=0.60000002;
			y=0.30000001;
			w=0.15000001;
			h=0.079999998;
		};
		class ValueBlood: Subtitles
		{
			idc=119;
			x=0.60000002;
			y=0.40000001;
			h=0.12;
		};
		class ValueLanguage: Subtitles
		{
			idc=135;
			x=0.60000002;
			y=0.5;
			h=0.12;
		};
		class ValueFloatingZone: RscSlider
		{
			idc=109;
			x=0.60000002;
			y=0.60000002;
			w=0.34999999;
			h=0.029999999;
		};
		class TextHeadBob: RscText
		{
			x=0.60000002;
			y=0.69999999;
			w=0.15000001;
			text="$STR_DISP_OPT_HEADBOB";
		};
		class ValueHeadBob: RscSlider
		{
			idc=138;
			x=0.60000002;
			y=0.69999999;
			w=0.34999999;
			h=0.029999999;
		};
		class B_Difficulty: RscActiveText
		{
			idc=304;
			x=0.025;
			y=0.60000002;
			w=0.15000001;
			text="$STR_DISP_OPTIONS_DIFFICULTY";
		};
		class B_OK: B_Difficulty
		{
			idc=1;
			x=0.85000002;
			y=0.89999998;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_Difficulty
		{
			idc=2;
			x=0.60000002;
			y=0.89999998;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayDifficulty
{
	idd=7;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_DIFFICULTY";
		};
		class TextName: RscText
		{
			x=0.025;
			y=0.2;
			w="0.95 * 0.6";
			text="$STR_DISP_DIFF_NAME";
		};
		class TextCadet: RscText
		{
			x="0.025 + 0.95 * 0.6";
			y=0.2;
			w="0.95 * 0.2";
			text="$STR_DISP_DIFF_CADET";
		};
		class TextVeteran: RscText
		{
			x="0.025 + 0.95 * 0.8";
			y=0.2;
			w="0.95 * 0.2";
			text="$STR_DISP_DIFF_VETERAN";
		};
		class ValueDifficulties: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.25;
			w=0.94999999;
			h=0.12;
			rowHeight=0.029999999;
			rows="0.12 / 0.03";
		};
		class TextEnemyLevel: RscText
		{
			x=0.025;
			y=0.39199999;
			w="0.95 * 0.6";
			text="$STR_DISP_DIFF_ENEMY_LEVEL";
		};
		class TextFriendlyLevel: RscText
		{
			x=0.025;
			y=0.51700002;
			w="0.95 * 0.6";
			text="$STR_DISP_DIFF_FRIENDLY_LEVEL";
		};
		class TextEnemySkill: RscText
		{
			idc=113;
			x=0.025;
			y=0.64200002;
			w="0.95 * 0.6";
			text="$STR_DISP_DIFF_ENEMY_SKILL";
		};
		class TextFriendlySkill: RscText
		{
			idc=114;
			x=0.025;
			y=0.71499997;
			w="0.95 * 0.6";
			text="$STR_DISP_DIFF_FRIENDLY_SKILL";
		};
		class ValueCadetEnemyLevel: RscListBox
		{
			idc=105;
			x="0.025 + 0.95 * 0.6";
			y=0.39199999;
			w="0.95 * 0.18";
			h=0.1;
			rows=2;
		};
		class ValueCadetFriendlyLevel: RscListBox
		{
			idc=106;
			x="0.025 + 0.95 * 0.6";
			y=0.51700002;
			w="0.95 * 0.18";
			h=0.1;
			rows=2;
		};
		class ValueVeteranEnemyLevel: RscListBox
		{
			idc=107;
			x="0.025 + 0.95 * 0.8";
			y=0.39199999;
			w="0.95 * 0.18";
			h=0.1;
			rows=2;
		};
		class ValueVeteranFriendlyLevel: RscListBox
		{
			idc=108;
			x="0.025 + 0.95 * 0.8";
			y=0.51700002;
			w="0.95 * 0.18";
			h=0.1;
			rows=2;
		};
		class EchoCadetEnemySkill: RscText
		{
			idc=115;
			x="0.025 + 0.95 * 0.6";
			y=0.67000002;
			w="0.95 * 0.18";
			style=2;
		};
		class EchoCadetFriendlySkill: RscText
		{
			idc=116;
			x="0.025 + 0.95 * 0.6";
			y=0.74299997;
			w="0.95 * 0.18";
			style=2;
		};
		class EchoVeteranEnemySkill: RscText
		{
			idc=117;
			x="0.025 + 0.95 * 0.8";
			y=0.67000002;
			w="0.95 * 0.18";
			style=2;
		};
		class EchoVeteranFriendlySkill: RscText
		{
			idc=118;
			x="0.025 + 0.95 * 0.8";
			y=0.74299997;
			w="0.95 * 0.18";
			style=2;
		};
		class ValueCadetEnemySkill: RscSlider
		{
			idc=109;
			x="0.025 + 0.95 * 0.6";
			y=0.64200002;
			w="0.95 * 0.18";
		};
		class ValueCadetFriendlySkill: RscSlider
		{
			idc=110;
			x="0.025 + 0.95 * 0.6";
			y=0.71499997;
			w="0.95 * 0.18";
		};
		class ValueVeteranEnemySkill: RscSlider
		{
			idc=111;
			x="0.025 + 0.95 * 0.8";
			y=0.64200002;
			w="0.95 * 0.18";
		};
		class ValueVeteranFriendlySkill: RscSlider
		{
			idc=112;
			x="0.025 + 0.95 * 0.8";
			y=0.71499997;
			w="0.95 * 0.18";
		};
		class B_Default: RscActiveText
		{
			idc=104;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_DEFAULT";
		};
		class B_OK: B_Default
		{
			idc=1;
			x=0.85000002;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_Default
		{
			idc=2;
			x=0.60000002;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscListBoxKeys: RscListBox
{
	collisionColor[]={1,0,0,1};
	disabledKeyColor[]={0.30000001,0.30000001,0.30000001,1};
	mainCollumW=0.40000001;
	secndCollumW=0.60000002;
};
class RscDisplayConfigure
{
	idd=4;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_OPTIONS_CONFIGURE";
		};
		class TextName: RscText
		{
			x=0.025;
			y=0.2;
			w="0.95 * 0.95 * 0.4";
			text="$STR_DISP_CONF_NAME";
		};
		class TextKeys: RscText
		{
			x="0.025 + 0.95 * 0.95 * 0.4";
			y=0.2;
			w="0.95 * 0.95 * 0.6";
			text="$STR_DISP_CONF_KEYS";
		};
		class ControlsPage: RscCombo
		{
			idc=108;
			x=0.30000001;
			y=0.25;
			w=0.28999999;
			h=0.039999999;
			sizeEx=0.027000001;
		};
		class ValueKeys: RscListBoxKeys
		{
			idc=102;
			x=0.025;
			y=0.25;
			w=0.94999999;
			h=0.40000001;
			rowHeight=0.029999999;
			rows="0.4 / 0.03";
		};
		class TextReserved: RscText
		{
			x=0.025;
			y=0.667;
			w=0.94999999;
			text="$STR_DISP_CONF_RES";
		};
		class TextMouseSens: RscText
		{
			x=0.0099999998;
			y=0.69999999;
			w=0.60000002;
			h=0.15000001;
			text="$STR_DISP_CONF_SENS";
		};
		class TextXAxis: RscText
		{
			x=0.050000001;
			y=0.78500003;
			w=0.15000001;
			text="$STR_DISP_CONF_XAXIS";
		};
		class TextMouseSmoothing: RscText
		{
			x=0.2;
			y=0.88999999;
			w=0.15000001;
			text="MouseSmoothing";
		};
		class ValueXAxis: RscSlider
		{
			idc=103;
			x=0.2;
			y=0.80000001;
			w=0.34999999;
			h=0.029999999;
		};
		class TextYAxis: RscText
		{
			x=0.050000001;
			y=0.82999998;
			w=0.15000001;
			text="$STR_DISP_CONF_YAXIS";
		};
		class ValueYAxis: RscSlider
		{
			idc=104;
			x=0.2;
			y=0.85000002;
			w=0.34999999;
			h=0.029999999;
		};
		class ValueMouseSmoothing: RscSlider
		{
			idc=110;
			x=0.2;
			y=0.92000002;
			w=0.34999999;
			h=0.029999999;
		};
		class ValueYReversed: RscListBox
		{
			idc=105;
			x=0.80000001;
			y=0.55000001;
			w=0.34999999;
			h="0.2f";
		};
		class TextButtons: RscText
		{
			x=0.60000002;
			y=0.80000001;
			w=0.30000001;
			text="$STR_DISP_CONF_MOUSE_BUTTON";
		};
		class ValueButtons: RscActiveText
		{
			idc=107;
			x=0.89999998;
			y=0.80000001;
			w=0.075000003;
			style=2;
		};
		class ValueJoystick: RscActiveText
		{
			idc=106;
			x=0.60000002;
			y=0.85000002;
			w=0.34999999;
			text="Controllers";
			style=2;
		};
		class B_Default: RscActiveText
		{
			idc=101;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_DEFAULT";
		};
		class B_OK: B_Default
		{
			idc=1;
			x=0.85000002;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Cancel: B_Default
		{
			idc=2;
			x=0.60000002;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayControlsScheme: RscStandardDisplay
{
	IDD=165;
	class controlsBackground
	{
		class Background: RscText
		{
			x="(35/100)";
			y="(15/100)";
			w="(30/100)";
			h="(40/100)";
			text="";
			colorBackground[]={0,0,0,0.80000001};
		};
	};
	class controls
	{
		class Title: RscTitle
		{
			idc=1000;
			style=2;
			x="(20/100)";
			y="(15/100)";
			w="(60/100)";
			h="(15/100)";
			text="SELECT A DEFAULT SCHEME";
		};
		class ControlsList: RscListBox
		{
			idc=101;
			x="(37.5/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
		};
		class B_Cancel: RscActiveText
		{
			x="(37.5/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			text="Cancel";
		};
		class B_Close: RscActiveText
		{
			x="(37.5/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			text="Close";
		};
	};
};
class RscDisplayConfigureAssignments
{
	idd=160;
	movingEnable=0;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			x="(20/100)";
			y="(15/100)";
			w="(60/100)";
			h="(15/100)";
			text="ASSIGNMENTS";
		};
		class ControlsPage: RscCombo
		{
			idc=108;
			x="(24/100)";
			y="(30/100)";
			w="(52/100)";
			h="(05/100)";
		};
		class ValueKeys: RscListBoxKeys
		{
			idc=102;
			x="(24/100)";
			y="(36/100)";
			w="(52/100)";
			h="(38/100)";
			colorSelectBackground[]={0,0,0,1};
			colorSelectBackground2[]={0,0,0,1};
			mainCollumW=0.5;
			secndCollumW=0.5;
		};
		class B_Default: RscActiveText
		{
			idc=101;
			x=0.050000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_DEFAULT";
		};
		class B_OK: B_Default
		{
			idc=1;
			x="(51/100)";
			y="(75/100)";
			w="(25/100)";
			h="(05/100)";
			text="Confirm";
		};
		class B_Cancel: B_Default
		{
			idc=2;
			x="(24/100)";
			y="(75/100)";
			w="(25/100)";
			h="(05/100)";
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayConfigureAction
{
	idd=131;
	access=0;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=0;
	class ControlsBackground
	{
		class Background: RscText
		{
			x=0.2;
			y=0.2;
			w=0.60000002;
			h=0.69999999;
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
		};
	};
	class Controls
	{
		class Title: RscText
		{
			idc=101;
			style=2;
			x=0.2;
			y=0.2;
			w=0.60000002;
			text="$STR_DISP_CONFACT_TITLE";
		};
		class TextHelp: RscText
		{
			x=0.2;
			y=0.64999998;
			w=0.94999999;
			text="$STR_DISP_CONF_HELP";
		};
		class TextReserved: RscText
		{
			x=0.2;
			y=0.86000001;
			w=0.94999999;
			text="$STR_DISP_CONF_RES";
		};
		class ValueCurrentKeys: RscListBoxKeys
		{
			idc=102;
			x=0.2;
			y=0.25;
			w=0.25;
			h=0.40000001;
			rowHeight=0.029999999;
			rows="0.4 / 0.03";
			canDrag=1;
		};
		class ValueSpecialKeys: RscListBox
		{
			idc=103;
			x=0.55000001;
			y=0.25;
			w=0.25;
			h=0.40000001;
			rowHeight=0.029999999;
			rows="0.4 / 0.03";
			canDrag=1;
			colorSelect[]={0,0,0,1};
			colorSelect2[]={0,0,0,1};
			colorSelectBackground[]={0.30000001,0.30000001,0.30000001,1};
			colorSelectBackground2[]={0.30000001,0.30000001,0.30000001,1};
		};
		class RscConfActionButton: RscButton
		{
			w=0.1;
			h=0.050000001;
			font="TahomaB";
			sizeEx=0.027000001;
		};
		class B_Delete: RscConfActionButton
		{
			idc=104;
			x=0.2;
			y=0.69999999;
			text="$STR_DISP_DELETE";
		};
		class B_Default: RscConfActionButton
		{
			idc=105;
			x=0.32499999;
			y=0.69999999;
			text="$STR_DISP_DEFAULT";
		};
		class B_Clear: RscConfActionButton
		{
			idc=106;
			x=0.44999999;
			y=0.69999999;
			text="$STR_DISP_CONFACT_UNDO";
		};
		class B_Cancel: RscConfActionButton
		{
			idc=107;
			x=0.57499999;
			y=0.69999999;
			text="$STR_DISP_CANCEL,";
		};
		class B_Prev: RscConfActionButton
		{
			idc=108;
			x=0.2;
			y=0.76999998;
			text="$STR_USRACT_MENU_DOWN";
		};
		class B_Next: RscConfActionButton
		{
			idc=109;
			x=0.32499999;
			y=0.76999998;
			text="$STR_USRACT_MENU_UP";
		};
		class B_OK: RscConfActionButton
		{
			idc=1;
			x=0.69999999;
			y=0.69999999;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayConfigureControllers
{
	idd=148;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			text="Configure controllers";
		};
		class RscConfJoysticksButton: RscButton
		{
			w=0.2;
			h=0.050000001;
			font="TahomaB";
			sizeEx=0.027000001;
		};
		class RscControllersListBox: RscListBox
		{
			disabledCtrlColor[]={0.30000001,0.30000001,0.30000001,1};
		};
		class TextControllerList: RscText
		{
			x=0.30000001;
			y=0.2;
			w=0.34999999;
			text="Customizable controllers";
		};
		class ControllerList: RscControllersListBox
		{
			idc=104;
			x=0.30000001;
			y=0.25;
			w=0.34999999;
			h=0.30000001;
			rowHeight=0.050000001;
			rows="0.7 / 0.05";
		};
		class TextXInputList: RscText
		{
			x=0.30000001;
			y=0.55000001;
			w=0.34999999;
			text="Controllers with scheme";
		};
		class XInputList: RscControllersListBox
		{
			idc=103;
			x=0.30000001;
			y=0.60000002;
			w=0.34999999;
			h=0.2;
			rowHeight=0.050000001;
			rows="0.7 / 0.05";
		};
		class EnableDisable: RscConfJoysticksButton
		{
			idc=102;
			x=0.69999999;
			y=0.40000001;
			text="Enable";
		};
		class Customize: RscConfJoysticksButton
		{
			idc=101;
			x=0.69999999;
			y=0.5;
			text="Customize";
		};
		class B_OK: RscConfJoysticksButton
		{
			idc=1;
			x=0.69999999;
			y=0.60000002;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayCustomizeController
{
	idd=150;
	class Controls
	{
		class T_Background: RscText
		{
			colorBackground[]={0.30000001,0.30000001,0.30000001,1};
			x=0.02;
			y=0.079999998;
			w=0.70999998;
			h=0.41;
		};
		class T_Title: RscTitle
		{
			idc=104;
			style="0x20 + 0x02";
			x=0.02;
			y=0.090000004;
			w=0.70999998;
		};
		class G_ControlsGroup: RscControlsGroup
		{
			idc=101;
			x=0.02;
			y=0.15000001;
			w=0.81;
			h=0.23999999;
			class Controls
			{
			};
		};
		class B_OK: RscButton
		{
			idc=1;
			x=0.37;
			y=0.41999999;
			w=0.13;
			h=0.050000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Unmap: B_OK
		{
			idc=102;
			x=0.090000004;
			text="$STR_OPT_CONTROLLERS_UNMAP";
			default=0;
		};
		class B_Default: B_OK
		{
			idc=103;
			x=0.23;
			text="$STR_DISP_DEFAULT_CURVE";
			default=0;
		};
		class B_Default_Bind: B_OK
		{
			idc=105;
			x=0.23;
			y=0.5;
			text="$STR_DISP_DEFAULT_MAP";
			default=0;
		};
		class B_Cancel: B_OK
		{
			idc=2;
			x=0.50999999;
			text="$STR_DISP_CANCEL";
			default=0;
		};
		class B_Advanced: B_OK
		{
			idc=106;
			x=0.61000001;
			text="$STR_DISP_SHOW";
			default=0;
		};
	};
	class Title: RscText
	{
		x=0.059999999;
		y=0;
		w=0.12;
		h=0.025;
		sizeEx=0.025;
		text="";
	};
	axisActiveIcon="#(argb,8,8,3)color(1,0,0,1)";
	class ActiveAxis: RscPicture
	{
		idc=320;
		x=0.02;
		y=0;
		w=0.025;
		h=0.025;
		text="#(argb,8,8,3)color(1,0,0,1)";
	};
	class Slider: RscXSliderH
	{
		x=0.18000001;
		y=0;
		w=0.40000001;
		h=0.025;
		vspacing=0.015;
	};
	class DeadZoneSlider: RscXSliderH
	{
		type=43;
		style="0x400 + 0x10";
		x=0.60000002;
		y=0;
		w=0.13;
		h=0.045000002;
		vspacing=0.050000001;
	};
	class Steepness: RscListBox
	{
		x=0.75;
		y=0;
		w=0.12;
		h=0.045000002;
		vspacing=0.050000001;
		values[]={"1.0","1.2","1.5","1.9","2.4","3.0"};
	};
	class AxisValue: RscText
	{
		x=0.88999999;
		y=0;
		w=0.1;
		h=0.045000002;
		vspacing=0.050000001;
	};
};
class RscDisplayJoystickSchemes
{
	idd=159;
	movingEnable=1;
	enableDisplay=1;
	class controls
	{
		class T_Title: RscTitle
		{
			idc=101;
			style="0x20 + 0x02";
			x=0.02;
			y=0.090000004;
			w=0.70999998;
			text="Map controller: %s";
		};
		class RscJoysticksSchemeButton: RscButton
		{
			w=0.2;
			h=0.050000001;
			font="TahomaB";
			sizeEx=0.027000001;
		};
		class TextJoySchemesList: RscText
		{
			x=0.30000001;
			y=0.2;
			w=0.34999999;
			text="Joystick schemes";
		};
		class SchemesList: RscListBox
		{
			idc=102;
			x=0.30000001;
			y=0.25;
			w=0.34999999;
			h=0.30000001;
			rowHeight=0.050000001;
			rows="0.7 / 0.05";
		};
		class B_MapScheme: RscJoysticksSchemeButton
		{
			idc=103;
			x=0.69999999;
			y=0.40000001;
			text="Map";
		};
		class B_Cancel: RscJoysticksSchemeButton
		{
			idc=2;
			x=0.69999999;
			y=0.5;
			text="$STR_DISP_CANCEL";
			default=1;
		};
	};
};
class RscDisplayCredits: RscStandardDisplay
{
	idd=34;
	class controls
	{
		class Text1: RscText
		{
			idc=50001;
			x=0;
			y=0.40000001;
			w=1;
			style=2;
			text="$STR_CREDIT_FP2ENGINE";
		};
		class Text2: Text1
		{
			idc=50002;
			y=0.44999999;
			sizeEx=0.027000001;
			text="$STR_CREDIT_COPYRIGHT";
		};
		class Text3: Text1
		{
			idc=50003;
			y=0.47999999;
			sizeEx=0.027000001;
			text="$STR_CREDIT_RIGHTS";
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.40000001;
			y=0.89999998;
			w=0.2;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayOptionsVideoTextures
{
	idd=161;
	movingEnable=0;
	enableDisplay=1;
	class controls
	{
		class Title: RscTitle
		{
			style=2;
			x="(20/100)";
			y="(15/100)";
			w="(60/100)";
			h="(15/100)";
			text="TEXTURES";
		};
		class VideoMemoryText: RscText
		{
			x="(24/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			text="Video Memory";
		};
		class VideoMemoryValue: RscCombo
		{
			idc=139;
			x="(51/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Size of the maximum allocated video memory";
		};
		class TextTextureDetail: RscText
		{
			x="(24/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			text="Texture Detail";
		};
		class ValueTextureDetail: RscCombo
		{
			idc=125;
			x="(51/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Texture quality detail level";
		};
		class TextAnisotropicDetail: RscText
		{
			x="(24/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			text="Texture Filtering";
		};
		class ValueAnisotropicDetail: RscCombo
		{
			idc=130;
			x="(51/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Anisotropic filtering quality (quality of textured surfaces at shallow angles and in the distance)";
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x="(37.5/100)";
			y="(75/100)";
			w="(25/100)";
			h="(05/100)";
			text="Close";
		};
	};
};
class RscDisplayOptionsVideoRendering
{
	idd=164;
	movingEnable=0;
	enableDisplay=1;
	class Controls
	{
		class Title: RscTitle
		{
			idc=1000;
			style=2;
			x="(20/100)";
			y="(15/100)";
			w="(60/100)";
			h="(15/100)";
			text="RENDERING";
		};
		class AntialiasingText: RscText
		{
			x="(24/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			text="Antialiasing";
		};
		class AntialiasingValue: RscCombo
		{
			idc=133;
			x="(51/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Antialiasing quality (sharpness of object edges)";
		};
		class AlphaToCoverageText: RscText
		{
			x="(24/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			text="Alpha to Coverage";
		};
		class AlphaToCoverageValue: RscCombo
		{
			idc=1300;
			x="(51/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="TODO";
		};
		class EdgeSmoothingText: RscText
		{
			x="(24/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			text="Edge Smoothing";
		};
		class EdgeSmoothingValue: RscCombo
		{
			idc=336;
			x="(51/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Per-Primitive Anti-Aliasing";
		};
		class HDRQualityText: RscText
		{
			x="(24/100)";
			y="(48/100)";
			w="(25/100)";
			h="(05/100)";
			text="HDR Quality";
		};
		class HDRQualityValue: RscCombo
		{
			idc=131;
			x="(51/100)";
			y="(48/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="High Dynamic Range lighting quality";
		};
		class AmbientOcclussionText: RscText
		{
			x="(24/100)";
			y="(54/100)";
			w="(25/100)";
			h="(05/100)";
			text="Ambient Occlussion";
		};
		class AmbientOcclussionValue: RscCombo
		{
			idc=-1;
			x="(51/100)";
			y="(54/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="TODO";
		};
		class PostprocessQualityText: RscText
		{
			x="(24/100)";
			y="(60/100)";
			w="(25/100)";
			h="(05/100)";
			text="Postprocess Quality";
		};
		class PostprocessQualityValue: RscCombo
		{
			idc=132;
			x="(51/100)";
			y="(60/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Post-process quality level (Depth Of Field blur)";
		};
		class BloomText: RscText
		{
			x="(24/100)";
			y="(66/100)";
			w="(25/100)";
			h="(05/100)";
			text="Bloom";
		};
		class BloomValue: RscXSliderH
		{
			idc=-1;
			x="(51/100)";
			y="(66/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="TODO";
		};
		class RotationBlurText: RscText
		{
			x="(24/100)";
			y="(72/100)";
			w="(25/100)";
			h="(05/100)";
			text="Rotation Blur";
		};
		class RotationBlurValue: RscXSliderH
		{
			idc=-1;
			x="(51/100)";
			y="(72/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="TODO";
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x="(37.5/100)";
			y="(81/100)";
			w="(25/100)";
			h="(05/100)";
			text="Close";
		};
	};
};
class RscDisplayOptionsVideoUserInterface
{
	idd=162;
	movingEnable=0;
	enableDisplay=1;
	class Controls
	{
		class Title: RscTitle
		{
			style=2;
			x="(20/100)";
			y="(15/100)";
			w="(60/100)";
			h="(15/100)";
			text="USER INTERFACE";
		};
		class ResolutionText: RscText
		{
			x="(24/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			text="Resolution";
		};
		class ResolutionValue: RscCombo
		{
			idc=113;
			x="(51/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Display resolution of all interface elements";
		};
		class SizeText: RscText
		{
			x="(24/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			text="Size";
		};
		class SizeValue: RscCombo
		{
			idc=136;
			x="(51/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Interface size level";
		};
		class AspectRatioText: RscText
		{
			x="(24/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			text="Aspect Ratio";
		};
		class AspectRatioValue: RscCombo
		{
			idc=134;
			x="(51/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Monitor aspect ratio (see the image benchmark below)";
		};
		class CalibrationText: RscText
		{
			x="(24/100)";
			y="(53/100)";
			w="(25/100)";
			h="(05/100)";
			text="Images should overlap";
		};
		class CalibrationBackground: RscPicture
		{
			x="(56/100)";
			y="(53/100)";
			w="(15/100)";
			h="(15/100)";
			text="\DZ\ui\data\GUI\Rsc\RscDisplayOptionsVideo\aspect_circle_gr.paa";
			colorText[]={1,1,1,1};
		};
		class CalibrationPicture: RscPicture
		{
			x="(56/100)";
			y="(53/100)";
			w="(15/100)";
			h="(15/100)";
			text="\DZ\ui\data\GUI\Rsc\RscDisplayOptionsVideo\aspect_circle_gr.paa";
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x="(37.5/100)";
			y="(75/100)";
			w="(25/100)";
			h="(05/100)";
			text="Close";
		};
	};
};
class RscDisplayOptionsVideoQuality
{
	idd=163;
	movingEnable=0;
	enableDisplay=1;
	class Controls
	{
		class Title: RscTitle
		{
			style=2;
			x="(20/100)";
			y="(15/100)";
			w="(60/100)";
			h="(15/100)";
			text="QUALITY";
		};
		class ObjectsText: RscText
		{
			x="(24/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			text="Objects";
		};
		class ObjectsValue: RscCombo
		{
			idc=124;
			x="(51/100)";
			y="(30/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Objects detail level (geometry quality and amount of objects in the scene)";
		};
		class TerrainText: RscText
		{
			x="(24/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			text="Terrain";
		};
		class TerrainValue: RscCombo
		{
			idc=123;
			x="(51/100)";
			y="(36/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Terrain detail level (smoothness of the terrain surface and edges)";
		};
		class CloudsText: RscText
		{
			x="(24/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			text="Clouds";
		};
		class CloudsValue: RscCombo
		{
			idc=335;
			x="(51/100)";
			y="(42/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Cloud detail level";
		};
		class ShadowsText: RscText
		{
			x="(24/100)";
			y="(48/100)";
			w="(25/100)";
			h="(05/100)";
			text="Shadows";
		};
		class ShadowsValue: RscCombo
		{
			idc=128;
			x="(51/100)";
			y="(48/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Shadow detail level";
		};
		class ParticlesText: RscText
		{
			x="(24/100)";
			y="(54/100)";
			w="(25/100)";
			h="(05/100)";
			text="Particles";
		};
		class ParticlesValue: RscCombo
		{
			idc=143;
			x="(51/100)";
			y="(54/100)";
			w="(25/100)";
			h="(05/100)";
			tooltip="Quality of particle effects.";
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x="(37.5/100)";
			y="(75/100)";
			w="(25/100)";
			h="(05/100)";
			text="Close";
		};
	};
};
access=0;
class RscDisplaySelectIsland: RscStandardDisplay
{
	idd=51;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_SELECT_ISLAND";
		};
		class Islands: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.2;
			w=0.94999999;
			h=0.60000002;
			rows=8;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.58999997;
			y=0.89999998;
			w=0.25;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=104;
			x=0.83999997;
			w=0.15000001;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayCustomArcade: RscStandardDisplay
{
	idd=25;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_MAIN_DESIGN";
		};
		class Game: RscTree
		{
			idc=101;
			x=0.23999999;
			y=0.22;
			w=0.51999998;
			h=0.56;
			style=2;
		};
		class B_Edit: RscButton
		{
			idc=103;
			x=0.22;
			y=0.89999998;
			w=0.16;
			h=0.050000001;
			text="$STR_DISP_ERROR";
		};
		class B_Delete: B_Edit
		{
			idc=104;
			x=0.36000001;
			text="$STR_DISP_DELETE";
		};
		class B_Play: B_Edit
		{
			idc=102;
			x=0.51999998;
			text="$STR_DISP_CUST_PLAY";
			default=1;
		};
		class B_Cancel: B_Edit
		{
			idc=2;
			x=0.66000003;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayXWizardTemplate: RscStandardDisplay
{
	idd=90;
	west="#(argb,8,8,3)color(1,1,1,1)";
	east="#(argb,8,8,3)color(1,1,1,1)";
	guer="#(argb,8,8,3)color(1,1,1,1)";
	civl="#(argb,8,8,3)color(1,1,1,1)";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_SINGLE_NEW_MISSION_TITLE";
		};
		class TemplateText: RscText
		{
			x=0.025;
			y=0.16;
			w=0.30000001;
			text="$STR_DISP_MPW_TEMPLATE";
		};
		class TemplateValue: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.23999999;
			w=0.44999999;
			h=0.56999999;
		};
		class Overview: RscHTML
		{
			idc=102;
			x=0.52499998;
			y=0.23999999;
			w=0.44999999;
			h=0.56999999;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardIntel: RscStandardDisplay
{
	idd=91;
	textureClear="#(argb,8,8,3)color(1,1,1,1)";
	textureCloudly="#(argb,8,8,3)color(1,1,1,1)";
	textureOvercast="#(argb,8,8,3)color(1,1,1,1)";
	textureRainy="#(argb,8,8,3)color(1,1,1,1)";
	textureStormy="#(argb,8,8,3)color(1,1,1,1)";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_XBOX_WIZARD_EDIT";
		};
		class SumaTemplateValue: RscText
		{
			idc=107;
			x=0.029999999;
			y=0.14;
			w=0.30000001;
			h=0.079999998;
		};
		class Unit: RscButton
		{
			idc="IDC_XWIZ_UNIT";
			x=0.029999999;
			y=0.2;
			w=0.25;
			h=0.039999999;
			text="$STR_DISP_SRVSETUP_UNITS";
		};
		class Params: Unit
		{
			idc=114;
			y=0.25999999;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_PARAMS";
		};
		class Island: Unit
		{
			idc=102;
			y=0.31999999;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_ISLAND";
		};
		class Name: Unit
		{
			idc=101;
			y=0.38;
			text="$STR_DISP_XBOX_EDIT_PROFILE_NAME";
		};
		class Map: Unit
		{
			idc=112;
			y=0.44;
			text="$STR_USRACT_MAP";
		};
		class Time: Unit
		{
			idc=104;
			y=0.5;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE";
		};
		class Weather: Unit
		{
			idc=103;
			y=0.56;
			text="$STR_DISP_INTEL_WEATHER";
		};
		class NameText: RscText
		{
			x=0.54000002;
			y=0.255;
			w=0.2;
			h=0.039999999;
			text="$STR_DISP_GAME_NAME";
		};
		class NameValue: RscText
		{
			idc=105;
			x=0.63999999;
			y=0.25;
			w=0.30000001;
			h=0.059999999;
		};
		class IslandText: NameText
		{
			idc=-1;
			y=0.33899999;
			text="$STR_DISP_XBOX_MULTI_ISLAND";
		};
		class IslandValue: NameValue
		{
			idc=108;
			y=0.33000001;
			text="";
		};
		class TimeText: IslandText
		{
			y=0.417;
			text="$STR_DISP_INTEL_TIME";
		};
		class TimeValue: IslandValue
		{
			idc=106;
			y=0.41;
			text="";
		};
		class DateText: IslandText
		{
			y=0.495;
			text="$STR_DISP_INTEL_DATE";
		};
		class DateValue: IslandValue
		{
			idc=113;
			y=0.49000001;
			text="";
		};
		class WeatherCurrentText: IslandText
		{
			y=0.64999998;
			w=0.40000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_CURRENT";
		};
		class WeatherCurrentValue: RscPicture
		{
			idc=109;
			x=0.83499998;
			y=0.63999999;
			w=0.090000004;
			h=0.090000004;
		};
		class WeatherForecastText: IslandText
		{
			y=0.72000003;
			w=0.40000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_FORECAST";
		};
		class WeatherForecastValue: WeatherCurrentValue
		{
			idc=110;
			y=0.70999998;
			text="";
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x=0.5;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_ARCMAP_PREVIEW";
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayXWizardIntelName: RscStandardDisplay
{
	idd=92;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_XBOX_EDITOR_WIZARD_NAME_TITLE";
		};
		class Name: RscEdit
		{
			idc=101;
			x=0.025;
			y=0.18000001;
			w=0.40000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardIntelIsland: RscStandardDisplay
{
	idd=93;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_XBOX_EDITOR_WIZARD_ISLAND_TITLE";
		};
		class IslandValue: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.18000001;
			w=0.40000001;
			h=0.30000001;
		};
		class IslandMap: RscPicture
		{
			idc=102;
			x=0.055;
			y=0.44999999;
			w=0.40000001;
			h=0.40000001;
		};
		class IslandShots: RscPicture
		{
			idc=103;
			x=0.60000002;
			y=0.17;
			w=0.30000001;
			h=0.68000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardIntelWeather: RscStandardDisplay
{
	idd=94;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_INTEL_WEATHER";
		};
		class Bourka: RscPicture
		{
			text="#(argb,8,8,3)color(1,1,1,1)";
			x=0.12;
			y=0.33000001;
			w=0.1;
			h=0.12;
		};
		class Jasno: RscPicture
		{
			text="#(argb,8,8,3)color(1,1,1,1)";
			x=0.77999997;
			y=0.33000001;
			w=0.1;
			h=0.12;
		};
		class WeatherText: RscText
		{
			x=0.1;
			y=0.25;
			w=0.34;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_WEATHER";
		};
		class Current: RscText
		{
			idc=101;
			style=2;
			x=0.33000001;
			y=0.27000001;
			w=0.34;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_CURRENT";
		};
		class WeatherValueTitle: RscText
		{
			idc=101;
			x=0.25;
			y=0.31999999;
			w=0.5;
		};
		class WeatherValue: RscSlider
		{
			idc=102;
			x=0.25;
			y=0.31999999;
			w=0.5;
		};
		class Forecast: Current
		{
			idc=103;
			y=0.37;
			text="$STR_DISP_INTEL_FORECAST";
		};
		class ForecastWeatherTitle: RscText
		{
			idc=103;
			x=0.25;
			y=0.41999999;
			w=0.5;
		};
		class ForecastWeatherValue: RscSlider
		{
			idc=104;
			x=0.25;
			y=0.41999999;
			w=0.5;
		};
		class FogText: WeatherText
		{
			y=0.5;
			h=0.090000004;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_FOG";
		};
		class Current2: Current
		{
			idc=105;
			y=0.51999998;
		};
		class FogValueTitle: RscText
		{
			idc=105;
			x=0.25;
			y=0.56999999;
			w=0.5;
		};
		class FogValue: RscSlider
		{
			idc=106;
			x=0.25;
			y=0.56999999;
			w=0.5;
		};
		class Forecast2: Forecast
		{
			idc=107;
			y=0.62;
		};
		class ForecastFogValueTitle: RscText
		{
			idc=107;
			x=0.25;
			y=0.67000002;
			w=0.5;
		};
		class ForecastFogValue: RscSlider
		{
			idc=108;
			x=0.25;
			y=0.67000002;
			w=0.5;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardIntelTime: RscStandardDisplay
{
	idd=95;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE";
		};
		class HourText: RscText
		{
			x=0.25;
			y=0.25999999;
			w=0.2;
			h=0.050000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_HOUR";
		};
		class MinuteText: HourText
		{
			y=0.36000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_MINUTES";
		};
		class DayText: HourText
		{
			y=0.46000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_DAY";
		};
		class MonthText: HourText
		{
			y=0.56;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_MONTH";
		};
		class YearText: HourText
		{
			y=0.66000003;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_TIME_YEAR";
		};
		class Hour: RscCombo
		{
			idc=101;
			x=0.25;
			y=0.30000001;
			w=0.30000001;
			h=0.059999999;
		};
		class Minute: Hour
		{
			idc=102;
			y=0.40000001;
		};
		class Day: Hour
		{
			idc=103;
			y=0.5;
		};
		class Month: Hour
		{
			idc=104;
			y=0.60000002;
		};
		class Year: Hour
		{
			idc=105;
			y=0.69999999;
			from=1980;
			to=2020;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardUnit: RscStandardDisplay
{
	idd="IDD_XWIZARD_UNIT";
	west="#(argb,8,8,3)color(1,1,1,1)";
	east="#(argb,8,8,3)color(1,1,1,1)";
	guer="#(argb,8,8,3)color(1,1,1,1)";
	civl="#(argb,8,8,3)color(1,1,1,1)";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_XBOX_EDITOR_WIZARD_UNIT_CHOOSE";
		};
		class UnitText: RscText
		{
			x=0.037999999;
			y=0.14;
			w=0.40000001;
			h=0.059999999;
			text="$STR_DISP_ARCUNIT_VEHICLE";
			style=2;
		};
		class UnitValue: RscListBox
		{
			idc=101;
			x=0.050000001;
			y=0.23;
			w=0.87;
			h=0.55000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardUnitSelect: RscStandardDisplay
{
	idd="IDD_XWIZARD_UNIT_SELECT";
	class controls
	{
		class Title: RscTitle
		{
			idc=102;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT";
		};
		class UnitText: RscText
		{
			x=0.037999999;
			y=0.14;
			w=0.40000001;
			h=0.059999999;
			text="$STR_DISP_ARCUNIT_VEHICLE";
			style=2;
		};
		class UnitValue: RscListBox
		{
			idc=101;
			x=0.050000001;
			y=0.23;
			w=0.87;
			h=0.55000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardUnitSelectCustom: RscStandardDisplay
{
	idd="IDD_XWIZARD_UNIT_SELECT_CUSTOM";
	class controls
	{
		class Title: RscTitle
		{
			idc=105;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT";
		};
		class TitleClass: RscText
		{
			x=0.050000001;
			y=0.25;
			w=0.44999999;
			h=0.050000001;
			text="$STR_DISP_ARCUNIT_CLASS";
		};
		class ButtonClass: RscCombo
		{
			idc=101;
			x=0.050000001;
			y=0.30000001;
			w=0.44999999;
			h=0.07;
		};
		class TitleType: RscText
		{
			x=0.050000001;
			y=0.40000001;
			w=0.44999999;
			h=0.050000001;
			text="$STR_DISP_ARCGRP_TYPE";
		};
		class ButtonType: ButtonClass
		{
			idc=102;
			y=0.44999999;
		};
		class TitleCount: RscText
		{
			x=0.050000001;
			y=0.55000001;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT";
		};
		class ButtonCount: ButtonClass
		{
			idc=103;
			y=0.60000002;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.85000002;
			default=1;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayXWizardMap: RscStandardDisplay
{
	idd=97;
	class controlsBackground
	{
		class Map: RscMapControl
		{
			moveOnEdges=1;
			x=-0.088;
			y=-0.088;
			w=1.176;
			h=1.176;
			class Command
			{
				icon="#(argb,8,8,3)color(1,1,1,1)";
				color[]={0,0,0,1};
				size=12;
				importance=1;
				coefMin=1;
				coefMax=1;
			};
			class ActiveMarker
			{
				color[]={0.30000001,0.1,0.89999998,1};
				size=50;
			};
			scaleMin=0.029999999;
			scaleMax=0.31999999;
			scaleDefault=0.096000001;
		};
	};
	class controls
	{
		class Points: RscText
		{
			idc=101;
			x=0;
			y=0;
			w=1;
			h=0.059999999;
			text="$STR_MISSION_WIZARD_POINTS";
		};
		class Briefing: RscHTML
		{
			idc=56;
			x=0.12;
			y=0.07;
			w=0.80000001;
			h=0.69999999;
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x=0.5;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_ARCMAP_PREVIEW";
		};
	};
};
class RscDisplayXWizardMapInsertUnit: RscStandardDisplay
{
	idd="IDD_XWIZARD_UNIT_SELECT_CUSTOM";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT";
		};
		class TitleSide: RscText
		{
			x=0.050000001;
			y=0.23;
			w=0.44999999;
			h=0.050000001;
			text="$STR_DISP_ARCUNIT_SIDE";
		};
		class ComboSide: RscCombo
		{
			idc=104;
			x=0.050000001;
			y=0.28;
			w=0.44999999;
			h=0.07;
		};
		class TitleClass: RscText
		{
			x=0.050000001;
			y=0.34999999;
			w=0.44999999;
			h=0.050000001;
			text="$STR_DISP_ARCUNIT_CLASS";
		};
		class Comboclass: ComboSide
		{
			idc=101;
			y=0.40000001;
		};
		class TitleType: RscText
		{
			x=0.050000001;
			y=0.47;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_ARCGRP_TYPE";
		};
		class ComboType: ComboSide
		{
			idc=102;
			y=0.51999998;
		};
		class TitleCount: RscText
		{
			x=0.050000001;
			y=0.58999997;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT";
		};
		class ComboCount: ComboSide
		{
			idc=103;
			y=0.63999999;
		};
	};
};
class RscDisplayXWizardMapInsertWaypoint: RscStandardDisplay
{
	idd="IDD_XWIZARD_WAYPOINT";
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_XBOX_WAYPOINT_TITLE";
		};
		class TitleType: RscText
		{
			x=0.1;
			y=0.22;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_ARCWP_TYPE";
		};
		class ValueType: RscCombo
		{
			idc=101;
			x=0.1;
			y=0.27000001;
			w=0.40000001;
			h=0.07;
		};
		class TitleBehaviour: RscText
		{
			x=0.1;
			y=0.37;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_ARCWP_COMBAT";
		};
		class ValueBehaviour: ValueType
		{
			idc=102;
			y=0.41999999;
		};
		class TitleFormation: RscText
		{
			x=0.1;
			y=0.51999998;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_ARCWP_FORM";
		};
		class ValueFormation: ValueType
		{
			idc=103;
			y=0.56999999;
		};
		class TitleCombatMode: RscText
		{
			x=0.1;
			y=0.67000002;
			w=0.40000001;
			h=0.050000001;
			text="$STR_DISP_ARCWP_SEMAPHORE";
		};
		class ValueCombatMode: ValueType
		{
			idc=104;
			y=0.72000003;
		};
	};
};
class RscDisplayXWizardParams: RscStandardDisplay
{
	idd=146;
	class controls
	{
		class Title: RscTitle
		{
			idc=-1;
			text="Params";
		};
		class LB_ParamsTitles: RscListBox
		{
			idc=102;
			x=0.15000001;
			y=0.15000001;
			w=0.5;
			h=0.40000001;
		};
		class B_Edit: RscActiveText
		{
			idc=104;
			x=0.64999998;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_EDIT";
		};
		class B_OK: B_Edit
		{
			idc=1;
			x=0.85000002;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayXWizardParameter: RscStandardDisplay
{
	idd=147;
	class controls
	{
		class Title: RscTitle
		{
			idc=105;
			text="";
		};
		class LB_ParamsTitles: RscListBox
		{
			idc=103;
			x=0.15000001;
			y=0.15000001;
			w=0.30000001;
			h=0.40000001;
		};
		class B_OK: RscActiveText
		{
			idc=1;
			x=0.44999999;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_CANCEL: B_OK
		{
			idc=2;
			x=0.85000002;
			default=1;
			text="$STR_DISP_CANCEL";
		};
	};
};
class RscDisplayESRBOnline: RscStandardDisplay
{
	idd=136;
	class Controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_ESRB_TITLE";
		};
		class Text: RscStructuredText
		{
			x=0.025;
			y=0.12;
			w=0.30000001;
			h=0.30000001;
			text="$STR_DISP_ESRB_ONLINE";
		};
		class B_Cancel: RscButton
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
			y=0.89999998;
			w=0.25;
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.75;
			default=1;
		};
	};
};
class RscDisplayMultiplayer: RscStandardDisplay
{
	idd=8;
	sortUp="#(argb,8,8,3)color(1,1,1,1)";
	sortDown="#(argb,8,8,3)color(1,0.5,0,1)";
	showPassworded="#(argb,8,8,3)color(0,1,0,1)";
	hidePassworded="#(argb,8,8,3)color(0,0,1,1)";
	showFull="#(argb,8,8,3)color(0.3,0.3,0.3,1)";
	hideFull="#(argb,8,8,3)color(1,0,0,1)";
	showBattlEye="#(argb,8,8,3)color(1,0,0,1)";
	showNoBattlEye="#(argb,8,8,3)color(1,0.5,0,1)";
	hideBattlEye="#(argb,8,8,3)color(0.3,0.3,0.3,1)";
	showExpansions="#(argb,8,8,3)color(0.3,0.3,0.3,1)";
	hideExpansions="#(argb,8,8,3)color(1,0,0,1)";
	colorPingUnknown[]={1,1,1,1};
	colorPingGood[]={0,1,0,1};
	colorPingPoor[]={1,1,0,1};
	colorPingBad[]={1,0,0,1};
	colorVersionGood[]={1,1,1,1};
	colorVersionBad[]={1,0,0,1};
	class controls
	{
		class Title: RscTitle
		{
			idc=101;
			y=0.0099999998;
		};
		class IconServer: RscPicture
		{
			idc=111;
			x=0;
			y=0.061000001;
			w=0.02;
			h=0.02;
			text="#(argb,8,8,3)color(1,1,1,1)";
		};
		class ColumnServer: RscActiveText
		{
			idc=112;
			text="$STR_MP_SERVER";
			style=0;
			sizeEx=0.027000001;
			x=0;
			y=0.07;
			w=0.167;
		};
		class FilterServer: RscText
		{
			idc=125;
			style=2;
			x=0.18000001;
			y=0.125;
			w=0.2;
		};
		class ColumnType: ColumnServer
		{
			idc=141;
			text="$STR_DISP_ARCSENS_TYPE";
			x=0.167;
		};
		class IconType: IconServer
		{
			idc=140;
			x=0.91000003;
		};
		class ColumnMission: ColumnServer
		{
			idc=114;
			text="$STR_SECTION_MISSION";
			x=0.333;
			w=0.167;
		};
		class IconMission: IconServer
		{
			idc=113;
			x=0.333;
		};
		class FilterMission: FilterServer
		{
			idc=126;
			x=0.167;
			w=0.30000001;
		};
		class IconState: IconServer
		{
			idc=115;
			x=0.5;
		};
		class ColumnState: ColumnServer
		{
			idc=116;
			text="$STR_MENU_STATUS";
			x=0.5;
			w=0.079999998;
		};
		class IconFriends: IconServer
		{
			idc=157;
			x=0.57999998;
		};
		class ColumnFriends: ColumnServer
		{
			idc=156;
			text="$STR_DISP_MULTI_TIMEOFDAY";
			x=0.57999998;
			w=0.039999999;
		};
		class IconTimeOfDay: IconServer
		{
			idc=173;
			x=0.62300003;
		};
		class ColumnTimeOfDay: ColumnServer
		{
			idc=172;
			text="Time";
			x=0.62300003;
			w=0.039999999;
		};
		class IconHive: IconServer
		{
			idc=175;
			x=0.63300002;
		};
		class ColumnHive: ColumnServer
		{
			idc=174;
			text="Time";
			x=0.63300002;
			w=0.039999999;
		};
		class IconMode: IconServer
		{
			idc=177;
			x=0.64300001;
		};
		class ColumnMode: ColumnServer
		{
			idc=176;
			text="Time";
			x=0.64300001;
			w=0.039999999;
		};
		class IconPlayers: IconServer
		{
			idc=117;
			x=0.667;
		};
		class ColumnPlayers: ColumnServer
		{
			idc=118;
			text="$STR_MPTABLE_PLAYERS";
			x=0.667;
			w=0.12;
		};
		class FilterPlayers: FilterServer
		{
			idc=127;
			x=0.66500002;
			w=0.12;
		};
		class IconPing: IconServer
		{
			idc=119;
			x=0.81;
		};
		class ColumnPing: ColumnServer
		{
			idc=120;
			text="$STR_DISP_MULTI_PING";
			x=0.82999998;
			w=0.079999998;
		};
		class FilterPing: FilterServer
		{
			idc=128;
			x=0.82999998;
			w=0.079999998;
		};
		class FilterType: FilterServer
		{
			idc=152;
			x=0.93000001;
			w=0.079999998;
		};
		class ValueSessions: RscListBox
		{
			idc=102;
			x=0;
			y=0.12800001;
			w=1;
			h=0.373;
			sizeEx=0.027000001;
			rows=9;
			password="#(argb,8,8,3)color(1,1,1,1)";
			version="#(argb,8,8,3)color(1,1,1,1)";
			addons="#(argb,8,8,3)color(1,0,0,1)";
			mods="#(argb,8,8,3)color(1,0.5,0,1)";
			locked="#(argb,8,8,3)color(0.75,0,0.75,1)";
			none="#(argb,8,8,3)color(1,1,1,1)";
			star="#(argb,8,8,3)color(1,1,1,1)";
			colorPingUnknown[]={1,1,1,1};
			colorPingGood[]={0,1,0,1};
			colorPingPoor[]={1,1,0,1};
			colorPingBad[]={1,0,0,1};
			columns[]={0.125,0.125,0.125,0.125,0.125,0.125,0.125,0.125};
		};
		class B_Remote: RscActiveText
		{
			idc=103;
			x=0.167;
			y=0.5;
			w=0.30000001;
			style=0;
			sizeEx=0.027000001;
			text="$STR_MULTI_REMOTE";
		};
		class B_Password: RscActiveText
		{
			idc=107;
			x=0.333;
			y=0.5;
			w=0.40000001;
			style=0;
			sizeEx=0.027000001;
		};
		class B_Refresh: RscActiveText
		{
			idc=123;
			text="$STR_DISP_MULTI_REFRESH";
			x=0.5;
			y=0.5;
			w=0.30000001;
			style=0;
			sizeEx=0.027000001;
		};
		class B_Filter: RscActiveText
		{
			idc=124;
			text="$STR_DISP_MULTI_FILTER";
			x=0.667;
			y=0.5;
			w=0.30000001;
			style=0;
			sizeEx=0.027000001;
		};
		class B_Port: RscActiveText
		{
			idc=108;
			text="$STR_DISP_PORT_TITLE";
			x=0.833;
			y=0.5;
			w=0.30000001;
			style=0;
			sizeEx=0.027000001;
		};
		class Progress: RscProgress
		{
			idc=121;
			x=0;
			y=0.11;
			w=1;
			h=0.02;
		};
		class ServerDetailHost: RscText
		{
			idc=129;
			x=0;
			y=0.55299997;
			w=0.23999999;
			sizeEx=0.027000001;
		};
		class ServerDetailType: ServerDetailHost
		{
			idc=130;
			x=0.25;
		};
		class ServerDetailMission: ServerDetailHost
		{
			idc=131;
			x=0.5;
		};
		class ServerDetailState: ServerDetailHost
		{
			idc=133;
			x=0.75;
		};
		class ServerDetailSlots: ServerDetailHost
		{
			idc=135;
			x=0;
			y=0.60299999;
		};
		class ServerDetailPing: ServerDetailHost
		{
			idc=142;
			x=0.25;
			y=0.60299999;
		};
		class ServerDetailLanguage: ServerDetailHost
		{
			idc=139;
			x=0.5;
			y=0.60299999;
		};
		class ServerDetailCountry: ServerDetailHost
		{
			idc=145;
			x=0.75;
			y=0.60299999;
		};
		class ServerDetailVersion: ServerDetailHost
		{
			idc=146;
			x=0;
			y=0.653;
		};
		class ServerDetailVersionRequired: ServerDetailHost
		{
			idc=147;
			x=0.25;
			y=0.653;
		};
		class ServerDetailMods: ServerDetailHost
		{
			idc=148;
			x=0.5;
			y=0.653;
		};
		class ServerDetailIsland: ServerDetailHost
		{
			idc=132;
			x=0.75;
			y=0.653;
		};
		class ServerDetailDifficulty: ServerDetailHost
		{
			idc=138;
			x=0;
			y=0.70300001;
		};
		class ServerDetailTimeLeft: ServerDetailHost
		{
			idc=134;
			x=0.25;
			y=0.70300001;
		};
		class ServerDetailPlatform: ServerDetailHost
		{
			idc=144;
			x=0.5;
			y=0.70300001;
		};
		class ServerDetailPlayers: ServerDetailHost
		{
			idc=149;
			x=0.75;
			y=0.70300001;
		};
		class ServerDetailPassword: RscPicture
		{
			idc=143;
			x=0.1;
			y=0.80000001;
			w=0.050000001;
			h=0.050000001;
		};
		class FilterFullServers: RscPicture
		{
			idc=151;
			x=0.1;
			y=0.80000001;
			w=0.050000001;
			h=0.050000001;
			text="#(argb,8,8,3)color(1,1,1,1)";
		};
		class FilterPasswordedServers: RscPicture
		{
			idc=150;
			x=0.1;
			y=0.80000001;
			w=0.050000001;
			h=0.050000001;
			text="#(argb,8,8,3)color(1,1,1,1)";
		};
		class FilterBattlEyeServers: RscPicture
		{
			idc=154;
			x=0.1;
			y=0.80000001;
			w=0.050000001;
			h=0.050000001;
			text="#(argb,8,8,3)color(1,1,1,1)";
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
			y=0.94999999;
			w=0.15000001;
		};
		class B_Join: B_Cancel
		{
			idc=105;
			text="$STR_DISP_MULTI_JOIN";
			x=0.69999999;
		};
		class B_New: B_Cancel
		{
			idc=104;
			text="$STR_DISP_MULTI_NEW";
			x=0.85000002;
			default=1;
		};
	};
};
class RscDisplayHostSettings: RscStandardDisplay
{
	idd=132;
	class Controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_SERVER_TITLE";
		};
		class TextName: RscText
		{
			x=0.025;
			y=0.12;
			w=0.30000001;
			text="$STR_DISP_GAME_NAME";
		};
		class ValueName: RscEdit
		{
			idc=101;
			x=0.34999999;
			y=0.12;
			w=0.40000001;
		};
		class TextPassword: RscText
		{
			x=0.025;
			y=0.22;
			w=0.30000001;
			text="$STR_DISP_PASSWORD";
		};
		class ValuePassword: RscEdit
		{
			idc=102;
			x=0.34999999;
			y=0.22;
			w=0.40000001;
		};
		class TextMaxPlayers: RscText
		{
			x=0.025;
			y=0.31999999;
			w=0.30000001;
			text="$STR_DISP_FILTER_MAXPLAYERS";
		};
		class ValueMaxPlayers: RscEdit
		{
			idc=103;
			x=0.34999999;
			y=0.31999999;
			w=0.40000001;
		};
		class TextPrivate: RscText
		{
			x=0.025;
			y=0.41999999;
			w=0.30000001;
			text="$STR_DISP_FILTER_SERVER";
		};
		class ValuePrivate: RscListBox
		{
			idc=104;
			x=0.34999999;
			y=0.41999999;
			w=0.40000001;
		};
		class TextPort: RscText
		{
			x=0.025;
			y=0.51999998;
			w=0.30000001;
			text="$STR_DISP_IP_PORT";
		};
		class ValuePort: RscEdit
		{
			idc=105;
			x=0.34999999;
			y=0.51999998;
			w=0.40000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
			y=0.89999998;
			w=0.25;
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.75;
			default=1;
		};
	};
};
class RscDisplayRemoteMissions: RscStandardDisplay
{
	idd=17;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_SERVER_TITLE";
		};
		class TextMaps: RscText
		{
			x=0.025;
			y=0.12;
			w=0.30000001;
			text="$STR_DISP_SERVER_ISLAND";
		};
		class ValueMaps: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.17;
			w=0.44999999;
			h=0.60000002;
			rows=5;
		};
		class TextMissions: TextMaps
		{
			x=0.52499998;
			text="$STR_DISP_SERVER_MISSION";
		};
		class ValueMissions: ValueMaps
		{
			idc=102;
			x=0.52499998;
			rows=10;
		};
		class B_Difficulty: RscListBox
		{
			idc=104;
			x=0.050000001;
			y=0.89999998;
			w=0.25;
		};
		class B_Editor: RscActiveText
		{
			idc=103;
			x=0.34999999;
			y=0.89999998;
			w=0.25;
			text="$STR_DISP_EDIT";
		};
		class Overview: RscHTML
		{
			idc=130;
			x=0.025;
			y=0.25;
			w=0.44999999;
			h=0.40000001;
		};
		class GameType: RscText
		{
			idc=131;
			x=0.025;
			y=0.75;
			w=0.44999999;
			h=0.1;
		};
		class MaxPlayers: RscText
		{
			idc=132;
			x=0.025;
			y=0.85000002;
			w=0.44999999;
			h=0.1;
		};
		class B_Cancel: B_Editor
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
		};
		class B_OK: B_Editor
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.75;
			default=1;
		};
	};
};
class RscDisplayRemoteMissionVoted: RscStandardDisplay
{
	idd=126;
	class controls
	{
		class TextWait: RscText
		{
			text="Please wait...";
			x=0.025;
			y=0.40000001;
			w=0.94999999;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.050000001;
			y=0.89999998;
			w=0.25;
		};
	};
};
class RscDisplayServer: RscDisplayRemoteMissions
{
	idd=17;
	colorEditor[]={1,0.2,0.2,1};
	colorWizard[]={0.2,1,0.2,1};
	colorMission[]={0.2,0.60000002,1,1};
	colorMissionEditor[]={1,0.2,1,1};
	colorMissionWizard[]={0.2,1,1,1};
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_SERVER_TITLE";
		};
		class TextIslands: RscText
		{
			x=0.025;
			y=0.2;
			w=0.30000001;
			text="$STR_DISP_SERVER_ISLAND";
		};
		class ValueIslands: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.25;
			w=0.44999999;
			h=0.60000002;
		};
		class TextMissions: RscText
		{
			x=0.52499998;
			y=0.2;
			w=0.30000001;
			text="$STR_DISP_SERVER_MISSION";
		};
		class ValueMissions: RscListBox
		{
			idc=102;
			x=0.52499998;
			y=0.25;
			w=0.44999999;
			h=0.60000002;
		};
		class B_Difficulty: RscListBox
		{
			idc=104;
			x=0.050000001;
			y=0.050000001;
			w=0.2;
		};
		class TitlePrivateSlots: RscStructuredText
		{
			idc=124;
			x=0.2;
			y=0.66500002;
			w=0.5;
			h=0.050000001;
			text="$STR_DISP_XBOX_PRIVATE_SLOTS";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#000000";
				align="left";
			};
		};
		class ValuePrivateSlots: TitlePrivateSlots
		{
			idc=125;
			x=0.68000001;
		};
		class SliderPrivateSlots: RscSlider
		{
			idc=126;
			style="0x400 + 0x10";
			x=0.25;
			y=0.69999999;
			w=0.5;
			h=0.050000001;
			class Title
			{
				idc=124;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
			class Value
			{
				idc=125;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
		};
		class TitleMaxSlots: RscStructuredText
		{
			idc=127;
			x=0.2;
			y=0.75;
			w=0.5;
			h=0.050000001;
			text="$STR_DISP_XBOX_MULTI_MAX_SLOTS_DED";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#000000";
				align="left";
			};
		};
		class ValueMaxSlots: TitleMaxSlots
		{
			idc=129;
			x=0.68000001;
		};
		class SliderMaxSlots: RscSlider
		{
			idc=128;
			style="0x400 + 0x10";
			x=0.25;
			y=0.80000001;
			w=0.5;
			h=0.050000001;
			class Title
			{
				idc=127;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
			class Value
			{
				idc=129;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
		};
		class B_Copy: RscActiveText
		{
			idc=121;
			x=0.15000001;
			y=0;
			w=0.2;
			text="$STR_CA_COPY";
		};
		class B_Delete: B_Copy
		{
			idc=120;
			x=0.25;
			text="$STR_DISP_DELETE";
		};
		class B_Editor: B_Copy
		{
			idc=103;
			x=0.44999999;
			text="$STR_DISP_EDIT";
		};
		class B_Cancel: B_Copy
		{
			idc=2;
			x=0.64999998;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Copy
		{
			idc=1;
			x=0.85000002;
			text="$STR_DISP_OK";
			default=1;
		};
		class B_Start: B_Copy
		{
			idc=123;
			x=0.85000002;
			y=0.050000001;
		};
	};
};
class RscDisplayClient: RscStandardDisplay
{
	idd=18;
	class controls
	{
		class Background: RscText
		{
			idc=101;
			style=2;
			x=0;
			y=0.079999998;
			w=1;
			text="$STR_DISP_CLIENT_TEXT";
		};
		class Progress: RscProgress
		{
			idc=103;
			x=0;
			y=0.91000003;
			w=1;
			h=0.079999998;
		};
		class PlayersTitle: RscText
		{
			x=0.69999999;
			y=0.69999999;
			w=0.25;
			text="$STR_DISP_SRVSETUP_PLAYERS";
			style="0x00 + 0xA0";
		};
		class Players: RscListBox
		{
			idc=102;
			x=0.69999999;
			y=0.75;
			w=0.25;
			h=0.125;
		};
	};
};
class RscDisplayPassword: RscStandardDisplay
{
	idd=64;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_PASSWORD_TITLE";
		};
		class TextPassword: RscText
		{
			x=0.25;
			y=0.44999999;
			w=0.2;
			text="$STR_DISP_PASSWORD";
		};
		class ValuePassword: RscEdit
		{
			idc=101;
			x=0.43000001;
			y=0.44999999;
			w=0.40000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
			y=0.89999998;
			w=0.25;
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.75;
			default=1;
		};
	};
};
class RscDisplayPort: RscStandardDisplay
{
	idd=69;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_PORT_TITLE";
		};
		class TextPort: RscText
		{
			x=0.25;
			y=0.44999999;
			w=0.2;
			text="$STR_DISP_IP_PORT";
		};
		class ValuePort: RscEdit
		{
			idc=101;
			x=0.43000001;
			y=0.44999999;
			w=0.40000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.55000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.75;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayIPAddress: RscStandardDisplay
{
	idd=19;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_IP_TITLE";
		};
		class TextAddress: RscText
		{
			x=0.25;
			y=0.44999999;
			w=0.2;
			text="$STR_DISP_IP_ADDRESS";
		};
		class ValueAddress: RscEdit
		{
			idc=101;
			x=0.43000001;
			y=0.44999999;
			w=0.40000001;
		};
		class TextPort: RscText
		{
			x=0.25;
			y=0.5;
			w=0.2;
			text="$STR_DISP_IP_PORT";
		};
		class ValuePort: RscEdit
		{
			idc=102;
			x=0.43000001;
			y=0.5;
			w=0.40000001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			x=0.55000001;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_CANCEL";
		};
		class B_OK: B_Cancel
		{
			idc=1;
			x=0.75;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayFilter: RscStandardDisplay
{
	idd=71;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_FILTER_TITLE";
		};
		class TextServer: RscText
		{
			x=0.1;
			y=0.2;
			w=0.27500001;
			text="$STR_DISP_FILTER_SERVER";
		};
		class TextMaxPing: TextServer
		{
			y="0.2 + 0.05";
			text="$STR_DISP_FILTER_MAXPING";
		};
		class TextMinPlayers: TextServer
		{
			y="0.2 + 0.1";
			text="$STR_DISP_FILTER_MINPLAYERS";
		};
		class TextMaxPlayers: TextServer
		{
			y="0.2 + 0.15";
			text="$STR_DISP_FILTER_MAXPLAYERS";
		};
		class ValueServer: RscEdit
		{
			idc=101;
			x=0.40000001;
			y=0.2;
			w=0.40000001;
		};
		class ValueMaxPing: ValueServer
		{
			idc=103;
			y="0.2 + 0.05";
		};
		class ValueMinPlayers: ValueServer
		{
			idc=104;
			y="0.2 + 0.1";
		};
		class ValueMaxPlayers: ValueServer
		{
			idc=105;
			y="0.2 + 0.15";
		};
		class FullServers: RscListBox
		{
			idc=106;
			x=0.15000001;
			y=0.5;
			w=0.69999999;
		};
		class PasswordedServers: FullServers
		{
			idc=107;
			y=0.56999999;
		};
		class BattlEyeServers: FullServers
		{
			idc=110;
			y=0.63999999;
		};
		class FilterType: RscListBox
		{
			idc=109;
			x=0.15000001;
			y=0.5;
			w=0.69999999;
			h=0.2;
		};
		class B_Default: RscActiveText
		{
			idc=108;
			x=0.1;
			y=0.89999998;
			w=0.15000001;
			text="$STR_DISP_DEFAULT";
		};
		class B_Cancel: B_Default
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
		};
		class B_OK: B_Default
		{
			idc=1;
			x=0.75;
			text="$STR_DISP_OK";
			default=1;
		};
	};
};
class RscDisplayMPPlayers: RscStandardDisplay
{
	idd=65;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_MP_PLAYERS_TITLE";
		};
		class TextMission: RscTextSmall
		{
			x=0.025;
			y=0.12;
			w=0.12;
			text="$STR_DISP_SRVSETUP_NAME";
		};
		class ValueMission: RscTextSmall
		{
			idc=116;
			x=0.145;
			y=0.12;
			w=0.23;
		};
		class TextIsland: RscTextSmall
		{
			x=0.40000001;
			y=0.12;
			w=0.1;
			text="$STR_DISP_SRVSETUP_ISLAND";
		};
		class ValueIsland: RscTextSmall
		{
			idc=117;
			x=0.5;
			y=0.12;
			w=0.2;
		};
		class TextTime: RscTextSmall
		{
			x=0.625;
			y=0.12;
			w=0.1;
			text="$STR_DISP_MP_PL_TIME";
		};
		class ValueTime: RscTextSmall
		{
			idc=118;
			x=0.72500002;
			y=0.12;
			w=0.1;
		};
		class ValueRest: RscTextSmall
		{
			idc=126;
			x=0.82499999;
			y=0.12;
			w=0.15000001;
		};
		class TextPlayers: RscTextSmall
		{
			x=0.025;
			y=0.15000001;
			w=0.25;
			text="$STR_DISP_MP_PLAYERS";
		};
		class ValuePlayers: RscListBox
		{
			idc=101;
			x=0.025;
			y=0.2;
			w=0.25;
			h=0.64999998;
			rows=18.5;
		};
		class TextPlayer: RscTextSmall
		{
			x=0.30000001;
			y=0.15000001;
			w=0.15000001;
			text="$STR_DISP_MP_PL";
		};
		class ValuePlayer: RscTextSmall
		{
			idc=102;
			x=0.44999999;
			y=0.15000001;
			w=0.52499998;
		};
		class TextPlayerName: RscTextSmall
		{
			x=0.32499999;
			y=0.18000001;
			w=0.125;
			text="$STR_DISP_MP_PL_NAME";
		};
		class ValuePlayerName: RscTextSmall
		{
			idc="IDC_MP_PL_NAME";
			x=0.44999999;
			y=0.18000001;
			w=0.52499998;
		};
		class TextPlayerMail: RscTextSmall
		{
			x=0.32499999;
			y=0.20999999;
			w=0.125;
			text="$STR_DISP_MP_PL_MAIL";
		};
		class ValuePlayerMail: RscTextSmall
		{
			idc="IDC_MP_PL_MAIL";
			x=0.44999999;
			y=0.20999999;
			w=0.52499998;
		};
		class TextPlayerICQ: RscTextSmall
		{
			x=0.32499999;
			y=0.23999999;
			w=0.125;
			text="$STR_DISP_MP_PL_ICQ";
		};
		class ValuePlayerICQ: RscTextSmall
		{
			idc="IDC_MP_PL_ICQ";
			x=0.44999999;
			y=0.23999999;
			w=0.52499998;
		};
		class TextPlayerRemark: RscTextSmall
		{
			x=0.32499999;
			y=0.27000001;
			w=0.125;
			text="$STR_DISP_MP_PL_REMARK";
		};
		class ValuePlayerRemark: RscTextSmall
		{
			idc="IDC_MP_PL_REMARK";
			x=0.44999999;
			y=0.27000001;
			w=0.52499998;
			h=0.2;
			style=16;
			lines=5;
		};
		class PingTitle: RscTextSmall
		{
			x=0.32499999;
			y=0.41999999;
			w=0.15000001;
			text="$STR_DISP_MP_PING";
		};
		class PingMinValue: RscTextSmall
		{
			idc=119;
			x=0.47999999;
			y=0.41999999;
			w=0.050000001;
		};
		class PingAvgValue: RscTextSmall
		{
			idc=120;
			x=0.57999998;
			y=0.41999999;
			w=0.050000001;
		};
		class PingMaxValue: RscTextSmall
		{
			idc=121;
			x=0.68000001;
			y=0.41999999;
			w=0.050000001;
		};
		class BandwidthTitle: RscTextSmall
		{
			x=0.32499999;
			y=0.44999999;
			w=0.15000001;
			text="$STR_DISP_MP_BANDWIDTH";
		};
		class BandwidthMinValue: RscTextSmall
		{
			idc=122;
			x=0.47999999;
			y=0.44999999;
			w=0.050000001;
		};
		class BandwidthAvgValue: RscTextSmall
		{
			idc=123;
			x=0.57999998;
			y=0.44999999;
			w=0.050000001;
		};
		class BandwidthMaxValue: RscTextSmall
		{
			idc=124;
			x=0.68000001;
			y=0.44999999;
			w=0.050000001;
		};
		class DesyncTitle: RscTextSmall
		{
			x=0.32499999;
			y=0.47999999;
			w=0.15000001;
			text="$STR_DISP_MP_DESYNC";
		};
		class DesyncValue: RscTextSmall
		{
			idc=125;
			x=0.47999999;
			y=0.47999999;
			w=0.050000001;
		};
		class B_KickOff: RscActiveText
		{
			idc=114;
			text="$STR_DISP_MP_KICKOFF";
			x=0.050000001;
			y=0.89999998;
			w=0.2;
		};
		class B_Ban: B_KickOff
		{
			idc=115;
			text="$STR_DISP_MP_BAN";
			x=0.30000001;
		};
		class B_Mute: B_KickOff
		{
			idc=127;
			text="$STR_DIK_MUTE";
			x=0.55000001;
			y=0.89999998;
			w=0.2;
		};
		class B_Cancel: B_KickOff
		{
			idc=2;
			x=0.75;
			default=1;
			text="$STR_DISP_CLOSE";
		};
	};
};
class RscMPSetupMessage
{
	access=0;
	idd=-1;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=0;
	class Controls
	{
		class Background: RscText
		{
			idc=-1;
			style="";
			x=0.13;
			y=0.38;
			w=0.755;
			h=0.33000001;
			text="";
			sizeEx=0.039999999;
			colorBackground[]={0,0,0,1};
			colorText[]={0,0,0,0};
		};
		class Text
		{
			access=0;
			type=13;
			idc=101;
			style=0;
			x=0.12;
			y=0.44;
			w=0.66000003;
			h=0.1;
			size="( 21 / 408 )";
			text="$STR_DISP_ERROR";
			class Attributes
			{
				font="TahomaB";
				color="#323232";
				align="center";
				shadow=0;
			};
		};
		class Progress
		{
			access=0;
			type=8;
			idc=102;
			style=0;
			x=0.28;
			y=0.5;
			w=0.40000001;
			h=0.050000001;
			colorFrame[]={0.2,0.2,0.2,1};
			colorBar[]={0.2,0.2,0.2,1};
		};
		class ProgressIcon: RscPicture
		{
			idc=103;
			x=0.28;
			y=0.60000002;
			w=0.050000001;
			h=0.050000001;
			text="#(argb,8,8,3)color(1,1,1,1)";
		};
	};
};
class RscDisplayDedicatedServerSettings: RscStandardDisplay
{
	idd=127;
	movingEnable=1;
	colorslider[]={1,1,1,1};
	colorsliderActive[]={1,0.5,0,1};
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_XBOX_DEDICATED_HOST";
		};
		class TitlePrivateSlots: RscStructuredText
		{
			idc=105;
			x=0.2;
			y=0.34999999;
			w=0.5;
			h=0.050000001;
			text="$STR_DISP_XBOX_PRIVATE_SLOTS";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#000000";
				align="left";
			};
		};
		class ValuePrivateSlots: TitlePrivateSlots
		{
			idc=106;
			x=0.68000001;
		};
		class SliderPrivateSlots: RscSlider
		{
			idc=104;
			style="0x400 + 0x10";
			x=0.25;
			y=0.40000001;
			w=0.5;
			h=0.050000001;
			class Title
			{
				idc=105;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
			class Value
			{
				idc=106;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
		};
		class TitleMaxSlots: RscStructuredText
		{
			idc=102;
			x=0.2;
			y=0.55000001;
			w=0.5;
			h=0.050000001;
			text="$STR_DISP_XBOX_MULTI_MAX_SLOTS_DED";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#000000";
				align="left";
			};
		};
		class ValueMaxSlots: TitleMaxSlots
		{
			idc=103;
			x=0.68000001;
		};
		class SliderMaxSlots: RscSlider
		{
			idc=101;
			style="0x400 + 0x10";
			x=0.25;
			y=0.60000002;
			w=0.5;
			h=0.050000001;
			class Title
			{
				idc=102;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
			class Value
			{
				idc=103;
				colorBase[]={1,1,1,1};
				colorActive[]={1,0.5,0,1};
			};
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.40000001;
			y=0.88;
			w=0.30000001;
		};
		class HintStart: RscXKey
		{
			key="0x00050000 + 8";
			x=0.40000001;
			y=0.935;
			w=0.49200001;
		};
		class B_Cancel: RscActiveText
		{
			idc=2;
			text="$STR_DISP_CANCEL";
			x=0.55000001;
			y=0.89999998;
			w=0.25;
		};
		class B_OK: B_Cancel
		{
			idc=1;
			text="$STR_DISP_OK";
			x=0.75;
			default=1;
		};
	};
};
class RscDisplayDedicatedServer: RscStandardDisplay
{
	idd=114;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_XBOX_DEDICATED_HOST";
		};
		class Reporting: RscListBox
		{
			idc=101;
			x=0.059999999;
			y=0.2;
			w=0.87699997;
			h=0.57999998;
			rowHeight=0.039999999;
		};
	};
};
class RscPendingInvitation
{
	textureConnectionQualityPoor="#(argb,8,8,3)color(1,0.5,0,1)";
	textureConnectionQualityBad="#(argb,8,8,3)color(1,0,0,1)";
	textureDesyncLow="#(argb,8,8,3)color(1,0.5,0,1)";
	textureDesyncHigh="#(argb,8,8,3)color(1,0,0,1)";
	color[]={1,1,1,1};
	x=0.94;
	y=0;
	w=0.059999999;
	h=0.079999998;
	timeout=10;
	blinkingPeriod=2;
};
class RscPendingInvitationInGame
{
	textureConnectionQualityPoor="#(argb,8,8,3)color(1,0.5,0,1)";
	textureConnectionQualityBad="#(argb,8,8,3)color(1,0,0,1)";
	textureDesyncLow="#(argb,8,8,3)color(1,0.5,0,1)";
	textureDesyncHigh="#(argb,8,8,3)color(1,0,0,1)";
	color[]={1,1,1,1};
	x=0.94;
	y=0;
	w=0.059999999;
	h=0.079999998;
	timeout=10;
	blinkingPeriod=2;
};
class RscXTitle: RscText
{
	idc=-1;
	style=2;
	x=0.025;
	y=0.02;
	w=0.94999999;
	h=0.079999998;
	colorText[]={0.66500002,0.66500002,0.69999999,1};
	sizeEx="( 36 / 408 )";
	text="";
};
class RscXBackgroundAll: RscText
{
	x=-0.088;
	y=-0.088;
	w=1.176;
	h=1.176;
	text="";
	colorBackground[]={0.169,0.235,0.169,1};
};
class RscXNotepad: RscText
{
	x=-0.029999999;
	y=0.15000001;
	w=1.0599999;
	h=0.70999998;
	text="";
	colorText[]={1,1,1,0};
};
class RscXNotepadSett: RscText
{
	x=-0.029999999;
	y=0.15000001;
	w=1.0599999;
	h=0.70999998;
	text="";
	colorText[]={1,1,1,1};
};
class RscDisplayEditProfile
{
	idd=75;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="Options";
		};
		class Face: RscButton
		{
			idc=102;
			x=0.34999999;
			y="0.2 + 0.05";
			h=0.050000001;
			text="Face";
		};
		class Voice: Face
		{
			idc=103;
			y="0.2 + 0.1";
			text="Voice";
		};
		class Controller: Face
		{
			idc=104;
			y="0.2 + 0.15";
			text="Controller";
		};
		class Audio: Face
		{
			idc=105;
			y="0.2 + 0.2";
			text="Audio";
		};
		class Video: Face
		{
			idc=106;
			y="0.2 + 0.25";
			text="Video";
		};
		class StorageDevice: Face
		{
			idc=115;
			y="0.2 + 0.3";
			text="Storage Device";
		};
		class Accept: Face
		{
			idc=1;
			y="0.2 + 0.35";
			text="Accept";
		};
		class Name: RscText
		{
			idc=109;
			x=0.34999999;
			y=0.64999998;
		};
		class TxtController: RscText
		{
			x=0.34999999;
			y=0.69999999;
			w=0.2;
			text="Controls";
		};
		class ValueController: RscStructuredText
		{
			idc=110;
			x=0.5;
			y=0.70499998;
			w=0.40000001;
			class Attributes
			{
				font="TahomaB";
				color="#0000ff";
				align="left";
				shadow=0;
			};
		};
	};
};
class RscDisplayProfileFace
{
	idd=77;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_FACE_TITLE";
		};
		class TextFace: RscStructuredText
		{
			x=0.1;
			y=0.255;
			w=0.40000001;
			text="$STR_DISP_NEW_USER_FACE";
			class Attributes
			{
				font="TahomaB";
				color="#ffffff";
				align="left";
				shadow=0;
			};
		};
		class TextGlasses: TextFace
		{
			x=0.55000001;
			text="$STR_DISP_NEW_USER_GLASSES";
		};
		class FaceList: RscListBox
		{
			idc=101;
			style="0x400 + 0x02";
			x=0.1;
			y=0.30000001;
			w=0.34999999;
		};
		class GlassesList: FaceList
		{
			idc=102;
			style="0x400 + 0x02";
			x=0.55000001;
		};
	};
};
class RscDisplayProfileVoice
{
	idd=78;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_VOICE_TITLE";
		};
		class TextSpeakers: RscText
		{
			x=0.1;
			y=0.25;
			w=0.34999999;
			text="$STR_DISP_NEW_USER_SPEAKER";
		};
		class Speakers: RscListBox
		{
			idc=101;
			style="0x400 + 0x02";
			x=0.1;
			y=0.30000001;
			w=0.34999999;
			h=0.25;
		};
		class TextPitch: RscText
		{
			x=0.55000001;
			y=0.25;
			w=0.34999999;
			text="$STR_DISP_NEW_USER_PITCH";
		};
		class ValuePitch: RscText
		{
			idc=103;
			style=2;
			x=0.68000001;
			y=0.34999999;
			w=0.1;
		};
		class Pitch: RscSlider
		{
			idc=104;
			x=0.55000001;
			y=0.30000001;
			w=0.34;
			class Title
			{
				idc=102;
				colorBase[]={0.80000001,0.80000001,0.80000001,1};
				colorActive[]={1,1,1,1};
			};
			class Value
			{
				idc=103;
				format="%.0f%%";
				type="SPTPercents";
			};
		};
		class MaskText: TextSpeakers
		{
			y=0.60000002;
			text="$STR_DISP_XBOX_EDIT_PROFILE_VOICE_MASK";
		};
		class Mask: RscListBox
		{
			idc=105;
			style="0x400 + 0x02";
			x=0.1;
			y=0.64999998;
			w=0.34999999;
			h=0.25;
		};
		class voicetrough: RscText
		{
			x=0.55000001;
			y=0.60000002;
			w=0.64999998;
			text="$STR_DISP_PROF_VOICE_THROUGH";
		};
		class ThroughSpeakers: RscListBox
		{
			idc=106;
			style="0x400 + 0x02";
			x=0.55000001;
			y=0.64999998;
			w=0.34999999;
			h=0.25;
		};
	};
};
class RscDisplayProfileController: RscStandardDisplay
{
	idd=79;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controls
	{
		class Vehicle: RscListBox
		{
			idc=101;
			style="0x400+0x02+0x10";
			x=0.2;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class ControllerType: RscListBox
		{
			idc=102;
			style="0x400+0x02+0x10";
			x=0.40000001;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class Sensitivity: RscListBox
		{
			idc=105;
			style="0x400+0x02+0x10";
			x=0.60000002;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class Controller: RscPicture
		{
			idc=103;
			x=0.27573529;
			y=0.125;
			w=0.47058824;
			h=0.627451;
			text="\XMisc\Ctrlxbox.paa";
			colorText[]={1,1,1,1};
		};
		class HeadlineL: RscStructuredText
		{
			idc=220;
			x=0;
			y=0.25999999;
			w=0.28;
			h=0.039999999;
			size="( 16 / 408 )";
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class HeadlineD: HeadlineL
		{
			idc=222;
			x=0;
			y=0.57999998;
			text="";
		};
		class HeadlineR: HeadlineL
		{
			idc=221;
			x=0.74000001;
			y=0.57999998;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class AButton: RscStructuredText
		{
			idc=200;
			x=0.73500001;
			y=0.38499999;
			w=0.28999999;
			h=0.039000001;
			size="( 16 / 408 )";
			text="";
			showimage=1;
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class BButton: AButton
		{
			idc=201;
			y=0.345;
			text="";
		};
		class YButton: AButton
		{
			idc=202;
			y=0.26499999;
			text="";
		};
		class XButton: AButton
		{
			idc=203;
			y=0.30500001;
			text="";
		};
		class LeftTrigger: AButton
		{
			idc=218;
			x=0.185;
			y=0.2;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class RightTrigger: LeftTrigger
		{
			idc=219;
			x=0.54500002;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class WhiteButton: AButton
		{
			idc=204;
			x=0.73500001;
			y=0.47999999;
			w=0.30000001;
			h=0.039000001;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class BlackButton: WhiteButton
		{
			idc=205;
			y=0.51999998;
			text="";
		};
		class BackButton: WhiteButton
		{
			idc=210;
			x=0;
			y=0.47999999;
			w=0.28;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class StartButton: BackButton
		{
			idc=211;
			y=0.51999998;
			text="";
		};
		class LeftStickX: AButton
		{
			idc=213;
			x=0;
			y=0.34;
			w=0.27000001;
			h=0.039000001;
			text="Left X";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class LeftStickY: LeftStickX
		{
			idc=214;
			y=0.30000001;
			text="Left Y";
		};
		class LeftStickPush: LeftStickX
		{
			idc=212;
			y=0.38;
			text="";
		};
		class DStick: LeftStickX
		{
			idc=207;
			y=0.63;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class DStick2: DStick
		{
			idc=206;
			y=0.67000002;
			text="";
		};
		class DStick3: DStick
		{
			idc=208;
			y=0.70999998;
			text="";
		};
		class RightStickX: LeftStickX
		{
			idc=216;
			x=0.73500001;
			y=0.63;
			text="Right X";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class RightStickY: RightStickX
		{
			idc=217;
			y=0.67000002;
			text="Right Y";
		};
		class RightStickPush: RightStickX
		{
			idc=215;
			y=0.70999998;
			text="";
		};
		class CurrentScheme: RscText
		{
			idc=104;
			style=2;
			x=0.31999999;
			y=0.625;
			w=0.40000001;
			text="";
			colorText[]={0,0,0,1};
		};
		class Title: RscXTitle
		{
			text="$STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE";
		};
		class HintA: RscXKey
		{
			key="0x00050000 + 0";
			x=0.47;
			y=0.88;
			w=0.30000001;
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.47;
			y=0.935;
			w=0.30000001;
		};
		class HintY: RscXKey
		{
			key="0x00050000 + 3";
			x=0.70999998;
			y=0.935;
			w=0.5;
		};
		class HintWhite: RscXKey
		{
			key="0x00050000 + 11";
			x=0;
			y=0.88;
			w=0.40000001;
		};
		class HintBlack: RscXKey
		{
			key="0x00050000 + 10";
			x=0;
			y=0.935;
			w=0.40000001;
		};
		class HintX: HintY
		{
			key="0x00050000 + 2";
			x=0.70999998;
			y=0.88;
			w=0.5;
		};
	};
	class KeyHints
	{
		class A
		{
			key="0x00050000 + 0";
			hint="$STR_DISP_XBOX_HINT_ACCEPT";
		};
		class B
		{
			key="0x00050000 + 1";
			hint="$STR_DISP_XBOX_HINT_CANCEL";
		};
		class KeyRightBumper
		{
			key="0x00050000 + 11";
			hint="$STR_YAXIS_REVERTED";
		};
		class KeyLeftBumper
		{
			key="0x00050000 + 10";
			hint="$STR_FOREFDB_DISABLED";
		};
		class Y
		{
			key="0x00050000 + 3";
			hint="$STR_DISP_XBOX_HINT_PREV_SCHEME";
		};
		class X
		{
			key="0x00050000 + 2";
			hint="$STR_DISP_XBOX_HINT_NEXT_SCHEME";
		};
	};
};
class RscDisplayProfileControllerWheel: RscStandardDisplay
{
	idd=79;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controls
	{
		class Vehicle: RscListBox
		{
			idc=101;
			style="0x400+0x02+0x10";
			x=0.2;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class ControllerType: RscListBox
		{
			idc=102;
			style="0x400+0x02+0x10";
			x=0.40000001;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class Sensitivity: RscListBox
		{
			idc=105;
			style="0x400+0x02+0x10";
			x=0.60000002;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class Controller: RscPicture
		{
			idc=103;
			x=0.27573529;
			y=0.23;
			w=0.47058824;
			h=0.5;
			text="\XMisc\ctrlxbox_wheel.paa";
			colorText[]={1,1,1,1};
		};
		class HeadlineD: RscStructuredText
		{
			idc=222;
			x=0;
			y=0.25999999;
			w=0.28;
			h=0.039999999;
			size="( 16 / 408 )";
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class AButton: RscStructuredText
		{
			idc=200;
			x=0.73500001;
			y=0.35499999;
			w=0.28999999;
			h=0.039000001;
			size="( 16 / 408 )";
			text="";
			showimage=1;
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class BButton: AButton
		{
			idc=201;
			y=0.31;
			text="";
		};
		class YButton: AButton
		{
			idc=202;
			y=0.23;
			text="";
		};
		class XButton: AButton
		{
			idc=203;
			y=0.27000001;
			text="";
		};
		class LeftTrigger: AButton
		{
			idc=218;
			x=0.74000001;
			y=0.62;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class RightTrigger: LeftTrigger
		{
			idc=219;
			y=0.66000003;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class WhiteButton: AButton
		{
			idc=204;
			x=0.73500001;
			y=0.41999999;
			w=0.30000001;
			h=0.039000001;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class BlackButton: WhiteButton
		{
			idc=205;
			y=0.46000001;
			text="";
		};
		class BackButton: WhiteButton
		{
			idc=210;
			x=0;
			y=0.54500002;
			w=0.28;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class StartButton: BackButton
		{
			idc=211;
			y=0.505;
			text="";
		};
		class DStick: AButton
		{
			idc=207;
			x=0;
			y=0.30000001;
			w=0.27000001;
			h=0.039000001;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class DStick2: DStick
		{
			idc=206;
			y=0.34;
			text="";
		};
		class DStick3: DStick
		{
			idc=208;
			y=0.38;
			text="";
		};
		class DStick4: DStick
		{
			idc=209;
			y=0.41999999;
			text="";
		};
		class CurrentScheme: RscText
		{
			idc=104;
			style=2;
			x=0.27000001;
			y=0.61500001;
			w=0.40000001;
			text="";
			colorText[]={0,0,0,1};
		};
		class Title: RscXTitle
		{
			text="$STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE";
		};
		class HintA: RscXKey
		{
			key="0x00050000 + 0";
			x=0.47;
			y=0.88;
			w=0.30000001;
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.47;
			y=0.935;
			w=0.30000001;
		};
		class HintY: RscXKey
		{
			key="0x00050000 + 3";
			x=0.70999998;
			y=0.935;
			w=0.5;
		};
		class HintWhite: RscXKey
		{
			key="0x00050000 + 11";
			x=0;
			y=0.88;
			w=0.40000001;
		};
		class HintBlack: RscXKey
		{
			key="0x00050000 + 10";
			x=0;
			y=0.935;
			w=0.40000001;
		};
		class HintX: HintY
		{
			key="0x00050000 + 2";
			x=0.70999998;
			y=0.88;
			w=0.5;
		};
	};
	class KeyHints
	{
		class A
		{
			key="0x00050000 + 0";
			hint="$STR_DISP_XBOX_HINT_ACCEPT";
		};
		class B
		{
			key="0x00050000 + 1";
			hint="$STR_DISP_XBOX_HINT_CANCEL";
		};
		class KeyRightBumper
		{
			key="0x00050000 + 11";
			hint="$STR_YAXIS_REVERTED";
		};
		class KeyLeftBumper
		{
			key="0x00050000 + 10";
			hint="$STR_FOREFDB_DISABLED";
		};
		class Y
		{
			key="0x00050000 + 3";
			hint="$STR_DISP_XBOX_HINT_PREV_SCHEME";
		};
		class X
		{
			key="0x00050000 + 2";
			hint="$STR_DISP_XBOX_HINT_NEXT_SCHEME";
		};
	};
};
class RscDisplayProfileControllerJoystick: RscStandardDisplay
{
	idd=79;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controls
	{
		class Vehicle: RscListBox
		{
			idc=101;
			style="0x400+0x02+0x10";
			x=0.2;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class ControllerType: RscListBox
		{
			idc=102;
			style="0x400+0x02+0x10";
			x=0.40000001;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class Sensitivity: RscListBox
		{
			idc=105;
			style="0x400+0x02+0x10";
			x=0.60000002;
			y=0.70999998;
			w=0.2;
			colorText[]={1,1,1,1};
		};
		class Controller: RscPicture
		{
			idc=103;
			x=0.27000001;
			y=0.191899;
			w=0.47;
			h=0.58315998;
			text="\XMisc\ctrlxbox_joystick.paa";
			colorText[]={1,1,1,1};
		};
		class HeadlineL: RscStructuredText
		{
			idc=220;
			x=0.0099999998;
			y=0.63999999;
			w=0.25999999;
			h=0.039999999;
			size="( 16 / 408 )";
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class HeadlineD: HeadlineL
		{
			idc=222;
			x=0.0099999998;
			y=0.19;
			w=0.27500001;
			h=0.039999999;
			text="";
		};
		class HeadlineR: HeadlineL
		{
			idc=221;
			x=0.73000002;
			y=0.68000001;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class AButton: RscStructuredText
		{
			idc=200;
			x=0.70999998;
			y=0.197;
			w=0.28999999;
			h=0.039000001;
			size="( 16 / 408 )";
			text="";
			showimage=1;
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class BButton: AButton
		{
			idc=201;
			y=0.31;
			text="";
		};
		class YButton: AButton
		{
			idc=202;
			y=0.40000001;
			text="";
			x=0;
			w=0.27000001;
			h=0.039000001;
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class XButton: YButton
		{
			idc=203;
			y=0.44;
			text="";
			x=0;
		};
		class LeftTrigger: AButton
		{
			idc=218;
			x=0.0099999998;
			y=0.68000001;
			text="";
			w=0.25726101;
			h=0.039000001;
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class RightTrigger: LeftTrigger
		{
			idc=219;
			y=0.72000003;
			x=0.0099999998;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class WhiteButton: AButton
		{
			idc=204;
			x=0;
			y=0.36000001;
			w=0.27000001;
			h=0.039000001;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class BlackButton: WhiteButton
		{
			idc=205;
			y=0.47999999;
			text="";
			x=0;
		};
		class BackButton: WhiteButton
		{
			idc=210;
			x=0.73000002;
			y=0.520266;
			w=0.28;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class StartButton: BackButton
		{
			idc=211;
			y=0.56026602;
			text="";
			x=0.73000002;
		};
		class LeftStickX: AButton
		{
			idc=213;
			x=0.73000002;
			y=0.42243099;
			w=0.27000001;
			h=0.039000001;
			text="Left X";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class LeftStickPush: LeftStickX
		{
			idc=212;
			y=0.34999999;
			text="";
			x=0.70999998;
		};
		class DStick: LeftStickX
		{
			idc=207;
			y=0.23;
			x=0.02;
			text="";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Right";
			};
		};
		class DStick2: DStick
		{
			idc=206;
			y=0.27000001;
			text="";
			x=0.02;
		};
		class DStick3: DStick
		{
			idc=208;
			y=0.31;
			text="";
			x=0.02;
		};
		class RightStickX: LeftStickX
		{
			idc=216;
			x=0.73000002;
			y=0.75800002;
			text="Right X";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#313131";
				align="Left";
			};
		};
		class RightStickY: RightStickX
		{
			idc=217;
			y=0.72000003;
			x=0.73000002;
			text="Right Y";
		};
		class RightStickPush: RightStickX
		{
			idc=215;
			y=0.23999999;
			text="";
			x=0.70999998;
		};
		class CurrentScheme: RscText
		{
			idc=104;
			style=2;
			x=0.388432;
			y=0.63354403;
			w=0.40000001;
			text="";
			colorText[]={0,0,0,1};
		};
		class Title: RscXTitle
		{
			text="$STR_DISP_XBOX_EDIT_PROFILE_CONTROLLER_TITLE";
		};
		class HintA: RscXKey
		{
			key="0x00050000 + 0";
			x=0.47;
			y=0.88;
			w=0.30000001;
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.47;
			y=0.935;
			w=0.30000001;
		};
		class HintY: RscXKey
		{
			key="0x00050000 + 3";
			x=0.70999998;
			y=0.935;
			w=0.5;
		};
		class HintWhite: RscXKey
		{
			key="0x00050000 + 11";
			x=0;
			y=0.88;
			w=0.40000001;
		};
		class HintBlack: RscXKey
		{
			key="0x00050000 + 10";
			x=0;
			y=0.935;
			w=0.40000001;
		};
		class HintX: HintY
		{
			key="0x00050000 + 2";
			x=0.70999998;
			y=0.88;
			w=0.5;
		};
	};
	class KeyHints
	{
		class A
		{
			key="0x00050000 + 0";
			hint="$STR_DISP_XBOX_HINT_ACCEPT";
		};
		class B
		{
			key="0x00050000 + 1";
			hint="$STR_DISP_XBOX_HINT_CANCEL";
		};
		class KeyRightBumper
		{
			key="0x00050000 + 11";
			hint="$STR_YAXIS_REVERTED";
		};
		class KeyLeftBumper
		{
			key="0x00050000 + 10";
			hint="$STR_FOREFDB_DISABLED";
		};
		class Y
		{
			key="0x00050000 + 3";
			hint="$STR_DISP_XBOX_HINT_PREV_SCHEME";
		};
		class X
		{
			key="0x00050000 + 2";
			hint="$STR_DISP_XBOX_HINT_NEXT_SCHEME";
		};
	};
};
class RscDisplayProfileAudio
{
	idd=80;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_AUDIO_TITLE";
		};
		class TextMusic: RscText
		{
			x=0.25;
			y=0.30000001;
			w=0.34999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_MUSIC_SLIDER";
		};
		class ValueMusic: RscText
		{
			idc=102;
			x=0.56;
			y=0.30000001;
			w=0.050000001;
		};
		class MusicSlider: RscSlider
		{
			idc=103;
			x=0.25;
			y=0.34999999;
			w=0.5;
			class Title
			{
				idc=101;
				colorBase[]={0.80000001,0.80000001,0.80000001,1};
				colorActive[]={1,1,1,1};
			};
			class Value
			{
				idc=102;
			};
		};
		class TextRadio: RscText
		{
			x=0.25;
			y=0.41999999;
			w=0.34999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_RADIO_SLIDER";
		};
		class ValueRadio: RscText
		{
			idc=105;
			x=0.56;
			y=0.41999999;
			w=0.050000001;
		};
		class RadioSlider: RscSlider
		{
			idc=106;
			x=0.25;
			y=0.47;
			w=0.5;
			class Title
			{
				idc=104;
				colorBase[]={0.80000001,0.80000001,0.80000001,1};
				colorActive[]={1,1,1,1};
			};
			class Value
			{
				idc=105;
			};
		};
		class TextEffect: RscText
		{
			x=0.25;
			y=0.54000002;
			w=0.36000001;
			text="$STR_DISP_XBOX_EDIT_PROFILE_EFFECTS_SLIDER";
		};
		class ValueEffect: RscText
		{
			idc=108;
			x=0.56;
			y=0.54000002;
			w=0.050000001;
		};
		class EffectSlider: RscSlider
		{
			idc=109;
			x=0.25;
			y=0.58999997;
			w=0.5;
			class Title
			{
				idc=107;
				colorBase[]={0.80000001,0.80000001,0.80000001,1};
				colorActive[]={1,1,1,1};
			};
			class Value
			{
				idc=108;
			};
		};
	};
};
class RscDisplayProfileVideo
{
	idd=81;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_VIDEO_TITLE";
		};
		class TextBright: RscText
		{
			idc=102;
			x=0.25;
			y=0.25;
			w=0.34999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_BRIGHT_SLIDER";
		};
		class ValueBright: RscText
		{
			idc=103;
			x=0.56;
			y=0.25;
			w=0.079999998;
		};
		class BrightSlider: RscSlider
		{
			idc=101;
			x=0.25;
			y=0.30000001;
			w=0.5;
			class Title
			{
				idc=102;
				colorBase[]={0.80000001,0.80000001,0.80000001,1};
				colorActive[]={1,1,1,1};
			};
			class Value
			{
				idc=103;
			};
		};
		class TextContrast: RscText
		{
			idc=105;
			x=0.25;
			y=0.37;
			w=0.34999999;
			text="$STR_DISP_XBOX_EDIT_PROFILE_CONTRAST_SLIDER";
		};
		class ValueContrast: RscText
		{
			idc=106;
			x=0.66000003;
			y=0.37;
			w=0.15000001;
		};
		class ContrastSlider: RscSlider
		{
			idc=104;
			x=0.25;
			y=0.41999999;
			w=0.5;
			class Title
			{
				idc=105;
				colorBase[]={0.80000001,0.80000001,0.80000001,1};
				colorActive[]={1,1,1,1};
			};
			class Value
			{
				idc=106;
			};
		};
		class Subtitles: RscListBox
		{
			idc=107;
			style="0x400 + 0x02";
			x=0.25;
			y=0.57999998;
			w=0.5;
			h=0.079999998;
		};
		class Radio: Subtitles
		{
			idc=108;
			y=0.68000001;
		};
	};
};
class RscDisplayEditProfileInGame
{
	access=0;
	idd=75;
	enableSimulation=0;
	enableDisplay=1;
	movingEnable=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="Options";
		};
		class AudioPause: RscButton
		{
			idc=105;
			x=0.34999999;
			y=0.2;
			text="Audio";
		};
		class VideoPause: AudioPause
		{
			idc=106;
			y="0.2 + 0.1";
			text="Video";
		};
		class ControllerPause: AudioPause
		{
			idc=104;
			y="0.2 + 0.2";
			text="Controller";
		};
		class VoiceMask: AudioPause
		{
			idc=112;
			y="0.2 + 0.3";
			text="Voice Mask";
		};
		class StorageDevice: AudioPause
		{
			idc=115;
			y="0.2 + 0.4";
			text="Storage Device";
		};
	};
};
class RscDisplayVoiceMask
{
	idd=78;
	movingEnable=1;
	enableSimulation=0;
	enableDisplay=1;
	class controlsBackground
	{
	};
	class controls
	{
		class Title: RscText
		{
			style=2;
			x=0.15000001;
			y=0.12;
			w=0.69999999;
			text="$STR_DISP_XBOX_PROFILE_VOICE_MASK";
		};
		class MaskText: RscText
		{
			x=0.30000001;
			y=0.30000001;
			w=1;
			text="$STR_DISP_XBOX_EDIT_PROFILE_VOICE_MASK";
		};
		class Mask: RscListBox
		{
			idc=105;
			x=0.30000001;
			y=0.34999999;
			w=0.40000001;
			h=0.16;
		};
		class voicetrough: RscText
		{
			x=0.30000001;
			y=0.55000001;
			w=1;
			text="$STR_DISP_PROF_VOICE_THROUGH";
		};
		class ThroughSpeakers: RscListBox
		{
			idc=106;
			x=0.30000001;
			y=0.60000002;
			w=0.40000001;
			h=0.079999998;
		};
	};
};
class RscXMPNotepad: RscText
{
	idc=-1;
	x=-0.050000001;
	y=0.1235;
	w=1.11;
	h=0.77499998;
	text="";
	colorText[]={1,1,1,1};
};
class RscDisplayLive: RscStandardDisplay
{
	idd=139;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	class Controls
	{
		class QuickMatch: RscButton
		{
			idc=101;
			x=0.204;
			y=0.23999999;
			w=0.602;
			h=0.050000001;
			font="TahomaB";
			size="( 29 / 408 )";
			text="Quick Match";
			color[]={0.2,0.2,0.2,1};
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				align="center";
				color="#000000";
			};
		};
		class CustomMatch: QuickMatch
		{
			idc=102;
			y=0.31;
			text="Custom Match";
		};
		class CreateMatch: QuickMatch
		{
			idc=103;
			y=0.38;
			text="Create Match";
		};
	};
};
class RscDisplayMPType: RscStandardDisplay
{
	idd=83;
	enableSimulation=0;
	class Controls
	{
		class RankedMatch: RscButton
		{
			idc=101;
			x=0.204;
			y=0.23999999;
			w=0.602;
			h=0.050000001;
			font="TahomaB";
			size="( 29 / 408 )";
			text="Ranked Match";
			color[]={0.2,0.2,0.2,1};
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				align="center";
				color="#000000";
			};
		};
		class PlayerMatch: RankedMatch
		{
			idc=102;
			y=0.31;
			text="Player Match";
		};
		class Line: RscText
		{
			idc=-1;
			style=176;
			x=0.30000001;
			y=0.40000001;
			w=0.40000001;
			h=0;
			text="";
			colorText[]={0.2,0.2,0.2,0.5};
		};
		class Friends: RankedMatch
		{
			idc=104;
			y=0.41999999;
			size="( 21 / 408 )";
			text="$STR_DISP_MAIN_XBOX_MULTI_FRIENDS";
		};
		class Stats: Friends
		{
			idc=107;
			y=0.47999999;
			text="Leaderboards";
		};
		class Download: Friends
		{
			idc=105;
			y=0.54000002;
			text="$STR_DISP_MAIN_XBOX_MULTI_DOWNLOAD";
		};
		class CreateDed: Friends
		{
			idc=109;
			y=0.60000002;
			text="Dedicated Host";
		};
		class Line02: RscText
		{
			idc=-1;
			style=176;
			x=0.30000001;
			y=0.68000001;
			w=0.40000001;
			h=0;
			text="";
			colorText[]={0.2,0.2,0.2,0.5};
		};
		class SystemLink: RankedMatch
		{
			idc=103;
			y=0.69999999;
			text="System Link";
		};
		class Title: RscXTitle
		{
			text="Multiplayer";
		};
		class HintA: RscXKey
		{
			key="0x00050000 + 0";
			x=0.47;
			y=0.88;
			w=0.49200001;
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.47;
			y=0.935;
			w=0.30000001;
		};
	};
	class KeyHints
	{
		class A
		{
			key="0x00050000 + 0";
			hint="$STR_DISP_XBOX_HINT_SELECT";
		};
		class B
		{
			key="0x00050000 + 1";
			hint="$STR_DISP_XBOX_HINT_MAIN";
		};
		class Y
		{
			key="0x00050000 + 3";
			hint="$STR_XBOX_HINT_DEDICATED_HOST";
		};
	};
};
class RscDisplayOptiMatchFilter: RscStandardDisplay
{
	idd=86;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	class Controls
	{
		class TypeText: RscText
		{
			x=0.28999999;
			y=0.28999999;
			w=0.5;
			h=0.079999998;
			style=0;
			text="Game mode";
			sizeEx="( 21 / 408 )";
			colorText[]={0.66500002,0.66500002,0.69999999,1};
		};
		class type: RscListBox
		{
			idc=102;
			style="0x400+0x02+0x10";
			x=0.30000001;
			y=0.34999999;
			w=0.40000001;
			h=0.059999999;
			colorSelect[]={0.2,0.2,0.2,1};
			colorText[]={0.2,0.2,0.2,0.5};
		};
		class MinPlayersText: TypeText
		{
			y=0.41999999;
			text="Min. players";
		};
		class MinPlayers: RscListBox
		{
			idc=103;
			style="0x400+0x02+0x10";
			x=0.30000001;
			y=0.47999999;
			w=0.40000001;
			h=0.059999999;
			colorSelect[]={0.2,0.2,0.2,1};
			colorText[]={0.2,0.2,0.2,0.5};
		};
		class MaxPlayersText: TypeText
		{
			y=0.55000001;
			text="Max. players";
		};
		class MaxPlayers: RscListBox
		{
			idc=104;
			style="0x400+0x02+0x10";
			x=0.30000001;
			y=0.61000001;
			w=0.40000001;
			h=0.059999999;
			colorSelect[]={0.2,0.2,0.2,1};
			colorText[]={0.2,0.2,0.2,0.5};
		};
		class Title: RscXTitle
		{
			text="$STR_DISP_MAIN_XBOX_MULTI_OPTIMATCH";
		};
		class ButtonOK: RscButton
		{
			idc=1;
			x=0.47;
			y=0.88;
			w=0.30000001;
			h=0.050000001;
			text="$STR_DISP_OK";
		};
	};
};
class RscDisplayQuickMatch: RscStandardDisplay
{
	idd=87;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	class Controls
	{
		class HostText: RscText
		{
			idc=-1;
			x=0.2;
			y=0.28999999;
			w=0.30000001;
			h=0.079999998;
			text="Host:";
			sizeEx="( 21 / 408 )";
			colorText[]={0.66500002,0.66500002,0.69999999,1};
		};
		class HostValue: RscStructuredText
		{
			idc=129;
			x=0.44999999;
			y=0.30000001;
			w=0.56;
			h=0.079999998;
			text="";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#aaaab3";
				align="left";
			};
		};
		class TypeText: HostText
		{
			y=0.36000001;
			text="Game mode:";
		};
		class TypeValue: HostValue
		{
			idc=130;
			y=0.37;
			text="";
		};
		class MissionText: HostText
		{
			y=0.44;
			text="Mission:";
		};
		class MissionValue: HostValue
		{
			idc=131;
			y=0.44999999;
			text="";
		};
		class IslandText: HostText
		{
			y=0.50999999;
			text="$STR_DISP_XBOX_MULTI_ISLAND";
		};
		class IslandValue: HostValue
		{
			idc=132;
			y=0.51999998;
			text="";
		};
		class SlotsPublicText: HostText
		{
			y=0.58999997;
			text="Public slots:";
		};
		class SlotsPublicValue: HostValue
		{
			idc=135;
			y=0.60000002;
			text="";
		};
		class SlotsPrivateText: HostText
		{
			y=0.66000003;
			text="Private slots:";
		};
		class SlotsPrivateValue: HostValue
		{
			idc=136;
			y=0.67000002;
			text="";
		};
		class Title: RscXTitle
		{
			text="Quick Match";
		};
		class ButtonOK: RscButton
		{
			idc=1;
			x=0.47;
			y=0.88;
			w=0.30000001;
			h=0.050000001;
			text="Accept session";
		};
		class ButtonNext: RscButton
		{
			idc=153;
			x=0.47;
			y=0.935;
			w=0.30000001;
			h=0.050000001;
			text="Other Host";
		};
	};
};
class RscDisplayPlayers: RscStandardDisplay
{
	idd=103;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	class Controls
	{
		class Name: RscText
		{
			idc=-1;
			x=0.059999999;
			y=0.22499999;
			w=0.25999999;
			h=0.050000001;
			sizeEx="( 21 / 408 )";
			colorText[]={0.2,0.2,0.2,1};
			text="$STR_DISP_XBOX_EDIT_PROFILE_NAME";
		};
		class Infantry: RscPicture
		{
			x=0.421;
			y=0.22;
			w=0.050000001;
			h=0.050000001;
			text="\xmisc\stat_infantry.paa";
			colortext[]={0.2,0.2,0.2,1};
		};
		class Soft: Infantry
		{
			x=0.505;
			text="\xmisc\stat_soft.paa";
		};
		class Armored: Infantry
		{
			x=0.59299999;
			text="\xmisc\stat_armored.paa";
		};
		class Air: Infantry
		{
			x=0.68000001;
			text="\xmisc\stat_air";
		};
		class Killed: Infantry
		{
			x=0.76300001;
			text="\xmisc\stat_killed.paa";
		};
		class Total: Infantry
		{
			x=0.85000002;
			text="\xmisc\stat_Total.paa";
		};
		class Bckgrnd: RscText
		{
			x=0.059999999;
			y=0.27000001;
			w=0.87699997;
			h=0.47;
			text="";
			sizeEx="( 21 / 408 )";
			colorBackground[]={0.55000001,0.5,0.40000001,0.5};
		};
		class Table: RscListBox
		{
			idc=101;
			style=16;
			x=0.059999999;
			y=0.27000001;
			w=0.87699997;
			h=0.47;
			text="";
			sizeEx="( 21 / 408 )";
			colorText[]={0.2,0.2,0.2,1};
			rowHeight=0.059999999;
			colorWest[]={0.2,0.40000001,0.2,1};
			colorEast[]={0.40000001,0.2,0.2,1};
			colorCiv[]={0.2,0.2,0.2,1};
			colorRes[]={0.40000001,0.40000001,0.2,1};
			colorSelectWest[]={0.60000002,0.80000001,0.60000002,1};
			colorSelectEast[]={0.80000001,0.60000002,0.60000002,1};
			colorSelectCiv[]={0.69999999,0.69999999,0.69999999,1};
			colorSelectRes[]={0.80000001,0.80000001,0.60000002,1};
		};
		class PlayerStatusText: RscText
		{
			x=0.15000001;
			y=0.745;
			w=0.2;
			h=0.079999998;
			font="TahomaB";
			sizeEx="( 21 / 408 )";
			colorText[]={0.2,0.2,0.2,1};
			text="$STR_DISP_XBOX_MULTI_PLAYER_STATE";
		};
		class PlayerStatusValue: RscStructuredText
		{
			idc=102;
			x=0.30000001;
			y=0.755;
			w=0.60000002;
			h=0.079999998;
			text="";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#323232";
				align="right";
			};
		};
		class Title: RscXTitle
		{
			text="$STR_MPTABLE_PLAYERS";
		};
		class HintA: RscXKey
		{
			key="0x00050000 + 0";
			x=0.47;
			y=0.88;
			w=0.30000001;
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.47;
			y=0.935;
			w=0.30000001;
		};
		class HintX: RscXKey
		{
			key="0x00050000 + 2";
			x=0.050000001;
			y=0.935;
			w=0.25;
		};
	};
	class KeyHints
	{
		class A
		{
			key="0x00050000 + 0";
			hint="$STR_DISP_XBOX_ACTION";
		};
		class B
		{
			key="0x00050000 + 1";
			hint="$STR_DISP_XBOX_HINT_BACK";
		};
		class X
		{
			key="0x00050000 + 2";
			hint="$STR_DISP_XBOX_KICK";
		};
	};
};
class RscDisplayStatistics: RscStandardDisplay
{
	idd=116;
	enableSimulation=0;
	enableDisplay=1;
	movingEnable=1;
	class controls
	{
		class Statistics: RscListBox
		{
			idc=101;
			style=16;
			x=0.050000001;
			y=0.25;
			w=0.89999998;
			h=0.50400001;
			sizeEx="( 21 / 408 )";
			rowHeight=0.056000002;
		};
		class Title: RscXTitle
		{
			text="$STR_BRIEF_STATISTICS";
		};
		class ButtonOK: RscButton
		{
			idc=1;
			x=0.47;
			y=0.935;
			w=0.30000001;
			text="$STR_DISP_OK";
			default=1;
		};
		class ButtonCancel: RscButton
		{
			idc=2;
			x=0.47;
			y=0.88;
			w=0.30000001;
			text="$STR_DISP_CANCEL";
			default=0;
		};
	};
};
class RscDisplayStatisticsCurrent: RscStandardDisplay
{
	idd=117;
	enableSimulation=0;
	enableDisplay=1;
	movingEnable=1;
	colorPlayer[]={0.1,0.30000001,0.1,1};
	colorFriend[]={0.1,0.1,0.30000001,1};
	class controls
	{
		class Statistic: RscListBox
		{
			idc=101;
			x=0.059999999;
			y=0.248;
			w=0.87699997;
			h=0.48019999;
			sizeEx="( 16 / 408 )";
			rowHeight=0.048;
			colorSelect[]={0,0,0,1};
			colorBackground[]={0.2,0.2,0.2,0.2};
			colorSelectBackground[]={0.92000002,0.93000001,0.91000003,0.5};
		};
		class GamerCardShortcut: RscShortcutButton
		{
			idc=110;
			shortcuts[]=
			{
				"0x00050000 + 3"
			};
			x=0.061999999;
			y=0.77999997;
			w=0.30000001;
			text="Show gamer card";
		};
		class TotalTitle: RscText
		{
			idc=-1;
			x=0.5;
			y=0.74000001;
			w=0.40000001;
			h=0.050000001;
			sizeEx="( 21 / 408 )";
			text="$STR_DISP_XBOX_MULTI_FILTER_PLAYERS";
			colorText[]={0.2,0.2,0.2,1};
		};
		class TotalValue: RscStructuredText
		{
			idc=102;
			x=0.80000001;
			y=0.74000001;
			w=0.1;
			h=0.050000001;
			text="";
			size="( 21 / 408 )";
			class Attributes
			{
				font="TahomaB";
				shadow=0;
				color="#323232";
				align="right";
			};
		};
		class Title: RscXTitle
		{
			idc=103;
			text="$STR_BRIEF_STATISTICS";
		};
		class ButtonPlayers: RscButton
		{
			idc=104;
			x=0.44999999;
			y=0.88;
			w=0.30000001;
			text="My position";
		};
		class ButtonCancel: RscButton
		{
			idc=2;
			x=0.44999999;
			y=0.935;
			w=0.30000001;
			text="$STR_DISP_BACK";
		};
		class ButtonBegin: RscButton
		{
			idc=105;
			x=0.0049999999;
			y=0.88;
			w=0.30000001;
			text="Top";
		};
		class ButtonEnd: RscButton
		{
			idc=106;
			x=0.0049999999;
			y=0.935;
			w=0.30000001;
			text="Bottom";
		};
		class ButtonPrev: RscButton
		{
			idc=107;
			x=0.75999999;
			y=0.88;
			w=0.30000001;
			text="Up";
		};
		class ButtonNext: RscButton
		{
			idc=108;
			x=0.75999999;
			y=0.935;
			w=0.30000001;
			text="Down";
		};
		class ButtonFriends: RscButton
		{
			idc=109;
			x=0.061999999;
			y=0.745;
			w=0.5;
			text="$STR_XBOX_SHOW_FRIEND";
		};
	};
};
class RscDisplayInteruptReceiving: RscStandardDisplay
{
	idd=-1;
	movingEnable=0;
	enableSimulation=0;
	enableDisplay=1;
	class controls
	{
		class Message: RscText
		{
			idc=101;
			x=0.15000001;
			y=0.40000001;
			w=0.745;
			h=0.2;
			text="";
			sizeEx="( 29 / 408 )";
			style=2;
			colorText[]={0.2,0.2,0.2,1};
		};
		class Time
		{
			type=45;
			style=0;
			idc=102;
			texture="\xmisc\hodinky.01.paa";
			x=0.47;
			y=0.30000001;
			w=0.064999998;
			h=0.085000001;
		};
		class Title: RscXTitle
		{
			y=0.2;
			h=0.079999998;
			text="";
		};
		class HintB: RscXKey
		{
			key="0x00050000 + 1";
			x=0.0049999999;
			y=0.88;
			w=0.30000001;
		};
	};
	class KeyHints
	{
		class B
		{
			key="0x00050000 + 1";
			hint="$STR_DISP_XBOX_HINT_CANCEL";
		};
	};
};
class RscDisplayMovieInterrupt: RscStandardDisplay
{
	idd=49;
	class controls
	{
		class Title: RscTitle
		{
			text="$STR_DISP_INT_TITLE";
		};
		class ButtonSkip: RscButton
		{
			idc=1;
			x=0.34999999;
			y=0.2;
			text="$STR_DISP_XBOX_MOVIE_SKIP";
			default=1;
		};
		class ButtonResume: ButtonSkip
		{
			idc=2;
			y="0.2 + 0.1";
			text="$STR_DISP_XBOX_MOVIE_RESUME";
			default=0;
		};
		class ButtonAgain: ButtonSkip
		{
			idc=105;
			y="0.2 + 0.2";
			text="$STR_DISP_XBOX_MOVIE_AGAIN";
			default=0;
		};
		class ButtonOptions: ButtonSkip
		{
			idc=107;
			y="0.2 + 0.3";
			text="$STR_DISP_INT_OPTIONS";
			default=0;
		};
		class ButtonAbort: ButtonSkip
		{
			idc=4;
			y="0.2 + 0.4";
			text="$STR_DISP_INT_ABORT";
			default=0;
		};
	};
};
class RscGroupRootMenu
{
	access=0;
	title="";
	atomic=0;
	vocabulary="";
	contexsensitive=1;
	class Items
	{
		class Empty1
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_empty1";
			shortcuts[]={0};
			command="";
			show="(IsLeader * (1 - IsAlone)) * ((IsLeader * (1 - CursorOnVehicleCanGetIn) * ((1 - PlayerVehicleCanGetIn) + (1 - NotEmptySoldiers)) * (1 - CursorOnEnemy) * (1-EnemyTargeted) * (1 - SelectedArtillery) * (1 - NotEmptyInVehicle) * (1 - IsWatchCommanded) * (1 - SomeSelectedHaveTarget) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)) + (IsLeader * CursorOnGround * SomeSelectedHaveTarget) + (1 - IsLeader))";
			enable="0";
			speechId=0;
		};
		class EmptyBlank1
		{
			title="";
			shortcuts[]={0};
			command="";
			show="(1 - IsLeader) * IsAlone * (1 - CursorOnGround)";
			enable="0";
			speechId=0;
		};
		class Surpress
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Suppress";
			shortcuts[]={0};
			command="CMD_SUPPRESS";
			show="IsLeader * (IsWatchCommanded) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class GetIn
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_GetIn0";
			shortcuts[]={0};
			command="CMD_GETIN_AUTO";
			show="IsLeader * ((NotEmptySoldiers) * (CursorOnVehicleCanGetIn) * (1 - PlayerVehicleCanGetIn) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class GetInCurrent
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_GetIn1";
			shortcuts[]={0};
			command="CMD_GETIN_AUTO";
			show="IsLeader * ((NotEmptySoldiers) * (PlayerVehicleCanGetIn) * (1 - IsWatchCommanded)) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class GetOut
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_GetOut0";
			shortcuts[]={0};
			command="CMD_GETOUT";
			show="IsLeader * ((1 - NotEmptySoldiers) + (NotEmptyInVehicle)) * ((1 - NotEmptySoldiers) + ((1 - CursorOnVehicleCanGetIn) * (1 - PlayerVehicleCanGetIn))) * (NotEmptySoldiers + NotEmptyInVehicle) * (1 - CursorOnEnemy) * (1 - SelectedArtillery) * (1 - IsWatchCommanded) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class Attack
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Attack0";
			shortcuts[]={0};
			command="CMD_ATTACK_AUTO";
			show="IsLeader * CursorOnEnemy*(1-CursorOnEnemyTargeted)*(1-CursorOnEnemyEngaged) * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class Engage
		{
			title="$STR_engage_now";
			shortcuts[]={0};
			command="CMD_ENGAGE_AUTO";
			show="IsLeader * CursorOnEnemyTargeted * EnemyTargeted * (1-EnemyEngaged) * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class Fire
		{
			title="$STR_fire";
			shortcuts[]={0};
			command="CMD_FIRE_AUTO";
			show="IsLeader * CursorOnEnemyEngaged * EnemyEngaged * (1 - IsWatchCommanded) * (1 - SelectedArtillery) * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class FireAtPosition
		{
			title="$STR_fire_at_position";
			shortcuts[]={0};
			command="CMD_FIRE_AT_POSITION_AUTO";
			show="IsLeader * CursorOnGround * SelectedArtillery * (1 - IsWatchCommanded)";
			enable="NotEmpty";
			speechId=0;
		};
		class Heal
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_heal0";
			shortcuts[]={0};
			command="CMD_HEAL";
			show="IsLeader * ((NotEmptySoldiers) * CursorOnNeedHeal * (1 - IsWatchCommanded))";
			enable="NotEmpty";
			speechId=0;
		};
		class FirstAid
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_heal0";
			shortcuts[]={0};
			command="CMD_HEAL";
			show="IsLeader * ((NotEmptySoldiers) * CursorOnNeedFirstAID * (1 - IsWatchCommanded))";
			enable="NotEmpty";
			speechId=0;
		};
		class RepairVehicle
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_repair_vehiclel0";
			shortcuts[]={0};
			command="CMD_REPAIR_VEHICLE";
			show="IsLeader * ((NotEmptySoldiers) * CursorOnNeedRepair * (1 - IsWatchCommanded))";
			enable="NotEmpty";
			speechId=0;
		};
		class CancelTarget
		{
			title="$STR_watch_auto";
			shortcuts[]={0};
			command="CMD_NOTARGET";
			show="IsLeader * (1 - CursorOnGround) * SomeSelectedHaveTarget * (1 - CursorOnNeedFirstAID) * (1 - CursorOnNeedHeal) * (1 - CursorOnNeedRepair)";
			enable="NotEmpty";
			speechId=0;
		};
		class Copy
		{
			title="$STR_REPLY_COPY";
			shortcuts[]={0};
			command="CMD_REPLY_COPY";
			show="(1 - IsLeader) * (1 - IsAlone)";
			enable="CanAnswer";
		};
		class Empty2: Empty1
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Move0";
			show="IsLeader * (1 - CursorOnGround) * (IsWatchCommanded)";
		};
		class EmptyBlank2: Empty1
		{
			title="";
			show="IsAlone";
		};
		class Move
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Move0";
			shortcuts[]={0};
			command="CMD_MOVE_AUTO";
			show="IsLeader * CursorOnGround * (1 - IsWatchCommanded)";
			enable="NotEmpty";
			speechId=0;
		};
		class Watch
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Watch0";
			shortcuts[]={0};
			command="CMD_WATCH_CTX";
			show="IsLeader * CursorOnGround * IsWatchCommanded";
			enable="NotEmpty";
			speechId=0;
		};
		class NextWP
		{
			title="$STR_NEXT_WAYPOINT";
			shortcuts[]={0};
			command="CMD_NEXT_WAYPOINT";
			show="IsLeader * (1 - CursorOnGround) * (1 - IsWatchCommanded)";
			enable="NotEmpty + CommandsToPilot";
			speechId=0;
		};
		class Repeat
		{
			title="$STR_REPLY_REPEAT";
			shortcuts[]={0};
			command="CMD_REPLY_REPEAT";
			show="(1 - IsLeader) * (1 - IsAlone)";
			enable="CanAnswer";
		};
		class EmptyBlank3: Empty1
		{
			title="";
			show="IsAlone";
		};
		class Regroup
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Regroup0";
			shortcuts[]={0};
			command="CMD_JOIN";
			show="IsLeader * NotEmptySubgroups * (NotEmptySoldiers + NotEmptyInVehicle)";
			enable="1";
			speechId=0;
		};
		class Stop
		{
			title="$STR_STOP";
			shortcuts[]={0};
			command="CMD_STOP";
			show="IsLeader * (1 - NotEmptySubgroups) * (NotEmptySoldiers + NotEmptyInVehicle)";
			enable="1";
			speechId=0;
		};
		class FormationDiamond
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_FormationDiamond0";
			shortcuts[]={0};
			command="CMD_FORM_DIAMOND";
			show="IsLeader * (1 - NotEmptySoldiers) * (1 - NotEmptyInVehicle) * (1 - NotEmptySubgroups) * FormationLine";
			enable="1";
			speechId=0;
		};
		class FormationLine
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_FormationLine0";
			shortcuts[]={0};
			command="CMD_FORM_LINE";
			show="IsLeader * (1 - NotEmptySoldiers) * (1 - NotEmptyInVehicle) * (1 - NotEmptySubgroups) * (1 - FormationLine)";
			enable="1";
			speechId=0;
		};
		class Done
		{
			title="$STR_REPLY_DONE";
			shortcuts[]={0};
			command="CMD_REPLY_DONE";
			show="(1 - IsLeader) * (1 - IsAlone)";
			enable="CanAnswer";
		};
		class EmptyBlank4: Empty1
		{
			title="";
			show="IsAlone";
		};
		class OpenFire
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_OpenFire0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 2",
				"0x00050000 + 2"
			};
			command="CMD_OPEN_FIRE";
			show="IsLeader * SomeSelectedHoldingFire";
			enable="NotEmpty";
			speechId=0;
		};
		class HoldFire
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_HoldFire0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 2"
			};
			command="CMD_HOLD_FIRE";
			show="IsLeader * (1 - SomeSelectedHoldingFire)";
			enable="NotEmpty";
			speechId=0;
		};
		class Fail
		{
			title="$STR_REPLY_FAIL";
			shortcuts[]={0};
			command="CMD_REPLY_FAIL";
			show="(1 - IsLeader) * (1 - IsAlone)";
			enable="CanAnswer";
		};
		class Separator
		{
			title="";
			shortcuts[]={0};
			show="(1 - IsAlone)";
			enable="0";
		};
		class Empty5: Empty1
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_empty5";
			show=" (IsLeader * (1 - CursorOnGroupMember))";
		};
		class EmptyBlank5: Empty1
		{
			title="";
			show="IsAlone";
		};
		class JoinAuto
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_JoinAuto0";
			shortcuts[]={0};
			command="CMD_JOIN_AUTO";
			show="IsLeader * CursorOnGroupMember * (CursorOnNotEmptySubgroups)";
			enable="1";
			speechId=0;
		};
		class StopAuto
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_stopauto0";
			shortcuts[]={0};
			command="CMD_STOP_AUTO";
			show="IsLeader * CursorOnGroupMember * (1 - CursorOnNotEmptySubgroups)";
			enable="1";
			speechId=0;
		};
		class OneLess
		{
			title="$STR_REPLY_ONE_LESS";
			shortcuts[]={0};
			command="CMD_REPLY_ONE_LESS";
			show="(1 - IsLeader) * (1 - IsAlone)";
		};
		class Empty6: Empty1
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_empty6";
			show="(IsLeader * (1 - CursorOnGroupMember))";
		};
		class EmptyBlank6: Empty1
		{
			title="";
			show="IsAlone";
		};
		class OpenFireAuto
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_OpenFireAuto0";
			shortcuts[]={0};
			command="CMD_OPEN_FIRE_AUTO";
			show="IsLeader * CursorOnGroupMember * CursorOnHoldingFire";
			enable="1";
			speechId=0;
		};
		class HoldFireAuto
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_HoldFireAuto0";
			shortcuts[]={0};
			command="CMD_HOLD_FIRE_AUTO";
			show="IsLeader * CursorOnGroupMember * (1 - CursorOnHoldingFire)";
			enable="1";
			speechId=0;
		};
		class WhereAreYou
		{
			title="$STR_REPLY_WHERE_ARE_YOU";
			shortcuts[]={0};
			command="CMD_REPLY_WHERE_ARE_YOU";
			show="(1 - IsLeader) * (1 - IsAlone)";
		};
		class Empty7: Empty1
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_empty7";
			show="(IsLeader * (1 - CursorOnGroupMember) * (1 - CursorOnGroupMemberSelected))";
		};
		class EmptyBlank7: Empty1
		{
			title="";
			show="IsAlone";
		};
		class Select
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_SelectSet0";
			shortcuts[]={0};
			command="CMD_SELECT_AUTO";
			show="IsLeader * CursorOnGroupMember * (1 - IsSelectedToAdd)";
			enable="1";
			speechId=0;
		};
		class SelectAdd
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Select0";
			shortcuts[]={0};
			command="CMD_SELECT_AUTO_ADD";
			show="IsLeader * CursorOnGroupMember * (1 - CursorOnGroupMemberSelected) * IsSelectedToAdd";
			enable="1";
			speechId=0;
		};
		class Deselect
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Deselect0";
			shortcuts[]={0};
			command="CMD_DESELECT_AUTO";
			show="IsLeader * (CursorOnGroupMemberSelected) * IsSelectedToAdd";
			enable="1";
			speechId=0;
		};
		class UserRadio
		{
			title="$STR_RADIO_CUSTOM";
			shortcuts[]={0};
			menu="#CUSTOM_RADIO";
			show="(1 - IsLeader) * (1 - IsAlone)";
		};
		class Empty9: Empty1
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_empty9";
			show="(IsXbox) * (1 - (IsLeader) * (1 - (IsLeader * (1 - CanSelectUnitFromBar) * (1 - CanDeselectUnitFromBar) * (1 - CanSelectVehicleFromBar) * (1 - CanDeselectVehicleFromBar) * (1 - CanSelectTeamFromBar) * (1 - CanDeselectTeamFromBar))))";
		};
		class EmptyBlank9: Empty1
		{
			title="";
			show="(1 - IsXbox) * (1 - (IsLeader) * (1 - (IsLeader * (1 - CanSelectUnitFromBar) * (1 - CanDeselectUnitFromBar) * (1 - CanSelectVehicleFromBar) * (1 - CanDeselectVehicleFromBar) * (1 - CanSelectTeamFromBar) * (1 - CanDeselectTeamFromBar))))";
			enable="0";
		};
		class SelectUnitFromBar
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_SelectUnitFromBar0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 3"
			};
			command="CMD_SELECT_UNIT_FROM_BAR";
			show="IsXbox  * CanSelectUnitFromBar";
			enable="NotEmpty";
			speechId=0;
		};
		class DeselectUnitFromBar
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_DeselectUnitFromBar0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 3"
			};
			command="CMD_DESELECT_UNIT_FROM_BAR";
			show="IsXbox  * CanDeselectUnitFromBar";
			enable="NotEmpty";
			speechId=0;
		};
		class SelectVehicleFromBar
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_SelectVehicleFromBar0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 3"
			};
			command="CMD_SELECT_VEHICLE_FROM_BAR";
			show="IsXbox  * CanSelectVehicleFromBar";
			enable="NotEmpty";
			speechId=0;
		};
		class DeselectVehicleFromBar
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_DeselectVehicleFromBar0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 3"
			};
			command="CMD_DESELECT_VEHICLE_FROM_BAR";
			show="IsXbox  * CanDeselectVehicleFromBar";
			enable="NotEmpty";
			speechId=0;
		};
		class SelectTeamFromBar
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_SelectTeamFromBar0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 3"
			};
			command="CMD_SELECT_TEAM_FROM_BAR";
			show="IsXbox  * CanSelectTeamFromBar";
			enable="NotEmpty";
			speechId=0;
		};
		class DeselectTeamFromBar
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_DeselectTeamFromBar0";
			shortcuts[]=
			{
				0,
				"0x00050000 + 3"
			};
			command="CMD_DESELECT_TEAM_FROM_BAR";
			show="IsXbox  * CanDeselectTeamFromBar";
			enable="NotEmpty";
			speechId=0;
		};
		class EmptyBlank8: Empty1
		{
			title="";
			show="IsAlone";
		};
		class SwitchToLeader
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_SwitchToLeader0";
			shortcuts[]={0};
			command="CMD_SWITCH_TO_LEADER";
			show="(1 - IsLeader) * (1 - IsAlone) * PlayableLeader";
			enable="1";
			speechId=0;
		};
		class SwitchToSelected
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_SwitchToSelected0";
			shortcuts[]={0};
			command="CMD_SWITCH_TO_SELECTED";
			show="IsLeader * PlayableSelected";
			enable="NotEmpty";
			speechId=0;
		};
		class Team
		{
			title="$STR_TEAM";
			shortcuts[]={0};
			menu="RscTeam";
			show="IsLeader * (1 - PlayableSelected)";
			speechId=0;
		};
		class Empty10: Empty1
		{
			title="$STR_rscmenu.hpprscgrouprootmenu_items_empty0";
			show="(1 - FuelLow) * (1 - AmmoLow) * (1 - Injured)";
		};
		class Injured
		{
			title="$STR_REPLY_INJURED";
			shortcuts[]={0};
			command="CMD_REPLY_INJURED";
			show="Injured";
		};
		class AmmoLow
		{
			title="$STR_REPLY_AMMO_LOW";
			shortcuts[]={0};
			command="CMD_REPLY_AMMO_LOW";
			show="AmmoLow * (1 - Injured)";
		};
		class FuelLow
		{
			title="$STR_REPLY_FUEL_LOW";
			shortcuts[]={0};
			command="CMD_REPLY_FUEL_LOW";
			show="FuelLow * (1 - AmmoLow) * (1 - Injured)";
		};
		class Communication
		{
			title="$STR_rscMenu.hppRscGroupRootMenu_Items_Communication0";
			shortcuts[]={0};
			menu="#User:BIS_MENU_GroupCommunication";
			show="1";
			enable="1";
			speechId=0;
		};
	};
};
class RscMainMenu
{
	access=0;
	title="$STR_COMMAND";
	atomic=0;
	vocabulary="";
	class Items
	{
		class Move
		{
			title="$STR_MOVE";
			shortcuts[]={2};
			menu="RscMoveHigh";
			show="IsLeader + VehicleCommander";
			enable="NotEmpty + CommandsToPilot";
			speechId=0;
		};
		class Target
		{
			title="$STR_WATCH_TARGET";
			shortcuts[]={3};
			menu="#WATCH";
			show="IsLeader + VehicleCommander";
			enable="NotEmpty + CommandsToGunner";
			speechId=0;
		};
		class Engage
		{
			title="$STR_WATCH";
			shortcuts[]={4};
			menu="RscWatchDir";
			show="IsLeader + VehicleCommander";
			enable="NotEmpty + CommandsToGunner";
			speechId=0;
		};
		class GetIn
		{
			title="$STR_GETIN";
			shortcuts[]={5};
			menu="#GET_IN";
			show="IsLeader";
			enable="NotEmpty";
			speechId=0;
		};
		class Status
		{
			title="$STR_STATUS";
			shortcuts[]={6};
			menu="RscStatus";
			speechId=0;
		};
		class Action
		{
			title="$STR_ACTION";
			shortcuts[]={7};
			menu="#ACTION";
			show="IsLeader";
			enable="AreActions";
			speechId=0;
		};
		class CombatMode
		{
			title="$STR_COMBAT_MODE";
			shortcuts[]={8};
			menu="RscCombatMode";
			show="IsLeader + VehicleCommander";
			enable="NotEmpty + CommandsToGunner";
			speechId=0;
		};
		class Formations
		{
			title="$STR_FORMATION";
			shortcuts[]={9};
			menu="RscFormations";
			show="IsLeader";
			speechId=0;
		};
		class Team
		{
			title="$STR_TEAM";
			shortcuts[]={10};
			menu="RscTeam";
			show="IsLeader";
			speechId=0;
		};
		class Reply
		{
			title="$STR_REPLY";
			shortcuts[]={11};
			menu="RscReply";
			speechId=0;
		};
		class Back
		{
			title="";
			shortcuts[]={14};
			command=-4;
			speechId=0;
		};
	};
};
class RscSubmenu
{
	access=0;
	atomic=0;
	class Separator
	{
		title="";
		shortcuts[]={0};
		command=-1;
	};
	class Back
	{
		title="";
		shortcuts[]={14};
		command=-4;
		speechId=0;
	};
};
class RscMoveHigh: RscSubmenu
{
	title="$STR_MOVE";
	vocabulary="";
	items[]=
	{
		"Join",
		"Separator",
		"Advance",
		"StayBack",
		"FlankLeft",
		"FlankRight",
		"Separator",
		"Stop",
		"Expect",
		"Hide",
		"Separator",
		"NextWP",
		"Back"
	};
	class Join
	{
		title="$STR_FOLLOW_ME";
		shortcuts[]={2};
		command="CMD_JOIN";
		show="IsLeader + VehicleCommander";
		enable="NotEmpty + CommandsToPilot";
		speechId=0;
	};
	class Advance
	{
		title="$STR_ADVANCE";
		shortcuts[]={3};
		command="CMD_ADVANCE";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class StayBack
	{
		title="$STR_STAY_BACK";
		shortcuts[]={4};
		command="CMD_STAY_BACK";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class FlankLeft
	{
		title="$STR_FLANK_LEFT";
		shortcuts[]={5};
		command="CMD_FLANK_LEFT";
		show="IsLeader";
		enable="NotEmpty";
	};
	class FlankRight
	{
		title="$STR_FLANK_RIGHT";
		shortcuts[]={6};
		command="CMD_FLANK_RIGHT";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Stop
	{
		title="$STR_STOP";
		shortcuts[]={7};
		command="CMD_STOP";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class Expect
	{
		title="$STR_EXPECT";
		shortcuts[]={8};
		command="CMD_EXPECT";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Hide
	{
		title="$STR_HIDE";
		shortcuts[]={9};
		command="CMD_HIDE";
		show="IsLeader";
		enable="NotEmpty";
	};
	class NextWP
	{
		title="$STR_NEXT_WAYPOINT";
		shortcuts[]={10};
		command="CMD_NEXT_WAYPOINT";
		show="IsLeader + VehicleCommander";
		enable="NotEmpty + CommandsToPilot";
		speechId=0;
	};
};
class RscMoveDir: RscSubmenu
{
	atomic=1;
	title="$STR_MOVE_DIR";
	vocabulary="";
	items[]=
	{
		"N",
		"NE",
		"E",
		"SE",
		"S",
		"SW",
		"W",
		"NW",
		"Back"
	};
	class N
	{
		title="$STR_MOVE_N";
		shortcuts[]={2};
		menu="RscMoveDist";
		class Params
		{
			dir=0;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class NE
	{
		title="$STR_MOVE_NE";
		shortcuts[]={3};
		menu="RscMoveDist";
		class Params
		{
			dir=45;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class E
	{
		title="$STR_MOVE_E";
		shortcuts[]={4};
		menu="RscMoveDist";
		class Params
		{
			dir=90;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class SE
	{
		title="$STR_MOVE_SE";
		shortcuts[]={5};
		menu="RscMoveDist";
		class Params
		{
			dir=135;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class S
	{
		title="$STR_MOVE_S";
		shortcuts[]={6};
		menu="RscMoveDist";
		class Params
		{
			dir=180;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class SW
	{
		title="$STR_MOVE_SW";
		shortcuts[]={7};
		menu="RscMoveDist";
		class Params
		{
			dir=225;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class W
	{
		title="$STR_MOVE_W";
		shortcuts[]={8};
		menu="RscMoveDist";
		class Params
		{
			dir=270;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class NW
	{
		title="$STR_MOVE_NW";
		shortcuts[]={9};
		menu="RscMoveDist";
		class Params
		{
			dir=315;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
};
class RscReply: RscSubmenu
{
	title="$STR_REPLY_MENU";
	vocabulary="";
	items[]=
	{
		"Done",
		"Fail",
		"FireReady",
		"FireNotReady",
		"Repeat",
		"Copy",
		"Separator",
		"Communication",
		"UserRadio",
		"Radio",
		"Back"
	};
	class Done
	{
		title="$STR_REPLY_DONE";
		shortcuts[]={2};
		command="CMD_REPLY_DONE";
		enable="CanAnswer";
	};
	class Fail
	{
		title="$STR_REPLY_FAIL";
		shortcuts[]={3};
		command="CMD_REPLY_FAIL";
		enable="CanAnswer";
	};
	class FireReady
	{
		title="$STR_REPLY_FIREREADY";
		shortcuts[]={4};
		command="CMD_REPLY_FIREREADY";
	};
	class FireNotReady
	{
		title="$STR_REPLY_FIRENOTREADY";
		shortcuts[]={5};
		command="CMD_REPLY_FIRENOTREADY";
	};
	class Repeat
	{
		title="$STR_REPLY_REPEAT";
		shortcuts[]={7};
		command="CMD_REPLY_REPEAT";
		enable="CanAnswer";
	};
	class Copy
	{
		title="$STR_REPLY_COPY";
		shortcuts[]={8};
		command="CMD_REPLY_COPY";
		enable="CanAnswer";
	};
	class Separator
	{
		title="";
		shortcuts[]={0};
		command=-1;
	};
	class Communication
	{
		title="$STR_rscMenu.hppRscGroupRootMenu_Items_Communication0";
		shortcuts[]={9};
		menu="#User:BIS_MENU_GroupCommunication";
		show="1";
		enable="1";
		speechId=0;
	};
	class UserRadio
	{
		title="$STR_RADIO_CUSTOM";
		shortcuts[]={10};
		menu="#CUSTOM_RADIO";
	};
	class Radio
	{
		title="$STR_RADIO";
		shortcuts[]={11};
		menu="RscRadio";
		enable="HasRadio";
	};
};
class RscCallSupport: RscSubmenu
{
	title="$STR_SUPPORT_MENU";
	vocabulary="";
	items[]=
	{
		"Medic",
		"Ambulance",
		"Repair",
		"Rearm",
		"Refuel",
		"Done",
		"Back"
	};
	class Medic
	{
		title="$STR_SUPPORT_MEDIC";
		shortcuts[]={2};
		command="CMD_SUPPORT_MEDIC";
		show="IsLeader";
		speechId=0;
	};
	class Ambulance
	{
		title="Ambulance";
		shortcuts[]={3};
		command="CMD_SUPPORT_AMBULANCE";
		show="IsLeader";
		speechId=0;
	};
	class Repair
	{
		title="$STR_SUPPORT_REPAIR";
		shortcuts[]={4};
		command="CMD_SUPPORT_REPAIR";
		show="IsLeader";
		speechId=0;
	};
	class Rearm
	{
		title="$STR_SUPPORT_REARM";
		shortcuts[]={5};
		command="CMD_SUPPORT_REARM";
		show="IsLeader";
		speechId=0;
	};
	class Refuel
	{
		title="$STR_SUPPORT_REFUEL";
		shortcuts[]={6};
		command="CMD_SUPPORT_REFUEL";
		show="IsLeader";
		speechId=0;
	};
	class Done
	{
		title="$STR_SUPPORT_DONE";
		shortcuts[]={7};
		command="CMD_SUPPORT_DONE";
		show="IsLeader";
		speechId=0;
	};
};
class RscStatus: RscSubmenu
{
	title="$STR_MENU_STATUS";
	vocabulary="";
	items[]=
	{
		"Support",
		"FuelLow",
		"AmmoLow",
		"Injured",
		"WhereAreYou",
		"Report",
		"UnderFire",
		"OneLess",
		"IsDown",
		"Back"
	};
	class Support
	{
		title="$STR_CALL_SUPPORT";
		shortcuts[]={2};
		menu="RscCallSupport";
	};
	class FuelLow
	{
		title="$STR_REPLY_FUEL_LOW";
		shortcuts[]={3};
		command="CMD_REPLY_FUEL_LOW";
	};
	class AmmoLow
	{
		title="$STR_REPLY_AMMO_LOW";
		shortcuts[]={4};
		command="CMD_REPLY_AMMO_LOW";
	};
	class Injured
	{
		title="$STR_REPLY_INJURED";
		shortcuts[]={5};
		command="CMD_REPLY_INJURED";
	};
	class WhereAreYou
	{
		title="$STR_REPLY_WHERE_ARE_YOU";
		shortcuts[]={6};
		command="CMD_REPLY_WHERE_ARE_YOU";
		show="1 - IsLeader";
	};
	class Report
	{
		title="$STR_REPORT";
		shortcuts[]={6};
		command="CMD_REPORT";
		show="IsLeader";
		enable="NotEmpty";
	};
	class UnderFire
	{
		title="$STR_REPLY_UNDER_FIRE";
		shortcuts[]={7};
		command="CMD_REPLY_UNDER_FIRE";
	};
	class OneLess
	{
		title="$STR_REPLY_ONE_LESS";
		shortcuts[]={8};
		command="CMD_REPLY_ONE_LESS";
	};
	class IsDown
	{
		title="$STR_REPLY_KILLED";
		shortcuts[]={9};
		command="CMD_REPLY_KILLED";
		enable="NotEmpty";
	};
};
class RscWatchDir: RscSubmenu
{
	title="$STR_WATCH";
	vocabulary="";
	items[]=
	{
		"OpenFire",
		"HoldFire",
		"Fire",
		"Separator",
		"Engage",
		"EngageAtWill",
		"Disengage",
		"Separator",
		"LookAround",
		"WatchDir",
		"Separator",
		"Suppress",
		"Back"
	};
	class OpenFire
	{
		title="$STR_OPEN_FIRE";
		shortcuts[]={2};
		command="CMD_OPEN_FIRE";
		show="IsLeader + VehicleCommander";
		enable="NotEmpty + CommandsToGunner";
	};
	class HoldFire
	{
		title="$STR_HOLD_FIRE";
		shortcuts[]={3};
		command="CMD_HOLD_FIRE";
		show="IsLeader + VehicleCommander";
		enable="NotEmpty + CommandsToGunner";
	};
	class Fire
	{
		title="$STR_FIRE";
		shortcuts[]={4};
		command="CMD_FIRE";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Engage
	{
		title="$STR_ENGAGE_NOW";
		shortcuts[]={5};
		command="CMD_ENGAGE";
		show="IsLeader";
		enable="NotEmpty";
	};
	class EngageAtWill
	{
		title="$STR_ENGAGE_AT_WILL";
		shortcuts[]={6};
		command="CMD_LOOSE_FORM";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Disengage
	{
		title="$STR_DISENGAGE";
		shortcuts[]={7};
		command="CMD_KEEP_FORM";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Auto
	{
		title="$STR_WATCH_AUTO";
		shortcuts[]={8};
		command="CMD_WATCH_AUTO";
		show="IsLeader";
		enable="NotEmpty";
	};
	class LookAround
	{
		title="$STR_LOOK_AROUND";
		shortcuts[]={8};
		command="CMD_WATCH_AROUND";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class WatchDir
	{
		title="$STR_WATCH_DIR";
		shortcuts[]={9};
		menu="RscWatchMoreDir";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class Suppress
	{
		title="$STR_rscMenu.hppRscGroupRootMenu_Items_Suppress";
		shortcuts[]={10};
		command="CMD_SUPPRESS";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
};
class RscWatchMoreDir: RscSubmenu
{
	title="$STR_WATCH_DIR";
	atomic=1;
	vocabulary="";
	items[]=
	{
		"N",
		"NE",
		"E",
		"SE",
		"S",
		"SW",
		"W",
		"NW",
		"Back"
	};
	class N
	{
		title="$STR_MOVE_N";
		shortcuts[]={2};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=0;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class NE
	{
		title="$STR_MOVE_NE";
		shortcuts[]={3};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=45;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class E
	{
		title="$STR_MOVE_E";
		shortcuts[]={4};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=90;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class SE
	{
		title="$STR_MOVE_SE";
		shortcuts[]={5};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=135;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class S
	{
		title="$STR_MOVE_S";
		shortcuts[]={6};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=180;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class SW
	{
		title="$STR_MOVE_SW";
		shortcuts[]={7};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=225;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class W
	{
		title="$STR_MOVE_W";
		shortcuts[]={8};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=270;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class NW
	{
		title="$STR_MOVE_NW";
		shortcuts[]={9};
		command="CMD_WATCH_DIR";
		class Params
		{
			dir=315;
		};
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
};
class RscMoveDist: RscSubmenu
{
	title="$STR_MOVE_DIST";
	vocabulary="";
	items[]=
	{
		"D50",
		"D100",
		"D200",
		"D500",
		"D1000",
		"D2000",
		"Back"
	};
	class D50
	{
		title="$STR_MOVE_50";
		shortcuts[]={2};
		command="CMD_MOVE";
		class Params
		{
			dist=50;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class D100
	{
		title="$STR_MOVE_100";
		shortcuts[]={3};
		command="CMD_MOVE";
		class Params
		{
			dist=100;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class D200
	{
		title="$STR_MOVE_200";
		shortcuts[]={4};
		command="CMD_MOVE";
		class Params
		{
			dist=200;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class D500
	{
		title="$STR_MOVE_500";
		shortcuts[]={5};
		command="CMD_MOVE";
		class Params
		{
			dist=500;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class D1000
	{
		title="$STR_MOVE_1000";
		shortcuts[]={6};
		command="CMD_MOVE";
		class Params
		{
			dist=1000;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
	class D2000
	{
		title="$STR_MOVE_2000";
		shortcuts[]={7};
		command="CMD_MOVE";
		class Params
		{
			dist=2000;
		};
		show="IsLeader";
		enable="NotEmpty";
	};
};
class RscFormations: RscSubmenu
{
	title="$STR_FORMATION";
	vocabulary="";
	items[]=
	{
		"Column",
		"Staggered",
		"Wedge",
		"EchL",
		"EchR",
		"Vee",
		"Line",
		"File",
		"Diamond",
		"Back"
	};
	class Column
	{
		title="$STR_COLUMN";
		shortcuts[]={2};
		command="CMD_FORM_COLUMN";
		show="IsLeader";
		speechId=0;
	};
	class Staggered
	{
		title="$STR_STAGGERED";
		shortcuts[]={3};
		command="CMD_FORM_STAGCOL";
		show="IsLeader";
	};
	class Wedge
	{
		title="$STR_WEDGE";
		shortcuts[]={4};
		command="CMD_FORM_WEDGE";
		show="IsLeader";
		speechId=0;
	};
	class EchL
	{
		title="$STR_ECHL";
		shortcuts[]={5};
		command="CMD_FORM_ECHLEFT";
		show="IsLeader";
		speechId=0;
	};
	class EchR
	{
		title="$STR_ECHR";
		shortcuts[]={6};
		command="CMD_FORM_ECHRIGHT";
		show="IsLeader";
		speechId=0;
	};
	class Vee
	{
		title="$STR_VEE";
		shortcuts[]={7};
		command="CMD_FORM_VEE";
		show="IsLeader";
	};
	class Line
	{
		title="$STR_LINE";
		shortcuts[]={8};
		command="CMD_FORM_LINE";
		show="IsLeader";
		speechId=0;
	};
	class File
	{
		title="$STR_FILE";
		shortcuts[]={9};
		command="CMD_FORM_FILE";
		show="IsLeader";
		speechId=0;
	};
	class Diamond
	{
		title="$STR_DIAMOND";
		shortcuts[]={10};
		command="CMD_FORM_DIAMOND";
		show="IsLeader";
		speechId=0;
	};
};
class RscCombatMode: RscSubmenu
{
	title="$STR_COMBAT_MODE";
	vocabulary="";
	items[]=
	{
		"Stealth",
		"Combat",
		"Aware",
		"Safe",
		"Separator",
		"PosUp",
		"PosCrouch",
		"PosDown",
		"PosAuto",
		"Back"
	};
	class Stealth
	{
		title="$STR_STEALTH";
		shortcuts[]={2};
		command="CMD_STEALTH";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Combat
	{
		title="$STR_COMBAT";
		shortcuts[]={3};
		command="CMD_COMBAT";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Aware
	{
		title="$STR_AWARE";
		shortcuts[]={4};
		command="CMD_AWARE";
		show="IsLeader";
		enable="NotEmpty";
	};
	class Safe
	{
		title="$STR_SAFE";
		shortcuts[]={5};
		command="CMD_SAFE";
		show="IsLeader";
		enable="NotEmpty";
	};
	class PosUp
	{
		title="$STR_POS_UP";
		shortcuts[]={7};
		command="CMD_POS_UP";
		show="IsLeader";
		enable="NotEmptySoldiers";
		speechId=0;
	};
	class PosCrouch
	{
		title="$STR_POS_CROUCH";
		shortcuts[]={8};
		command="CMD_POS_MIDDLE";
		show="IsLeader";
		enable="NotEmptySoldiers";
		speechId=0;
	};
	class PosDown
	{
		title="$STR_POS_DOWN";
		shortcuts[]={9};
		command="CMD_POS_DOWN";
		show="IsLeader";
		enable="NotEmptySoldiers";
		speechId=0;
	};
	class PosAuto
	{
		title="$STR_POS_AUTO";
		shortcuts[]={10};
		command="CMD_POS_AUTO";
		show="IsLeader";
		enable="NotEmptySoldiers";
		speechId=0;
	};
};
class RscTeam: RscSubmenu
{
	title="$STR_ASSIGN";
	vocabulary="";
	items[]=
	{
		"AssignRed",
		"AssignGreen",
		"AssignBlue",
		"AssignYellow",
		"AssignMain",
		"Separator",
		"SelectTeam",
		"Back"
	};
	class AssignRed
	{
		title="$STR_ASSIGN_RED";
		shortcuts[]={2};
		command="CMD_ASSIGN_RED";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class AssignGreen
	{
		title="$STR_ASSIGN_GREEN";
		shortcuts[]={3};
		command="CMD_ASSIGN_GREEN";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class AssignBlue
	{
		title="$STR_ASSIGN_BLUE";
		shortcuts[]={4};
		command="CMD_ASSIGN_BLUE";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class AssignYellow
	{
		title="$STR_ASSIGN_YELLOW";
		shortcuts[]={5};
		command="CMD_ASSIGN_YELLOW";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class AssignMain
	{
		title="$STR_ASSIGN_MAIN";
		shortcuts[]={6};
		command="CMD_ASSIGN_MAIN";
		show="IsLeader";
		enable="NotEmpty";
		speechId=0;
	};
	class SelectTeam
	{
		title="$STR_TEAM";
		shortcuts[]={10};
		menu="RscSelectTeam";
		show="IsLeader";
	};
};
class RscSelectTeam: RscSubmenu
{
	title="$STR_TEAM";
	vocabulary="";
	items[]=
	{
		"TeamRed",
		"TeamGreen",
		"TeamBlue",
		"TeamYellow",
		"TeamMain",
		"Back"
	};
	class TeamRed
	{
		title="$STR_TEAM_RED";
		shortcuts[]={2};
		command="CMD_TEAM_RED";
		show="IsLeader";
		enable="NotEmptyRedTeam";
	};
	class TeamGreen
	{
		title="$STR_TEAM_GREEN";
		shortcuts[]={3};
		command="CMD_TEAM_GREEN";
		show="IsLeader";
		enable="NotEmptyGreenTeam";
	};
	class TeamBlue
	{
		title="$STR_TEAM_BLUE";
		shortcuts[]={4};
		command="CMD_TEAM_BLUE";
		show="IsLeader";
		enable="NotEmptyBlueTeam";
	};
	class TeamYellow
	{
		title="$STR_TEAM_YELLOW";
		shortcuts[]={5};
		command="CMD_TEAM_YELLOW";
		show="IsLeader";
		enable="NotEmptyYellowTeam";
	};
	class TeamMain
	{
		title="$STR_TEAM_MAIN";
		shortcuts[]={6};
		command="CMD_TEAM_MAIN";
		show="IsLeader";
		enable="NotEmptyMainTeam";
	};
};
class RscRadio: RscSubmenu
{
	title="$STR_RADIO";
	vocabulary="";
	items[]=
	{
		"Alpha",
		"Bravo",
		"Charlie",
		"Delta",
		"Echo",
		"Foxtrot",
		"Golf",
		"Hotel",
		"India",
		"Juliet",
		"Back"
	};
	class Alpha
	{
		title="$STR_RADIO_ALPHA";
		shortcuts[]={2};
		command="CMD_RADIO_ALPHA";
		speechId=0;
	};
	class Bravo
	{
		title="$STR_RADIO_BRAVO";
		shortcuts[]={3};
		command="CMD_RADIO_BRAVO";
		speechId=0;
	};
	class Charlie
	{
		title="$STR_RADIO_CHARLIE";
		shortcuts[]={4};
		command="CMD_RADIO_CHARLIE";
		speechId=0;
	};
	class Delta
	{
		title="$STR_RADIO_DELTA";
		shortcuts[]={5};
		command="CMD_RADIO_DELTA";
		speechId=0;
	};
	class Echo
	{
		title="$STR_RADIO_ECHO";
		shortcuts[]={6};
		command="CMD_RADIO_ECHO";
		speechId=0;
	};
	class Foxtrot
	{
		title="$STR_RADIO_FOXTROT";
		shortcuts[]={7};
		command="CMD_RADIO_FOXTROT";
		speechId=0;
	};
	class Golf
	{
		title="$STR_RADIO_GOLF";
		shortcuts[]={8};
		command="CMD_RADIO_GOLF";
		speechId=0;
	};
	class Hotel
	{
		title="$STR_RADIO_HOTEL";
		shortcuts[]={9};
		command="CMD_RADIO_HOTEL";
		speechId=0;
	};
	class India
	{
		title="$STR_RADIO_INDIA";
		shortcuts[]={10};
		command="CMD_RADIO_INDIA";
		speechId=0;
	};
	class Juliet
	{
		title="$STR_RADIO_JULIET";
		shortcuts[]={11};
		command="CMD_RADIO_JULIET";
		speechId=0;
	};
};
class RscMenuBasicLevel
{
	access=0;
	title="$STR_COMMAND";
	atomic=0;
	vocabulary="";
	items[]={};
};
class RadioChannels
{
	class GlobalChannel
	{
		level=1;
		noise="loop";
		micOuts="micOuts";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
	};
	class SideChannel
	{
		level=2;
		noise="loop";
		micOuts="micOuts";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
	};
	class CommandChannel
	{
		level=3;
		noise="loop";
		micOuts="micOuts";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
	};
	class GroupChannel
	{
		level=4;
		noise="loop";
		micOuts="micOuts";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
	};
	class VehicleChannel
	{
		level=5;
		noise="";
		micOuts="";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
	};
	class DirectSpeakingChannel
	{
		level=0;
		noise="";
		micOuts="";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
		sound3D=1;
	};
	class ItemTransmitterChannel
	{
		level=5;
		noise="";
		micOuts="";
		pauseAfterWord=0;
		pauseInNumber=0;
		pauseAfterNumber=0;
		pauseInUnitList=0;
		pauseAfterUnitList=0.050000001;
	};
};
class RadioProtocolBase
{
	access=0;
	class Words
	{
		loop[]={};
		pause[]={};
		xmit[]={};
		zero[]={};
		one[]={};
		two[]={};
		three[]={};
		four[]={};
		five[]={};
		six[]={};
		seven[]={};
		eight[]={};
		nine[]={};
		ten[]={};
		eleven[]={};
		twelve[]={};
		thirteen[]={};
		fourteen[]={};
		fifteen[]={};
		sixteen[]={};
		seventeen[]={};
		eighteen[]={};
		nineteen[]={};
		twenty[]={};
		thirty[]={};
		forty[]={};
		fifty[]={};
		sixty[]={};
		seventy[]={};
		eighty[]={};
		ninety[]={};
		hundred[]={};
		zero2[]={};
		one2[]={};
		two2[]={};
		three2[]={};
		four2[]={};
		five2[]={};
		six2[]={};
		seven2[]={};
		eight2[]={};
		nine2[]={};
		ten2[]={};
		eleven2[]={};
		twelve2[]={};
		alpha[]={};
		bravo[]={};
		charlie[]={};
		delta[]={};
		echo[]={};
		foxtrot[]={};
		golf[]={};
		hotel[]={};
		india[]={};
		juliet[]={};
		kilo[]={};
		lima[]={};
		mike[]={};
		november[]={};
		oscar[]={};
		papa[]={};
		quebec[]={};
		romeo[]={};
		sierra[]={};
		tango[]={};
		uniform[]={};
		victor[]={};
		whiskey[]={};
		xray[]={};
		yankee[]={};
		zulu[]={};
		all[]={};
		allGroup[]={};
		whiteTeam[]={};
		redTeam[]={};
		greenTeam[]={};
		blueTeam[]={};
		yellowTeam[]={};
		unknown[]={};
		enemy[]={};
		friendly[]={};
		neutral[]={};
		north[]={};
		northEast[]={};
		east[]={};
		southEast[]={};
		south[]={};
		southWest[]={};
		west[]={};
		northWest[]={};
		at10[]={};
		at11[]={};
		at12[]={};
		at1[]={};
		at2[]={};
		at3[]={};
		at4[]={};
		at5[]={};
		at6[]={};
		at7[]={};
		at8[]={};
		at9[]={};
		dist50[]={};
		dist100[]={};
		dist200[]={};
		dist500[]={};
		dist1000[]={};
		dist2000[]={};
		far[]={};
		inFrontOf[]={};
		rightOf[]={};
		behind[]={};
		leftOf[]={};
		dangerCloseTo[]={};
		notFarFrom[]={};
		farFrom[]={};
		front[]={};
		right[]={};
		rear[]={};
		left[]={};
		rightFlank[]={};
		leftFlank[]={};
		damnClose[]={};
		notFar[]={};
		closeTo[]={};
		and[]={};
	};
	class Default
	{
		priority=0;
		timeout=1000;
	};
	class Report
	{
		priority=100;
		timeout=30;
	};
	class PriorityReport
	{
		priority=200;
		timeout=60;
	};
	class Confirmation
	{
		priority=300;
		timeout=3;
	};
	class Completition
	{
		priority=400;
		timeout=5;
	};
	class JoinCompleted
	{
		priority=400;
		timeout=30;
	};
	class Failure
	{
		priority=500;
		timeout=30;
	};
	class Notify
	{
		priority=600;
		timeout=5;
	};
	class Detected
	{
		priority=700;
		timeout=5;
	};
	class NormalCommand
	{
		priority=800;
		timeout=1000;
	};
	class CriticalReport
	{
		priority=850;
		timeout=60;
	};
	class UrgentCommand
	{
		priority=900;
		timeout=1000;
	};
	class UICommand
	{
		priority=1000;
		timeout=1000;
	};
	class Design
	{
		priority=950;
		timeout=1000;
	};
	class SentUnitKilled: CriticalReport
	{
		versions[]={};
	};
	class SentSupportAskHeal: NormalCommand
	{
		versions[]={};
	};
	class SentSupportAskRepair: NormalCommand
	{
		versions[]={};
	};
	class SentSupportAskRefuel: NormalCommand
	{
		versions[]={};
	};
	class SentSupportAskRearm: NormalCommand
	{
		versions[]={};
	};
	class SentSupportConfirm: NormalCommand
	{
		versions[]={};
	};
	class SentSupportReady: NormalCommand
	{
		versions[]={};
	};
	class SentSupportDone: NormalCommand
	{
		versions[]={};
	};
	class SentSupportNotAvailable: NormalCommand
	{
		versions[]={};
	};
	class SentHealthCritical: CriticalReport
	{
		versions[]={};
	};
	class SentDammageCritical: CriticalReport
	{
		versions[]={};
	};
	class SentFuelCritical: CriticalReport
	{
		versions[]={};
	};
	class SentFuelLow: Report
	{
		versions[]={};
	};
	class SentAmmoCritical: CriticalReport
	{
		versions[]={};
	};
	class SentAmmoLow: Report
	{
		versions[]={};
	};
	class SentReportPosition: Report
	{
		versions[]={};
	};
	class SentIsLeader: CriticalReport
	{
		versions[]={};
	};
	class SentCommandCompleted: Completition
	{
		versions[]={};
	};
	class SentJoinCompleted: JoinCompleted
	{
		versions[]={};
	};
	class SentFireReady: Completition
	{
		versions[]={};
	};
	class SentFireNegative: Completition
	{
		versions[]={};
	};
	class SentCommandFailed: Failure
	{
		versions[]={};
	};
	class SentDestinationUnreacheable: Failure
	{
		versions[]={};
	};
	class SelectEnemyDetectedSentence
	{
		sentences[]={};
	};
	class SentEnemyDetectedGroupCoreRelative: Detected
	{
		versions[]={};
	};
	class SentEnemyDetectedOnGridReference: Detected
	{
		versions[]={};
	};
	class SentEnemyDetectedLocationRelative: Detected
	{
		versions[]={};
	};
	class SentEnemyDetectedUnitRelative: Detected
	{
		versions[]={};
	};
	class SentEnemyDetectedSenderRelative: Detected
	{
		versions[]={};
	};
	class SentObjectDestroyed: Completition
	{
		versions[]={};
	};
	class SentObjectDestroyedUnknown: Completition
	{
		versions[]={};
	};
	class SentContact: UrgentCommand
	{
		versions[]={};
	};
	class SentUnderFire: UrgentCommand
	{
		versions[]={};
	};
	class SentCoverMe: Confirmation
	{
		versions[]={};
	};
	class SentCovering: Confirmation
	{
		versions[]={};
	};
	class SentSuppressing: Report
	{
		versions[]={};
	};
	class SentReloading: Confirmation
	{
		versions[]={};
	};
	class SentThrowingGrenade: Confirmation
	{
		versions[]={};
	};
	class SentThrowingSmoke: Report
	{
		versions[]={};
	};
	class SentIncomingGrenade: Report
	{
		versions[]={};
	};
	class SentEnemyContact: Report
	{
		versions[]={};
	};
	class SentEndangered: Report
	{
		versions[]={};
	};
	class SentRouted: Report
	{
		versions[]={};
	};
	class SentWitnessDeadBody: Report
	{
		versions[]={};
	};
	class SentWitnessKilled: Report
	{
		versions[]={};
	};
	class SentCombatGeneric: Report
	{
		versions[]={};
	};
	class SentCheering: Report
	{
		versions[]={};
	};
	class SentScreaming: Report
	{
		versions[]={};
	};
	class SentClear: NormalCommand
	{
		versions[]={};
	};
	class SentRepeatCommand: NormalCommand
	{
		versions[]={};
	};
	class SentWhereAreYou: NormalCommand
	{
		versions[]={};
	};
	class SentReturnToFormation: NormalCommand
	{
		versions[]={};
	};
	class SentFormColumn: NormalCommand
	{
		versions[]={};
	};
	class SentFormStaggeredColumn: NormalCommand
	{
		versions[]={};
	};
	class SentFormWedge: NormalCommand
	{
		versions[]={};
	};
	class SentFormEcholonLeft: NormalCommand
	{
		versions[]={};
	};
	class SentFormEcholonRight: NormalCommand
	{
		versions[]={};
	};
	class SentFormVee: NormalCommand
	{
		versions[]={};
	};
	class SentFormLine: NormalCommand
	{
		versions[]={};
	};
	class SentFormFile: NormalCommand
	{
		versions[]={};
	};
	class SentFormDiamond: NormalCommand
	{
		versions[]={};
	};
	class SentBehaviourCareless: NormalCommand
	{
		versions[]={};
	};
	class SentBehaviourSafe: NormalCommand
	{
		versions[]={};
	};
	class SentBehaviourAware: NormalCommand
	{
		versions[]={};
	};
	class SentBehaviourCombat: NormalCommand
	{
		versions[]={};
	};
	class SentBehaviourStealth: NormalCommand
	{
		versions[]={};
	};
	class SentOpenFire: NormalCommand
	{
		versions[]={};
	};
	class SentOpenFireInCombat: NormalCommand
	{
		versions[]={};
	};
	class SentHoldFire: UrgentCommand
	{
		versions[]={};
	};
	class SentHoldFireInCombat: UrgentCommand
	{
		versions[]={};
	};
	class SentCeaseFireInsideGroup: UrgentCommand
	{
		versions[]={};
	};
	class SentCeaseFire: UrgentCommand
	{
		versions[]={};
	};
	class SentLooseFormation: NormalCommand
	{
		versions[]={};
	};
	class SentKeepFormation: NormalCommand
	{
		versions[]={};
	};
	class SentUnitPosDown: NormalCommand
	{
		versions[]={};
	};
	class SentUnitPosMiddle: NormalCommand
	{
		versions[]={};
	};
	class SentUnitPosUp: NormalCommand
	{
		versions[]={};
	};
	class SentUnitPosAuto: NormalCommand
	{
		versions[]={};
	};
	class SentFormPosAdvance: NormalCommand
	{
		versions[]={};
	};
	class SentFormPosStayBack: NormalCommand
	{
		versions[]={};
	};
	class SentFormPosFlankLeft: NormalCommand
	{
		versions[]={};
	};
	class SentFormPosFlankRight: NormalCommand
	{
		versions[]={};
	};
	class SentReportStatus: NormalCommand
	{
		versions[]={};
	};
	class SentTeam: NormalCommand
	{
		versions[]={};
	};
	class SentTeamPlural: NormalCommand
	{
		versions[]={};
	};
	class SentWatchTgt: NormalCommand
	{
		versions[]={};
	};
	class SentWatchDir: NormalCommand
	{
		versions[]={};
	};
	class SentWatchPos: NormalCommand
	{
		versions[]={};
	};
	class SentWatchAround: NormalCommand
	{
		versions[]={};
	};
	class SentNoTarget: NormalCommand
	{
		versions[]={};
	};
	class SentTarget: UrgentCommand
	{
		versions[]={};
	};
	class SentEngage: NormalCommand
	{
		versions[]={};
	};
	class SentFire: NormalCommand
	{
		versions[]={};
	};
	class SentEngageNoTarget: NormalCommand
	{
		versions[]={};
	};
	class SentFireNoTarget: NormalCommand
	{
		versions[]={};
	};
	class SelectCmdMoveSentence
	{
		sentences[]={};
	};
	class SentCmdMoveGroupRelative: NormalCommand
	{
		versions[]={};
	};
	class SentCmdMoveRecipientsRelative: NormalCommand
	{
		versions[]={};
	};
	class SentCmdMoveToGrid: NormalCommand
	{
		versions[]={};
	};
	class SentCmdMoveToTarget: NormalCommand
	{
		versions[]={};
	};
	class SentCmdMoveToObject: NormalCommand
	{
		versions[]={};
	};
	class SentCmdMoveLocationRelative: NormalCommand
	{
		versions[]={};
	};
	class SentCmdHealSomeone: NormalCommand
	{
		versions[]={};
	};
	class SentCmdHealSelf: NormalCommand
	{
		versions[]={};
	};
	class SentAssemble: NormalCommand
	{
		versions[]={};
	};
	class SentDisassemble: NormalCommand
	{
		versions[]={};
	};
	class SentCmdActionTakeBag: NormalCommand
	{
		versions[]={};
	};
	class SentCmdActionDropBag: NormalCommand
	{
		versions[]={};
	};
	class SentLightsOn: NormalCommand
	{
		versions[]={};
	};
	class SentLightsOff: NormalCommand
	{
		versions[]={};
	};
	class SentPointersOn: NormalCommand
	{
		versions[]={};
	};
	class SentPointersOff: NormalCommand
	{
		versions[]={};
	};
	class SentCmdHeal: NormalCommand
	{
		versions[]={};
	};
	class SentCmdHealFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdHealAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRepair: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRepairFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRepairAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRefuel: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRefuelFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRefuelAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRearm: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRearmFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdRearmAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSupport: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSupportFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSupportAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdAction: NormalCommand
	{
		versions[]={};
	};
	class SentCmdActionNear: NormalCommand
	{
		versions[]={};
	};
	class SentCmdActionFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdActionAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdTakeFlag: NormalCommand
	{
		versions[]={};
	};
	class SentCmdTakeFlagFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdTakeFlagAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdReturnFlag: NormalCommand
	{
		versions[]={};
	};
	class SentCmdReturnFlagFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdReturnFlagAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdEject: NormalCommand
	{
		versions[]={};
	};
	class SentCmdPlaceCharge: NormalCommand
	{
		versions[]={};
	};
	class SentCmdDetonate: NormalCommand
	{
		versions[]={};
	};
	class SentCmdActivateTimer: NormalCommand
	{
		versions[]={};
	};
	class SentCmdDeactivateBomb: NormalCommand
	{
		versions[]={};
	};
	class SentCmdDeactivateMine: NormalCommand
	{
		versions[]={};
	};
	class SentCmdTakeMine: NormalCommand
	{
		versions[]={};
	};
	class SentCmdLightFire: NormalCommand
	{
		versions[]={};
	};
	class SentCmdLightFireFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdLightFireAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdPutOutFire: NormalCommand
	{
		versions[]={};
	};
	class SentCmdPutOutFireFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdPutOutFireAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdOpenDoor: NormalCommand
	{
		versions[]={};
	};
	class SentCmdOpenDoorFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdOpenDoorAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdCloseDoor: NormalCommand
	{
		versions[]={};
	};
	class SentCmdCloseDoorFar: NormalCommand
	{
		versions[]={};
	};
	class SentCmdCloseDoorAt: NormalCommand
	{
		versions[]={};
	};
	class SentCmdFollowMe: UrgentCommand
	{
		versions[]={};
	};
	class SentCmdFollow: UrgentCommand
	{
		versions[]={};
	};
	class SentCmdAttack: UrgentCommand
	{
		versions[]={};
	};
	class SentAttackNoTarget: UrgentCommand
	{
		versions[]={};
	};
	class SentCmdFire: UrgentCommand
	{
		versions[]={};
	};
	class SentCmdGetIn: NormalCommand
	{
		versions[]={};
	};
	class SentCmdGetInCommander: NormalCommand
	{
		versions[]={};
	};
	class SentCmdGetInDriver: NormalCommand
	{
		versions[]={};
	};
	class SentCmdGetInPilot: NormalCommand
	{
		versions[]={};
	};
	class SentCmdGetInGunner: NormalCommand
	{
		versions[]={};
	};
	class SentCmdGetInCargo: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSwitchToDriver: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSwitchToGunner: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSwitchToCommander: NormalCommand
	{
		versions[]={};
	};
	class SentCmdSwitchToCargo: NormalCommand
	{
		versions[]={};
	};
	class SentCmdGetOut: NormalCommand
	{
		versions[]={};
	};
	class SentCmdStop: NormalCommand
	{
		versions[]={};
	};
	class SentCmdExpect: NormalCommand
	{
		versions[]={};
	};
	class SentCmdHide: NormalCommand
	{
		versions[]={};
	};
	class SentCmdDismiss: NormalCommand
	{
		versions[]={};
	};
	class SentNotifyAttack: Notify
	{
		versions[]={};
	};
	class SentNotifyAttackSubgroup: SentNotifyAttack
	{
	};
	class SentNotifySupport: Notify
	{
		versions[]={};
	};
	class SentConfirmMove: Confirmation
	{
		versions[]={};
	};
	class SentConfirmAttack: Confirmation
	{
		versions[]={};
	};
	class SentConfirmOther: Confirmation
	{
		versions[]={};
	};
	class SentARTYFireAt: UrgentCommand
	{
		versions[]={};
	};
	class SentRepairThat: UrgentCommand
	{
		versions[]={};
	};
	class SentARTYRoundsComplete: NormalCommand
	{
		versions[]={};
	};
	class SentARTYCannotExecuteAdjustCoordinates: NormalCommand
	{
		versions[]={};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope: NormalCommand
	{
		versions[]={};
	};
	class SelectVehicleMoveSentence
	{
		sentences[]={};
	};
	class VehicleMoveGroupRelative: NormalCommand
	{
		versions[]={};
	};
	class VehicleMoveRecipientsRelative: NormalCommand
	{
		versions[]={};
	};
	class VehicleMoveToGrid: NormalCommand
	{
		versions[]={};
	};
	class VehicleMoveToObject: NormalCommand
	{
		versions[]={};
	};
	class VehicleMoveLocationRelative: NormalCommand
	{
		versions[]={};
	};
	class VehicleWatchTgt
	{
		versions[]={};
	};
	class VehicleWatchPos
	{
		versions[]={};
	};
	class VehicleJoin
	{
		versions[]={};
	};
	class VehicleFire
	{
		versions[]={};
	};
	class VehicleTarget
	{
		versions[]={};
	};
	class VehicleNoTarget
	{
		versions[]={};
	};
	class VehicleCeaseFire
	{
		versions[]={};
	};
	class VehicleForward
	{
		versions[]={};
	};
	class VehicleStop
	{
		versions[]={};
	};
	class VehicleBackward
	{
		versions[]={};
	};
	class VehicleFaster
	{
		versions[]={};
	};
	class VehicleSlower
	{
		versions[]={};
	};
	class VehicleLeft
	{
		versions[]={};
	};
	class VehicleRight
	{
		versions[]={};
	};
	class VehicleManualFire
	{
		versions[]={};
	};
	class VehicleCancelManualFire
	{
		versions[]={};
	};
	class VehicleDirectFire
	{
		versions[]={};
	};
	class VehicleLoad
	{
		versions[]={};
	};
	class VehicleLoadMagazine
	{
		versions[]={};
	};
	class VehicleAzimut
	{
		versions[]={};
	};
	class VehicleFireFailed
	{
		versions[]={};
	};
	class ClausePosition
	{
		text="";
		speech[]={};
	};
	class ClausePositionNear
	{
		text="";
		speech[]={};
	};
	class Arguments
	{
		class Direction
		{
			class Compass1
			{
				class 0
				{
					text="$STR_Q_NORTH";
					speech[]=
					{
						"North"
					};
				};
				class 45
				{
					text="$STR_Q_NORTH_EAST";
					speech[]=
					{
						"NorthEast"
					};
				};
				class 90
				{
					text="$STR_Q_EAST";
					speech[]=
					{
						"East"
					};
				};
				class 135
				{
					text="$STR_Q_SOUTH_EAST";
					speech[]=
					{
						"SouthEast"
					};
				};
				class 180
				{
					text="$STR_Q_SOUTH";
					speech[]=
					{
						"South"
					};
				};
				class 225
				{
					text="$STR_Q_SOUTH_WEST";
					speech[]=
					{
						"SouthWest"
					};
				};
				class 270
				{
					text="$STR_Q_WEST";
					speech[]=
					{
						"West"
					};
				};
				class 315
				{
					text="$STR_Q_NORTH_WEST";
					speech[]=
					{
						"NorthWest"
					};
				};
			};
			class Compass2
			{
				class 0
				{
					text="$STR_Q_NORTH";
					speech[]=
					{
						"North2"
					};
				};
				class 45
				{
					text="$STR_Q_NORTH_EAST";
					speech[]=
					{
						"NorthEast2"
					};
				};
				class 90
				{
					text="$STR_Q_EAST";
					speech[]=
					{
						"East2"
					};
				};
				class 135
				{
					text="$STR_Q_SOUTH_EAST";
					speech[]=
					{
						"SouthEast2"
					};
				};
				class 180
				{
					text="$STR_Q_SOUTH";
					speech[]=
					{
						"South2"
					};
				};
				class 225
				{
					text="$STR_Q_SOUTH_WEST";
					speech[]=
					{
						"SouthWest2"
					};
				};
				class 270
				{
					text="$STR_Q_WEST";
					speech[]=
					{
						"West2"
					};
				};
				class 315
				{
					text="$STR_Q_NORTH_WEST";
					speech[]=
					{
						"NorthWest2"
					};
				};
			};
			class Relative1
			{
				class 0
				{
					text="in front of";
					speach[]=
					{
						"InFrontOf"
					};
				};
				class 90
				{
					text="right of";
					speach[]=
					{
						"RightOf"
					};
				};
				class 180
				{
					text="behind";
					speach[]=
					{
						"Behind"
					};
				};
				class 270
				{
					text="left of";
					speach[]=
					{
						"LeftOf"
					};
				};
			};
		};
		class Distance1
		{
			class Level0
			{
				text="$STR_DISTANCE_DANGER_CLOSE_TO";
				speech[]=
				{
					"DangerCloseTo"
				};
			};
			class Level1
			{
				text="$STR_DISTANCE_NOT_FAR_FROM";
				speech[]=
				{
					"NotFarFrom"
				};
			};
			class Level2
			{
				text="$STR_DISTANCE_FAR_FROM";
				speech[]=
				{
					"FarFrom"
				};
			};
		};
		class AggrTargets
		{
			modes[]=
			{
				"Default"
			};
		};
	};
};
class RadioProtocolDefault: RadioProtocolBase
{
};
class PreloadConfig
{
	RadioProtocolBase="*";
	RadioProtocolDefault="*";
	CfgVoice="*";
	class CfgCloudlets
	{
		CraterBlood=".";
		CloudletsMissileManual="*";
		CloudletsMissile="*";
		CloudletsScud="*";
		CraterDustSmall="*";
		CraterDustBig="*";
		CraterSmoke1="*";
		CraterSmoke2="*";
		CraterSmoke3="*";
		CraterWater="*";
		Explosion="*";
	};
	CfgDestructPos="*";
	CfgCloudletShapes="*";
	CfgMimics="*";
	CfgVehicles="fastFind";
	CfgNonAIVehicles="fastFind";
	CfgAmmo="fastFind";
	CfgMusic="*";
	CfgTitles="*";
	CfgCameraEffects="*";
	RscTitlesText="*";
	CfgFonts="*";
	CfgFontFamilies="*";
	RscMainMenu="*";
	RscSubmenu="*";
	RscMoveHigh="*";
	RscMoveDir="*";
	RscReply="*";
	RscStatus="*";
	RscWatchDir="*";
	RscWatchMoreDir="*";
	RscMoveDist="*";
	RscFormations="*";
	RscCombatMode="*";
	RscTeam="*";
	RscSelectTeam="*";
	RscRadio="*";
	CfgHQIdentities="*";
	RscButtonImages="*";
	class RscInGameUI
	{
		RscUnitInfoSoldier="*";
	};
	RscObjectives="*";
};
class CfgCameraShake
{
	posChangeCoef=0.0049999999;
	rotXChangeCoef=0.5;
	rotYChangeCoef=0.5;
	rotZChangeCoef=0.5;
	performLERP=1;
	useDefaultValues=1;
	defaultPower=12;
	defaultDuration=1;
	defaultMaxDistance=120;
	defaultFrequency=20;
	defaultMinSpeed=0;
	defaultMinMass=10000;
	defaultCaliberCoefPlayerHit=0.5;
	defaultCaliberCoefWeaponFire=0.2;
	defaultPassingVehicleCoef=0.050000001;
	defaultPassingVehicleUpdateTime=1;
	defaultVehicleAttenuationCoef=0.2;
};
