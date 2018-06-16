#pragma once
#include "CMaple.h"

namespace FortuneSummonersAssistGame
{

	class CGameManager;
	class CGameEventManager
	{
		enum EnumGameEventAddress :INT32
		{
			Addr_SetPlayerProp = 0x041A240,
		};
		typedef BOOL(__thiscall *pSetPlayerPropEvent)(CGameManager* pGameManager , int propId, int def0, int def1, int def2, int def3);
	public:
		static	pSetPlayerPropEvent GetSetPlayerPropEvent()
		{
			auto pAddress = (pSetPlayerPropEvent)(EnumGameEventAddress::Addr_SetPlayerProp);
			return pAddress;
		}
	};
}