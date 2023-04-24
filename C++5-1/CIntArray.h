#pragma once

//�N���X�̍쐬
class CIntArray
{
	//����J
private:
	int* m_pnum;
	int m_NumOf;

	//���S���J
public:
	/**
	*�֐����FCIntArray �R���X�g���N�^
	*�����F
	*const int nNumOf �쐬����z��̗v�f��
	*�������e:
	*�����o�ϐ�m_num*/
	CIntArray(const int nNumOf);
	~CIntArray();

	//���J
public:
	int Get(const int index);
	void Set(const int index, const int value);

	//����J
private:
	void CheckIndex(const int index);
};