#pragma once
#include"Observer.h"
#include<iostream>
using namespace std;
class DataTable : public Observer
{
private:
	int m_kor;
	int m_mat;
	int m_eng;
	void Print();
public:
	virtual void Update(int kor, int mat, int eng);
	DataTable();
	~DataTable();
};

