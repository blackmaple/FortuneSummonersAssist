#include "CGameManager.h"
#include "CGameEventManager.h" 

namespace FortuneSummonersAssistGame
{

	CGameManager::CGameManager()
	{
	}


	CGameManager::~CGameManager()
	{
	}

	PRolePlayer CGameManager::GetRplePlayer(int at) const
	{
		return this->m_pRolePlayer[at];
	}

	BOOL CGameManager::SetPlayerProp(int propId, int def0, int def1, int def2, int def3)
	{
		var p = CGameEventManager::GetSetPlayerPropEvent();
		var ret = p(this, propId, def0, def1, def2, def3);
		return ret;
	 
	}
}