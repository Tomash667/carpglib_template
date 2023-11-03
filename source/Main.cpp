#include "Pch.h"
#include <AppEntry.h>
#include "Game.h"

int AppEntry(cstring)
{
	Game game;
	return game.Start() ? 0 : 1;
}
