#pragma once
#include "DxLib.h"
#include "AbstractScene.h"

//シーンマネージャークラス
//各シーンの切り替えを管理する
class SceneManager :public AbstractScene {
private:
	AbstractScene* mScene; //現在のシーン

public:
	//コンストラクタ
	SceneManager();

	//デストラクタ
	~SceneManager()
	{
		delete mScene;
	}

	//描画以外に関することを実装する
	void Draw() const override;

	//シーンの変更処理
	AbstractScene* ChangeScene()override;
};
