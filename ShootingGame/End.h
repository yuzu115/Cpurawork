#pragma once
#include "AbstractScene.h"

class End : public AbstractScene
{
private:
    int g_WaitTime;   //終了までの時間
    int g_PosY; //エンドロール用
    int EndImage;  //画像用
    
public:
    //コンストラクタ
    End();
    //デストラクタ
    ~End();
    //描画以外の更新を実行
    AbstractScene* Update() override;
    //描画に関することを実装
    void Draw()const;
};
