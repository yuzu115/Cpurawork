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
	SetFontSize(100);
	DrawString(400, 300, "GameMain", 0xffffff);
}
