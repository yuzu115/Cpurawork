#include "DxLib.h"
#include "comon.h"
#include "AbstractScene.h"
#include "SceneManager.h"
#include "Title.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow) {

	SetMainWindowText("�u���b�N����");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	//SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

		SceneManager sceneManager(dynamic_cast<AbstractScene*>(new Title));

		printf("main");
		while (sceneManager.Update() != nullptr) {
			sceneManager.Draw();
		}

		DxLib_End();

		return 0;	// �\�t�g�̏I��
	}
