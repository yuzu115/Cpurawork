#include "DxLib.h"
#include "common.h"
#include "AbstractScene.h"
#include "SceneManager.h"
#include "GameMain.h"
#include "KeyManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{

	SetMainWindowText("シューティングゲーム");
	SetGraphMode(SCREENSIZE_X, SCREENSIZE_Y, 32);
	ChangeWindowMode(TRUE);		// ウィンドウモードで起動

	if (DxLib_Init() == -1)	// DXライブラリの初期化処理
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

	SceneManager sceneManager(dynamic_cast<AbstractScene*>(new GameMain));
	//ゲームループ
	KeyManager::Update();
	while (ProcessMessage() != -1 && sceneManager.Update() != nullptr/* && KeyManager::OnKeyClicked(KEY_INPUT_ESCAPE)*/) {
		ClearDrawScreen();
		sceneManager.Draw();
		ScreenFlip();
	}

	DxLib_End();

	return 0;	// ソフトの終了
}
