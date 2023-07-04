#pragma once
#include "AbstractScene.h"

class End : public AbstractScene
{

private:
	int EndImage;
	int g_WaitTime;
	int g_PosY;
	int g_MenuNumber;

public:
	//コンストラクタ
	End();
	//デストラクタ
	~End();
	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画以外に関することを実装
	void Draw()const override;
};

