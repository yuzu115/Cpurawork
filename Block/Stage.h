#pragma once
#include "AbstractScene.h"

//�X�e�[�W�̑傫���ƃX�e�[�W��
#define HEIGHT 10
#define WIDTH 16
#define STAGE 5

class Stage: public AbstractScene
{
private:
	int g_BlockData[STAGE][HEIGHT][WIDTH];

public:
	//�R���X�g���N�^
	Stage();
	//�f�X�g���N�^
	~Stage();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;
	//�`��Ɋւ��镨
	void Draw()const override;
};

