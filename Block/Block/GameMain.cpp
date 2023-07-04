#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "Stage.h"
#include "KeyManager.h"
#include "End.h"

//�R���X�g���N�^
GameMain::GameMain()
{

}

//�f�X�g���N�^
GameMain::~GameMain()
{

}

//�X�V
AbstractScene* GameMain::Update()
{
	//��ʑJ��
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_A)) {
		return new End;
	}
	return this;
}

//�`��
void GameMain::Draw()const 
{
	DrawBox(0, 0, 640, 480, 0x707070, TRUE);
}