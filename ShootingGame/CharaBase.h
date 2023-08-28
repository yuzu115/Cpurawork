#pragma once
#include "SphereCollider.h"

class CharaBase :public SphereCollider
{
private:

public:
	CharaBase();
	~CharaBase();
	void CharaBaseUpdate();
	void CharaBaseDraw();

};

