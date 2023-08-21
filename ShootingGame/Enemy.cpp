#include "Enemy.h"
#include "DxLib.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::EnemyUpdate()
{

}

void Enemy::EnemyDraw()
{
	DrawCircle(100, 100, 50, 0xff0000, TRUE);
}
