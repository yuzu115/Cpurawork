#pragma once

//�N���X�̐���
class POS
{
	//����J
private:

	int x;
	int y;
	//���J
public:

	POS();//�����Ȃ�

	/**
	*�֐����@POS��������R���X�g���N�^
	*int tmpx
	*int tmpy*/
	POS(int tmpx, int tmpy);//��������

	//��ʏo��void�̍쐬
	void print();
};