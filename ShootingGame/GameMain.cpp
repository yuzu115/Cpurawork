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
	mainImage = LoadGraph("images/paper areplane.png");
	g_Player = 0;

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
		--g_Player > 10;
	}
	//右キーでカーソルを上に移動
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT)) {
		++g_Player < 10;
	}
	g_MenuX = g_Player * 150;
	
	return this;
}

//描画
void GameMain::Draw() const
{
	//画面遷移ボタンの表示
	SetFontSize(30);
	DrawString(400, 500, "Aキーでゲームオーバーへ", 0xffffff);
	DrawString(400, 550, "Bキーでゲームクリアへ", 0xffffff);


	//プレイヤーの仮表示
	DrawGraph(50 + g_MenuX, 50, mainImage, TRUE);
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
