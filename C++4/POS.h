#pragma once

//クラスの生成
class POS
{
	//非公開
private:

	int x;
	int y;
	//公開
public:

	POS();//引数なし

	/**
	*関数名　POS引数ありコンストラクタ
	*int tmpx
	*int tmpy*/
	POS(int tmpx, int tmpy);//引数あり

	//画面出力voidの作成
	void print();
};