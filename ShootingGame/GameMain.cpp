#include "GameMain.h"

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
	return this;
}

//�`��
void GameMain::Draw() const
{
	DrawBox(0, 0, 1280, 720, 0xffffff, TRUE);
}
