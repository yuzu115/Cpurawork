#pragma once

//クラスの作成
class POS
{
	//非公開にします
private:

	int x;
	int y;

	//窓口として扱いますよ
public:

	POS();
	void print();
};