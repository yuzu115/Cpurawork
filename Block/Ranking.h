#pragma once
#include "AbstractScene.h"
#include "Title.h"
#include <string>

class Ranking : public AbstractScene
{
private:
	//�\����
// �����L���O�f�[�^�i�\���́j
	struct	RankingData {
		int		no;
		char	name[11];
		long	score;

	};
	// �����L���O�f�[�^�ϐ��錾
	struct	RankingData		g_Ranking[10];
public:
	Ranking();
	~Ranking();

	AbstractScene* Update()override;
	void Draw()const override;

};
void SortRanking(void);		//�����L���O���בւ�
int  SaveRanking(void);		//�����L���O�f�[�^�̕ۑ�
int  ReadRanking(void);		//�����L���O�f�[�^�ǂݍ���
