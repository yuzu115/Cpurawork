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
	//�R���X�g���N�^
	GameMain();
	//�f�X�g���N�^
	~GameMain();
	//�`��ȊO�̍X�V����������
	AbstractScene* Update()override;
	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw() const override;

	void HitCheck();
	void SpawnBullet();
};

