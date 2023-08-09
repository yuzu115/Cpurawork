#pragma once
#include "AbstractScene.h"

class End :public AbstractScene
{
private:
	int g_WaitTime;
	int g_PosY;
	int EndImage;

public:
	End();
	~End();
	AbstractScene* Update()override;
	void Draw()const override;
};

