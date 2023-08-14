#include "Ranking.h"
#include "DxLib.h"
#include "PadInput.h"
#include "Title.h"

Ranking::Ranking()
{

}

Ranking::~Ranking()
{

}

AbstractScene* Ranking::Update()
{
	PAD_INPUT::UpdateKey();
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new Title;
	}
	return this;
}

void Ranking::Draw()const
{
	SetFontSize(100);
	DrawString(400, 300, "Ranking", 0xffffff);
	SetFontSize(30);
	DrawString(400, 500, "Aキーでタイトルへ", 0xffffff);
}
