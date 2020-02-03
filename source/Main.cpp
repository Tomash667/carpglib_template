#include "Pch.h"
#include <AppEntry.h>
#include "Game.h"

int AppEntry(char*)
{
	Game game;
	game.Run();
	return 0;
}
