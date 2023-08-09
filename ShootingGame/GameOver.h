#pragma once
#include "AbstractScene.h"
class GameOver : public AbstractScene
{
private:

public:
	GameOver();
	~GameOver();
	AbstractScene* Update()override;
	void Draw()const override;
};

