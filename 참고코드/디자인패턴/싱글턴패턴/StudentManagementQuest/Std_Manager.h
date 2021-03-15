#pragma once
#include "Student.h"

class Std_manager 
{
	Student* std[30];
public:
	Std_manager();
	void display();
	void setStudent();
	void showStudent();
	void findNumber();
	void findname();
	void findClass();
	~Std_manager()
	{
		for (int i = 0; i < 30; i++)
		{
			delete std[i];
		}
	}

};

