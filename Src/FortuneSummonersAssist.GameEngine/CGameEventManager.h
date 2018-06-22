#pragma once
#include "CMaple.h"
#include "EnumGameEventAddress.h"
#include "EnumGamePropId.h"
#include "EnumGamePropLocation.h"
namespace FortuneSummonersAssistGame
{

	class CGameManager;
	class CGameEventManager
	{
		
		typedef BOOL(__thiscall *pSetPlayerPropEvent)(__in CGameManager* pGameManager, __in EnumGamePropId propId, __out PINT16 pOldPropNumber, __in INT16 wPropNumber, __in EnumGamePropLocation flag_Warehouse, __in BOOL notSave);
	public:
		static	pSetPlayerPropEvent GetSetPlayerPropEvent()
		{
			auto pAddress = (pSetPlayerPropEvent)(EnumGameEventAddress::Addr_SetPlayerProp);
			return pAddress;
		}
	};
}