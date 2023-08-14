#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "PadInput.h"
#include "GameClear.h"

//コンストラクタ
GameMain::GameMain()
{
	life = 0;
	player = 10.0f;
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
	
	PAD_INPUT::UpdateKey();
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new GameOver;
	}
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B))
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
	DrawString(400, 500, "Aキーでゲームオーバーへ", 0xffffff);
	DrawString(400, 550, "Bキーでゲームクリアへ", 0xffffff);
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
