#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "KeyManager.h"

//�R���X�g���N�^
Title::Title()
{
	TitleImage = LoadGraph("images/Title.bmp");
}

//�f�X�g���N�^
Title::~Title()
{

}

//�X�V
AbstractScene* Title::Update()
{
	//���j���[�J�[�\���ړ�����
	if (KeyManager::OnKeyClicked(KEY_INPUT_DOWN)) {
		DrawTriangle(220, 255, 220, 280, 270, 270, 0xffffff, TRUE);

	}
	if (KeyManager::OnKeyClicked(KEY_INPUT_UP)) {
		
	}

	return this;
}

//�`��
void Title::Draw() const
{
	//�^�C�g���摜�\��
	DrawGraph(0, 0, TitleImage, FALSE);

	//���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(220, 255, 220, 280, 270, 270, 0xff0000, TRUE);

}