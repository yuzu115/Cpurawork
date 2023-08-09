#include "End.h"
#include "DxLib.h"

End::End()
{
	g_WaitTime = 0;

}

End::~End()
{

}

AbstractScene* End::Update()
{
	//�G���f�B���O�\��
	if (++g_WaitTime < 600) g_PosY = 300 - g_WaitTime / 2;
	//�^�C���̉��Z�������I��
	if (++g_WaitTime > 900) {
		return nullptr;
	}
	return this;
}

void End::Draw()const
{
	SetFontSize(50);
	DrawString(100, 170 + g_PosY, "�^�C�g���@�@�@Game�@Title", 0xffffff);
	DrawString(100, 220 + g_PosY, "�o�[�W�����@�@1.0", 0xffffff);
	DrawString(100, 270 + g_PosY, "�ŏI�X�V���@�@2023�N08��09��", 0xffffff);
	DrawString(100, 330 + g_PosY, "����ҁ@�@�@�@teruya yuzuki", 0xffffff);
	DrawString(100, 380 + g_PosY, "�@�@�@�@�@�@�@�w�w�w�@�w�w", 0xffffff);
	DrawString(100, 430 + g_PosY, "�f�ޗ��p", 0xffffff);
	DrawString(100, 480 + g_PosY, "�@BGM�@�@�@ �@�w�w�w�w", 0xffffff);
	DrawString(100, 535 + g_PosY, "�@SE�@�@�@�@�@�w�w�w�w�w�w�w�w", 0xffffff);

	SetFontSize(90);
	DrawString(50, 70, "Thank you for playing", 0xffffff);
}
