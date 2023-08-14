#pragma once
#include "AbstractScene.h"
class Title : public AbstractScene
{
private:
	int TitleImage;
	int cursor;
	int g_MenuY;
	int g_MenuNumber;
	int select;

public:
	//コンストラクタ
	Title();
	//更新
	AbstractScene* Update()override;
	//描画
	void Draw()const override;
};

