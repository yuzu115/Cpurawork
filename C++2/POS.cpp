#include <stdio.h>
#include "POS.h"//�w�b�_�t�@�C�����Ăяo���Ă���B

//�N���X���`���Ă��܂��B
void POS::setPos(int tmpx,int tmpy)
{
	//�f�[�^�������܂��B
	x = tmpx;
	y = tmpy;

}

void POS::print()
{
	//�o�͂��邽�߂̃f�[�^�}��
	printf("x:%d,y:%d\n", x, y);
}