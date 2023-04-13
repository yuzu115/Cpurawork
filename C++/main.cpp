#include <stdio.h>
#include "POS.h"//クラスの読込

int main(void)
{
	POS pos;  //クラスPOSのオブジェクト
	POS hutu;

	//メンバに入れるデータ
	pos.x = 100.0;
	pos.y = 200.0;

	hutu.x = 300.0;
	hutu.y = 400.0;

	//値を画面に表示
	pos.print();
	hutu.print();

	return 0;
}