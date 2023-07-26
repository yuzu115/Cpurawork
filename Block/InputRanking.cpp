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
	//ランキング画像表示
	DrawGraph(0, 0, RankingImage, FALSE);

	// フォントサイズの設定
	SetFontSize(20);

	// 名前入力指示文字列の描画
	DrawString(150, 240, "ランキングに登録します", 0xFFFFFF);
	DrawString(150, 270, "名前を英字で入力してください", 0xFFFFFF);

	// 名前の入力
	DrawString(150, 310, "> ", 0xFFFFFF);
	DrawBox(160, 305, 300, 335, 0x000055, TRUE);
	if (KeyInputSingleCharString(170, 310, 10, Ranking::g_Ranking[9].name, FALSE) == 1) {
		Ranking::g_Ranking[9].score = GameMain::g_Score;	// ランキングデータの１０番目にスコアを登録
		Ranking::SortRanking();		// ランキング並べ替え
		Ranking::SaveRanking();		// ランキングデータの保存
	}
}
