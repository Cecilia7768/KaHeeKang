#include <iostream>
using namespace std;

//Exam_1
//void Print()
//{
//	cout << "전역 함수!" << endl;
//}

//class Functor
//{
//public:
//	void operator( )()
//	{
//		cout << "함수 객체!" << endl;
//	}
//};

//void main()
//{
//	Functor functor;
//
//	Print();   // 전역 함수 호출
//	functor(); // 멤버 함수 호출 functor.operator()( )와 같다;
//}

//Exam_2
//void Print(int a, int b)
//{
//	cout << "전역 함수: " << a << ',' << b << endl;
//}
//
//class Functor
//{
//public:
//	void operator( )(int a, int b)
//	{
//		cout << "함수 객체: " << a << ',' << b << endl;
//	}
//};
//
//void main()
//{
//	Functor functor;
//
//	Print(10, 20);   // 전역 함수 호출
//	functor(10, 20); // 멤버 함수 호출 functor.operator()(10, 20)와 같다;
//}

//Exam_3
//#include <algorithm> // fo_each() 알고리즘(서버)을 사용하기 위한 헤더
//
//struct Functor1
//{
//	void operator()(int n) // 공백을 이용하여 원소를 출력
//	{
//		cout << n << ' ';
//	}
//};
//struct Functor2
//{
//	void operator()(int n) // 각 원소를 제곱하여 출력
//	{
//		cout << n * n << " ";
//	}
//};
//struct Functor3
//{
//	void operator()(int n) // 문자열과 endl을 이용하여 원소를 출력
//	{
//		cout << "정수 : " << n << endl;
//	}
//};
//void main()
//{
//	int arr[5] = { 10,20,30,40,50 };
//
//	for_each(arr, arr + 5, Functor1());//임시 함수자 객체(Functor1())를 만들어 함수로 전달
//	cout << endl << endl;
//	for_each(arr, arr + 5, Functor2());//임시 함수자 객체(Functor2())를 만들어 함수로 전달
//	cout << endl << endl;
//	for_each(arr, arr + 5, Functor3());//임시 함수자 객체(Functor3())를 만들어 함수로 전달
//}

//Exam_4
//bool Pred_less(int a, int b)
//{
//	return a < b;
//}
//
//class Less
//{
//public:
//	bool operator()(int a, int b)
//	{
//		return a < b;
//	}
//};
//
//void main()
//{
//	Less less;
//
//	cout << Pred_less(10, 20) << endl;
//	cout << Pred_less(20, 10) << endl;
//	cout << endl;
//	cout << less(10, 20) << endl; // less 객체로 암묵적 함수 호출
//	cout << less(20, 10) << endl; // less 객체로 암묵적 함수 호출   
//	cout << Less()(10, 20) << endl; // 임시객체로 암묵적 함수 호출   
//	cout << Less()(20, 10) << endl; // 임시객체로 암묵적 함수 호출   
//	cout << endl;
//	cout << less.operator()(10, 20) << endl; // 명시적 호출
//	cout << Less().operator()(10, 20) << endl; // 명시적 호출
//}

//Exam_5
//#include <functional> //STL less<>, greater<>
//
//class Less
//{
//public:
//	bool operator()(int a, int b)
//	{
//		return a < b;
//	}
//};
//
//class Greater
//{
//public:
//	bool operator()(int a, int b)
//	{
//		return a > b;
//	}
//};
//
//void main()
//{
//	cout << Less()(10, 20) << endl; //사용자 Less, Greater 사용
//	cout << Less()(20, 10) << endl;
//	cout << Greater()(10, 20) << endl;
//	cout << Greater()(20, 10) << endl;
//	cout << endl;
//	cout << less<int>()(10, 20) << endl; //STL의 less, greater 사용
//	cout << less<int>()(20, 10) << endl;
//	cout << greater<int>()(10, 20) << endl;
//	cout << greater<int>()(20, 10) << endl;
//}

//Exam_6
#include <functional> //plus<>, minus<>

class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

class Minus
{
public:
	int operator()(int a, int b)
	{
		return a - b;
	}
};

void main()
{
	cout << Plus()(10, 20) << endl; //사용자 Plus, Minus 사용
	cout << Plus()(20, 10) << endl;
	cout << Minus()(10, 20) << endl;
	cout << Minus()(20, 10) << endl;
	cout << endl;
	cout << plus<int>()(10, 20) << endl; //STL의 plus, minus 사용
	cout << plus<int>()(20, 10) << endl;
	cout << minus<int>()(10, 20) << endl;
	cout << minus<int>()(20, 10) << endl;
}