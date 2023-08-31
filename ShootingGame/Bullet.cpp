#include "Bullet.h"
#include  "KeyManager.h"
#include "PadInput.h"

//コンストラクタ
Bullet::Bullet()
{
	//WaitTime = 0;
	g_bulletY = 0;
}

//デストラクタ
Bullet::~Bullet()
{

}

//更新
void Bullet::BulletUpdate()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_RIGHT_SHOULDER) || KeyManager::OnKeyClicked(KEY_INPUT_UP))
	{
		--g_bulletY > 20;
	}
	g_movebullet = g_bulletY * 150;
}

//描画
void Bullet::BUlletDraw()
{
	//ボタンを押している間丸を表示する
	
	DrawCircle(101, 490 + g_movebullet, 5, 0xffff00, TRUE);
}

void Bullet::Movebullet()
{

}