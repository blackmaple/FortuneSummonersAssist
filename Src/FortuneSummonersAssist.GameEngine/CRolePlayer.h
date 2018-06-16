#pragma once
#include "CBasePlayer.h"
namespace FortuneSummonersAssistGame
{

	class CRolePlayer :
		public CBasePlayer
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