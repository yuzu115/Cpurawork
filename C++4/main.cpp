#include "POS.h"

int main(void)
{
	//オブジェクトの作成
	POS pos1;
	POS pos2(100, 200);

	//画面出力
	pos1.print();
	pos2.print();

	return 0;
}
