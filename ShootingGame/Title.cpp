#include "Title.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "GameMain.h"

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
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_Z))
	{
		return new GameMain;
	}
	return this;
}

//描画
void Title::Draw() const
{
	DrawGraph(0, 0, TitleImage, FALSE);
	DrawCircle(790, 430, 20, 0xffff00, TRUE);
}
