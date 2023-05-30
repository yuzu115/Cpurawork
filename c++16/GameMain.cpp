#include <stdio.h>
#include "GameMain.h"

AbstractScene* GameMain::Update() {
	int nInt;
	scanf_s("%d", &nInt);
	if (nInt == 1) {
		return nullptr;
	}
	return this;
}

void GameMain::Draw()const {
	printf("GameMain‚Å‚·\n");
	printf("®”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
}