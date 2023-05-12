#pragma once
#include "CBrid.h"

class CChicken :public CBrid
{
	//「鳴く」関数（仮想関数）
	void sing();
	//「飛ぶ」関数
	void fly();
};