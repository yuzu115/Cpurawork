#pragma once
#include "DxLib.h"

class AbstractScene 
{
private:


public:
	//�f�X�g���N�^
	virtual ~AbstractScene() {};

	//�`��ȊO�̍X�V������
	virtual AbstractScene* Update() = 0;
	//�`��Ɋւ��邱�Ƃ�����
	virtual void Draw() const = 0;
	//�V�[���̕ύX����
	//virtual AbstractScene* ChangeScene() = 0;
};
