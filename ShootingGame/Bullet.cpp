#include "Bullet.h"
#include  "KeyManager.h"
#include "PadInput.h"

//コンストラクタ
Bullet::Bullet()
{
	WaitTime = 30;
}

//デストラクタ
Bullet::~Bullet()
{

}

//更新
void Bullet::BulletUpdate()
{
	
}

//描画
void Bullet::BUlletDraw()
{
	//ボタンを押している間丸を表示する
	if (PAD_INPUT::OnPressed(XINPUT_BUTTON_RIGHT_SHOULDER) || KeyManager::OnKeyPressed(KEY_INPUT_UP))
	{
		DrawCircle(101+WaitTime, 490, 5, 0xffff00, TRUE);
	}

}