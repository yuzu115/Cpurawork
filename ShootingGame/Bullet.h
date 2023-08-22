#pragma once
#include "Player.h"

class Bullet
{
private:
	int g_bullet;
	int g_menux;

public:
	Bullet();
	~Bullet();
	void BnlletUpdate();
	void BUlletDraw();
};

