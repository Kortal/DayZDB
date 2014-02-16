setTimeForScripts 90;

call compile preprocessFileLineNumbers "\dz\modulesDayZ\init.sqf";
event_playerKilled = compile preprocessFileLineNumbers "\modulesDayZ\event_playerKilled.sqf"; 
////////////////////////////
// START DAY&WEATHER SCRIPT
////////////////////////////
execVM "Day&WheaterScript\DW_init.sqf";

DZ_MP_CONNECT = true;
DZ_MAX_ZOMBIES = 1000;

//dbLoadHost;
dbSelectHost "http://localhost/DayZServlet/";

DZ_spawnparams = [
	1 / 7.0, // SPT_gridDensity
	35.0, // SPT_gridWidth
	35.0, // SPT_gridHeight
	4.0, // SPT_minDist2Water
	20.0, // SPT_maxDist2Water
	30.0, // SPT_minDist2Zombie
	70.0, // SPT_maxDist2Zombie
	25.0, // SPT_minDist2Player
	70.0, // SPT_maxDist2Player
	0.5, // SPT_minDist2Static
	30.0, // SPT_maxDist2Static
	-0.785398163, // SPT_minSteepness
	+0.785398163 // SPT_maxSteepness
];

DZ_spawnQuad0 = [
	[13608.1, 6062.31, 0.0014],
	[13587.1, 6095.31, -0.27] ,
	[13556.5, 6071.73, 0.0014],
	[13570.5, 6036.73, 0.0014]
];

DZ_posbubbles = [
	[ 9765.67 , 1749.21 , 0.00176013] ,
	[ 10544.3 , 2003.19 , 0.000682116] ,
	[ 11076.8 , 2619.9 , 0.0010798] ,
	[ 11998 , 3400.88 , 0.00117755] ,
	[ 13502.3 , 3905.05 , 0.000827312] ,
	[ 13417.7 , 5449.19 , 0.00129318] ,
	[ 7118.22 , 7652.72 , 0.00143433] ,
	DZ_spawnQuad0,
	[ 13314.1 , 7041.18 , 0.00136793] ,
	[ 13115.5 , 7638.63 , 0.00145864] ,
	[ 13526.9 , 5096.7 , 0.00142241] ,
	[ 11569 , 3144.31 , 0.00150204] ,
	[ 11998.6 , 3780.79 , 0.00128365] ,
	[ 13362.8 , 5900.33 , 0.00143862] ,
	[ 13460.8 , 6598.57 , 0.001423]
];

_createPlayer = {
	//check database
	_savedChar = dbFindCharacter _uid;
	_isAlive = _savedChar select 0;
	_pos = [_savedChar select 1,_savedChar select 2,_savedChar select 3];
	_idleTime = _savedChar select 4;

	//process client
	[_id,_isAlive,_pos,overcast,rain] spawnForClient {
	titleText ["","BLACK FADED",10e10];
	diag_log str(_this);
	playerQueueVM = _this call player_queued;

	0 setOvercast (_this select 4);
	simulSetHumidity (_this select 4);
	0 setRain (_this select 5);
	};
};

//DISCONNECTION PROCESSING
_disconnectPlayer =
{

if ((lifeState _agent == "ALIVE") and (not captive player)) then {
	_agent call dbSavePlayerPrep;
	dbServerSaveCharacter _agent;
	}
	else {
	dbKillCharacter _uid;
	_id statusChat["Player %1 was killed by %2",name _agent, name _killer];
};

deleteVehicle _agent;
};

// Create player on connection
onPlayerConnecting _createPlayer;
onPlayerDisconnected _disconnectPlayer;

"clientReady" addPublicVariableEventHandler
{
_id = _this select 1;
_uid = getClientUID _id;
diag_log format["Player %1 ready to load previous character",_uid];


// *** New Day Time 1.0 - Kortal
// this script allow you to play only with a part of the daytime
// whith default value (maxh=16, maxmin=50, minh=7, minmin=15), the time will be blocked from 16:50 till 7:15. This is to avoid full dark (we can't play for now at full night 0.36, lights items are bugged). Players can finally enjoy some sunrise and sundown.
_maxh = 16; //
_maxmin = 50;
_minh = 7;
_minmin = 15;

_ctime = getSystemTime;
_htime = _ctime select 3;
_mtime = _ctime select 4;


_setmax = 0;
_setmin = 0;

if (_htime > _maxh) then {_setmax = 1};
if ((_htime == _maxh) and (_mtime > _maxmin)) then {_setmax = 1};

if (_htime < _minh) then {_setmin = 1};
if ((_htime == _minh) and (_mtime > _minmin)) then {_setmin = 1};

setDate getSystemTime;

if (_setmax == 1) then
	{
		setDate [2014, 1, 1, _maxh, _maxmin];
	};
if (_setmin == 1) then
{
	setDate [2014, 1, 1,_minh, _minmin];
};

// *** end New Day Time
	_handler =
{
if (isNull _agent) then
	{
	//this should never happen!
	diag_log format["Player %1 has no agent on load, kill character",_uid];
	_id statusChat ["Your character was unable to be loaded and has been reset. A system administrator has been notified. Please reconnect to continue.","ColorImportant"];
	dbKillCharacter _uid;
	}
	else
	{
	call init_newBody;
	};
};
_id dbServerLoadCharacter _handler; 
};

"respawn" addPublicVariableEventHandler
{

_agent = _this select 1;

diag_log format ["CLIENT request to respawn %1 (%2)",_this,lifeState _agent];


// *** New Day Time 1.0 - Kortal
// this script allow you to play only with a part of the daytime
// with default value (maxh=16, maxmin=50, minh=7, minmin=15), the time will be blocked from 16:50 till 7:15. This is to avoid full dark (we can't play for now at full night on v0.36, lights items are bugged). Players can finally enjoy some sunrise and sundown.
_maxh = 16;
_maxmin = 50;
_minh = 7;
_minmin = 15;

_ctime = getSystemTime;
_htime = _ctime select 3;
_mtime = _ctime select 4;


_setmax = 0;
_setmin = 0;

if (_htime > _maxh) then {_setmax = 1};
if ((_htime == _maxh) and (_mtime > _maxmin)) then {_setmax = 1};

if (_htime < _minh) then {_setmin = 1};
if ((_htime == _minh) and (_mtime > _minmin)) then {_setmin = 1};

setDate getSystemTime;

if (_setmax == 1) then
	{
		setDate [2014, 1, 1, _maxh, _maxmin];
	};
if (_setmin == 1) then
{
	setDate [2014, 1, 1,_minh, _minmin];
};

// *** end New Day Time

if (lifeState _agent != "ALIVE") then
{
//get details
_id = owner _agent;
_uid = getClientUID _id;
_agent setDamage 1;

//process client
[_id,false,[0,0,0]] spawnForClient {
titleText ["Respawning... Please wait...","BLACK FADED",10e10];
diag_log str(_this);
playerQueueVM = _this call player_queued;
};
};

};

"clientNew" addPublicVariableEventHandler
{
_array = _this select 1;
_id = _array select 2;
diag_log format ["CLIENT %1 request to spawn %2",_id,_this];
_id spawnForClient {statusChat ['server config by Kortal','']};

_savedChar = dbFindCharacter (getClientUID _id); //ClientUID //steamUID
//if (_savedChar select 0) exitWith {
//diag_log format ["CLIENT %1 spawn request rejected as fake",_id];
//};

_charType = _array select 0;
_charInv = _array select 1;
_pos = findSpawnPoint [ DZ_posbubbles, DZ_spawnparams ];

//load data
_top = getArray(configFile >> "cfgCharacterCreation" >> "top");
_bottom = getArray(configFile >> "cfgCharacterCreation" >> "bottom");
_shoe = getArray(configFile >> "cfgCharacterCreation" >> "shoe");

_myTop = _top select (_charInv select 0);
_myBottom = _bottom select (_charInv select 1);
_myShoe = _shoe select (_charInv select 2);
_mySkin = DZ_SkinsArray select _charType;

_agent = createAgent [_mySkin, _pos, [], 0, "NONE"];
{null = _agent createInInventory _x} forEach [_myTop,_myBottom,_myShoe];

// ********* target spawn test
//_ClientUID = getClientUID _id;
//if (_ClientUID "76561197974354111") then {
//	_v = _agent createInInventory "M4A1";
//	_v = _agent createInInventory "Spraycan_Green";_v setVariable ["quantity",1];
//	_id spawnForClient {statusChat ['you got a target spawn ! congratulation','']};
//	_id spawnForClient {statusChat ['your ClientUID %1 - id %2',_ClientUID,_id,'']};
//	diag_log format ["PLAYER clientid %1 - id %2",_ClientUID,_id];
//};


// ********** end test

_v = _agent createInInventory "tool_flashlight";
_v = _agent createInInventory "consumable_battery9V";_v setVariable ["power",30000];
//_v = _agent createInInventory "M4A1";
//_v = _agent createInInventory "Spraycan_Green";_v setVariable ["quantity",1];
_agent call init_newPlayer;
call init_newBody;

};

this addWeapon "Binocular";
this addWeapon "AK74";

//call dbLoadPlayer;


_humidity = 0.3;

//while{true} do {
//setDate getSystemTime;
//sleep 30;
//};

//setDate getSystemTime;
//setDate [2013, 01, 01, 19, 0]

simulSetHumidity _humidity;
0 setOvercast _humidity;

_position = [7500,7500,0];
//exportProxies [_position,200000];
call init_spawnZombies;
sleep 1;
importProxies;

//while{true} do {
spawnLoot [_position,15000,25000];
//sleep 7200;
//};



		






setTimeForScripts 0.03;