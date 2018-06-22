#pragma once
#include "CMaple.h"
#include "CGameProp.h"
namespace FortuneSummonersAssistGame
{
	class CPlayerProp
	{
	public:
		CPlayerProp();
		~CPlayerProp();
	protected:
		UINT32 m_PropId;//m_0x0;
		UINT32 m_EquipPlayerId;//m_0x4
		UINT16 m_PropNumber;//m_0x8;
		UINT8 m_0xA;
		UINT8 m_0xB;
		PGameProp m_pGameProp;//m_0xc;
	};


	enum
	{
		//0x10 16
		EnumPlayerPropSize = sizeof(CPlayerProp),

	};
}