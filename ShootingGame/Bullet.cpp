#include "Bullet.h"
#include  "KeyManager.h"
#include "PadInput.h"

//�R���X�g���N�^
Bullet::Bullet()
{
	//WaitTime = 0;
	g_bulletY = 0;
}

//�f�X�g���N�^
Bullet::~Bullet()
{

}

//�X�V
void Bullet::BulletUpdate()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_RIGHT_SHOULDER) || KeyManager::OnKeyClicked(KEY_INPUT_UP))
	{
		--g_bulletY > 20;
	}
	g_movebullet = g_bulletY * 150;
}

//�`��
void Bullet::BUlletDraw()
{
	//�{�^���������Ă���Ԋۂ�\������
	
	DrawCircle(101, 490 + g_movebullet, 5, 0xffff00, TRUE);
}

void Bullet::Movebullet()
{

}