#pragma once
#include "AbstractScene.h"

class GameClear : public AbstractScene
{
private:
	 
public:
	//コンストラクタ
	GameClear();
	//デストラクタ
	~GameClear();
	//描画以外の更新を実装する
	AbstractScene* Update()override;
	//描画以外に関することを実装
	void Draw() const override;
	static int Stage;
};

