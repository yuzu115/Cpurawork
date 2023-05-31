#pragma once
#include "DxLib.h"
#include "AbstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����
class SceneManager :public AbstractScene {
private:
	AbstractScene* mScene; //���݂̃V�[��

public:
	//�R���X�g���N�^
	SceneManager();

	//�f�X�g���N�^
	~SceneManager()
	{
		delete mScene;
	}

	//�`��ȊO�Ɋւ��邱�Ƃ���������
	void Draw() const override;

	//�V�[���̕ύX����
	AbstractScene* ChangeScene()override;
};
