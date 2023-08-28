#include "Bullet.h"
#include  "KeyManager.h"
#include "PadInput.h"

Bullet::Bullet()
{
	WaitTime = 0;
}

Bullet::~Bullet()
{

}

void Bullet::BulletUpdate()
{
	
}

void Bullet::BUlletDraw()
{
	if (PAD_INPUT::OnPressed(XINPUT_BUTTON_RIGHT_SHOULDER) || KeyManager::OnKeyPressed(KEY_INPUT_UP))
	{
		//WaitTime++;
		DrawCircle(101, 490, 5, 0xffff00, TRUE);
	}

}