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
	g_Player = 0;
	mainImage = LoadGraph("images/paperareplne.png");

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
	//左キーでカーソルを下に移動
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_LEFT)) {
		++g_Player > 10;
	}
	//右キーでカーソルを上に移動
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT)) {
		--g_Player < 0;
	}
	g_MenuX = g_Player * 50;

	return this;
}

//描画
void GameMain::Draw() const
{
	//プレイヤーの仮表示
	DrawGraph(50 + g_MenuX, 400, mainImage, TRUE);
	//画面遷移ボタンの表示
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
