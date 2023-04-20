#include <stdio.h>
#include "POS.h"

//クラスオブジェクトの作成
//引数なし
POS::POS()
{
	x = 0;
	y = 0;
}

//クラスオブジェクトの作成
POS::POS(int tmpx, int tmpy)
{
	x = tmpx;
	y = tmpy;
}

//画面出力データの入力
void POS::print()
{
	printf("x:%d,y:%d\n", x, y);
}