#pragma once
#include "AbstractScene.h"

class Title : public AbstractScene
{

private:
	
public:

	Title();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;
	
	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw()const override;
};

