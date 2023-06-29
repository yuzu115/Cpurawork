#include "End.h"
#include "DxLib.h"

//コンストラクタ
End::End()
{
	EndImage = LoadGraph("images/End.png");
}

//デストラクタ
End::~End()
{

}

AbstractScene*End::Update()
{
	return this;
}

void End::Draw() const
{
	DrawExtendGraph(0, 0, 640, 480, EndImage, TRUE);
}
