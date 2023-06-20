#include "DxLib.h"
#include "comon.h"
#include "AbstractScene.h"
#include "SceneManager.h"
#include "Title.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow) {

	SetMainWindowText("ブロック崩し");

	ChangeWindowMode(TRUE);		// ウィンドウモードで起動

	if (DxLib_Init() == -1) return -1;	// DXライブラリの初期化処理

	//SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

		SceneManager sceneManager(dynamic_cast<AbstractScene*>(new Title));

		printf("main");
		while (sceneManager.Update() != nullptr) {
			sceneManager.Draw();
		}

		DxLib_End();

		return 0;	// ソフトの終了
	}
