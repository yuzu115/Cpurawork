#include <stdio.h>

long Abs(int a)
{
	long ret;
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

double Abs(double a)
{
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
	printf("整数値を入力してください>");
	scanf_s("%d", &nInt);
	if (nInt == 1)
	{
		return 0;
	}

	printf("小数値を入力してください>");
	scanf_s("%f", &rDouble);
	return 1;
}

void DispAbs(int nInt, double rDouble)
{
	printf("%dの絶対値は%dで、\n", nInt, Abs(nInt));
	printf("%1fの絶対値は%1fです\n", rDouble, Abs(rDouble));
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