#include "DxLib.h"
#include "common.h"

/***********************************************
 * プログラムの開始
 ***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	double dNextTime = GetNowCount();

	SetMainWindowText("シューティングゲーム");

	ChangeWindowMode(TRUE);		// ウィンドウモードで起動

	SetAlwaysRunFlag(true);		//常にアクティブにする

	SetGraphMode(SCREENSIZE_X, SCREENSIZE_Y, 32);	//画面サイズの設定

	if (DxLib_Init() == -1) return -1;	// DXライブラリの初期化処理

	SetDrawScreen(DX_SCREEN_BACK);	// 描画先画面を裏にする

	AbstractScene* firstScene = new Title();						//FirstSceneの作成

	SceneManager* sceneManager = SceneManager::Create(firstScene);	//シーンマネージャーの起動

	// ゲームループ
	while ((ProcessMessage() == 0) &&
		sceneManager->Update() != nullptr
		)
	{
		PAD_INPUT::UpdateKey();

		ClearDrawScreen();		// 画面の初期化

		sceneManager->Draw();


		ScreenFlip();			// 裏画面の内容を表画面に反映

		//フレームレートの設定
		dNextTime += 1.0 / 60.0 * 1000.0;

		if (dNextTime > GetNowCount())
		{
			WaitTimer(static_cast<int>(dNextTime) - GetNowCount());
		}
		else { dNextTime = GetNowCount(); }		//補正
	}

	SoundPlayer::DeleteThis();	//サウンドプレイヤーの削除
	delete sceneManager;		//シーンマネージャーの削除

	return 0;
}