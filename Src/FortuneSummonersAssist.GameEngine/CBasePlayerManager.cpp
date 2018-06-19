#include "CBasePlayerManager.h"


namespace FortuneSummonersAssistGame
{
	CBasePlayerManager::CBasePlayerManager()
	{
	}


	CBasePlayerManager::~CBasePlayerManager()
	{
	}
	CGameManager * CBasePlayerManager::GetGameManager() const
	{
		return this->m_pGameManager;
	}
}