#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "KeyManager.h"
#include "End.h"

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
	// ���j���[�J�[�\���ړ�����
		if (KeyManager::OnKeyClicked(KEY_INPUT_DOWN)){
			if (++g_MenuNumber > 2) g_MenuNumber = 0;
		}
	if (KeyManager::OnKeyClicked(KEY_INPUT_UP)) {
		if (--g_MenuNumber < 0) g_MenuNumber = 2;
	}

	// GameMain�։�ʑJ��
	if (KeyManager::OnKeyClicked(KEY_INPUT_LEFT))
	{
		return new GameMain();
	}
	// GameMain�։�ʑJ��
	if (KeyManager::OnKeyClicked(KEY_INPUT_RIGHT))
	{
		return new End();
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
	DrawString(280, 360, "End", 0x000000);

	//���j���[�J�[�\���i�O�p�`�j�̕\��
	
	DrawTriangle(240, 255 + g_MenuY, 260, 270 + g_MenuY, 240, 285 + g_MenuY, GetColor(255, 0, 0), TRUE);
	
}