#include "End.h"
#include "DxLib.h"

End::End()
{
	g_WaitTime = 0;

}

End::~End()
{

}

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

void End::Draw()const
{
	SetFontSize(50);
	DrawString(100, 170 + g_PosY, "タイトル　　　Game　Title", 0xffffff);
	DrawString(100, 220 + g_PosY, "バージョン　　1.0", 0xffffff);
	DrawString(100, 270 + g_PosY, "最終更新日　　2023年08月09日", 0xffffff);
	DrawString(100, 330 + g_PosY, "制作者　　　　teruya yuzuki", 0xffffff);
	DrawString(100, 380 + g_PosY, "　　　　　　　ＸＸＸ　ＸＸ", 0xffffff);
	DrawString(100, 430 + g_PosY, "素材利用", 0xffffff);
	DrawString(100, 480 + g_PosY, "　BGM　　　 　ＸＸＸＸ", 0xffffff);
	DrawString(100, 535 + g_PosY, "　SE　　　　　ＸＸＸＸＸＸＸＸ", 0xffffff);

	SetFontSize(90);
	DrawString(50, 70, "Thank you for playing", 0xffffff);
}
