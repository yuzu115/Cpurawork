#pragma once
#include "Bullet.h"
#include "CharaBase.h"

class Player :public CharaBase
{
private:

	int g_MenuX;
	int g_Player;
	int PlayerImage;

	//�e�N���X�̌Ăяo��
	Bullet * bullet;

public:
	Player();
	~Player();

	void PlayerUpdate();
	//�`��
	void Draw()const;

};