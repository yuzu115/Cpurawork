#include "DxLib.h"
#include "common.h"
#include "AbstractScene.h"
#include "SceneManager.h"
#include "GameMain.h"
#include "KeyManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{

	SetMainWindowText("�V���[�e�B���O�Q�[��");
	SetGraphMode(SCREENSIZE_X, SCREENSIZE_Y, 32);
	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	if (DxLib_Init() == -1)	// DX���C�u�����̏���������
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	SceneManager sceneManager(dynamic_cast<AbstractScene*>(new GameMain));
	//�Q�[�����[�v
	KeyManager::Update();
	while (ProcessMessage() != -1 && sceneManager.Update() != nullptr/* && KeyManager::OnKeyClicked(KEY_INPUT_ESCAPE)*/) {
		ClearDrawScreen();
		sceneManager.Draw();
		ScreenFlip();
	}

	DxLib_End();

	return 0;	// �\�t�g�̏I��
}
