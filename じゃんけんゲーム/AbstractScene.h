#pragma once
#include "DxLib.h"

//デフォルトの抽象シーンクラス
//ユーザーはこれを継承してシーンを実装すると楽

class AbstractScene {
public:
	//デストラクタ
	virtual~AbstractScene() {};

	//描画以外の更新を実装する
	virtual AbstractScene* Update() = 0;

	//描画以外に関することを実装する
	virtual void Draw() const = 0;

	//シーンの変更処理
	virtual AbstractScene* ChangeScene() = 0;
};
