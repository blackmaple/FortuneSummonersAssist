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

	PRolePlayer CGameManager::GetRplePlayer(INT32 at) const
	{
		return this->m_pRolePlayer[at];
	}

	BOOL CGameManager::SetPlayerProp(INT32 propId, INT32 def0, INT32 def1, INT32 def2, BOOL notSave )
	{
		var p = CGameEventManager::GetSetPlayerPropEvent();
		var ret = p(this, propId, def0, def1, def2, notSave);
		return ret;
	 
	}
}