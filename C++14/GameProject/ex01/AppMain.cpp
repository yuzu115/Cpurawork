#include "DxLib.h"
#include "InputControl.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	// �E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	// DX���C�u�����̏�����
	if (DxLib_Init() == -1)
	{
		return -1;
	}

	while (ProcessMessage() != -1)
	{
		ClearDrawScreen();

		InputControl::Update();

		if (InputControl::GetKey(PAD_INPUT_9))
		{
			break;
		}

		ScreenFlip();
	}

	// DX���C�u�����̏I������
	DxLib_End();

	return 0;
}