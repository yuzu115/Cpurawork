#include <stdio.h>
#include "POS.h"//クラスの読込

int main(void)
{
	POS pos;  //クラスPOSのオブジェクト

	//メンバに入れるデータ
	pos.x = 100.0;
	pos.y = 200.0;

	//値を画面に表示
	printf("x:%1f y:%1f\n",pos.x,pos.y);

	return 0;
}