#include <stdio.h>
#include "SceneManager.h"
#include "TitleScene.h"

int main() {
	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new Title()));

	printf("整数値を入力して下さい>");
	while (sceneMng. Update() != nullptr) {
		sceneMng .Draw();
	}

	printf("処理を終了します\n");

	return 0;
}