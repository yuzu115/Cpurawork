#pragma once
#include "AbstractScene.h"

class End : public AbstractScene
{

private:
	int EndImage;
public:
	//�R���X�g���N�^
	End();
	//�f�X�g���N�^
	~End();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw()const override;
};

