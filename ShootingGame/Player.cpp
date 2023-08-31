#include "Player.h"
#include "DxLib.h"
#include "PadInput.h"
#include "KeyManager.h"
#include "GameClear.h"
#include "GameOver.h"

//�R���X�g���N�^
Player::Player()
{
	PlayerImage = LoadGraph("images/paper areplane.png");
	g_Player = 0;
	bullet = new Bullet;
}

//�f�X�g���N�^
Player::~Player()
{

}

//�X�V
void Player::PlayerUpdate()
{	
	//���L�[�ŃJ�[�\�������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_LEFT) || KeyManager::OnKeyClicked(KEY_INPUT_LEFT)) {
		--g_Player > 10;
	}
	//�E�L�[�ŃJ�[�\�����E�Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT) || KeyManager::OnKeyClicked(KEY_INPUT_RIGHT)) {
		++g_Player < 10;
	}
	g_MenuX = g_Player * 150;
}

//�`��
void Player::Draw() const
{

	//�v���C���[�̉��\��
	DrawGraph(50 + g_MenuX, 500, PlayerImage, TRUE);
	bullet->BUlletDraw();
}