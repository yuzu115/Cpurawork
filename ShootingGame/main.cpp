#include "DxLib.h"
#include "common.h"

/***********************************************
 * �v���O�����̊J�n
 ***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	double dNextTime = GetNowCount();

	SetMainWindowText("�V���[�e�B���O�Q�[��");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	SetAlwaysRunFlag(true);		//��ɃA�N�e�B�u�ɂ���

	SetGraphMode(SCREENSIZE_X, SCREENSIZE_Y, 32);	//��ʃT�C�Y�̐ݒ�

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	AbstractScene* firstScene = new Title();						//FirstScene�̍쐬

	SceneManager* sceneManager = SceneManager::Create(firstScene);	//�V�[���}�l�[�W���[�̋N��

	// �Q�[�����[�v
	while ((ProcessMessage() == 0) &&
		sceneManager->Update() != nullptr
		)
	{
		PAD_INPUT::UpdateKey();

		ClearDrawScreen();		// ��ʂ̏�����

		sceneManager->Draw();


		ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f

		//�t���[�����[�g�̐ݒ�
		dNextTime += 1.0 / 60.0 * 1000.0;

		if (dNextTime > GetNowCount())
		{
			WaitTimer(static_cast<int>(dNextTime) - GetNowCount());
		}
		else { dNextTime = GetNowCount(); }		//�␳
	}

	SoundPlayer::DeleteThis();	//�T�E���h�v���C���[�̍폜
	delete sceneManager;		//�V�[���}�l�[�W���[�̍폜

	return 0;
}