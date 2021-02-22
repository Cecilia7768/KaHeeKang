#include<iostream>
using namespace std;

template<typename T1,typename T2>
void ShowData(T1 a, T2 b)
{
	cout << a << " ";
	cout << b << endl;
}

void main()
{
	ShowData(1, 2);
	ShowData(3, 2.5);

}