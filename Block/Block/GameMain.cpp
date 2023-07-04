#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "Stage.h"
#include "KeyManager.h"
#include "End.h"

//コンストラクタ
GameMain::GameMain()
{

}

//デストラクタ
GameMain::~GameMain()
{

}

//更新
AbstractScene* GameMain::Update()
{
	//画面遷移
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_A)) {
		return new End;
	}
	return this;
}

//描画
void GameMain::Draw()const 
{
	DrawBox(0, 0, 640, 480, 0x707070, TRUE);
}