#include <stdio.h>
#include "POS.h"//ヘッダファイルを呼び出している。

//クラスを定義しています。
void POS::setPos(int tmpx,int tmpy)
{
	//データを代入します。
	x = tmpx;
	y = tmpy;

}

void POS::print()
{
	//出力するためのデータ挿入
	printf("x:%d,y:%d\n", x, y);
}