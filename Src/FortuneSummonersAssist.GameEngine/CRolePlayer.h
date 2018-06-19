#pragma once
#include "CBasePlayerManager.h"
namespace FortuneSummonersAssistGame
{

	class CRolePlayer :
		public CBasePlayerManager
	{
	public:
		CRolePlayer();
		~CRolePlayer();
		
	};
	enum
	{
		//3820;0x0eec
		EnumRolePlayerSize = sizeof(CRolePlayer)
	};
	typedef CRolePlayer* PRolePlayer;

}