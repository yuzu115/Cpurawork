#include <stdio.h>
#include "POS.h"

//�N���X�I�u�W�F�N�g�̍쐬
//�����Ȃ�
POS::POS()
{
	x = 0;
	y = 0;
}

//�N���X�I�u�W�F�N�g�̍쐬
POS::POS(int tmpx, int tmpy)
{
	x = tmpx;
	y = tmpy;
}

//��ʏo�̓f�[�^�̓���
void POS::print()
{
	printf("x:%d,y:%d\n", x, y);
}