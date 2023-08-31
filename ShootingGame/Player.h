#pragma once
#include "Bullet.h"
#include "CharaBase.h"

class Player :public CharaBase
{
private:

	int g_MenuX;
	int g_Player;
	int PlayerImage;

	//’eƒNƒ‰ƒX‚ÌŒÄ‚Ño‚µ
	Bullet * bullet;

public:
	Player();
	~Player();

	void PlayerUpdate();
	//•`‰æ
	void Draw()const;

};