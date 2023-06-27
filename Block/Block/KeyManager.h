#pragma once
#include "DxLib.h"
class KeyManager
{
private:

	static char oldKey[256];
	static char nowKey[256];
	static int oldMouse;
	static int nowMouse;
	KeyManager() = default;
public:

	static void Update();

	static  bool OnKeyClicked(int Key);
	static  bool OnKeyReleased(int Key);
	static  bool OnKeyPressed(int Key);

	static  bool OnMouseClicked(int Key);
	static  bool OnMouseReleased(int Key);
	static  bool OnMousePressed(int Key);

};


/*

KEY_INPUT_BACK		// �o�b�N�X�y�[�X�L�[
KEY_INPUT_TAB		// �^�u�L�[
KEY_INPUT_RETURN	// �G���^�[�L�[

KEY_INPUT_LSHIFT	// ���V�t�g�L�[
KEY_INPUT_RSHIFT	// �E�V�t�g�L�[
KEY_INPUT_LCONTROL	// ���R���g���[���L�[
KEY_INPUT_RCONTROL	// �E�R���g���[���L�[
KEY_INPUT_ESCAPE	// �G�X�P�[�v�L�[
KEY_INPUT_SPACE		// �X�y�[�X�L�[
KEY_INPUT_PGUP		// �o�������t�o�L�[
KEY_INPUT_PGDN		// �o�������c�������L�[
KEY_INPUT_END		// �G���h�L�[
KEY_INPUT_HOME		// �z�[���L�[
KEY_INPUT_LEFT		// ���L�[
KEY_INPUT_UP		// ��L�[
KEY_INPUT_RIGHT		// �E�L�[
KEY_INPUT_DOWN		// ���L�[
KEY_INPUT_INSERT	// �C���T�[�g�L�[
KEY_INPUT_DELETE	// �f���[�g�L�[

KEY_INPUT_MINUS		// �|�L�[
KEY_INPUT_YEN		// ���L�[
KEY_INPUT_PREVTRACK	// �O�L�[
KEY_INPUT_PERIOD	// �D�L�[
KEY_INPUT_SLASH		// �^�L�[
KEY_INPUT_LALT		// ���`�k�s�L�[
KEY_INPUT_RALT		// �E�`�k�s�L�[
KEY_INPUT_SCROLL	// ScrollLock�L�[
KEY_INPUT_SEMICOLON	// �G�L�[
KEY_INPUT_COLON		// �F�L�[
KEY_INPUT_LBRACKET	// �m�L�[
KEY_INPUT_RBRACKET	// �n�L�[
KEY_INPUT_AT		// ���L�[
KEY_INPUT_BACKSLASH	// �_�L�[
KEY_INPUT_COMMA		// �C�L�[
KEY_INPUT_CAPSLOCK	// CaspLock�L�[
KEY_INPUT_PAUSE		// PauseBreak�L�[

KEY_INPUT_NUMPAD0	// �e���L�[�O
KEY_INPUT_NUMPAD1	// �e���L�[�P
KEY_INPUT_NUMPAD2	// �e���L�[�Q
KEY_INPUT_NUMPAD3	// �e���L�[�R
KEY_INPUT_NUMPAD4	// �e���L�[�S
KEY_INPUT_NUMPAD5	// �e���L�[�T
KEY_INPUT_NUMPAD6	// �e���L�[�U
KEY_INPUT_NUMPAD7	// �e���L�[�V
KEY_INPUT_NUMPAD8	// �e���L�[�W
KEY_INPUT_NUMPAD9	// �e���L�[�X
KEY_INPUT_MULTIPLY	// �e���L�[���L�[
KEY_INPUT_ADD	    // �e���L�[�{�L�[
KEY_INPUT_SUBTRACT	// �e���L�[�|�L�[
KEY_INPUT_DECIMAL	// �e���L�[�D�L�[
KEY_INPUT_DIVIDE	// �e���L�[�^�L�[
KEY_INPUT_NUMPADENTER	//�e���L�[Enter�L�[
*/