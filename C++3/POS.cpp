#include <stdio.h>
#include "POS.h"

POS::POS()
{
	//�I�u�W�F�N�g�̍쐬
	x = 0;
	y = 0;
}

void POS::print()
{
	//��ʏo��
	printf("x:%d,y:%d\n", x, y);
}