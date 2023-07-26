#pragma once
#include "AbstractScene.h"
#include "Title.h"
#include <string>
//構造体
// ランキングデータ（構造体）
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

	
	// ランキングデータ変数宣言
	static RankingData	g_Ranking[10];
	static int g_score;

	static void SortRanking(void);		//ランキング並べ替え
	static int  SaveRanking(void);		//ランキングデータの保存
    int  ReadRanking(void);		//ランキングデータ読み込み
};


