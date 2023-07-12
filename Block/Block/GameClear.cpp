#include "GameClear.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "Title.h"
#include "KeyManager.h"
#include "GameMain.h"

//コンストラクタ
GameClear::GameClear()
{

}

//デストラクタ
GameClear::~GameClear()
{

}

//更新
AbstractScene* GameClear::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_C))
	{
		return new GameMain;
	}
	if (KeyManager::OnKeyClicked(KEY_INPUT_SPACE))
	{
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
	DrawString(200, 400, "Cキーでゲームメイン", 0x000000);
	DrawString(200, 350, "SPACEキーでタイトル", 0x000000);
}
