#pragma once
#include "AbstractScene.h"

class GameClear : public AbstractScene
{
private:
	 
public:
	//�R���X�g���N�^
	GameClear();
	//�f�X�g���N�^
	~GameClear();
	//�`��ȊO�̍X�V����������
	AbstractScene* Update()override;
	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw() const override;
	static int Stage;
};

