#include"DxLib.h"
#include"End.h"

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

//�`��
void End::Draw() const
{
	DrawGraph(0, 0, EndImage, FALSE);
	SetFontSize(30);
	DrawString(100, 170 + g_PosY, "�^�C�g���@�@�@Game�@Title", 0xffffff);
	DrawString(100, 200 + g_PosY, "�o�[�W�����@�@1.0", 0xffffff);
	DrawString(100, 230 + g_PosY, "�ŏI�X�V���@�@201x�Nxx��xx��", 0xffffff);
	DrawString(100, 260 + g_PosY, "����ҁ@�@�@�@���ۓd�q�r�W�l�X���w�Z", 0xffffff);
	DrawString(100, 290 + g_PosY, "�@�@�@�@�@�@�@�w�w�w�@�w�w", 0xffffff);
	DrawString(100, 310 + g_PosY, "�f�ޗ��p", 0xffffff);
	DrawString(100, 340 + g_PosY, "�@BGM�@�@�@ �@�w�w�w�w", 0xffffff);
	DrawString(100, 365 + g_PosY, "�@SE�@�@�@�@�@�w�w�w�w�w�w�w�w", 0xffffff);

	SetFontSize(70);
	DrawString(50, 70 + g_PosY, "Thank you for playing", 0xffffff);

}
