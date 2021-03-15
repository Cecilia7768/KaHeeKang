#pragma once
#include "Int.h"
#include "Singleton.h"
#include <vector>

class IntManager : public Singleton<IntManager> 
{
	vector<Int*> m_vecIntList;
public:
	int GetSize()
	{
		return m_vecIntList.size();
	}

	void Insert();
	void ShowList();

	IntManager();
	~IntManager();
};

