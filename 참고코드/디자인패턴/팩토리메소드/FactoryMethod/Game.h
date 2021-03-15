#pragma once
#include "View.h"

class Game
{
	View* view;

public:
	virtual void Initialized();
	virtual void Update();
	virtual void Finished();

protected:
	virtual View* CreateView() = 0;
};

class MyGame : public Game
{
protected:
	virtual View* CreateView();
};

