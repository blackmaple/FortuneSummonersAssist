#pragma once
#include "CMaple.h"
#include "CBasePlayerProperty.h"
namespace FortuneSummonersAssistGame
{
	class CBasePlayerInfo
	{
	public:
		CBasePlayerInfo();
		~CBasePlayerInfo();
	protected:

		INT8 m_0x0[0x750];
		PBasePlayerProperty m_pBasePlayerProperty;// m_0x750;


	};
	enum
	{
		//1876;0x754
		EnumBasePlayerInfoSize = sizeof(CBasePlayerInfo),
	};
	typedef CBasePlayerInfo* PBasePlayerInfo;
}