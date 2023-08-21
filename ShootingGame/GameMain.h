#pragma once
#include "AbstractScene.h"
#include "Player.h"
#include "Enemy.h"

class GameMain :public AbstractScene
{
private:
	float player;
	int life;
	short JoyPadX;
	Player* player1;
	int g_MenuX;
	int mainImage;
	int g_Player;

	Enemy* enemy;
	Bullet* bullet;

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

