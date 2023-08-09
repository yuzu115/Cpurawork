#include "GameOver.h"
#include "DxLib.h"
#include "Title.h"
#include "KeyManager.h"

GameOver::GameOver()
{

}

GameOver::~GameOver()
{

}

AbstractScene* GameOver::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_A))
	{
		return new Title;
	}

	return this;
}

void GameOver::Draw()const
{
	SetFontSize(100);
	DrawString(400, 300, "GameOver", 0xffffff);
}
