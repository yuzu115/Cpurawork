#include "POS.h"//ヘッダーファイルを呼び出す。

int main(void)
{
	POS pos;//オブジェクトの作成

	//面が変数がprivateになっているため
	//メンバ関数setPos(x,y)でメンバ変数の値を変更
	pos.setPos(100, 200);

	//メンバ変数がpribvateになっているため
	//メンバ関数printでメンバ変数の値を表示
	pos.print();

	return 0;
}