#include "POS.h"

int main(void)
{
	POS pos1;
	POS pos2(100, 200);

	pos1.print();
	pos2.print();

	return 0;
}
