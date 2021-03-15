#include "Game.h"

void Game::Initialized()
{
	view = CreateView();
}

void Game::Update()
{
	view->Render();
}

void Game::Finished()
{
	delete view;
}

/* My Game */
View * MyGame::CreateView()
{
	return new MyView();
}

//View * YouGame::CreateView()
//{
//	return new YouView();
//}
