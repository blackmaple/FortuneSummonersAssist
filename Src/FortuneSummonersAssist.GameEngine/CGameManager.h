#pragma once
#include "CMaple.h"
#include "CRolePlayer.h"
#include "CPlayerProp.h"
#include "CGameEventManager.h" 

namespace FortuneSummonersAssistGame
{
	class CGameManager
	{
	public:
		CGameManager();
		~CGameManager();
		PRolePlayer GetRplePlayer(INT32 at)const;
		BOOL SetPlayerProp(__in EnumGamePropId propId, __out PINT16 pOldPropNumber, __in INT16 wPropNumber, __in EnumGamePropLocation flag_Warehouse, __in BOOL notSave);
	protected:
		UINT32 m_0x0;
		void* m_0x4;
		UINT8 m_0X8[0x2004];
		UINT32 m_0X200C;

		CPlayerProp m_PlayerProp[0x200];//m_0x2010;
		UINT16 m_PropNumber;//m_0x4010;

		UINT16 m_0x4012;
		//4
		UINT32 m_CP;//m_0x4014;
		UINT32 m_0x4018;
		//28
		UINT32 m_0x401c;

		UINT32 m_MaxCP;//m_0x4020;
		//16
		UINT32 m_0x4024;
		//20
		UINT32 m_0x4028;
		//24
		UINT32 m_0x402C;

		PRolePlayer m_pRolePlayer[8];//m_0x4030
		UINT32 m_0x4050;
		UINT32 m_0x4054;
		UINT32 m_0x4058;
		//
		UINT16 m_0x405c;
		UINT16 m_0x405e;
		UINT16 m_0x4060;
		UINT16 m_0x4062;

		UINT32 m_CP_GP;//m_0x4064;

		//0x4068 WinApi GetTickCount;
		UINT32 m_TickCount;

		UINT32 m_406C;
		UINT32 m_4070;
		UINT32 m_4074;
		UINT32 m_4078;
		UINT32 m_407C;
		UINT32 m_4080;
		UINT32 m_4084;
		UINT32 m_4088;
		UINT32 m_408C;
		UINT32 m_4090;
		UINT32 m_4094;
		UINT32 m_4098;
		UINT32 m_409C;
		UINT32 m_40A0;
		UINT32 m_40A4;
		UINT32 m_40A8;
		UINT32 m_40AC;

		UINT32 m_TotalACE;//m_40B0;

		//48
		UINT32 m_KillMonsters;//m_40B4;
		//52
		UINT32 m_TotalEXP;//m_40B8
		//56
		UINT32 m_TotalMoney;//m_40BC;
		//140
		UINT32 m_MaxAD;//m_40C0;
		//144
		UINT32 m_MaxAD_Player;// m_40C4;
		//148
		UINT32 m_MaxMD;//m_40C8;
		//152
		UINT32 m_MaxMD_Player;//m_40Cc
		//32
		UINT32 m_40D0;
		//36
		UINT32 m_40D4;
		//40
		UINT32 m_40D8;
		//156
		UINT32 m_40DC;

		UINT32 m_40E0;
		UINT32 m_40E4;
		UINT32 m_40E8;
		UINT32 m_40EC;

		//val = 0xff
		UINT32 m_40F0;
		UINT32 m_40F4;
		UINT32 m_40F8;
		UINT32 m_40FC;

		UINT32 m_4100;
		UINT32 m_4104;

		UINT32 m_4108;
		UINT32 m_410C;

		UINT32 m_4110;
		UINT32 m_4114;

		UINT32 m_4118;
		UINT32 m_411C;
	};
	enum
	{
		//16672;0x4120
		EnumGameManagerSize = sizeof(CGameManager)
	};
	typedef CGameManager* PGameManager;
}
