#include<cstdio>
#include "CGameManager.h"
using namespace FortuneSummonersAssistGame;
int main()
{
	PGameManager pGame = new CGameManager();
	pGame = pGame->GetRplePlayer(0)->GetGameManager();
	printf_s("first");
	return 0;
}