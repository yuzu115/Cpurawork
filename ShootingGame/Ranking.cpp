#include "Ranking.h"
#include "DxLib.h"
#include "KeyManager.h"
#include "Title.h"

Ranking::Ranking()
{

}

Ranking::~Ranking()
{

}

AbstractScene* Ranking::Update()
{
	KeyManager::Update();
	if (KeyManager::OnKeyClicked(KEY_INPUT_C))
	{
		return new Title;
	}
	return this;
}

void Ranking::Draw()const
{
	SetFontSize(100);
	DrawString(400, 300, "Ranking", 0xffffff);
}
