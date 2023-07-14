#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "Stage.h"
#include "KeyManager.h"
#include "End.h"
#include "GameOver.h"
#include "GameClear.h"
#define _USE_MATH_DEFINES
#include <math.h>

//�R���X�g���N�^
GameMain::GameMain()
{
	g_Score = 0;
	// �ϐ��̏����ݒ�
	BallX = 320;
	BallY = 440 - 5;
	BarX = 290;
	BarY = 440;
	Stage = 0;

	BallAngle = 0.625f;

	//�u���b�N�z��̏�����
	InitBlock();

	RestBall = 10;    //�c��{�[���̐ݒ�
	//�u���b�N�摜�f�[�^�̕����ǂݍ���
	LoadDivGraph("images/Block.bmp", 8, 8, 1, 40, 8, BlockImage);
}

//�f�X�g���N�^
GameMain::~GameMain()
{

}

//�X�V
AbstractScene* GameMain::Update()
{

	MoveBall();    //�{�[���̈ړ�
	HitBar();     //�{�[���ƃo�[�̓����蔻��
	HitBlock();   //�{�[���ƃu���b�N�̓����蔻��
	CheckBlock();
	InputMouse();

	if (CheckBlock() == 0) 
	{
		return new GameClear;
	}
	else if (RestBall == 0)
	{
		return new GameOver;
	}

	return this;
}

//�`��
void GameMain::Draw()const 
{
	DrawBox(0, 0, 640, 480, 0x000000, TRUE);
	//�{�[���̕`��
	DrawCircle(BallX, BallY, 4, 0xFFD700, TRUE);
	//�o�[�̕`��
	DrawBox(BarX, BarY, BarX + 60, BarY + 8, 0xFFD700, TRUE);

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (Block[i][j].flg == 1) {
				DrawGraph(Block[i][j].x, Block[i][j].y, BlockImage[Block[i][j].image], TRUE);
			}
		}
	}
	SetFontSize(24);
	DrawFormatString(20, 20, 0xFF0000, "SCORE:0%6d", g_Score);

	//�c��{�[�����̕`��
	SetFontSize(16);
	DrawFormatString(570, 450, 0xFFD700, "�� x%d", RestBall);
}

void GameMain::MoveBall(void)
{
	if (BallFlg != 2) {
		BallX += MoveX;
		BallY += MoveY;
	}
	else {
		BallX = BarX + 30;
		BallY = BarY - 6;
	}

	//�ǁE�V��ł̔���
	if (BallX < 4 || BallX>640 - 4) {   //���̕�
		if (BallX < 4) {
			BallX = 4;
		}
		else {
			BallX = 640 - 4;
		}
		BallAngle = (1 - BallAngle) + 0.5f;
		if (BallAngle > 1)BallAngle -= 1.0f;
		ChangeAngle();
	}
	if (BallY < 8) {
		BallAngle = (1 - BallAngle);
		ChangeAngle();
	}
	//if (BallY > 480 + 4)g_GameState = 5;
	if (BallY > 480 + 4) {
		//�{�[�����X�^�[�g��Ԃɂ���
		BallFlg = 2;
		if (--RestBall <= 0) {
			
		}
	}
}

void GameMain::HitBar(void)
{
	int mx0, mx1, my0, my1, sx0, sx1, sy0, sy1;

	//���W�ʒu�̎��O�v�Z
	mx0 = BallX - 4;
	mx1 = BallX + 4;
	my0 = BallY - 4;
	my1 = BallY + 4;
	sx0 = BarX;
	sx1 = BarX + 60;
	sy0 = BarY;
	sy1 = BarY + 8;

	//�{�[���ƃo�[�̓����蔻��
	if (sx0 <= mx1 && sx1 >= mx0 && sy0 <= my1 && sy1 >= my0) {
		if (BallFlg == 0) {
			BallAngle = (0.3f / 60) * (mx1 - sx0) + 0.6f;
			ChangeAngle();
			BallFlg = 1;
		}
	}
	else {
		if (BallFlg != 2)BallFlg = 0;
	}
}

void GameMain::HitBlock(void)
{
	//�{�[���ƃu���b�N�̓����蔻��
	int x = BallX / 40;
	int y = (BallY - 80) / 16;

	if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT && Block[y][x].flg != 0) {

		Block[y][x].flg = 0;

		BallAngle = (1 - BallAngle);
		ChangeAngle();
		g_Score += Block[y][x].score;

	}
}

void GameMain::InitBlock(void)
{
	//�u���b�N�z��̏�����
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (g_BlockData[GameClear::Stage][i][j] != 0) {
				Block[i][j].flg = 1;
				Block[i][j].x = j * 40;
				Block[i][j].y = i * 16 + 80;
				Block[i][j].w = 40;
				Block[i][j].h = 8;
				Block[i][j].image = 1;
				Block[i][j].image = g_BlockData[GameClear::Stage][i][j];
				Block[i][j].score = Block[i][j].image * 10;
			}
		}
	}
	//�{�[���X�^�[�g���
	BallFlg = 2;
}

void GameMain::ChangeAngle(void)
{
	float rad = BallAngle * (float)M_PI * 2;
	MoveX = (int)(Speed * cosf(rad));
	MoveY = (int)(Speed * sinf(rad));
}

int GameMain::CheckBlock()
{
	//�u���b�N�̔z��̏�����
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (Block[i][j].flg == 1) return -1;
		}
	}
	return 0;
}

void GameMain::InputMouse()
{
	//�}�E�X������W��ǂݎ��1
	GetMousePoint(&MouseX, &MouseY);

	BarX = MouseX;
	if (BarX < 0) {
		BarX = 0;
	}
	else if (BarX > 640 - 60) {
		BarX = 580;
	}

	KeyManager::Update();
	//�}�E�X���N���b�N�ŃQ�[���X�^�[�g
	if (((KeyManager::OnMouseClicked(MOUSE_INPUT_LEFT)) != 0) && BallFlg == 2) {
		BallFlg = 0;
		//�X�s�[�h�ƃA���O���ɂ��ړ��ʌv�Z
		Speed = 3;
		BallAngle = 0.625f;
		ChangeAngle();
	}
}