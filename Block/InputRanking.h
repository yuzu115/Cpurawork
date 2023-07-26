#pragma once
#include "AbstractScene.h"
class InputRanking:public AbstractScene
{
private:

public:
	InputRanking();
	~InputRanking();
	void Draw()const override;

	static int RankingImage;

};

