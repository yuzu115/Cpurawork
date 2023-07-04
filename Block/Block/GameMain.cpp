#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "Stage.h"

AbstractScene* GameMain::Update() 
{

	return this;
}

void GameMain::Draw()const 
{
	DrawBox(0, 0, 640, 480, 0x707070, TRUE);
}