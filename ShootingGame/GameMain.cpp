#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "KeyManager.h"
#include "GameClear.h"

//�R���X�g���N�^
GameMain::GameMain()
{
	life = 0;
	player = 0;
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

	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_SPACE))
	{
		return new GameOver;
	}
	if (KeyManager::OnKeyClicked(KEY_INPUT_E))
	{
		return new GameClear;
	}
	return this;
}

//�`��
void GameMain::Draw() const
{
	DrawCircle(50, 50, 10, 0xffff00, TRUE);
	SetFontSize(30);
	DrawString(400, 500, "Space�L�[�ŃQ�[���I�[�o�[��", 0xffffff);
	DrawString(400, 550, "E�L�[�ŃQ�[���N���A��", 0xffffff);
}

//void GameMain::HitCheck()
//{
//
//}
//
//void GameMain::SpawnBullet()
//{
//
//}
