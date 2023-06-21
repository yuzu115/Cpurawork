#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"


AbstractScene* GameMain::Update() 
{
	return this;
}

void GameMain::Draw()const {
	printf("GameMain\n");
}