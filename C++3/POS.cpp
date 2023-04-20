#include <stdio.h>
#include "POS.h"

POS::POS()
{
	//オブジェクトの作成
	x = 0;
	y = 0;
}

void POS::print()
{
	//画面出力
	printf("x:%d,y:%d\n", x, y);
}