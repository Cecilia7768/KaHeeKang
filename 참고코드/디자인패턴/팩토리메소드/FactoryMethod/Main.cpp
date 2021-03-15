#include "Game.h"

int main()
{
	Game* game = new MyGame();
	//Game* ygame = new YouGame();

	//Game* game = ygame;

	game->Initialized();
	game->Update();
	game->Finished();

	//YouGame* ygame = new YouGame();

	//ygame->Initialized();
	//ygame->Update();
	//ygame->Finished();

	delete game;
}