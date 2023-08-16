#pragma once
#include "AbstractScene.h"
class GameMain :public AbstractScene
{
private:
	float player;
	int life;
	short JoyPadX;
	int g_MenuX;
	int g_Player;
	int mainImage;

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

