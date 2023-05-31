#include "DxLib.h"
#include "SceneManager.h"
#include <time.h> // time

#define _SCREEN_HEIGHT_ 720
#define _SCREEN_WIDHT_	1280
#define _SCREEN_COLOR_BIT_16_ 16
#define _SCREEN_COLOR_BIT_32_ 32

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// �E�B���h�E���[�h�ŋN��
	if (ChangeWindowMode(TRUE) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// ��ʃT�C�Y��ύX
	if (SetGraphMode(_SCREEN_WIDHT_, _SCREEN_HEIGHT_, _SCREEN_COLOR_BIT_32_) != DX_CHANGESCREEN_OK)
	{
		return -1;
	}

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	//==========================================
	// �����̏�����
	srand((unsigned int)time(NULL));

	int a = -1;
	int b = rand() % 3;
	int key = 1;

	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();

		DrawFormatString(20, 20, GetColor(255, 255, 255), "�����o���܂����H�i 0:�O�[ / 1:�`���L / 2:�p�[ �j:");

		if (key == 1)
		{
			if (CheckHitKey(KEY_INPUT_0))
			{
				a = 0;
				key = 0;
			}
			else if (CheckHitKey(KEY_INPUT_1))
			{
				a = 2;
				key = 0;
			}
			else if (CheckHitKey(KEY_INPUT_2))
			{
				a = 2;
				key = 0;
			}
		}
		else
		{
			switch (a)
			{
			case 0:
				DrawFormatString(20, 50, GetColor(255, 255, 255), "���Ȃ����o������̓O�[");
				break;

			case 1:
				DrawFormatString(20, 50, GetColor(255, 255, 255), "���Ȃ����o������̓`���L");
				break;

			case 2:
				DrawFormatString(20, 50, GetColor(255, 255, 255), "���Ȃ����o������̓p�[");
				break;
			}

			switch (b)
			{
			case 0:
				DrawFormatString(20, 80, GetColor(255, 255, 255), "���肪�o������̓O�[");
				break;

			case 1:
				DrawFormatString(20, 80, GetColor(255, 255, 255), "���肪�o������̓`���L");
				break;

			case 2:
				DrawFormatString(20, 80, GetColor(255, 255, 255), "���肪�o������̓p�[");
				break;
			}


			// ����񂯂�̌��ʂ𔻒f����
			// ����񂯂�̌��ʂ�\������
			DrawFormatString(20, 110, GetColor(255, 255, 255), "���ʂ́E�E�E");
			if (a == b)
			{
				DrawFormatString(20, 130, GetColor(255, 255, 255), "���������ł�!!!");
			}
			else if ((a == 0 && b == 1) ||
				(a == 1 && b == 2) ||
				(a == 2 && b == 0)
				)
			{
				DrawFormatString(20, 130, GetColor(255, 255, 255), "���Ȃ��̏����ł�!!!");
			}
			else
			{
				DrawFormatString(20, 130, GetColor(255, 255, 255), "���Ȃ��̕����ł�...");
			}
		}

		ScreenFlip();
	}
	//==========================================

	// DX���C�u�����̏I������
	DxLib_End();

	return 0;