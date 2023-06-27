#pragma once
#include "AbstractScene.h"

class Title : public AbstractScene
{

private:
	int TitleImage;
	int g_MenuY;

	enum class TITLE_MENU {
		MAIN,
		GAMEMAIN,
		END
	};
	TITLE_MENU g_MenuNumber;

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

