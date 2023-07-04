#pragma once
#include "AbstractScene.h"

class Title : public AbstractScene
{

private:
	int TitleImage;
	int g_MenuY;
	int g_MenuNumber;
	int g_GameState = 0;
	int g_KeyFlg=0;

	AbstractScene* mScene;

public:
	//�R���X�g���N�^
	Title();
	//�f�X�g���N�^
	~Title();
	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;
	
	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw()const override;
};

