#include <stdio.h>
#include "SceneManager.h"
#include "TitleScene.h"

int main() {
	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new Title()));

	printf("®”’l‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢>");
	while (sceneMng. Update() != nullptr) {
		sceneMng .Draw();
	}

	printf("ˆ—‚ğI—¹‚µ‚Ü‚·\n");

	return 0;
}