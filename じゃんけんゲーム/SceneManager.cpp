#include "SceneManager.h"
#include "Title.h"

//-----------------
//�R���X�g���N�^
//-----------------
SceneManager::SceneManager()
{
	mScene = new Title();
}

//�����o�ϐ��̒l��u��������A�b�v�f�[�g�֐�
void SceneManager::Update()
{
	mScene->Update();
	this->ChangeScene();
}

//�`�揈���݂̂��s���֐�
void SceneManager::Draw()const
{
	mScene->Draw();
}

//-------------------
//�V�[���̐؂�ւ�
//-------------------
AbstractScene* SceneManager::ChangeScene()
{
	AbstractScene* nextScene = mScene;
	nextScene = mScene->ChangeScene();

	//���̃V�[�������݃V�[���ƈႤ�ꍇ�؂�ւ���
	if (nextScene != mScene) {
		delete mScene;
		mScene = nextScene;
	}
}