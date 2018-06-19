#pragma once
#include "CMaple.h"
#include "EnumGameEventAddress.h"

namespace FortuneSummonersAssistGame
{

	class CGameManager;
	class CGameEventManager
	{

		typedef BOOL(__thiscall *pSetPlayerPropEvent)(CGameManager* pGameManager , INT32 propId, INT32 def0, INT32 def1, INT32 def2, BOOL notSave);
	public:
		static	pSetPlayerPropEvent GetSetPlayerPropEvent()
		{
			auto pAddress = (pSetPlayerPropEvent)(EnumGameEventAddress::Addr_SetPlayerProp);
			return pAddress;
		}
	};
}