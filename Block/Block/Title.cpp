#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"
#include "KeyManager.h"

//コンストラクタ
Title::Title()
{
	TitleImage = LoadGraph("images/Title.bmp");
}

//デストラクタ
Title::~Title()
{

}

//更新
AbstractScene* Title::Update()
{
	//メニューカーソル移動処理
	if (KeyManager::OnKeyClicked(KEY_INPUT_DOWN)) {
		DrawTriangle(220, 255, 220, 280, 270, 270, 0xffffff, TRUE);

	}
	if (KeyManager::OnKeyClicked(KEY_INPUT_UP)) {
		
	}

	return this;
}

//描画
void Title::Draw() const
{
	//タイトル画像表示
	DrawGraph(0, 0, TitleImage, FALSE);

	//メニューカーソル（三角形）の表示
	DrawTriangle(220, 255, 220, 280, 270, 270, 0xff0000, TRUE);

}