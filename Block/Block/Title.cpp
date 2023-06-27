#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "KeyManager.h"

//�R���X�g���N�^
Title::Title()
{
	TitleImage = LoadGraph("images/BlockOut2.png");
}

//�f�X�g���N�^
Title::~Title()
{

}

//�X�V
AbstractScene* Title::Update()
{
	//���j���[�J�[�\���ړ�����
	if (CheckHitKey(KEY_INPUT_DOWN)) {
		g_MenuY = g_MenuNumber * 52;
		DrawCircle(250, 265, 10, 0xff0000, TRUE);
		
	}
	if (CheckHitKey(KEY_INPUT_UP)) {
		DrawCircle(250, 265, 10, 0xff0000, TRUE);
		
	}

	return this;
}

//�`��
void Title::Draw() const
{
	//�^�C�g���摜�\��
	DrawExtendGraph(0, 0, 640, 480, TitleImage, FALSE);
	//�����̕`��
	SetFontSize(35);
	DrawString(280, 250, "Start", 0x000000);
	DrawString(280, 290, "Ranking", 0x000000);
	DrawString(280, 330, "End", 0x000000);

	//���j���[�J�[�\���i�ہj�̕\��
	DrawCircle(250, 265, 10, 0xff0000, TRUE);

}