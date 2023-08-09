#pragma once
#include "AbstractScene.h"
class GameClear : public AbstractScene
{
private:

public:
	GameClear();
	~GameClear();
	AbstractScene* Update()override;
	void Draw()const override;
};

