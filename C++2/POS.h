#pragma once

//クラスの定義
class POS
{
	//非公開オブジェクトの作成
private:
	int x;//外部に非公開になる
	int y;//外部に非公開になる

	//公開オブジェクトの作成
public:
	//プロトタイプ宣言
	void setPos(int tmpx, int tmpy);
	void print();
};