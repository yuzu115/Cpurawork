#pragma once
#include "SphereCollider.h"

class Bullet :public SphereCollider
{
private:
	int g_bulletflg;
	int buletX;
	int buletY;
	int MoveX;
	int MoveY;
	int g_menux;
	int bulletImage;
	int WaitTime;

	int g_bulletY;
	int g_movebullet;


public:
	Bullet();
	~Bullet();
	void BulletUpdate();
	void BUlletDraw();

	void Movebullet();
};

