#include "GameOver.h"
#include "DxLib.h"
#include "Title.h"
#include "KeyManager.h"
#include "PadInput.h"

GameOver::GameOver()
{

}

GameOver::~GameOver()
{

}

AbstractScene* GameOver::Update()
{
	PAD_INPUT::UpdateKey();
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new Title;
	}

	return this;
}

void GameOver::Draw()const
{
	SetFontSize(100);
	DrawString(400, 300, "GameOver", 0xffffff);
	SetFontSize(30);
	DrawString(400, 500, "Aキーでタイトルへ", 0xffffff);
}
