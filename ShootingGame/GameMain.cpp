#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "PadInput.h"
#include "GameClear.h"
#include "KeyManager.h"

//�R���X�g���N�^
GameMain::GameMain()
{
	life = 0;
	player = 10.0f;
	mainImage = LoadGraph("images/paper areplane.png");
	g_Player = 0;

}

//�f�X�g���N�^
GameMain::~GameMain()
{

}

//�X�V
AbstractScene* GameMain::Update()
{
	//HitCheck;
	//SpawnBullet;
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

	//���L�[�ŃJ�[�\�������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_LEFT)||KeyManager::OnKeyClicked(KEY_INPUT_LEFT)) {
		--g_Player > 10;
	}
	//�E�L�[�ŃJ�[�\������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT)||KeyManager::OnKeyClicked(KEY_INPUT_RIGHT)) {
		++g_Player < 10;
	}
	g_MenuX = g_Player * 150;

	return this;
}

//�`��
void GameMain::Draw() const
{
	//��ʑJ�ڃ{�^���̕\��
	SetFontSize(40);
	DrawString(100, 650, "A�L�[�ŃQ�[���I�[�o�[��", 0xffffff);
	DrawString(650, 650, "B�L�[�ŃQ�[���N���A��", 0xffffff);


	//�v���C���[�̉��\��
	DrawGraph(50 + g_MenuX, 500, mainImage, TRUE);

	if (PAD_INPUT::OnPressed(XINPUT_BUTTON_RIGHT_SHOULDER) || KeyManager::OnKeyPressed(KEY_INPUT_UP)) {
		DrawCircle(101, 490, 5, 0xffff00, TRUE);
	}
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
