#pragma once
#include "AbstractScene.h"
class Title : public AbstractScene
{
private:
	int TitleImage;
	int g_MenuNumber;
	int g_MenuY;

public:
	//コンストラクタ
	Title();
	//デストラクタ
	~Title();
	//更新
	AbstractScene* Update()override;
	//描画
	void Draw()const override;
};

