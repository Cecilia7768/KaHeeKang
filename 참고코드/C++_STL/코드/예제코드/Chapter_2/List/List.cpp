//Exam_1
#include <iostream>
#include <vector>
#include <list>
using namespace std;

//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.push_front(100);
//	lt.push_front(200);
//
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_2
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter = lt.begin();
//	list<int>::iterator iter2;
//	++iter;
//	++iter;
//
//	iter2 = lt.erase(iter); //iter(30)의 원소를 제거합니다.
//
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	cout << "iter2 : " << *iter2 << endl;
//
//	iter = iter2;
//	iter2 = lt.insert(iter, 300); //iter2(40)이 가리키는 위치에 300을 삽입합니다.
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	cout << "iter2 : " << *iter2 << endl;
//}

//Exam_3
//void main()
//{
//	vector<int> v;
//	list<int> lt;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	vector<int>::iterator viter = v.begin();
//	++viter; // 20원소를 가리킴
//	list<int>::iterator liter = lt.begin();
//	++liter; // 20원소를 가리킴
//
//	viter = v.insert(viter, 600); // v의 두 번째 요소로 삽입
//	liter = lt.insert(liter, 600); // lt의 두 번째 요소로 삽입
//
//	cout << "vector: " << *viter << endl;
//	cout << "list: " << *liter << endl;
//
//	cout << "vector : ";
//	for (viter = v.begin(); viter != v.end(); ++viter)
//		cout << *viter << ' ';
//	cout << endl;
//
//	cout << "list : ";
//	for (liter = lt.begin(); liter != lt.end(); ++liter)
//		cout << *liter << ' ';
//	cout << endl;
//}

//Exam_4
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(10);
//	lt.push_back(40);
//	lt.push_back(50);
//	lt.push_back(10);
//	lt.push_back(10);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.remove(10); // 10 원소의 노드를 모두 제거
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_5
//bool Predicate(int n) // 단항 조건자
//{
//	return 10 <= n && n <= 30;
//}
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//	lt.push_back(10);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.remove_if(Predicate); // 조건자가 참인 모든 원소를 제거합니다.
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_6
//void main()
//{
//	list<int> lt1;
//	list<int> lt2;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//	lt1.push_back(40);
//	lt1.push_back(50);
//
//	lt2.push_back(100);
//	lt2.push_back(200);
//	lt2.push_back(300);
//	lt2.push_back(400);
//	lt2.push_back(500);
//
//	list<int>::iterator iter1;
//	list<int>::iterator iter2;
//	cout << "lt1: ";
//	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
//		cout << *iter1 << ' ';
//	cout << endl;
//
//	cout << "lt2: ";
//	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
//		cout << *iter2 << ' ';
//	cout << endl << "=============" << endl;
//
//	iter1 = lt1.begin();
//	++iter1;
//	++iter1; // 30 원소의 위치를 가리킴
//
//	iter2 = lt2.begin();
//	++iter2; // 200 원소의 위치를 가리킴
//
//	//iter1이 가리키는 위치에 iter2가 가리키는 위치의 lt2의 원소를 잘라 붙임
//	lt1.splice(iter1, lt2, iter2);
//
//	cout << "lt1: ";
//	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
//		cout << *iter1 << ' ';
//	cout << endl;
//
//	cout << "lt2: ";
//	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
//		cout << *iter2 << ' ';
//	cout << endl << "=============" << endl;
//
//	//lt1.end()가 가리키는 위치에 순차열 [lt2.begin(), lt2.end())를 잘라 붙임
//	lt1.splice(lt1.end(), lt2, lt2.begin(), lt2.end());
//
//	cout << "lt1: ";
//	for (iter1 = lt1.begin(); iter1 != lt1.end(); ++iter1)
//		cout << *iter1 << ' ';
//	cout << endl;
//
//	cout << "lt2: ";
//	for (iter2 = lt2.begin(); iter2 != lt2.end(); ++iter2)
//		cout << *iter2 << ' ';
//	cout << endl;
//}

//Exam_7
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(30);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//	lt.push_back(10);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.unique();
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_8
//bool Predicate(int first, int second)
//{
//	return second - first <= 0;
//}
//
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(10);
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(30);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//	lt.push_back(10);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.unique(Predicate);
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_9
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(20);
//	lt.push_back(10);
//	lt.push_back(50);
//	lt.push_back(30);
//	lt.push_back(40);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.sort(); // 오름차순( less, < 연산) 정렬
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_10
//struct Greater
//{
//	bool operator () (int left, int right) const
//	{
//		return left > right;
//	}
//};
//
//void main()
//{
//	list<int> lt;
//
//	lt.push_back(20);
//	lt.push_back(10);
//	lt.push_back(50);
//	lt.push_back(30);
//	lt.push_back(40);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.sort(greater<int>()); // 조건자 greater를 사용하여 내림차순 정렬
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.sort(less<int>()); // 조건자 less를 사용하여 다시 오름차순 정렬
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	lt.sort(Greater()); // 사용자 정의 조건자를 사용하여 내림차순 정렬
//	for (iter = lt.begin(); iter != lt.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_11
//void main()
//{
//	list<int> lt1;
//	list<int> lt2;
//
//	lt1.push_back(10);
//	lt1.push_back(20);
//	lt1.push_back(30);
//	lt1.push_back(40);
//	lt1.push_back(50);
//
//	lt2.push_back(25);
//	lt2.push_back(35);
//	lt2.push_back(60);
//
//
//	list<int>::iterator iter;
//	cout << "lt1: ";
//	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	cout << "lt2: ";
//	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl << "===============" << endl;
//
//	lt1.merge(lt2); // lt2를 lt1으로 합병 정렬합니다. 정렬 기준은 less
//
//	cout << "lt1: ";
//	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//
//	cout << "lt2: ";
//	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
//		cout << *iter << ' ';
//	cout << endl;
//}

//Exam_12
void main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);

	//lt2.push_back(25); //lt1과 lt2의 정렬 방식이 다르므로 오류
	//lt2.push_back(35);
	//lt2.push_back(60);

	// lt1과 lt2는 정렬 방식이 같다.
	// greater 조건자( > 연산 ) 정렬 기준을 사용함
	lt2.push_back(60);
	lt2.push_back(35);
	lt2.push_back(25);


	list<int>::iterator iter;
	cout << "lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "lt2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl << "===============" << endl;

	// lt2를 lt1으로 합병 정렬합니다. 
	// 두 list의 정렬 기준이 > 연산인 greater라는 것을 predicate로 지정합니다.
	lt1.merge(lt2, greater<int>());

	cout << "lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "lt2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
		cout << *iter << ' ';
	cout << endl;
}