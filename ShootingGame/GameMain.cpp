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
		--g_Player > 10;
	}
	//�E�L�[�ŃJ�[�\������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_RIGHT)) {
		++g_Player < 10;
	}
	g_MenuX = g_Player * 150;
	
	return this;
}

//�`��
void GameMain::Draw() const
{
	//��ʑJ�ڃ{�^���̕\��
	SetFontSize(30);
	DrawString(400, 500, "A�L�[�ŃQ�[���I�[�o�[��", 0xffffff);
	DrawString(400, 550, "B�L�[�ŃQ�[���N���A��", 0xffffff);


	//�v���C���[�̉��\��
	DrawGraph(50 + g_MenuX, 50, mainImage, TRUE);
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
