#pragma once
#pragma once
#pragma pack(1)


#include <WinSDKVer.h>
//最低平台XP
#define _WIN32_WINNT _WIN32_WINNT_WINXP 
#include <SDKDDKVer.h>
//取消不常用的头文件
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>
#include <set>
#include <cassert>
//C# var - - C++ 11
#define var auto
using namespace std;
namespace FortuneSummonersAssistCommon
{
	template<class T>
	class CMaple 
	{
	private:
		//好像从2012 vector size 优化变小了
#if _MSC_VER > 1600 
		INT32 m_value;
#endif
		vector<T> m_vecInfo;
	public:
		CMaple();
		~CMaple();
		vector<T>& GetVectorInfo() const;
	};
	
	enum
	{
		EnumVectorSize = sizeof(CMaple <INT32>),
	};
}
