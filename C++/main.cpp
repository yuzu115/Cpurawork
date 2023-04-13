#include <stdio.h>
#include "POS.h"//クラスの読込

int main(void)
{
	//クラスPOSのオブジェクト作成
	POS pos; 

	//クラスPOSのオブジェクト作成
	//複数オブジェクトを作っても作られるメモリが違うため、別のデータを持てる
	POS hutu; 

	//posメンバ変数に値を代入
	pos.x = 100.0;
	pos.y = 200.0;

	//hutuメンバ変数に値を代入
	hutu.x = 300.0;
	hutu.y = 400.0;

	//posのメンバ関数を呼び出す
	pos.print();

	//hutuのメンバ関数を呼び出す
	hutu.print();

	return 0;
}