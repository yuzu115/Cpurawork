#include "GameClear.h"
#include "DxLib.h"
#include "PadInput.h"
#include "Ranking.h"

GameClear::GameClear()
{

}

GameClear::~GameClear()
{

}

AbstractScene* GameClear::Update()
{
	PAD_INPUT::UpdateKey();
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new Ranking;
	}
	return this;
}

void GameClear::Draw()const
{
	SetFontSize(100);
	DrawString(400, 300, "GameClear", 0xffffff);
	SetFontSize(30);
	DrawString(400, 500, "Aキーでランキングへ", 0xffffff);
}