#include "CBasePlayer.h"


namespace FortuneSummonersAssistGame
{
	CBasePlayer::CBasePlayer()
	{
	}


	CBasePlayer::~CBasePlayer()
	{
	}
	CGameManager * CBasePlayer::GetGameManager() const
	{
		return this->m_pGameManager;
	}
}