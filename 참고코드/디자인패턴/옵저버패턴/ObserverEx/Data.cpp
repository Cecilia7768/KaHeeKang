#include "Data.h"



Data::Data()
{
}

void Data::NotifyObserver() 
{
	for (auto iter = observerList.begin(); iter != observerList.end(); iter++)
	{
		(*iter)->Update(m_kor, m_mat, m_eng);
	}
}

void Data::AddObserver(Observer* input) 
{
	observerList.push_back(input);
}

void Data::setData(int kor, int mat, int eng) 
{
	m_kor = kor;
	m_mat = mat;
	m_eng = eng;
}

Data::~Data()
{
	observerList.clear();
}
