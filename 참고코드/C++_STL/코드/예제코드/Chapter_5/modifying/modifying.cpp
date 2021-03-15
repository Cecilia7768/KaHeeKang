#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Exam_1
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//
//	vector<int> v2(5); //size 5인 vector 생성
//
//	vector<int>::iterator iter;
//	// 구간 [v1.begin(), v1.end())의 모든 원소를 [v2.begin(), iter)의 순차열로 복사.
//	iter = copy(v1.begin(), v1.end(), v2.begin());
//	cout << "v2 마지막 원소: " << *(iter - 1) << endl;
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//}

//Exam_2
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//
//	vector<int> v2(10); //size 10인 vector 생성
//
//	vector<int>::iterator iter;
//	// 구간 [v1.begin(), v1.end())의 모든 원소를 
//	// [iter, v2.end())의 순차열로 마지막 원소부터 복사.
//	iter = copy_backward(v1.begin(), v1.end(), v2.end());
//	cout << "v2 첫 원소: " << *iter << endl;
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//}

//Exam_3
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	// 구간 [v.begin(), v.end())의 모든 원소를 0으로 채운다.
//	fill(v.begin(), v.end(), 0);
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// 구간 [v.begin(), v.begin()+3)의 모든 원소를 55로 채운다.
//	fill_n(v.begin(), 3, 55);
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_4
//출력 매개 변수로 사용하기 위해 &(레퍼런스)를 사용함!!!
//void Func(int& r)
//{
//	r += 5;
//}
//
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//
//	for_each(v.begin(), v.end(), Func);
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_5
//class Accumulation
//{
//	int total;
//public:
//	explicit Accumulation(int init = 0) :total(init) { }
//	void operator()(int& r)
//	{
//		total += r;
//		r = total;
//	}
//};
//void main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	//[v.begin(), v.end()) 모든 원소를 초기값 0부터 시작하여 *p += *(p-1)를 적용합니다.
//	for_each(v.begin(), v.end(), Accumulation(0));
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_6
//class Integer
//{
//	int data;
//public:
//	explicit Integer(int d = 0) :data(d) { }
//	int operator()()
//	{
//		return data++;
//	}
//};
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// [v.begin(), v.end())의 원소를 1~5로 채운다.
//	generate(v.begin(), v.end(), Integer(1));
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// [v.begin(), v.end())의 원소를 100~104로 채운다.
//	generate(v.begin(), v.end(), Integer(100));
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// [v.begin(), v.begin()+3)의 원소를 1~3로 채운다.
//	generate_n(v.begin(), 3, Integer(1));
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_7
//void main()
//{
//	int a = 10, b = 20;
//
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "a= " << a << ", " << "b= " << b << endl;
//	swap(a, b);
//	cout << "a= " << a << ", " << "b= " << b << endl;
//
//	vector<int>::iterator p = v.begin();
//	vector<int>::iterator q = v.begin() + 1;
//
//	cout << "v[0]= " << v[0] << ", " << "v[1]= " << v[1] << endl;
//	iter_swap(p, q);
//	cout << "v[0]= " << v[0] << ", " << "v[1]= " << v[1] << endl;
//}

//Exam_8
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(30);
//	v1.push_back(50);
//	v1.push_back(60);
//	v1.push_back(80);
//
//	vector<int> v2;
//	v2.push_back(20);
//	v2.push_back(40);
//	v2.push_back(70);
//
//	vector<int> v3(10); //size 10인 vector 생성 
//	vector<int>::iterator iter_end;
//	iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	cout << "v3 : ";
//	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
//		cout << v3[i] << " ";
//	cout << endl;
//	cout << "v3(합병 순차열): " << *v3.begin() << '~' << *(iter_end - 1) << endl;
//}

//Exam_9
//template <typename T>
//struct Greater
//{
//	bool operator()(const T& left, const T& right) const
//	{
//		return left > right;
//	}
//};
//
//void main()
//{
//	vector<int> v1;
//	v1.push_back(80);
//	v1.push_back(60);
//	v1.push_back(50);
//	v1.push_back(30);
//	v1.push_back(10);
//
//	vector<int> v2;
//	v2.push_back(70);
//	v2.push_back(40);
//	v2.push_back(20);
//
//	vector<int> v3(10); //size 10인 vector 생성 
//	vector<int>::iterator iter_end;
//	//iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), greater<int>() );
//	iter_end = merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin(), Greater<int>());
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	cout << "v3 : ";
//	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
//		cout << v3[i] << " ";
//	cout << endl;
//	cout << "v3(합병 순차열): " << *v3.begin() << '~' << *(iter_end - 1) << endl;
//}

//Exam_10
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(30);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	replace(v.begin(), v.end(), 30, 0);
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_11
//bool Pred(int n)
//{
//	return 30 <= n && n <= 50;
//}
//
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//	v.push_back(70);
//	v.push_back(80);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	replace_if(v.begin(), v.end(), Pred, 0);
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_12
//bool Pred(int n)
//{
//	return n <= 30;
//}
//
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(30);
//	v1.push_back(50);
//
//	vector<int> v2(6); //size: 6인 vector 생성
//	vector<int> v3(6); //size: 6인 vector 생성
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	cout << "v3 : ";
//	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
//		cout << v3[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter_end;
//	// 30인 원소를 모두 0으로 변환하여 [v2.begin(), iter_end) 순차열에 저장한다.
//	iter_end = replace_copy(v1.begin(), v1.end(), v2.begin(), 30, 0);
//	// 30이하인 원소를 모두 0으로 변환하여 [v3.begin(), iter_end) 순차열에 저장한다.
//	iter_end = replace_copy_if(v1.begin(), v1.end(), v3.begin(), Pred, 0);
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	cout << "v3 : ";
//	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
//		cout << v3[i] << " ";
//	cout << endl;
//}

//Exam_13
void main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(11);
	v2.push_back(22);
	v2.push_back(33);
	v2.push_back(44);
	v2.push_back(55);

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;
	cout << "v2 : ";
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;

	swap_ranges(v1.begin(), v1.end(), v2.begin());

	cout << endl << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;
	cout << "v2 : ";
	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
		cout << v2[i] << " ";
	cout << endl;
}

//Exam_14
//int Func(int n)
//{
//	return n + 5;
//}
//
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//
//	transform(v.begin(), v.end(), v.begin(), Func);
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_15
//int Func(int n)
//{
//	return n + 5;
//}
//
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int> v2(10); //size: 10 vector 생성
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//
//	vector<int>::iterator iter_end;
//	iter_end = transform(v1.begin(), v1.end(), v2.begin(), Func);
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	cout << "[v2.begin(), iter_end) 순차열: " << *v2.begin() << " ... " << *(iter_end - 1) << endl;
//}

//Exam_16
//int Plus(int left, int right)
//{
//	return left + right;
//}
//
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int> v2;
//	v2.push_back(1);
//	v2.push_back(2);
//	v2.push_back(3);
//	v2.push_back(4);
//	v2.push_back(5);
//
//	vector<int> v3(5); //size: 5인 vector 생성
//
//	vector<int>::iterator iter_end;
//	//iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
//	iter_end = transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Plus);
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//	cout << "v3 : ";
//	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
//		cout << v3[i] << " ";
//	cout << endl;
//	cout << "[v3.begin(), iter_end) 순차열: ";
//	for (vector<int>::iterator iter = v3.begin(); iter != iter_end; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}