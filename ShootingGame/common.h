#pragma once
#define _USE_MATH_DEFINES
#include <math.h>


#define SCREENSIZE_X 1280
#define SCREENSIZE_Y 720

#define D_UI_BACK_HEIGHT (70)

#define D_GAME_SCREEN_LEFT (0)
#define D_GAME_SCREEN_RIGHT (1280)
#define D_GAME_SCREEN_UPPER (0)

enum mode {
	TITLE,
	RANKING,
	MAIN,
};
#define D_GAME_SCREEN_FOOTER (SCREENSIZE_X - D_UI_BACK_HEIGHT)

