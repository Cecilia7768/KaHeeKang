#pragma once
#include"Subject.h"
#include"Observer.h"
#include<vector>
using namespace std;

class Data : public Subject
{
private:
	vector<Observer*> observerList;

	int m_kor;
	int m_mat;
	int m_eng;
public:
	virtual void NotifyObserver();
	virtual void AddObserver(Observer* input);
	void Data::setData(int kor, int mat, int eng);
	Data();
	~Data();
};

