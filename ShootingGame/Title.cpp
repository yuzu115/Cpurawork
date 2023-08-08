#include "Title.h"
#include "DxLib.h"

//コンストラクタ
Title::Title()
{
	TitleImage = LoadGraph("images/Title.jpg");
}

//デストラクタ
Title::~Title()
{

}

//更新
AbstractScene* Title::Update()
{
	return this;
}

//描画
void Title::Draw() const
{
	DrawGraph(0, 0, TitleImage, FALSE);
}
