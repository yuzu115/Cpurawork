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
	SetFontSize(100);
	DrawString(400, 300, "GameMain", 0xffffff);
}
