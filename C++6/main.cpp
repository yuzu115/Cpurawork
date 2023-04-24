//Windows�ɑ΂���
#include <Windows.h>
#include <stdio.h>

//�}�N��
#define USE_INLINE
//�}�N����if��
#ifdef USE_INLINE

//�}�N����if����true�̎��ǂݍ��܂��
inline unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}

//�}�N����if����false�̎��ǂݍ��܂��
#else

unsigned int Pow(int x1, int x2)
{
	return (x1 * x2);
}

#endif

int main()
{
	LARGE_INTEGER f;
	if (!QueryPerformanceFrequency(&f))
	{
		return -1;
	}
	LARGE_INTEGER s, e;

	QueryPerformanceCounter(&s);

	unsigned int pow = 0;

	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			pow = Pow(i, j);
		}
	}

	printf("pow%d\n", pow);
	QueryPerformanceCounter(& e);
	double t = (double)(e.QuadPart - s.QuadPart) / f.QuadPart;
	printf("time=%fsec\n", t);

	return 0;
}