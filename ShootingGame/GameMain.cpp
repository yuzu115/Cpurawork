#include "GameMain.h"
#include "DxLib.h"
#include "GameOver.h"
#include "KeyManager.h"
#include "GameClear.h"

//�R���X�g���N�^
GameMain::GameMain()
{

}

//�f�X�g���N�^
GameMain::~GameMain()
{

}

//�X�V
AbstractScene* GameMain::Update()
{
	HitCheck;
	SpawnBullet;

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
	SetFontSize(100);
	DrawString(400, 300, "GameMain", 0xffffff);
}

void GameMain::HitCheck()
{

}

void GameMain::SpawnBullet()
{

}
