#include <stdio.h>
#include "POS.h"//�N���X�̓Ǎ�

int main(void)
{
	//�N���XPOS�̃I�u�W�F�N�g�쐬
	POS pos; 

	//�N���XPOS�̃I�u�W�F�N�g�쐬
	//�����I�u�W�F�N�g������Ă�����郁�������Ⴄ���߁A�ʂ̃f�[�^�����Ă�
	POS hutu; 

	//pos�����o�ϐ��ɒl����
	pos.x = 100.0;
	pos.y = 200.0;

	//hutu�����o�ϐ��ɒl����
	hutu.x = 300.0;
	hutu.y = 400.0;

	//pos�̃����o�֐����Ăяo��
	pos.print();

	//hutu�̃����o�֐����Ăяo��
	hutu.print();

	return 0;
}