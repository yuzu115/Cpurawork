#pragma once
#include "AbstractScene.h"

class Title : public AbstractScene
{

private:
	int TitleImage;
	int g_MenuY;
	int g_MenuNumber;
	int g_GameState = 0;
	int g_KeyFlg=0;

	AbstractScene* mScene;

public:
	//コンストラクタ
	Title();
	//デストラクタ
	~Title();
	//描画以外の更新を実行
	AbstractScene* Update() override;
	
	//描画以外に関することを実装
	void Draw()const override;
};

