#include <stdio.h>

int main(void)
{
	//初期化なし
	//動的メモリの確保
	int* pNum1 = new int;
	//初期化あり
	//動的メモリの確保
	short* pNum2 = new short(50);

	//データの入力
	*pNum1 = 100;

	//画面出力
	printf("Num1:%d\n", *pNum1);
	printf("Num2:%d\n", *pNum2);

	//動的メモリの解放
	delete pNum1;
	delete pNum2;

	return 0;
}