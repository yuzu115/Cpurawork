#include "Human.h"
#include "japanese.h"

void action(Human& human)
{
	human.speak();
}

int main()
{
	Human john;
	japanese taro;

	action(john);
	action(taro);

	return 0;
 }