#pragma once
#include"Observer.h"

class Subject
{
public:
	virtual void NotifyObserver() = 0;
	virtual void AddObserver(Observer* input) = 0;
	Subject();
	~Subject();
};

