#pragma once
#include "AbstractScene.h"
class GameOver : public AbstractScene
{
private:
	int g_WaitTime;

public:
	//�R���X�g���N�^
	GameOver();
	//�f�X�g���N�^
	~GameOver();
	//�`��ȊO�̍X�V����������
	AbstractScene* Update()override;
	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw() const override;
};

