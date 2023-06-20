#pragma once
#include "AbstractScene.h"
class GameMain : public AbstractScene
{
public:
	//デストラクタ
	virtual ~GameMain() {};

	//描画以外の更新を実装する
	virtual AbstractScene* Update()override;

	//描画以外に関することを実装
	virtual void Draw() const override;

};

