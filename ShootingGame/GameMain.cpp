#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "KeyManager.h"
#include "GameClear.h"

//コンストラクタ
GameMain::GameMain()
{
	life = 0;
	player = 0;
}

//デストラクタ
GameMain::~GameMain()
{

}

//更新
AbstractScene* GameMain::Update()
{
	//HitCheck;
	//SpawnBullet;

	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_SPACE))
	{
		return new GameOver;
	}
	if (KeyManager::OnKeyClicked(KEY_INPUT_E))
	{
		return new GameClear;
	}
	return this;
}

//描画
void GameMain::Draw() const
{
	DrawCircle(50, 50, 10, 0xffff00, TRUE);
	SetFontSize(30);
	DrawString(400, 500, "Spaceキーでゲームオーバーへ", 0xffffff);
	DrawString(400, 550, "Eキーでゲームクリアへ", 0xffffff);
}

//void GameMain::HitCheck()
//{
//
//}
//
//void GameMain::SpawnBullet()
//{
//
//}
