#pragma once
#include "AbstractScene.h"

class Title:public AbstractScene {
public:
	//�f�X�g���N�^
	virtual ~Title() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update()override;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw()const override;
};