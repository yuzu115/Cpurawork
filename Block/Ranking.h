#pragma once
#include "AbstractScene.h"
#define RANK_MAX (5)

class Ranking : public AbstractScene
{
private:
	// �����L���O�f�[�^�i�\���́j
	struct	RankingData {
		int		no;
		char	name[11];
		long	score;

	};
	// �����L���O�f�[�^�ϐ��錾
	struct	RankingData		g_Ranking[10];


public:
	//�R���X�g���N�^
	Ranking();
	//�f�X�g���N�^
	~Ranking();
	//�X�V
	AbstractScene* Update()override;
	//�`��
	void Draw() const override;

	RankingData work[RANK_MAX];

	void InputRanking(void);	//�����L���O����
	void SortRanking(void);		//�����L���O���בւ�
	int  SaveRanking(void);		//�����L���O�f�[�^�̕ۑ�
	int  ReadRanking(void);		//�����L���O�f�[�^�ǂݍ���
};

