private["_v"];
_v=_this;
[typeOf _v,"AMAP"]execVM"DAPS\Scripts\Management\RegisterNewType.sqf";
if(isServer)then{deleteVehicle _v};