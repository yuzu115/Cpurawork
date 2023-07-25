#include "KeyManager.h"

char KeyManager::oldKey[256];
char KeyManager::nowKey[256];
int KeyManager::oldMouse;
int KeyManager::nowMouse;

//---------------------
// �X�V
//---------------------
void KeyManager::Update()
{

	for (int i = 0; i < 256; i++)
	{
		oldKey[i] = nowKey[i];
	}

	if (GetHitKeyStateAll(nowKey) == -1)
	{
		throw - 1;
	}

	oldMouse = nowMouse;
	nowMouse = GetMouseInput();
}

//�L�[�{�[�h���́@�����FKEY_INPUT_anyKey

//----------------
// �L�[�N���b�N
//----------------
bool KeyManager::OnKeyClicked(int Key)
{

	bool ret = (oldKey[Key] != TRUE) && (nowKey[Key] == TRUE);

	return ret;
}

//----------------
// �L�[�����[�X
//----------------
bool KeyManager::OnKeyReleased(int Key)
{

	bool ret = (oldKey[Key] == TRUE) && (nowKey[Key] != TRUE);

	return ret;
}

//----------------
// �L�[�v���X
//----------------
bool KeyManager::OnKeyPressed(int Key)
{

	bool ret = (oldKey[Key] == TRUE) && (nowKey[Key] == TRUE);

	return ret;
}

//�}�E�X���́@�����FMOUSE_INPUT_anyState

//----------------
// �}�E�X�N���b�N
//----------------
bool KeyManager::OnMouseClicked(int Key)
{

	bool ret = ~(oldMouse & Key) & (nowMouse & Key);
	return ret;
}

//----------------
// �}�E�X�����[�X
//----------------
bool KeyManager::OnMouseReleased(int Key)
{

	bool ret = (oldMouse & Key) & ~(nowMouse & Key);
	return ret;
}

//----------------
// �}�E�X�v���X
//----------------
bool KeyManager::OnMousePressed(int Key)
{

	bool ret = (oldMouse & Key) & (nowMouse & Key);
	return ret;
}