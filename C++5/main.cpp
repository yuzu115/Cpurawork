#include <stdio.h>

int main(void)
{
	//�������Ȃ�
	//���I�������̊m��
	int* pNum1 = new int;
	//����������
	//���I�������̊m��
	short* pNum2 = new short(50);

	//�f�[�^�̓���
	*pNum1 = 100;

	//��ʏo��
	printf("Num1:%d\n", *pNum1);
	printf("Num2:%d\n", *pNum2);

	//���I�������̉��
	delete pNum1;
	delete pNum2;

	return 0;
}