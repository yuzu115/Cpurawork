#pragma once
#include "DxLib.h"

//�f�t�H���g�̒��ۃV�[���N���X
//���[�U�[�͂�����p�����ăV�[������������Ɗy

class AbstractScene {
public:
	//�f�X�g���N�^
	virtual~AbstractScene() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() = 0;

	//�`��ȊO�Ɋւ��邱�Ƃ���������
	virtual void Draw() const = 0;

	//�V�[���̕ύX����
	virtual AbstractScene* ChangeScene() = 0;
};
