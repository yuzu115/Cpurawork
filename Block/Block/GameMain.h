#pragma once
#include "AbstractScene.h"
class GameMain : public AbstractScene
{
public:
	//�f�X�g���N�^
	virtual ~GameMain() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update()override;

	//�`��ȊO�Ɋւ��邱�Ƃ�����
	virtual void Draw() const override;

};

