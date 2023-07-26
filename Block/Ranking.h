#pragma once
#include "AbstractScene.h"
#include "Title.h"
#include <string>

class Ranking : public AbstractScene
{
private:
	//構造体
// ランキングデータ（構造体）
	struct	RankingData {
		int		no;
		char	name[11];
		long	score;

	};
	// ランキングデータ変数宣言
	struct	RankingData		g_Ranking[10];
public:
	Ranking();
	~Ranking();

	AbstractScene* Update()override;
	void Draw()const override;

};
void SortRanking(void);		//ランキング並べ替え
int  SaveRanking(void);		//ランキングデータの保存
int  ReadRanking(void);		//ランキングデータ読み込み
