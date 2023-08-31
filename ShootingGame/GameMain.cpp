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
	player1 = new Player;
	enemy = new Enemy;

}

//�f�X�g���N�^
GameMain::~GameMain()
{
	delete player1;
}

//�X�V
AbstractScene* GameMain::Update()
{
	//HitCheck;
	//SpawnBullet;
	//��ʑJ��
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

//�`��
void GameMain::Draw() const
{
	//��ʑJ�ڃ{�^���̕\��
	SetFontSize(40);
	DrawString(100, 650, "A�L�[�ŃQ�[���I�[�o�[��", 0xffffff);
	DrawString(650, 650, "B�L�[�ŃQ�[���N���A��", 0xffffff);

	player1 -> Draw();
	enemy->EnemyDraw();
	
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
