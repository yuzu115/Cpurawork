#pragma once
#include "Bullet.h"
#include "CharaBase.h"

class Player :public CharaBase
{
private:

	int g_MenuX;
	int g_Player;
	int PlayerImage;

	//弾クラスの呼び出し
	Bullet * bullet;

public:
	Player();
	~Player();

	void PlayerUpdate();
	//描画
	void Draw()const;

};