#pragma once
#include "AbstractScene.h"
class Title : public AbstractScene
{
private:
	int TitleImage;
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

