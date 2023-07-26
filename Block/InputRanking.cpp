#include "InputRanking.h"
#include "Ranking.h"
#include "GameMain.h"

int InputRanking::RankingImage;
InputRanking::InputRanking()
{
	RankingImage = LoadGraph("images / End.png");
}

InputRanking::~InputRanking()
{

}

void InputRanking::Draw() const
{
	//�����L���O�摜�\��
	DrawGraph(0, 0, RankingImage, FALSE);

	// �t�H���g�T�C�Y�̐ݒ�
	SetFontSize(20);

	// ���O���͎w��������̕`��
	DrawString(150, 240, "�����L���O�ɓo�^���܂�", 0xFFFFFF);
	DrawString(150, 270, "���O���p���œ��͂��Ă�������", 0xFFFFFF);

	// ���O�̓���
	DrawString(150, 310, "> ", 0xFFFFFF);
	DrawBox(160, 305, 300, 335, 0x000055, TRUE);
	if (KeyInputSingleCharString(170, 310, 10, Ranking::g_Ranking[9].name, FALSE) == 1) {
		Ranking::g_Ranking[9].score = GameMain::g_Score;	// �����L���O�f�[�^�̂P�O�ԖڂɃX�R�A��o�^
		Ranking::SortRanking();		// �����L���O���בւ�
		Ranking::SaveRanking();		// �����L���O�f�[�^�̕ۑ�
	}
}
