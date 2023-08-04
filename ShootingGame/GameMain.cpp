#include "GameMain.h"

//コンストラクタ
GameMain::GameMain()
{

}

//デストラクタ
GameMain::~GameMain()
{

}

//更新
AbstractScene* GameMain::Update()
{
	return this;
}

//描画
void GameMain::Draw() const
{
	DrawBox(0, 0, 1280, 720, 0xffffff, TRUE);
}
