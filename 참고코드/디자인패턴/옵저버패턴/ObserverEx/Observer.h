#pragma once
class Observer
{
public:
	virtual void Update(int 언어, int 수학, int 외국어) = 0;
	Observer();
	~Observer();
};

