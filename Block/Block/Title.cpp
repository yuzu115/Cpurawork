#include "Title.h"
#include "DxLib.h"
#include "GameMain.h"

Title::Title()
{
	

}
AbstractScene* Title::Update()
{
	if (CheckHitKey(KEY_INPUT_A) == 0) 
	{
		return new GameMain;
	}
	return this;
}

void Title::Draw() const
{
	printf("Title\n");
	//printf("®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
}