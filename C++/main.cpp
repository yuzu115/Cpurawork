#include <stdio.h>
#include "POS.h"//�N���X�̓Ǎ�

int main(void)
{
	POS pos;  //�N���XPOS�̃I�u�W�F�N�g
	POS hutu;

	//�����o�ɓ����f�[�^
	pos.x = 100.0;
	pos.y = 200.0;

	hutu.x = 300.0;
	hutu.y = 400.0;

	//�l����ʂɕ\��
	pos.print();
	hutu.print();

	return 0;
}