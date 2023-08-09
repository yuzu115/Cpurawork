#include "Title.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "GameMain.h"
#include "Ranking.h"
#include "End.h"

//コンストラクタ
Title::Title()
{
	TitleImage = LoadGraph("images/Title.png");
	g_MenuNumber = 0;
}

//デストラクタ
Title::~Title()
{

}

//更新
AbstractScene* Title::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_Z))
	{
		if (g_MenuNumber == 0)
		{
			return new GameMain;
		}
		if (g_MenuNumber == 1)
		{
			return new Ranking;
		}
		if (g_MenuNumber == 2)
		{
			return new End;
		}
	}
	//下キーでカーソルを下に移動
	if (KeyManager::OnKeyClicked(KEY_INPUT_DOWN)) {
		if (++g_MenuNumber > 2) g_MenuNumber = 0;
	}
	//上キーでカーソルを上に移動
	if (KeyManager::OnKeyClicked(KEY_INPUT_UP)) {
		if (--g_MenuNumber < 0) g_MenuNumber = 2;
	}
	g_MenuY = g_MenuNumber * 85;
	
	return this;
}

//描画
void Title::Draw() const
{
	DrawGraph(0, 0, TitleImage, FALSE);
	DrawTriangle(780, 410 + g_MenuY, 800, 425 + g_MenuY, 780, 450 + g_MenuY, 0xff0000, TRUE);
}
