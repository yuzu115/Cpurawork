#include <stdio.h>
#include "POS.h"//�N���X�̓Ǎ�

int main(void)
{
	POS pos;  //�N���XPOS�̃I�u�W�F�N�g

	//�����o�ɓ����f�[�^
	pos.x = 100.0;
	pos.y = 200.0;

	//�l����ʂɕ\��
	printf("x:%1f y:%1f\n",pos.x,pos.y);

	return 0;
}