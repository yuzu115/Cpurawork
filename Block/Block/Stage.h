#pragma once
#include "AbstractScene.h"

//ステージの大きさとステージ数
#define HEIGHT 10
#define WIDTH 16
#define STAGE 5

class Stage: public AbstractScene
{
private:
	int g_BlockData[STAGE][HEIGHT][WIDTH];

public:
	//コンストラクタ
	Stage();
	//デストラクタ
	~Stage();
	//描画以外の更新を実行
	AbstractScene* Update() override;
	//描画に関する物
	void Draw()const override;
};

