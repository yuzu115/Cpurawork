#include "GameClear.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "Title.h"
#include "KeyManager.h"
#include "GameMain.h"
int GameClear::Stage;

//コンストラクタ
GameClear::GameClear()
{
	//Stage = 0;
}

//デストラクタ
GameClear::~GameClear()
{

}

//更新
AbstractScene* GameClear::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_SPACE)&&Stage<4)
	{
		Stage += 1;
		return new GameMain;
	}
	else if (KeyManager::OnKeyClicked(KEY_INPUT_C)||Stage>4)
	{
		Stage = 0;
		return new Title;
	}
	return this;
}

//描画
void GameClear::Draw() const
{
	DrawBox(0, 0, 640, 480, 0xffffff, TRUE);
	SetFontSize(48);
	DrawString(200, 200, "GameClear", 0x000000);
	SetFontSize(30);
	if (Stage < 4) {
		DrawString(200, 400, "SPACEキーでゲームメイン", 0x000000);
	}
	else {
		DrawString(200, 400, "Cキーでタイトル", 0x000000);
	}
}
