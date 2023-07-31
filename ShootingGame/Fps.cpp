#include "Fps.h"
#include <math.h>
#include "DxLib.h"

int count;
//FPS�̌v���ƕ\�����s�����[�J���ϐ��̐錾
LONGLONG nowTime = GetNowHiPerformanceCount();
LONGLONG oldTime = nowTime;
LONGLONG fpsCheckTime;
double deltaTime = 0;
int fpsCounter = 0;
int fps = 0;

void wait_fanc() {
	int term;
	static int t = 0;

	//���݂̎��� - 1��O�Ɏ�������Ԃ�16�b�܂ĂĂ邩���ׂ� 
	term = GetNowCount() - t;

	if (16 - term > 0)
		Sleep(16 - term);

	t = GetNowCount();
	return;
}

void Reset_fps() {
	fpsCheckTime = GetNowHiPerformanceCount();
	fps = 0;
	fpsCounter = 0;
}

void Keisoku_fps() {
	///1���[�v���_�̃V�X�e�����Ԃ��擾
	oldTime = nowTime;
	nowTime = GetNowHiPerformanceCount();

	//1���[�v�̎��Ԍo�߂����߂�
	deltaTime = (nowTime - oldTime) / 6000000.0F;

	count += deltaTime;

	//1�b�Ԃ�FPS���v������A1�b���Ƃɏ���������
	fpsCounter++;
	if (nowTime - fpsCheckTime > 1000000) {
		fps = fpsCounter;
		fpsCounter = 0;
		fpsCheckTime = nowTime;
	}

}

void display_fps() {
	//FPS�̕\��
	SetFontSize(16);
	DrawFormatString(390, 5, 0xffffff, "FPS:%3d DELTA: %8.6fsec", fps, deltaTime);

}
