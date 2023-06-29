#include "DxLib.h"
#include "comon.h"
#include "AbstractScene.h"
#include "SceneManager.h"
#include "Title.h"
#include "GameMain.h"
#include "End.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow) 
{

	SetMainWindowText("�u���b�N����");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	if (DxLib_Init() == -1)	// DX���C�u�����̏���������
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

		SceneManager sceneManager(dynamic_cast<AbstractScene*>(new Title));

		while (ProcessMessage()!=-1 && sceneManager.Update() != nullptr) {
			ClearDrawScreen();
			sceneManager.Draw();
			ScreenFlip();
		}

		DxLib_End();

		return 0;	// �\�t�g�̏I��
}
