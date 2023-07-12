#include "GameOver.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "Title.h"

//コンストラクタ
GameOver::GameOver()
{
	g_WaitTime = 0;
}

//デストラクタ
GameOver::~GameOver()
{
}

//更新
AbstractScene* GameOver::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_SPACE))
	{
		return new Title;
	}
	return this;
}

//描画
void GameOver::Draw() const
{
	DrawBox(0, 0, 640, 480, 0xffffff, TRUE);
	SetFontSize(48);
	DrawString(200, 200, "GameOver", 0x000000);
	SetFontSize(20);
	DrawString(200, 400, "SPACEキーでタイトル",0x000000);
}