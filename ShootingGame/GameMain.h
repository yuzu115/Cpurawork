#pragma once
#include "AbstractScene.h"
class GameMain :public AbstractScene
{
private:
	float player;
	int life;

	float inputX;
	short ThumbLX;
	short ThumbLY;
	short ThumbRX;
	short ThumbRY;

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

