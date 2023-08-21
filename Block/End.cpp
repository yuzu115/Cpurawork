#include "End.h"
#include "DxLib.h"

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
AbstractScene*End::Update()
{
	//エンディング表示
	if (++g_WaitTime < 700) g_PosY = 600 - g_WaitTime / 2;
	//タイムの加算処理＆終了
	if (++g_WaitTime > 900) {
		return nullptr;
	}
	return this;
}

//描画
void End::Draw() const
{
	DrawExtendGraph(0, 0, 640, 480, EndImage, FALSE);
	SetFontSize(24);
	DrawString(100, 170 + g_PosY, "タイトル　　　Game　Title", 0x000000);
	DrawString(100, 200 + g_PosY, "バージョン　　1.0", 0x000000);
	DrawString(100, 230 + g_PosY, "最終更新日　　201x年xx月xx日", 0x000000);
	DrawString(100, 260 + g_PosY, "制作者　　　　国際電子ビジネス専門学校", 0x000000);
	DrawString(100, 290 + g_PosY, "　　　　　　　ＸＸＸ　ＸＸ", 0x000000);
	DrawString(100, 310 + g_PosY, "素材利用", 0x000000);
	DrawString(100, 340 + g_PosY, "　BGM　　　 　ＸＸＸＸ", 0x000000);
	DrawString(100, 365 + g_PosY, "　SE　　　　　ＸＸＸＸＸＸＸＸ", 0x000000);

	SetFontSize(50);
	DrawString(50, 70, "Thank you for playing", 0x000000);

}
