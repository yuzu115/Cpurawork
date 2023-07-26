#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "End.h"
#include "KeyManager.h"
#include "Ranking.h"

//�R���X�g���N�^
Title::Title()
{
	TitleImage = LoadGraph("images/Title.png");
	g_MenuNumber = 0;

}

//�f�X�g���N�^
Title::~Title()
{

}

//�X�V
AbstractScene* Title::Update()
{
	KeyManager::Update();
	//��ʑJ��
	if (KeyManager::OnKeyClicked(KEY_INPUT_Z)) {
		if (g_MenuNumber == 0) {
			return new GameMain;
		}
		if (g_MenuNumber == 1) {
			return new Ranking;
		}
		if (g_MenuNumber == 2) {
			return new End;
		}
	}
	//���L�[�ŃJ�[�\�������Ɉړ�
	if (KeyManager::OnKeyClicked(KEY_INPUT_DOWN)) {
		if (++g_MenuNumber > 2) g_MenuNumber = 0;
	}
	//��L�[�ŃJ�[�\������Ɉړ�
	if (KeyManager::OnKeyClicked(KEY_INPUT_UP)) {
		if (--g_MenuNumber < 0) g_MenuNumber = 2;
	}
	g_MenuY = g_MenuNumber * 52;

	return this;
}

//�`��
void Title::Draw() const
{
	//�^�C�g���摜�\��
	DrawExtendGraph(0, 0, 640, 480, TitleImage, FALSE);
	//�����̕`��
	SetFontSize(35);
	DrawString(280, 255, "Start", 0x000000);
	DrawString(280, 310, "Ranking", 0x000000);
	DrawString(280, 365, "End", 0x000000);

	//���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(240, 255 + g_MenuY, 260, 270 + g_MenuY, 240, 285 + g_MenuY, GetColor(255, 0, 0), TRUE);
	
}