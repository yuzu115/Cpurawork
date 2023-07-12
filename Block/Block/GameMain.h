#pragma once
#include "AbstractScene.h"
#define STAGE 5
#define WIDTH 16
#define HEIGHT 10

class GameMain : public AbstractScene
{
private:
	int g_Score;
	int BallX;
	int BallY;
	int BarX;
	int BarY;
	int BallAngle;
	int RestBall;
	int BallFlg;
	int MoveX;
	int MoveY;

	//ブロックデータ（構造体の定義）
	struct ObjectBlock {
		int flg;
		int x, y;
		int w, h;
		int mx, my;
		int image;
		int score;
	};
	int BlockImage[8];  //ブロック画像用変数
	int Stage;
	int Speed;
	//ブロックデータの宣言
    ObjectBlock  Block[HEIGHT][WIDTH];
public:
	//コンストラクタ
	GameMain();
	//デストラクタ
	~GameMain();
	//描画以外の更新を実装する
	AbstractScene* Update()override;
	//描画以外に関することを実装
	void Draw() const override;

	void MoveBall();    //ボールの移動
	void HitBar();     //ボールとバーの当たり判定
	void HitBlock();   //ボールとブロックの当たり判定
	void InitBlock();   //ブロックの初期化
	void ChangeAngle();
	int CheckBlock();
	int ChokBlock();

	const int g_BlockData[STAGE][HEIGHT][WIDTH] = {	// ブロック配列
	{	// 0ｽﾃｰｼﾞ
		{ 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 },
		{ 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 },
		{ 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 },
		{ 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 },
		{ 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 },
		{ 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 },
		{ 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 },
		{ 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 },
		{ 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 },
		{ 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 , 7 , 1 , 7 , 7 , 1 , 7 , 1 , 7 },
	},
	{	// 1ｽﾃｰｼﾞ
		{ 0 , 0 , 0 , 0 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 0 },
		{ 0 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 },
		{ 0 , 0 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 5 , 5 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 5 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 0 , 5 , 5 , 5 , 5 , 0 , 0 , 0 , 5 , 3 , 5 , 0 },
		{ 0 , 0 , 0 , 0 , 0 , 0 , 5 , 5 , 0 , 0 , 0 , 0 , 0 , 5 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
	},
	{	// 2ｽﾃｰｼﾞ
		{ 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 },
		{ 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 },
		{ 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 },
		{ 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 },
		{ 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
},
	{	// 3ｽﾃｰｼﾞ
		{ 7 , 7 , 7 , 7 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 7 , 7 , 7 , 7 , 7 },
		{ 7 , 7 , 7 , 3 , 2 , 2 , 2 , 3 , 2 , 2 , 2 , 3 , 7 , 7 , 7 , 7 },
		{ 7 , 7 , 7 , 2 , 2 , 0 , 2 , 3 , 2 , 0 , 2 , 2 , 3 , 7 , 7 , 7 },
		{ 7 , 7 , 3 , 3 , 2 , 2 , 2 , 3 , 2 , 2 , 2 , 3 , 3 , 7 , 7 , 7 },
		{ 7 , 7 , 3 , 3 , 3 , 3 , 0 , 0 , 0 , 3 , 3 , 3 , 3 , 7 , 7 , 7 },
		{ 7 , 7 , 6 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 6 , 7 , 7 , 7 },
		{ 7 , 7 , 3 , 6 , 0 , 6 , 6 , 6 , 6 , 6 , 0 , 6 , 3 , 7 , 7 , 7 },
		{ 7 , 7 , 0 , 6 , 6 , 6 , 4 , 4 , 4 , 6 , 6 , 6 , 0 , 7 , 7 , 7 },
		{ 7 , 7 , 7 , 0 , 0 , 0 , 7 , 7 , 7 , 0 , 0 , 0 , 7 , 7 , 7 , 7 },
		{ 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 , 7 }
		},
	{	// 4ｽﾃｰｼﾞ
		{ 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 0 , 1 , 1 , 5 , 5 , 5 , 5 , 1 , 1 , 0 , 0 , 0 , 0 },
		{ 0 , 0 , 0 , 1 , 5 , 5 , 0 , 5 , 5 , 0 , 5 , 5 , 1 , 0 , 0 , 0 },
		{ 0 , 0 , 1 , 5 , 5 , 5 , 0 , 5 , 5 , 0 , 5 , 5 , 5 , 1 , 0 , 0 },
		{ 0 , 0 , 1 , 5 , 1 , 1 , 5 , 5 , 5 , 5 , 1 , 1 , 5 , 1 , 0 , 0 },
		{ 0 , 1 , 5 , 5 , 5 , 5 , 5 , 1 , 1 , 5 , 5 , 5 , 5 , 5 , 1 , 0 },
		{ 0 , 0 , 1 , 1 , 1 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 5 , 1 , 0 , 0 },
		{ 0 , 1 , 5 , 5 , 5 , 1 , 5 , 5 , 5 , 5 , 1 , 1 , 1 , 1 , 0 , 0 },
		{ 0 , 1 , 5 , 5 , 5 , 5 , 1 , 1 , 1 , 1 , 5 , 5 , 5 , 1 , 0 , 0 },
		{ 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 }
	}
	};
};
