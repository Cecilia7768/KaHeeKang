
#include "DataTable.h"



DataTable::DataTable()
{
}

void DataTable::Update(int kor, int mat, int eng) 
{
	m_kor = kor;
	m_mat = mat;
	m_eng = eng;

	Print();
}

void DataTable::Print()
{
		cout << "언어: " << m_kor << endl;
		cout << "수학: " << m_mat << endl;
		cout << "외국어: " << m_eng << endl;
}

DataTable::~DataTable()
{
}
