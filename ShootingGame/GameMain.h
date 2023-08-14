#pragma once
#include "AbstractScene.h"
class GameMain :public AbstractScene
{
private:
	float player;
	int life;
	float inputX;
public:
	//コンストラクタ
	GameMain();
	//デストラクタ
	~GameMain();
	//描画以外の更新を実装する
	AbstractScene* Update()override;
	//描画以外に関することを実装
	void Draw() const override;

	void HitCheck();
	void SpawnBullet();
};

