#include "IntManager.h"

IntManager* IntManager::m_hThis = NULL;

IntManager::IntManager()
{
}

void IntManager::Insert()
{
	m_vecIntList.push_back(new Int);
}

void IntManager::ShowList()
{
	for (auto iter = m_vecIntList.begin(); iter != m_vecIntList.end(); iter++)
		(*iter)->Show();
}

IntManager::~IntManager()
{
	for (auto iter = m_vecIntList.begin(); iter != m_vecIntList.end(); iter++)
		delete(*iter);
}
