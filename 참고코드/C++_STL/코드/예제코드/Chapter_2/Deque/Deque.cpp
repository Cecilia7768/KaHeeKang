#include <iostream>
#include <vector>
#include <deque>
using namespace std;

//Exam_1
//void main()
//{
//	deque<int> dq;
//
//	for (deque<int>::size_type i = 0; i < 10; ++i)
//		dq.push_back((i + 1) * 10);
//
//	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
//		cout << dq[i] << ' ';
//	cout << endl;
//}

//Exam_2
//void main()
//{
//	vector<int> v(4, 100); //100으로 초기화한 4개의 원소를 갖는 컨테이너 v
//	deque<int> dq(4, 100); //100으로 초기화한 4개의 원소를 갖는 컨테이너 dq
//
//	v.push_back(200); // v에 200 추가
//	dq.push_back(200); // dq에 200 추가
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
//		cout << dq[i] << " ";
//	cout << endl;
//}

//Exam_3
//void main()
//{
//	deque<int> dq;
//
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//	dq.push_back(40);
//	dq.push_back(50);
//
//	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
//		cout << dq[i] << " ";
//	cout << endl;
//
//	dq.push_front(100); // 앞쪽에 추가합니다.
//	dq.push_front(200);
//	for (deque<int>::size_type i = 0; i < dq.size(); ++i)
//		cout << dq[i] << " ";
//	cout << endl;
//}

//Exam_4
//void main()
//{
//	deque<int> dq;
//
//	dq.push_back(10);
//	dq.push_back(20);
//	dq.push_back(30);
//	dq.push_back(40);
//	dq.push_back(50);
//
//	deque<int>::iterator iter;
//	for (iter = dq.begin(); iter != dq.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	iter = dq.begin() + 2; //반복자에 +2합니다.
//	cout << *iter << endl;
//
//	iter += 2; //반복자에 +2합니다.
//	cout << *iter << endl;
//
//	iter -= 3; //반복자에 -3합니다.
//	cout << *iter << endl;
//}

//Exam_5
void main()
{
	deque<int> dq;

	for (int i = 0; i < 10; i++)
		dq.push_back((i + 1) * 10);

	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	for (iter = dq.begin(); iter != dq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;


	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	cout << *iter2 << endl;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;
}