#include <iostream>
#include <set>
using namespace std;

//Exam_1
//void main()
//{
//	set<int> s; // 정수 원소를 저장하는 기본 정렬 기준이 less인 빈 컨테이너 생성
//
//	s.insert(50); //랜덤으로 원소(key)를 삽입한다.
//	s.insert(30);
//	s.insert(80);
//	s.insert(40);
//	s.insert(10);
//	s.insert(70);
//	s.insert(90);
//
//	set<int>::iterator iter; // 기본 정렬 기준이 less인 set의 양방향 반복자
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " "; // inorder 2진 트리 탐색 순서로 출력된다.
//	cout << endl;
//
//	s.insert(50); //중복된 원소(key)를 삽입한다. 실패!!
//	s.insert(50);
//
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " "; // 결과는 같다.
//	cout << endl;
//}

//Exam_2
//void main()
//{
//	set<int> s;
//
//	pair<set<int>::iterator, bool> pr;
//
//	pr = s.insert(50); // 50 원소의 첫 번째 삽입
//	s.insert(40);
//	s.insert(80);
//
//	if (true == pr.second)
//		cout << *pr.first << " 삽입 성공!" << endl;
//	else
//		cout << *pr.first << "가 이미 있습니다. 삽입 실패!" << endl;
//
//	set<int>::iterator iter;
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	pr = s.insert(50); // 50 원소의 두 번째 삽입. 실패!!
//
//	if (true == pr.second)
//		cout << *pr.first << " 삽입 성공!" << endl;
//	else
//		cout << *pr.first << "가 이미 있습니다. 삽입 실패!" << endl;
//
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_3
//void main()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool> pr;
//
//	s.insert(50);
//	s.insert(30);
//	s.insert(80);
//	s.insert(40);
//	s.insert(10);
//	s.insert(70);
//	pr = s.insert(90); //pr.first는 90원소의 반복자
//
//
//	set<int>::iterator iter;
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	s.insert(pr.first, 85); //90원소의 반복자에서 검색 시작 후 삽입한다. 
//
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_4
//void main()
//{
//	set<int, greater<int> > s; // 정렬 기준으로 greater<int> 조건자를 사용.
//
//	s.insert(50);
//	s.insert(30);
//	s.insert(80);
//	s.insert(40);
//	s.insert(10);
//	s.insert(70);
//	s.insert(90);
//
//
//	// greater<int> 조건자를 사용하는 반복자 생성
//	set<int, greater<int> >::iterator iter;
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_5
//void main()
//{
//	set<int> s;
//
//	s.insert(50);
//	s.insert(30);
//	s.insert(80);
//	s.insert(40);
//	s.insert(10);
//	s.insert(70);
//	s.insert(90);
//
//	set<int>::iterator iter;
//	for (iter = s.begin(); iter != s.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	iter = s.find(30); // 30의 반복자를 반환
//	if (iter != s.end())
//		cout << *iter << "가 s에 있다!" << endl;
//	else
//		cout << "30이 s에 없다!" << endl;
//}

//Exam_6
//void main()
//{
//	set<int, less<int> > s; // 정렬 기준 less
//
//	// 30과 50의 비교
//	cout << (!s.key_comp()(30, 50) 
//			&& !s.key_comp()(50, 30)) << endl; //다르다
//	// 30과 30의 비교
//	cout << (!s.key_comp()(30, 30) 
//			&& !s.key_comp()(30, 30)) << endl; //같다(equivalence)
//}
