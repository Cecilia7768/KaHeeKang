#include<iostream>
#include<string>
#define max_len 100
using namespace std;

class Student
{
private:
	string name;
	int kor, eng, math, sum;
	float avg;
	int num;
	char Class;
public:
	Student() { num = 0; }
	~Student() {}

	void SetStudent(int _num);
	void showStudent();
	int getnum()
	{
		return num;
	}
	string getname()
	{
		return name;
	}
	char getClass()
	{
		return Class;
	}
};

