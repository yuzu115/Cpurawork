#include <stdio.h>
#include "SceneManager.h"
#include "TitleScene.h"

int main() {
	SceneManager sceneMng(dynamic_cast<AbstractScene*>(new Title()));

	printf("�����l����͂��ĉ�����>");
	while (sceneMng. Update() != nullptr) {
		sceneMng .Draw();
	}

	printf("�������I�����܂�\n");

	return 0;
}