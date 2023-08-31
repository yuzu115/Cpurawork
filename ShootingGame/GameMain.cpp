#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "PadInput.h"
#include "GameClear.h"
#include "KeyManager.h"

//コンストラクタ
GameMain::GameMain()
{
	life = 0;
	player = 10.0f;
	mainImage = LoadGraph("images/paper areplane.png");
	g_Player = 0;
	player1 = new Player;
	enemy = new Enemy;

}

//デストラクタ
GameMain::~GameMain()
{
	delete player1;
}

//更新
AbstractScene* GameMain::Update()
{
	//HitCheck;
	//SpawnBullet;
	//画面遷移
	PAD_INPUT::UpdateKey();
	KeyManager::Update();
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A)||KeyManager::OnKeyClicked(KEY_INPUT_A))
	{
		return new GameOver;
	}
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)||KeyManager::OnKeyClicked(KEY_INPUT_B))
	{
		return new GameClear;
	}

	player1->PlayerUpdate();

	return this;
}

//描画
void GameMain::Draw() const
{
	//画面遷移ボタンの表示
	SetFontSize(40);
	DrawString(100, 650, "Aキーでゲームオーバーへ", 0xffffff);
	DrawString(650, 650, "Bキーでゲームクリアへ", 0xffffff);

	player1 -> Draw();
	enemy->EnemyDraw();
	
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
