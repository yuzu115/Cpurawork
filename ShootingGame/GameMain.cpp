#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "PadInput.h"
#include "GameClear.h"

//�R���X�g���N�^
GameMain::GameMain()
{
	life = 0;
	player = 10.0f;
	g_Player = 0;
	mainImage = LoadGraph("images/paperareplne.png");

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
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new GameOver;
	}
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B))
	{
		return new GameClear;
	}
	//���L�[�ŃJ�[�\�������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_LEFT)) {
		++g_Player > 10;
	}
	//�E�L�[�ŃJ�[�\������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT)) {
		--g_Player < 0;
	}
	g_MenuX = g_Player * 50;

	return this;
}

//�`��
void GameMain::Draw() const
{
	//�v���C���[�̉��\��
	DrawGraph(50 + g_MenuX, 400, mainImage, TRUE);
	//��ʑJ�ڃ{�^���̕\��
	SetFontSize(30);
	DrawString(400, 500, "A�L�[�ŃQ�[���I�[�o�[��", 0xffffff);
	DrawString(400, 550, "B�L�[�ŃQ�[���N���A��", 0xffffff);
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
