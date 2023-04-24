#pragma once

//クラスの作成
class CIntArray
{
	//非公開
private:
	int* m_pnum;
	int m_NumOf;

	//完全公開
public:
	/**
	*関数名：CIntArray コンストラクタ
	*引数：
	*const int nNumOf 作成する配列の要素数
	*処理内容:
	*メンバ変数m_num*/
	CIntArray(const int nNumOf);
	~CIntArray();

	//公開
public:
	int Get(const int index);
	void Set(const int index, const int value);

	//非公開
private:
	void CheckIndex(const int index);
};