#include "Title.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "GameMain.h"

//�R���X�g���N�^
Title::Title()
{
	TitleImage = LoadGraph("images/Title.png");
}

//�f�X�g���N�^
Title::~Title()
{

}

//�X�V
AbstractScene* Title::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_Z))
	{
		return new GameMain;
	}
	return this;
}

//�`��
void Title::Draw() const
{
	DrawGraph(0, 0, TitleImage, FALSE);
	DrawCircle(790, 430, 20, 0xffff00, TRUE);
}
