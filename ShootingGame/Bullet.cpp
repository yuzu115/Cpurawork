#include "Bullet.h"
#include  "KeyManager.h"
#include "PadInput.h"

//�R���X�g���N�^
Bullet::Bullet()
{
	WaitTime = 30;
}

//�f�X�g���N�^
Bullet::~Bullet()
{

}

//�X�V
void Bullet::BulletUpdate()
{
	
}

//�`��
void Bullet::BUlletDraw()
{
	//�{�^���������Ă���Ԋۂ�\������
	if (PAD_INPUT::OnPressed(XINPUT_BUTTON_RIGHT_SHOULDER) || KeyManager::OnKeyPressed(KEY_INPUT_UP))
	{
		DrawCircle(101+WaitTime, 490, 5, 0xffff00, TRUE);
	}

}