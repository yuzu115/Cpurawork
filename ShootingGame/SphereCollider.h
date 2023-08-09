#pragma once
class SphereCollider
{
private:
	int location;
	int radius;

public:
	SphereCollider();
	~SphereCollider();

	void CheckHitCollision();

};

