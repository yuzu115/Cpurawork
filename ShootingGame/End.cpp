#include"DxLib.h"
#include"End.h"

//コンストラクタ
End::End()
{
	EndImage = LoadGraph("images/End.png");
	g_WaitTime = 0;
}

//デストラクタ
End::~End()
{

}

//更新
AbstractScene* End::Update()
{
	//エンディング表示
	if (++g_WaitTime < 600) g_PosY = 300 - g_WaitTime / 2;
	//タイムの加算処理＆終了
	if (++g_WaitTime > 900) {
		return nullptr;
	}
	return this;
}

//描画
void End::Draw() const
{
	DrawGraph(0, 0, EndImage, FALSE);
	SetFontSize(30);
	DrawString(100, 170 + g_PosY, "タイトル　　　Game　Title", 0xffffff);
	DrawString(100, 200 + g_PosY, "バージョン　　1.0", 0xffffff);
	DrawString(100, 230 + g_PosY, "最終更新日　　201x年xx月xx日", 0xffffff);
	DrawString(100, 260 + g_PosY, "制作者　　　　国際電子ビジネス専門学校", 0xffffff);
	DrawString(100, 290 + g_PosY, "　　　　　　　ＸＸＸ　ＸＸ", 0xffffff);
	DrawString(100, 310 + g_PosY, "素材利用", 0xffffff);
	DrawString(100, 340 + g_PosY, "　BGM　　　 　ＸＸＸＸ", 0xffffff);
	DrawString(100, 365 + g_PosY, "　SE　　　　　ＸＸＸＸＸＸＸＸ", 0xffffff);

	SetFontSize(70);
	DrawString(50, 70 + g_PosY, "Thank you for playing", 0xffffff);

}
