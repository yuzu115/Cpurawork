#pragma once

#define MOVE_LEFT_LIMIT 120
#define MOVE_RIGHT_LIMIT 1170
#define WALK_SPEED 5
#define INVINCIBLE_TIME 2

class Player 
{
private:
	int imageCnt;			//�O�͐Î~�@�P�͍��@�Q�͉E
	float speed;			//�ړ���
	int CntWait;
	int Cnt;
	int life;				//�c�@
	short JoyPadX;			//�R���g���[���[�̍��X�e�B�b�N�̒l���i�[
	bool atkFlg;			//�U�������ǂ���	FALSE:�U�����Ă��Ȃ�	TRUE:�U����
	int invincibleTime;		//���G����
	bool IsInvincible;		//���G���ǂ���	FALSE:�Ȃ�	TRUE:���G
	int fpsCnt;
	bool blinkFlg;			//�_�Ńt���O	FALSE:�\��	TRUE:����
	bool SlashFlg;
	int Slashtime;

	int PlayerImage;		//�v���C���[�̎~�܂��Ă���摜
	int PlayerLeftRunImage[8];	//�v���C���[�̍��ֈړ����Ă���摜
	int PlayerRightRunImage[8];//�v���C���[�̉E�ֈړ����Ă���摜
	int SlashImage;

	int Damege_SE;
	int Attack_SE;

	//Attack* attack;

public:
	Player();
	~Player();
	void DrawPlayer()const;
	void Update();
	int PlayerLimit();
	//Attack* GetAttack()const { return attack; }
	void HitDamage();
	void HitEnemy();
	bool GetIsInvincible();
	const int* GetLife()const { return &life; }
};