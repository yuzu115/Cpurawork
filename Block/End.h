#pragma once
#include "AbstractScene.h"

class End : public AbstractScene
{

private:
	int EndImage;
	int g_WaitTime;
	int g_PosY;
	int g_MenuNumber;

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

