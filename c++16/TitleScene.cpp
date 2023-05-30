#include <stdio.h>
#include "TitleScene.h"
#include "GameMain.h"

AbstractScene* Title::Update() {
	int nInt;
	scanf_s("%d", &nInt);
	if (nInt == 1) {
		return new GameMain();
	}
	return this;
}

void Title::Draw()const {
	printf("Title�ł�\n");
	printf("�����l����͂��Ă�������>");
}