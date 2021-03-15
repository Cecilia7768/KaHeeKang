#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Exam_1
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
//	vector<int>::iterator iter_end;
//	iter_end = remove(v.begin(), v.end(), 30);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	cout << "remove 후 [v.begin(), iter_end) 순차열: ";
//	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
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
//	v.push_back(30);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter_end;
//	iter_end = remove(v.begin(), v.end(), 30);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	// 구간 [iter_end, v.end())의 원소를 실제 제거(삭제)합니다. 
//	v.erase(iter_end, v.end());
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_3
//bool Pred(int n)
//{
//	return 30 <= n && n <= 40;
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
//	vector<int>::iterator iter_end;
//	iter_end = remove_if(v.begin(), v.end(), Pred);
//
//	cout << "[v.begin(), iter_end) : ";
//	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_4
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	vector<int> v2(5);
//	vector<int>::iterator iter_end;
//	iter_end = remove_copy(v1.begin(), v1.end(), v2.begin(), 30);
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
//
//	cout << "[v2.begin(), iter_end) : ";
//	for (vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_5
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter_end;
//	iter_end = unique(v.begin(), v.end());
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	cout << "[v.begin(), iter_end) : ";
//	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_6
bool Pred(int left, int right)
{
	return abs(right - left) < 10;
}

void main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(11);
	v.push_back(30);
	v.push_back(32);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;

	vector<int>::iterator iter_end;
	iter_end = unique(v.begin(), v.end(), Pred);

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "[v.begin(), iter_end) : ";
	for (vector<int>::iterator iter = v.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;
}