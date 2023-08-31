#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
#include "KeyManager.h"
#include "GameClear.h"
#include "GameOver.h"

//コンストラクタ
Player::Player()
{
	PlayerImage = LoadGraph("images/paper areplane.png");
	g_Player = 0;
	bullet = new Bullet;
}

//デストラクタ
Player::~Player()
{

}

//更新
void Player::PlayerUpdate()
{	
	//左キーでカーソルを左に移動
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_LEFT) || KeyManager::OnKeyClicked(KEY_INPUT_LEFT)) {
		--g_Player > 10;
	}
	//右キーでカーソルを右に移動
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT) || KeyManager::OnKeyClicked(KEY_INPUT_RIGHT)) {
		++g_Player < 10;
	}
	g_MenuX = g_Player * 150;
}

//描画
void Player::Draw() const
{

	//プレイヤーの仮表示
	DrawGraph(50 + g_MenuX, 500, PlayerImage, TRUE);
	bullet->BUlletDraw();
}