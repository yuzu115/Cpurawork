#include "Title.h"
#include "DxLib.h"

//�R���X�g���N�^
Title::Title()
{
	TitleImage = LoadGraph("images/Title.jpg");
}

//�f�X�g���N�^
Title::~Title()
{

}

//�X�V
AbstractScene* Title::Update()
{
	return this;
}

//�`��
void Title::Draw() const
{
	DrawGraph(0, 0, TitleImage, FALSE);
}
