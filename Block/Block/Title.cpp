#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "KeyManager.h"

//コンストラクタ
Title::Title()
{
	TitleImage = LoadGraph("images/BlockOut2.png");
}

//デストラクタ
Title::~Title()
{

}

//更新
AbstractScene* Title::Update()
{
	//メニューカーソル移動処理
	if (CheckHitKey(KEY_INPUT_DOWN)) {
		g_MenuY = g_MenuNumber * 52;
		DrawCircle(250, 265, 10, 0xff0000, TRUE);
		
	}
	if (CheckHitKey(KEY_INPUT_UP)) {
		DrawCircle(250, 265, 10, 0xff0000, TRUE);
		
	}

	return this;
}

//描画
void Title::Draw() const
{
	//タイトル画像表示
	DrawExtendGraph(0, 0, 640, 480, TitleImage, FALSE);
	//文字の描画
	SetFontSize(35);
	DrawString(280, 250, "Start", 0x000000);
	DrawString(280, 290, "Ranking", 0x000000);
	DrawString(280, 330, "End", 0x000000);

	//メニューカーソル（丸）の表示
	DrawCircle(250, 265, 10, 0xff0000, TRUE);

}