namespace UOX
{

#ifndef __SEFuncs_h__
#define __SEFuncs_h__
// Function prototypes exposed to the Script Engine

// Version History
// 1.0		Abaddon		12th September, 2000
//			Initial implementation, not many functions added
// 1.1		Abaddon		14th September, 2000
//			Declaration of 90 API functions and implementation of around 20 of them
// 1.2		Abaddon		18th September, 2000
//			Addition of more API functions and declarations of them
// 1.3		Zippy		28th October, 2001
//			Addition of File i/o functions.
// 1.4 		Shadowlord	3rd  November, 2001
//			Addition of Tag functions.

typedef JSBool (SEngineFunc)( JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval );

// 90 functions so far
// *	== prototype 
// **	== active function

// Character related functions (9)

SEngineFunc SE_SpawnNPC;			// Create NPC								*

SEngineFunc SE_GetTown;				//											**
SEngineFunc SE_SetTown;				//											**
SEngineFunc SE_GetRegion;			//											**
SEngineFunc SE_SetRegion;			//											**

// Effect related functions (3)

SEngineFunc SE_DoMovingEffect;		// Does moving effect						***
SEngineFunc SE_DoTempEffect;		// Does a temp effect						***

// Item related functions (2)

SEngineFunc SE_CreateBlankItem;		// Create an item							***
SEngineFunc SE_CreateDFNItem;		// Create an item							***

// Speech related functions (7)

SEngineFunc SE_BroadcastMessage;	//											***
SEngineFunc SE_ConsoleMessage;		//											***

// Random functions(5)
SEngineFunc SE_ScriptPrintNumber;	//											***
SEngineFunc SE_RandomNumber;		// Calculates a random number				***
SEngineFunc SE_CalcCharFromSer;		//											***
SEngineFunc SE_CalcItemFromSer;		//											***

// Other functions
SEngineFunc	SE_GetCommand; 
SEngineFunc	SE_GetCommandSize; 
SEngineFunc SE_CreateBuffer;		//											*
SEngineFunc SE_DestroyBuffer;		//											*
SEngineFunc SE_SendBuffer;			//											*

SEngineFunc SE_MakeMenu;			//											***
SEngineFunc SE_MakeItem;			//											***

SEngineFunc SE_CommandLevelReq;		//											*
SEngineFunc SE_CommandExists;		//											*
SEngineFunc SE_FirstCommand;		//											*
SEngineFunc SE_NextCommand;			//											*
SEngineFunc SE_FinishedCommandList;	//											*

SEngineFunc SE_RegisterCommand;		//											***
SEngineFunc SE_EnableCommand;		//											***
SEngineFunc SE_DisableCommand;		//											***

SEngineFunc SE_RegisterSpell;		//											***
SEngineFunc SE_EnableSpell;			//											***
SEngineFunc SE_DisableSpell;		//											***

SEngineFunc SE_GetHour;					//										***
SEngineFunc SE_GetMinute;				//										***
SEngineFunc SE_GetDay;					//										***
SEngineFunc SE_SecondsPerUOMinute;		//										***

SEngineFunc SE_GetCurrentClock;			//										***
SEngineFunc SE_SubStringSearch;			//										***
SEngineFunc SE_GetMurderThreshold;		//										***
SEngineFunc SE_RollDice;				//										***
SEngineFunc SE_RaceCompareByRace;		//										***

SEngineFunc SE_FindMulti;				//										***

SEngineFunc SE_IsRegionGuarded;			//										***
SEngineFunc SE_CanMarkInRegion;			//										***
SEngineFunc SE_CanRecallInRegion;		//										***
SEngineFunc SE_CanGateInRegion;			//										***

SEngineFunc SE_GetGuildType;			//										**
SEngineFunc SE_GetGuildName;			//										**
SEngineFunc SE_SetGuildType;			//										**
SEngineFunc SE_SetGuildName;			//										**
SEngineFunc SE_SetGuildMaster;			//										**
SEngineFunc SE_GetNumGuildMembers;		//										**
SEngineFunc SE_CompareGuildByGuild;		//										**
SEngineFunc SE_GetGuildStone;			//										**

SEngineFunc SE_GetTownMayor;			//										***
SEngineFunc SE_GetTownRace;				//										***
SEngineFunc SE_SetTownRace;				//										***
SEngineFunc SE_PossessTown;				//										***
SEngineFunc SE_GetTownTax;				//										*
SEngineFunc SE_GetTownTaxResource;		//										***
SEngineFunc SE_SetTownTax;				//										*
SEngineFunc SE_SetTownTaxResource;		//										*

SEngineFunc SE_IsRaceWeakToWeather;		//										***
SEngineFunc SE_GetRaceSkillAdjustment;	//										***

SEngineFunc SE_GetClosestTown;			//										*

SEngineFunc SE_UseDoor;					//										***

SEngineFunc SE_TriggerEvent;			//										*

SEngineFunc SE_GetPackOwner;			//										***
SEngineFunc SE_CalcTargetedItem;		//										***
SEngineFunc SE_CalcTargetedChar;		//										***
SEngineFunc SE_GetTileIDAtMapCoord;		//										***

SEngineFunc SE_StringToNum;
SEngineFunc SE_NumToString;
SEngineFunc SE_NumToHexString;

SEngineFunc SE_GetRaceCount;
SEngineFunc SE_AreaCharacterFunction;
SEngineFunc SE_Reload;

SEngineFunc SE_GetDictionaryEntry;
SEngineFunc SE_RaceGate;
SEngineFunc SE_Yell;
SEngineFunc SE_SendStaticStats;
SEngineFunc SE_GetTileHeight;
SEngineFunc SE_IterateOver;
SEngineFunc SE_WorldBrightLevel;
SEngineFunc SE_WorldDarkLevel;
SEngineFunc SE_WorldDungeonLevel;

#endif

}
