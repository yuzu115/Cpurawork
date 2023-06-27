#pragma once
#include "AbstractScene.h"

class Title : public AbstractScene
{

private:
	int TitleImage;
	int g_MenuY;

	enum class TITLE_MENU {
		MAIN,
		GAMEMAIN,
		END
	};
	TITLE_MENU g_MenuNumber;

public:
	//コンストラクタ
	Title();
	//デストラクタ
	~Title();
	//描画以外の更新を実行
	AbstractScene* Update() override;
	
	//描画以外に関することを実装
	void Draw()const override;
};

