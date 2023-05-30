#pragma once
#include "AbstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����
class SceneManager :public AbstractScene {
private:
	AbstractScene* mScene;//���݂̃V�[��

public:
	//�R���X�g���N�^
	SceneManager(AbstractScene*scene):mScene(scene){}

	//�f�X�g���N�^
	~SceneManager() {
		delete mScene;
	}

	//�`��ȊO�̍X�V����������
	AbstractScene* Update()override;

	//�`��ȊO�Ɋւ��邱�Ƃ���������
	void Draw()const override;
};