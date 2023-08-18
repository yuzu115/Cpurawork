#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
#include "KeyManager.h"
#include "GameClear.h"
#include "GameOver.h"

Player::Player()
{
	mainImage = LoadGraph("images/paper areplane.png");
	g_Player = 0;
}

Player::~Player()
{

}

void Player::Update()
{
	PAD_INPUT::UpdateKey();
	KeyManager::Update();

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

void Player::Draw() const
{

	//プレイヤーの仮表示
	DrawGraph(50 + g_MenuX, 500, mainImage, TRUE);
}