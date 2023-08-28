#pragma once
#include "CharaBase.h"

class Enemy :public CharaBase
{
private:

public:
	Enemy();
	~Enemy();
	void EnemyUpdate();
	void EnemyDraw();

};

