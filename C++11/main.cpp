#include <stdio.h>

//int�^a������
//�߂�llong�^��Abs
long Abs(int a)
{
	//long�^ret
	long ret;
	if (a < 0)
	{
		ret = -a;
	}
	else 
	{
		ret = a;
	}
	
	//�Ԃ�lret
	return ret;
}

//double�^a������
//�߂�ldouble�^��Abs
double Abs(double a)
{
	//double�^ret
	double ret;
	if (a < 0)
	{
		ret = -a;
	}
	else
	{
		ret = a;
	}

	return ret;
}

int Input(int& nInt, double& rDouble)
{
	printf("�����l����͂��Ă�������>");
	scanf_s("%d", &nInt);
	if (nInt == 1)
	{
		return 0;
	}

	printf("�����l����͂��Ă�������>");
	scanf_s("%f", &rDouble);
	return 1;
}

void DispAbs(int nInt, double rDouble)
{
	printf("%d�̐�Βl��%d�ŁA\n", nInt, Abs(nInt));
	printf("%1f�̐�Βl��%1f�ł�\n", rDouble, Abs(rDouble));
}

int main(void)
{
	int nInt;
	double rDouble;

	while (Input(nInt, rDouble))
	{
		DispAbs(nInt, rDouble);
	}

	return 0; 
}