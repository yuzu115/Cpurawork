#pragma once

//クラス型POSの定義
class POS
{
public://アクセス指定子

	//クラスが管理するデータ
	double x;
	double y;

	//関数名:print
	//引数:なし
	//処理内容:メンバ変数x,yのデータを画面に表示する
	void print();
};
