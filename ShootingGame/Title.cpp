#include "Title.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "GameMain.h"
#include "Ranking.h"
#include "End.h"
#include "PadInput.h"

//�R���X�g���N�^
Title::Title()
{
	TitleImage = LoadGraph("images/Title.png");
	cursor = LoadGraph("Images/cursor.png");
	g_MenuNumber = 0;
	select = 0;
}

//�X�V
AbstractScene* Title::Update()
{
	PAD_INPUT::UpdateKey();
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		if (g_MenuNumber == 0) {
			return new GameMain;
		}
		if (g_MenuNumber == 1)
		{
			return new Ranking;
		}
		if (g_MenuNumber == 2) {
			return new End;
		}
	}
	//���L�[�ŃJ�[�\�������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_DOWN)) {
		if (++g_MenuNumber > 2) g_MenuNumber = 0;
	}
	//��L�[�ŃJ�[�\������Ɉړ�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_UP)) {
		if (--g_MenuNumber < 0) g_MenuNumber = 2;
	}
	g_MenuY = g_MenuNumber * 82;

	return this;
}

//�`��
void Title::Draw() const
{
	DrawGraph(0, 0, TitleImage, FALSE);
	//���j���[�J�[�\���i�O�p�`�j�̕\��
	DrawTriangle(750, 410 + g_MenuY, 800, 425 + g_MenuY, 750, 440 + g_MenuY, 0xff0000, TRUE);
}
