#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "Stage.h"

AbstractScene* GameMain::Update() 
{

	return this;
}

void GameMain::Draw()const {
	SetFontSize(20);
	DrawFormatString(0, 30, 0x000000 ,"GameMain",TRUE);
}