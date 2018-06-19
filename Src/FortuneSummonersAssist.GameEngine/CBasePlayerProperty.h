#pragma once
#include "CMaple.h"
namespace FortuneSummonersAssistGame
{
	class CBasePlayerProperty
	{
		
	public:
		CBasePlayerProperty();
		~CBasePlayerProperty();
	protected:
		UINT32 m_0x0;
		UINT32 m_0x4;
		UINT32 m_0x8;
		UINT32 m_0xC;
		UINT32 m_0x10;
		UINT32 m_0x14;
		UINT32 m_0x18;
		UINT32 m_0x1C;
		UINT32 m_0x20;
		UINT32 m_0x24;
		UINT32 m_0x28;
		UINT32 m_0x2C;
		UINT32 m_0x30;
		UINT32 m_0x34;
		UINT32 m_0x38;
		UINT32 m_0x3C;
		UINT32 m_0x40;
		UINT32 m_0x44;
		UINT32 m_0x48;
		UINT32 m_0x4C;
		UINT32 m_0x50;
		UINT32 m_HP;//m_0x54;
		UINT32 m_MaxHP;//m_0x58;
		UINT32 m_MP;//m_0x5c;
		UINT32 m_MaxMP;//m_0x60;
		UINT32 m_ATK;//m_0x64;
		UINT32 m_DEF;//m_0x68
		UINT32 m_INT;//m_0x6c
		UINT32 m_STA;//m_0x70;
		UINT32 m_AddATK;//m_0x74
		UINT32 m_AddDEF;//m_0x78;
		UINT32 m_0x7C;
		UINT32 m_0x80;
		UINT32 m_0x84;
		UINT32 m_0x88;
		UINT32 m_0x8C;
		UINT32 m_0x90;
		UINT32 m_0x94;
		UINT32 m_0x98;
		UINT32 m_0x9C;
		UINT32 m_0xA0;
		UINT32 m_0xA4;
		UINT32 m_0xA8;
		UINT32 m_0xAC;
		UINT32 m_0xB0;
		UINT32 m_0xB4;
		UINT32 m_0xB8;
		UINT32 m_0xBC;
		UINT32 m_0xC0;
		UINT32 m_0xC4;
		UINT32 m_0xC8;
		UINT32 m_0xCC;
		UINT32 m_0xD0;

		UINT32 m_IsATK;//m_0xD4;

		UINT32 m_CombatLV;//m_0xD8;
		UINT32 m_MaxCombatLV; //m_0xDC;

		UINT32 m_OverlordLV;//m_0xE0;
		UINT32 m_0xE4;

		UINT32 m_EXP;//m_0xE8;
		UINT32 m_MaxEXP;//m_0xEC;
		UINT32 m_0xF0;
		UINT32 m_0xF4;
		UINT32 m_0xF8;
		UINT32 m_0xFC;
		UINT32 m_0x100;
		UINT32 m_0x104;
		UINT32 m_0x108;
		UINT32 m_0x10C;
		UINT32 m_0x110;
		UINT32 m_0x114;
		UINT32 m_0x118;
		UINT32 m_0x11C;
		UINT32 m_0x120;
		UINT32 m_0x124;
		UINT32 m_0x128;
		UINT32 m_0x12C;
		UINT32 m_0x130;
		UINT32 m_0x134;
		UINT32 m_0x138;
		UINT32 m_0x13C;
		UINT32 m_0x140;
		UINT32 m_0x144;
		UINT32 m_0x148;
		UINT32 m_0x14C;
		UINT32 m_0x150;
		UINT32 m_0x154;
		UINT32 m_0x158;
		UINT32 m_0x15C;
		UINT32 m_0x160;
		UINT32 m_0x164;
		UINT32 m_0x168;
		UINT32 m_0x16C;
		UINT32 m_0x170;
		UINT32 m_0x174;
		UINT32 m_0x178;
		UINT32 m_0x17C;
		UINT32 m_0x180;
		UINT32 m_0x184;
		UINT32 m_0x188;
		UINT32 m_0x18C;
		UINT32 m_0x190;
		UINT32 m_0x194;
		UINT32 m_0x198;
		UINT32 m_0x19C;
		UINT32 m_0x1A0;
		UINT32 m_0x1A4;
		UINT32 m_0x1A8;
		UINT32 m_0x1AC;
		UINT32 m_0x1B0;
		UINT32 m_0x1B4;
		UINT32 m_0x1B8;
		UINT32 m_0x1BC;
		UINT32 m_0x1C0;
		UINT32 m_0x1C4;
		UINT32 m_0x1C8;
		UINT32 m_0x1CC;
		UINT32 m_0x1D0;
		UINT32 m_0x1D4;
		UINT32 m_0x1D8;
		UINT32 m_0x1DC;
		UINT32 m_0x1E0;
		UINT32 m_0x1E4;
		UINT32 m_0x1E8;
		UINT32 m_0x1EC;
		UINT32 m_0x1F0;
		UINT32 m_0x1F4;
		UINT32 m_0x1F8;
		UINT32 m_0x1FC;
		UINT32 m_0x200;
		UINT32 m_0x204;
		UINT32 m_0x208;
		UINT32 m_0x20C;
		UINT32 m_0x210;
		UINT32 m_0x214;
		UINT32 m_0x218;
		UINT32 m_0x21C;
		UINT32 m_0x220;
		UINT32 m_0x224;
		UINT32 m_0x228;
		UINT32 m_0x22C;
		UINT32 m_0x230;
		UINT32 m_0x234;
		UINT32 m_0x238;
		UINT32 m_0x23C;
		UINT32 m_0x240;
		UINT32 m_0x244;
		UINT32 m_0x248;
		UINT32 m_0x24C;
		UINT32 m_0x250;
		UINT32 m_0x254;
		UINT32 m_0x258;
		UINT32 m_0x25C;
		UINT32 m_0x260;
		UINT32 m_0x264;
		UINT32 m_0x268;
		UINT32 m_0x26C;
		UINT32 m_0x270;
		UINT32 m_0x274;
		UINT32 m_0x278;
		UINT32 m_0x27C;
		UINT32 m_0x280;
		UINT32 m_0x284;
		UINT32 m_0x288;
		UINT32 m_0x28C;
		UINT32 m_0x290;
		UINT32 m_0x294;
		UINT32 m_0x298;
		UINT32 m_0x29C;
		UINT32 m_0x2A0;
		UINT32 m_0x2A4;
		UINT32 m_0x2A8;
		UINT32 m_0x2AC;
		UINT32 m_0x2B0;
		UINT32 m_0x2B4;
		UINT32 m_0x2B8;
		UINT32 m_0x2BC;
		UINT32 m_0x2C0;
		UINT32 m_0x2C4;
		UINT32 m_0x2C8;
		UINT32 m_0x2CC;
		UINT32 m_0x2D0;
		UINT32 m_0x2D4;
		UINT32 m_0x2D8;
		UINT32 m_0x2DC;
		UINT32 m_0x2E0;
		UINT32 m_0x2E4;
		UINT32 m_0x2E8;
		UINT32 m_0x2EC;
		UINT32 m_0x2F0;
		UINT32 m_0x2F4;
		UINT32 m_0x2F8;
		UINT32 m_0x2FC;
		UINT32 m_0x300;
		UINT32 m_0x304;
		UINT32 m_0x308;
		UINT32 m_0x30C;
		UINT32 m_0x310;
		UINT32 m_0x314;
		UINT32 m_0x318;
		UINT32 m_0x31C;
		UINT32 m_0x320;
		UINT32 m_0x324;
		UINT32 m_0x328;
		UINT32 m_0x32C;
		UINT32 m_0x330;
		UINT32 m_0x334;
		UINT32 m_0x338;
		UINT32 m_0x33C;
		UINT32 m_0x340;
		UINT32 m_0x344;
		UINT32 m_0x348;
		UINT32 m_0x34C;
		UINT32 m_0x350;
		UINT32 m_0x354;
		UINT32 m_0x358;
		UINT32 m_0x35C;
		UINT32 m_0x360;
		UINT32 m_0x364;
		UINT32 m_0x368;
		UINT32 m_0x36C;
		UINT32 m_0x370;
		UINT32 m_0x374;
		UINT32 m_0x378;
		UINT32 m_0x37C;
		UINT32 m_0x380;
		UINT32 m_0x384;
		UINT32 m_0x388;
		UINT32 m_0x38C;
		UINT32 m_0x390;
		UINT32 m_0x394;
		UINT32 m_0x398;
		UINT32 m_0x39C;
		UINT32 m_0x3A0;
		UINT32 m_0x3A4;
		UINT32 m_0x3A8;
		UINT32 m_0x3AC;
		UINT32 m_0x3B0;
		UINT32 m_0x3B4;
		UINT32 m_0x3B8;
		UINT32 m_0x3BC;
		UINT32 m_0x3C0;
		UINT32 m_0x3C4;
		UINT32 m_0x3C8;
		UINT32 m_0x3CC;
		UINT32 m_0x3D0;
		UINT32 m_0x3D4;
		UINT32 m_0x3D8;
		UINT32 m_0x3DC;
		UINT32 m_0x3E0;
		UINT32 m_0x3E4;
		UINT32 m_0x3E8;
		UINT32 m_0x3EC;
		UINT32 m_0x3F0;
		UINT32 m_0x3F4;
		UINT32 m_0x3F8;
		UINT32 m_0x3FC;
		UINT32 m_0x400;
		UINT32 m_0x404;
		UINT32 m_0x408;
		UINT32 m_0x40C;
		UINT32 m_0x410;
		UINT32 m_0x414;
		UINT32 m_0x418;
		UINT32 m_0x41C;
		UINT32 m_0x420;
		UINT32 m_0x424;
		UINT32 m_0x428;
		UINT32 m_0x42C;
		UINT32 m_0x430;
		UINT32 m_0x434;
		UINT32 m_0x438;
		UINT32 m_0x43C;
		UINT32 m_0x440;
		UINT32 m_0x444;

		UINT16 m_0x448;
		BOOL m_Status_Die;//m_0x44a;
		UINT16 m_Status_Left;// m_0x44e;

		UINT16 m_Status_DeathRay;//m_0x450;
		UINT16 m_Status_Sleep;//m_0x452;
		UINT16 m_Status_Poison;//m_0x454;
		UINT16 m_Status_Weak;//m_0x456;
		UINT16 m_0x458;
		UINT16 m_0x45a;
		UINT16 m_Buffer_Sleep;//m_0x45C;
		UINT16 m_Buff_WaterShield;//m_0x45e;

		UINT16 m_Buffer_SeparatedBody;//m_0x460;
		UINT16 m_Buffer_ǿ����;//m_0x462;
		UINT16 m_Buffer_����;//m_0x464;
		UINT16 m_Buffer_������;//m_0x466;

		UINT16 m_Buffer_����;//m_0x468;
		UINT16 m_Buffer_�ɵ�;// m_0x46a;

		UINT32 m_0x46C;


		UINT32 m_0x470;
		UINT32 m_0x474;
		UINT32 m_0x478;
		UINT32 m_0x47C;
		UINT32 m_0x480;
		UINT32 m_0x484;

		UINT32 m_0x488;
		UINT32 m_0x48C;
		UINT32 m_0x490;
		UINT32 m_0x494;
		UINT32 m_0x498;
		UINT32 m_0x49C;
		UINT32 m_0x4A0;
		UINT32 m_0x4A4;
		UINT32 m_0x4A8;
		UINT32 m_0x4AC;
		UINT32 m_0x4B0;
		UINT32 m_0x4B4;
		UINT32 m_0x4B8;
		UINT32 m_0x4BC;
		UINT32 m_0x4C0;
		UINT32 m_0x4C4;
		UINT32 m_0x4C8;
		UINT32 m_0x4CC;
		UINT32 m_0x4D0;
		UINT32 m_0x4D4;
		UINT16 m_0x4D8;
		UINT16 m_0x4DA;


	};
	enum
	{
		//1244,4dc

		EnumBasePlayerPropertySize = sizeof(CBasePlayerProperty)
	};
	typedef CBasePlayerProperty* PBasePlayerProperty;
}
