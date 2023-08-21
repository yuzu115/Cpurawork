#include "End.h"
#include "DxLib.h"

//�R���X�g���N�^
End::End()
{
	EndImage = LoadGraph("images/End.png");
	g_WaitTime = 0;
}

//�f�X�g���N�^
End::~End()
{

}

//�X�V
AbstractScene*End::Update()
{
	//�G���f�B���O�\��
	if (++g_WaitTime < 700) g_PosY = 600 - g_WaitTime / 2;
	//�^�C���̉��Z�������I��
	if (++g_WaitTime > 900) {
		return nullptr;
	}
	return this;
}

//�`��
void End::Draw() const
{
	DrawExtendGraph(0, 0, 640, 480, EndImage, FALSE);
	SetFontSize(24);
	DrawString(100, 170 + g_PosY, "�^�C�g���@�@�@Game�@Title", 0x000000);
	DrawString(100, 200 + g_PosY, "�o�[�W�����@�@1.0", 0x000000);
	DrawString(100, 230 + g_PosY, "�ŏI�X�V���@�@201x�Nxx��xx��", 0x000000);
	DrawString(100, 260 + g_PosY, "����ҁ@�@�@�@���ۓd�q�r�W�l�X���w�Z", 0x000000);
	DrawString(100, 290 + g_PosY, "�@�@�@�@�@�@�@�w�w�w�@�w�w", 0x000000);
	DrawString(100, 310 + g_PosY, "�f�ޗ��p", 0x000000);
	DrawString(100, 340 + g_PosY, "�@BGM�@�@�@ �@�w�w�w�w", 0x000000);
	DrawString(100, 365 + g_PosY, "�@SE�@�@�@�@�@�w�w�w�w�w�w�w�w", 0x000000);

	SetFontSize(50);
	DrawString(50, 70, "Thank you for playing", 0x000000);

}
