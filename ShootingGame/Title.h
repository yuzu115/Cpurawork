#pragma once
#include "AbstractScene.h"
class Title : public AbstractScene
{
private:
	int TitleImage;
	int cursor;
	int g_MenuY;
	int g_MenuNumber;
	int select;

public:
	//�R���X�g���N�^
	Title();
	//�X�V
	AbstractScene* Update()override;
	//�`��
	void Draw()const override;
};

