#pragma once
#include "SphereCollider.h"

class Bullet :public SphereCollider
{
private:
	int g_bullet;
	int g_menux;
	int WaitTime;


public:
	Bullet();
	~Bullet();
	void BulletUpdate();
	void BUlletDraw();
};

