#pragma once
#include "AbstractScene.h"
class Title : public AbstractScene
{
private:
	int TitleImage;
public:
	//�R���X�g���N�^
	Title();
	//�f�X�g���N�^
	~Title();
	//�X�V
	AbstractScene* Update()override;
	//�`��
	void Draw()const override;
};

