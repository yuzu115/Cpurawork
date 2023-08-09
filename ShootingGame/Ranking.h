#pragma once
#include "AbstractScene.h"
class Ranking : public AbstractScene
{
private:

public:
	Ranking();
	~Ranking();
	AbstractScene* Update()override;
	void Draw() const;
};

