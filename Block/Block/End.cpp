#include "End.h"
#include "DxLib.h"

//�R���X�g���N�^
End::End()
{
	EndImage = LoadGraph("images/End.png");
}

//�f�X�g���N�^
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
