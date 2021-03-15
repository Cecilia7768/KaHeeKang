#include <iostream>
using namespace std;

//Exam_1
//void Print(int n)
//{
//	cout << "정수: " << n << endl;
//}
//void main()
//{
//	// void Print(int n)의 함수 포인터 선언
//	void(*pf)(int);
//	// 함수의 이름은 함수의 시작 주소
//	pf = Print;
//
//	Print(10); //1. 함수 호출
//	pf(10); //2. 포인터를 이용한 함수 호출, 첫 번째 방법
//	(*pf)(10); //3. 포인터를 이용한 함수 호출, 두 번째 방법
//
//	cout << endl;
//	cout << Print << endl;
//	cout << pf << endl;
//	cout << *pf << endl;
//}

//Exam_2
//void Print()
//{
//	cout << "정적 함수 Print()" << endl;
//}
//class Point
//{
//public:
//	void Print()
//	{
//		cout << "멤버 함수 Print()" << endl;
//	}
//};
//void main()
//{
//	Point pt;
//	Point * p = &pt;
//
//	Print(); // 첫째, 정적 함수 호출
//	pt.Print(); // 둘째, 객체로 멤버함수 호출
//	p->Print(); // 셋째, 주소로 멤버함수 호출
//}

//Exam_3
//void Print(int n)
//{
//	cout << "전역 함수: " << n << endl;
//}
//namespace A
//{
//	void Print(int n)
//	{
//		cout << "namespace A 전역 함수: " << n << endl;
//	}
//}
//class Point
//{
//public:
//	static void Print(int n)
//	{
//		cout << "Point 클래스의 정적 멤버 함수: " << n << endl;
//	}
//};
//void main()
//{
//	void(*pf)(int);
//
//	Print(10); // 1. namespace 없는 전역 함수 호출
//	A::Print(10); // 2, namespace A의 전역 함수 호출
//	Point::Print(10); // 3, Point 클래스의 정적 멤버 함수 호출
//	cout << endl;
//
//	pf = Print;
//	pf(10);  // 1. 함수 포인터로 namespace 없는 전역 함수 호출
//	pf = A::Print;
//	pf(10);  // 2. 함수 포인터로 namespace A의 전역 함수 호출
//	pf = Point::Print;
//	pf(10);  // 3. 함수 포인터로 Point 클래스의 정적 멤버 함수 호출
//}

//Exam_4
class Point
{
	int x;
	int y;

public:
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	void PrintInt(int n) { cout << "테스트 정수 : " << n << endl; }
};

void main()
{
	Point pt(2, 3);
	Point *p = &pt;

	void (Point::*pf1)() const; // 멤버 함수 포인터 선언
	pf1 = &Point::Print;

	void (Point::*pf2)(int); // 멤버 함수 포인터 선언
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(10);
	cout << endl;

	(pt.*pf1)();  // 객체로 멤버 함수 포인터를 이용한 호출
	(pt.*pf2)(10);// 객체로 멤버 함수 포인터를 이용한 호출  
	cout << endl;

	(p->*pf1)();  // 주소로 멤버 함수 포인터를 이용한 호출
	(p->*pf2)(10);// 주소로 멤버 함수 포인터를 이용한 호출
}