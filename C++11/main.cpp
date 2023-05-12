#include <stdio.h>

//intŒ^a‚ğ‚Â
//–ß‚è’llongŒ^‚ÌAbs
long Abs(int a)
{
	//longŒ^ret
	long ret;
	if (a < 0)
	{
		ret = -a;
	}
	else 
	{
		ret = a;
	}
	
	//•Ô‚è’lret
	return ret;
}

//doubleŒ^a‚ğ‚Â
//–ß‚è’ldoubleŒ^‚ÌAbs
double Abs(double a)
{
	//doubleŒ^ret
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
	printf("®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf_s("%d", &nInt);
	if (nInt == 1)
	{
		return 0;
	}

	printf("¬”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf_s("%f", &rDouble);
	return 1;
}

void DispAbs(int nInt, double rDouble)
{
	printf("%d‚Ìâ‘Î’l‚Í%d‚ÅA\n", nInt, Abs(nInt));
	printf("%1f‚Ìâ‘Î’l‚Í%1f‚Å‚·\n", rDouble, Abs(rDouble));
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