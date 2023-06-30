#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "End.h"

//コンストラクタ
Title::Title()
{
	TitleImage = LoadGraph("images/Title.png");

}

//デストラクタ
Title::~Title()
{

}

//更新
AbstractScene* Title::Update()
{

	g_MenuY = g_MenuNumber * 52;

	return this;
}

//描画
void Title::Draw() const
{
	//タイトル画像表示
	DrawExtendGraph(0, 0, 640, 480, TitleImage, FALSE);
	//文字の描画
	SetFontSize(35);
	DrawString(280, 255, "Start", 0x000000);
	DrawString(280, 310, "End", 0x000000);

	//メニューカーソル（三角形）の表示
	
	DrawTriangle(240, 255 + g_MenuY, 260, 270 + g_MenuY, 240, 285 + g_MenuY, GetColor(255, 0, 0), TRUE);
	
}