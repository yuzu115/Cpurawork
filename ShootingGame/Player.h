#pragma once
#include "Bullet.h"

class Player 
{
private:

	int g_MenuX;
	int g_Player;
	int PlayerImage;

	Bullet * bullet;

public:
	Player();
	~Player();

	void PlayerUpdate();
	//�`��
	void Draw()const;

};