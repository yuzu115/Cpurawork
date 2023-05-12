#include "CBrid.h"
#include "CChicken.h"
#include "CCow.h"

int main()
{
	CBrid* b1, * b2;
	b1 = new CCow();
	b2 = new CChicken();

	b1->sing();
	b1->fly();
	b2->sing();
	b2->fly();
	
	delete b1;
	delete b2;

	return 0;
}