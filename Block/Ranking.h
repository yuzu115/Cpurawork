#pragma once
#include "AbstractScene.h"
#define RANK_MAX (5)

class Ranking : public AbstractScene
{
private:
	// ランキングデータ（構造体）
	struct	RankingData {
		int		no;
		char	name[11];
		long	score;

	};
	// ランキングデータ変数宣言
	struct	RankingData		g_Ranking[10];


public:
	//コンストラクタ
	Ranking();
	//デストラクタ
	~Ranking();
	//更新
	AbstractScene* Update()override;
	//描画
	void Draw() const override;

	RankingData work[RANK_MAX];

	void InputRanking(void);	//ランキング入力
	void SortRanking(void);		//ランキング並べ替え
	int  SaveRanking(void);		//ランキングデータの保存
	int  ReadRanking(void);		//ランキングデータ読み込み
};

