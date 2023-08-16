#pragma once
#include"DxLib.h"
#include"End.h"

#define TIME_LIMIT 300
#define MOVE_SPEED 7

End::End() {
	//������
	TitleImage = LoadGraph("Images/End.png");
	WaitTime = TIME_LIMIT;
	MoveString = 0;

	//�t�H���g�̒ǉ�
	EndFont1 = CreateFontToHandle("HGS�n�p�p�߯�ߑ�", 70, 8, DX_FONTTYPE_ANTIALIASING);
	EndFont2 = CreateFontToHandle("HGS�n�p�p�߯�ߑ�", 50, 8, DX_FONTTYPE_ANTIALIASING);
	EndFont3 = CreateFontToHandle("HGS�n�p�p�߯�ߑ�", 90, 8, DX_FONTTYPE_ANTIALIASING);

}

End::~End()
{
	DeleteFontToHandle(EndFont1);
	DeleteFontToHandle(EndFont2);
	DeleteFontToHandle(EndFont3);
}

AbstractScene* End::Update() {
	if (WaitTime-- < 0) {
		return nullptr;
	}
	if (++MoveString >= 240) {
		MoveString = 240;
	}
	return this;
}

void End::Draw()const {
	//�Q�[���I�����
	DrawGraph(0, 0, TitleImage, TRUE);
	DrawStringToHandle(550, 680 - MoveString * MOVE_SPEED, "BGM", 0x0000ff, EndFont1);

	DrawStringToHandle(400, 780 - MoveString * MOVE_SPEED, "DOVA-SYNDROME", 0xffffff, EndFont2);

	DrawStringToHandle(560, 880 - MoveString * MOVE_SPEED, "SE", 0x0000ff, EndFont1);

	DrawStringToHandle(475, 980 - MoveString * MOVE_SPEED, "���ʉ����{", 0xffffff, EndFont2);
	DrawStringToHandle(475, 1040 - MoveString * MOVE_SPEED, "���ʉ��H�[", 0xffffff, EndFont2);
	DrawStringToHandle(400, 1100 - MoveString * MOVE_SPEED, "���났�X�^�W�I", 0xffffff, EndFont2);

	DrawStringToHandle(470, 1290 - MoveString * MOVE_SPEED, "�摜�f��", 0xff0000, EndFont1);

	DrawStringToHandle(485, 1390 - MoveString * MOVE_SPEED, "���炷�Ƃ�", 0xffffff, EndFont2);
	DrawStringToHandle(485, 1450 - MoveString * MOVE_SPEED, "�݂񂿂肦", 0xffffff, EndFont2);
	DrawStringToHandle(415, 1510 - MoveString * MOVE_SPEED, "�t���[���ۂ�����", 0xffffff, EndFont2);
	DrawStringToHandle(520, 1570 - MoveString * MOVE_SPEED, "illustAC", 0xffffff, EndFont2);

	DrawStringToHandle(340, 2300 - MoveString * (MOVE_SPEED + 1.5), "Thank You For ", 0xffffff, EndFont3);
	DrawStringToHandle(310, 2400 - MoveString * (MOVE_SPEED + 1.5), "Playing Game !!", 0xffffff, EndFont3);
}