#pragma once
#include "AbstractScene.h"
class GameOver : public AbstractScene
{
private:
	int g_WaitTime;

public:
	//コンストラクタ
	GameOver();
	//デストラクタ
	~GameOver();
	//描画以外の更新を実装する
	AbstractScene* Update()override;
	//描画以外に関することを実装
	void Draw() const override;
};

