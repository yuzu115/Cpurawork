#pragma once
#include "AbstractScene.h"

class SceneManager : public AbstractScene
{
private:
	AbstractScene* mScene;//���݂̃V�[��

public:
	//�R���X�g���N�^
	SceneManager(AbstractScene* scene) :mScene(scene) {}
	//�f�X�g���N�^
	~SceneManager() {
		delete mScene;
	}

	//�X�V������
	AbstractScene* Update() override;

	//�`��ȊO�Ɋւ��邱�Ƃ�����
	void Draw() const override;
};