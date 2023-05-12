#pragma once
#include "CBrid.h"

class CCow :public CBrid 
{
public:
	//「鳴く」関数（仮想関数）
	void sing();
	//「飛ぶ」関数
	void fly();
};