#pragma once
#include "AbstractScene.h"
#include "Title.h"
#include <string>
//�\����
// �����L���O�f�[�^�i�\���́j
struct	RankingData {
	int		no;
	char	name[11];
	long	score;

};

class Ranking : public AbstractScene
{
private:
	int x;
public:
	Ranking();
	~Ranking();

	AbstractScene* Update()override;
	void Draw()const override;

	
	// �����L���O�f�[�^�ϐ��錾
	static RankingData	g_Ranking[10];
	static int g_score;

	static void SortRanking(void);		//�����L���O���בւ�
	static int  SaveRanking(void);		//�����L���O�f�[�^�̕ۑ�
    int  ReadRanking(void);		//�����L���O�f�[�^�ǂݍ���
};


