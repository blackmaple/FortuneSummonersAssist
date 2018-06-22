#include "CGameManager.h"

namespace FortuneSummonersAssistGame
{

	CGameManager::CGameManager()
	{
	}


	CGameManager::~CGameManager()
	{
	}

	PRolePlayer CGameManager::GetRplePlayer(INT32 at) const
	{
		return this->m_pRolePlayer[at];
	}

	BOOL CGameManager::SetPlayerProp( EnumGamePropId propId, PINT16 pOldPropNumber, INT16 wPropNumber, EnumGamePropLocation flag_Warehouse, BOOL notSave)
	{
		var pFuc = CGameEventManager::GetSetPlayerPropEvent();
		var ret = pFuc(this, propId, pOldPropNumber, wPropNumber, flag_Warehouse, notSave);
		return ret;
	}
}