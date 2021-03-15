#include <iostream>
#include <vector>
#include <algorithm> //알고리즘 헤더
using namespace std;

//Exam_1
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter;
//	//구간 [v.begin(), v.end())에서 현재 원소와 다음 원소가 같아지는 첫 번째 반복자를 반환
//	iter = adjacent_find(v.begin(), v.end());
//
//	if (iter != v.end()) //같은 원소가 없다면 구간의 끝 반복자 반환
//		cout << *iter << endl;
//
//	for (; iter != v.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_2
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter;
//	vector<int>::iterator iter_b = v.begin();
//	vector<int>::iterator iter_e = v.begin() + 2;
//	//구간 [iter_b, iter_e)의 순차열은 10, 20이므로 
//	//찾는 원소가 없어 iter는 구간의 끝인 iter_e입니다.
//	iter = adjacent_find(iter_b, iter_e);
//
//	if (iter != iter_e) //찾은 원소가 없는지 확인 <<맞는 표현>> 
//		cout << *iter << endl;
//
//	cout << "==============" << endl;
//	if (iter != v.end()) //찾은 원소가 없는지 확인 <<틀린 표현>> 
//		cout << *iter << endl;
//
//	iter_b = v.begin();
//	iter_e = v.end();
//	iter = adjacent_find(iter_b, iter_e);
//
//	//모두 맞는 확인
//	if (iter != iter_e)
//		cout << *iter << endl;
//	if (iter != v.end())
//		cout << *iter << endl;
//}

//Exam_3
//이항 조건자
//bool Pred(int a, int b)
//{
//	return abs(b - a) > 10;
//}
//
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(90);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter;
//	iter = adjacent_find(v.begin(), v.end(), Pred);
//
//	if (iter != v.end())
//		cout << *iter << endl;
//
//	for (; iter != v.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exma_4
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// 구간 [v.begin(), v.end())에서 30 원소의 개수를 반환
//	int n = count(v.begin(), v.end(), 30);
//	cout << "30의 개수: " << n << endl;
//}

//Exam_5
//bool Pred(int n)
//{
//	return 25 < n;
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
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// 구간 [v.begin(), v.end())에서 25 보다 큰 원소의 개수를 반환
//	int n = count_if(v.begin(), v.end(), Pred);
//	cout << "25보다 큰 원소의 개수 :" << n << endl;
//}

//Exam_6
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(30);
//	v2.push_back(40);
//	v2.push_back(50);
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//
//	//구간 [v1.being(), v1.end)와 구간 [v2.begin(), v2.begin()+3)을 비교 합니다.
//	if (equal(v1.begin(), v1.end(), v2.begin()))
//		cout << "두 순차열은 같습니다." << endl;
//}

//Exam_7
//bool Pred(int left, int right)
//{
//	return abs(right - left) < 5;
//}
//
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(21);
//	v1.push_back(30);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(33);
//
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//
//	//구간 [v1.being(), v1.end)와 구간 [v2.begin(), v2.begin()+3)을 비교 합니다.
//	if (equal(v1.begin(), v1.end(), v2.begin(), Pred))
//		cout << "두 순차열은 같습니다." << endl;
//}

//Exam_8
//bool Pred(int n)
//{
//	return 35 < n;
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
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// 구간 [v.begin(), v.end())에서 25 보다 큰 원소의 개수를 반환
//	vector<int>::iterator iter;
//	iter = find(v.begin(), v.end(), 20);
//	if (iter != v.end())
//		cout << *iter << "을 찾다!" << endl;
//
//	iter = find_if(v.begin(), v.end(), Pred);
//	if (iter != v.end())
//		cout << "순차열에서 35보다 큰 첫 번째 원소: " << *iter << endl;
//}

//Exam_9
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v1.push_back(60);
//	v1.push_back(70);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int> v2;
//	v2.push_back(30);
//	v2.push_back(40);
//	v2.push_back(50);
//
//	vector<int>::iterator iter;
//	iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
//	if (iter != v1.end())
//	{
//		// 일치하는 마지막 순차열의 첫 원소의 반복자 iter
//		cout << "iter : " << *iter << endl;
//		cout << "iter-1 : " << *(iter - 1) << endl;
//		cout << "iter+1 : " << *(iter + 1) << endl;;
//	}
//}

//Exam_10
//bool Pred(int left, int right)
//{
//	return left <= right;
//}
//
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(15);
//	v1.push_back(20);
//	v1.push_back(40);
//	v1.push_back(50);
//	v1.push_back(60);
//	v1.push_back(10);
//	v1.push_back(11);
//	v1.push_back(12);
//	v1.push_back(80);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(15);
//	v2.push_back(25);
//
//	vector<int>::iterator iter;
//	iter = find_end(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);
//	if (iter != v1.end())
//	{
//		// 일치하는 마지막 순차열의 첫 원소의 반복자 iter
//		cout << "iter : " << *iter << endl;
//		cout << "iter-1 : " << *(iter - 1) << endl;
//		cout << "iter+1 : " << *(iter + 1) << endl;;
//	}
//}

//Exam_11
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
//	v2.push_back(40);
//	v2.push_back(80);
//	v2.push_back(20);
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter;
//	iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end());
//	if (iter != v1.end())
//		cout << "iter : " << *iter << endl;
//}

//Exam_12
//bool Pred(int left, int right)
//{
//	return left > right;
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
//	v2.push_back(40);
//	v2.push_back(80);
//	v2.push_back(20);
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//	cout << "v2 : ";
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter;
//	iter = find_first_of(v1.begin(), v1.end(), v2.begin(), v2.end(), Pred);
//	if (iter != v1.end())
//		cout << "iter : " << *iter << endl;
//}

//Exam_13
//void Print(int n)
//{
//	cout << n << " ";
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
//	for_each(v.begin(), v.begin() + 2, Print);
//	cout << endl;
//	for_each(v.begin(), v.begin() + 4, Print);
//	cout << endl;
//	//[v.begin(), v.end()) 구간의 원소 출력
//	for_each(v.begin(), v.end(), Print);
//	cout << endl;
//}

//Exam_14
//class PrintFunctor
//{
//	char fmt;
//public:
//	explicit PrintFunctor(char c = ' ') :fmt(c) { }
//	void operator ()(int n) const
//	{
//		cout << n << fmt;
//	}
//};
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
//	for_each(v.begin(), v.end(), PrintFunctor()); // 원소의 구분을 ' '로
//	cout << endl;
//	for_each(v.begin(), v.end(), PrintFunctor(','));// 원소의 구분을 ','로
//	cout << endl;
//	for_each(v.begin(), v.end(), PrintFunctor('\n'));// 원소의 구분을 '\n'로
//	cout << endl;
//}

//Exam_15
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(50);
//
//	vector<int> v3;
//	v3.push_back(10);
//	v3.push_back(20);
//	v3.push_back(30);
//
//	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end()))
//		cout << "v1 < v2" << endl;
//	else
//		cout << "v1 >= v2" << endl;
//
//	if (lexicographical_compare(v1.begin(), v1.end(), v3.begin(), v3.end()))
//		cout << "v1 < v3" << endl;
//	else
//		cout << "v1 >= v3" << endl;
//}

//Exam_16
//template< typename T>
//struct Less
//{
//	bool operator()(const T& left, const T& right) const
//	{
//		return left < right;
//	}
//};
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2;
//	v2.push_back(10);
//	v2.push_back(25);
//	v2.push_back(30);
//
//	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), less<int>()))
//		cout << "기준 less v1과 v2의 비교: true" << endl;
//	else
//		cout << "기준 less v1과 v2의 비교: false" << endl;
//
//
//	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), greater<int>()))
//		cout << "기준 greater v1과 v2의 비교: true" << endl;
//	else
//		cout << "기준 greater v1과 v2의 비교: false" << endl;
//
//
//	if (lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end(), Less<int>()))
//		cout << "사용자 기준 Less v1과 v2의 비교: true" << endl;
//	else
//		cout << "사용자 기준 Less v1과 v2의 비교: false" << endl;
//}

//Exam_17
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const { cout << '(' << x << ',' << y << ')' << endl; }
//};
//bool XCompare(const Point& left, const Point& right)
//{
//	return left.GetX() < right.GetX();
//}
//bool YCompare(const Point& left, const Point& right)
//{
//	return left.GetY() < right.GetY();
//}
//void main()
//{
//	int a = 10, b = 20;
//	int r;
//
//	r = max(a, b);
//	cout << "max: " << r << endl;
//	r = min(a, b);
//	cout << "min: " << r << endl;
//
//	Point pt1(5, 8), pt2(3, 9);
//	Point pt3;
//
//	pt3 = max(pt1, pt2, XCompare);
//	cout << "x max: "; pt3.Print();
//	pt3 = max(pt1, pt2, YCompare);
//	cout << "y max: "; pt3.Print();
//}

//Exam_18
//void main()
//{
//	vector<int> v;
//
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	vector<int>::iterator iter;
//	iter = max_element(v.begin(), v.end());
//	cout << *iter << endl;
//
//	iter = min_element(v.begin(), v.end());
//	cout << *iter << endl;
//}

//Exam_19
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//	void Print() const { cout << '(' << x << ',' << y << ')' << endl; }
//};
//bool Compare(const Point& left, const Point& right)
//{
//	if (left.GetX() < right.GetX())
//		return true;
//	else if (left.GetX() > right.GetX())
//		return false;
//	else
//		return left.GetY() < right.GetY();
//}
//void main()
//{
//	vector<Point> v;
//
//	v.push_back(Point(3, 2));
//	v.push_back(Point(2, 5));
//	v.push_back(Point(1, 5));
//	v.push_back(Point(3, 3));
//	v.push_back(Point(3, 2));
//
//	vector<Point>::iterator iter;
//	iter = max_element(v.begin(), v.end(), Compare);
//	cout << "max: "; iter->Print(); //반복자가 가리키는 객체의 멤버는 -> 연산자로 접근
//	cout << "max: "; (*iter).Print(); //위와 같음
//}

//Exam_20
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
//	v2.push_back(10);
//	v2.push_back(20);
//	v2.push_back(30);
//	v2.push_back(80);
//	v2.push_back(90);
//
//	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
//	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin());
//
//	cout << "v1: " << *iter_pair.first << ", " << "v2: " << *iter_pair.second << endl;
//}

//Exam_21
//bool Pred(int left, int right)
//{
//	return abs(right - left) <= 5;
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
//	v2.push_back(11);
//	v2.push_back(25);
//	v2.push_back(33);
//	v2.push_back(46);
//	v2.push_back(50);
//
//	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
//	iter_pair = mismatch(v1.begin(), v1.end(), v2.begin(), Pred);
//
//	cout << "v1: " << *iter_pair.first << ", " << "v2: " << *iter_pair.second << endl;
//}

//Exam_22
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	v1.push_back(60);
//	v1.push_back(70);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int> v2;
//	v2.push_back(30);
//	v2.push_back(40);
//	v2.push_back(50);
//
//	vector<int>::iterator iter;
//	iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());
//	if (iter != v1.end())
//	{
//		// 일치하는 첫 번째 순차열의 첫 원소의 반복자 iter
//		cout << "iter : " << *iter << endl;
//		cout << "iter-1 : " << *(iter - 1) << endl;
//		cout << "iter+1 : " << *(iter + 1) << endl;;
//	}
//}

//Exam_23
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(30);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//
//	vector<int>::iterator iter;
//	iter = search_n(v.begin(), v.end(), 3, 30);
//	if (iter != v.end())
//	{
//		cout << "iter : " << *iter << endl;
//		cout << "iter-1 : " << *(iter - 1) << endl;
//		cout << "iter+1 : " << *(iter + 1) << endl;;
//	}
//}

//Exam_24
bool Pred(int left, int right)
{
	return abs(right - left) <= 5;
}

void main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(32);
	v.push_back(28);
	v.push_back(33);
	v.push_back(40);
	v.push_back(50);


	vector<int>::iterator iter;
	iter = search_n(v.begin(), v.end(), 3, 30, Pred);
	if (iter != v.end())
	{
		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;;
	}
}