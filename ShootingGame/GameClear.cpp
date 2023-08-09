#include "GameClear.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "Ranking.h"

GameClear::GameClear()
{

}

GameClear::~GameClear()
{

}

AbstractScene* GameClear::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_B))
	{
		return new Ranking;
	}
	return this;
}

void GameClear::Draw()const
{
	SetFontSize(100);
	DrawString(400, 300, "GameClear", 0xffffff);
}