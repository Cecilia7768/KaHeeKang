#include <iostream>
#include <vector>
using namespace std;

//Exam_1
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (int i = 0; i < v.size(); ++i)
//		cout << v[i] << endl;
//}

//Exam_2
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << endl;
//
//	cout << typeid(vector<int>::size_type).name() << endl;
//}

//Exam_3
//void main()
//{
//	vector<int> v;
//
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
//	cout << v.size() << endl;
//	cout << v.capacity() << endl;
//	cout << v.max_size() << endl;
//}

//Exam_4
//void main()
//{
//	vector<int> v;
//
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(10);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(20);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(30);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(40);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(50);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(60);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(70);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(80);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(90);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//}

//Exam_5
//void main()
//{
//	vector<int> v;
//
//	v.reserve(8);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(10);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(20);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(30);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(40);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(50);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(60);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(70);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(80);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//	v.push_back(90);
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//}

//Exam_6
//void main()
//{
//	vector<int> v1(5); //0으로 초기화된 size가 5인 컨테이너
//	v1.push_back(10); //10 추가
//	v1.push_back(20); //20 추가
//	v1.push_back(30); //30 추가
//	v1.push_back(40); //40 추가
//	v1.push_back(50); //50 추가
//
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//	vector<int> v2(5); //0으로 초기화된 size가 5인 컨테이너
//	v2[0] = 10; // 0에서 10로 수정
//	v2[1] = 20; // 0에서 20로 수정
//	v2[2] = 30; // 0에서 30로 수정
//	v2[3] = 40; // 0에서 40로 수정
//	v2[4] = 50; // 0에서 50로 수정
//
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//}

//Exam_7
//void main()
//{
//	vector<int> v1(5); //기본값 0으로 초기화된 size가 5인 컨테이너
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//	vector<int> v2(5, 0); //지정값 0으로 초기화된 size가 5인 컨테이너    
//	for (vector<int>::size_type i = 0; i < v2.size(); ++i)
//		cout << v2[i] << " ";
//	cout << endl;
//
//	vector<int> v3(5, 10); //지정값 10으로 초기화된 size가 5인 컨테이너    
//	for (vector<int>::size_type i = 0; i < v3.size(); ++i)
//		cout << v3[i] << " ";
//	cout << endl;
//}

//Exam_8
//void main()
//{
//	vector<int> v(5); //기본값 0으로 초기화된 size가 5인 컨테이너
//
//	v[0] = 10;
//	v[1] = 20;
//	v[2] = 30;
//	v[3] = 40;
//	v[4] = 50;
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	v.resize(10); //기본값 0으로 초기화된 size가 10인 컨테이너로 확장
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	v.resize(5); //size가 5인 컨테이너로 축소 capacity는 변화 없음.
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//}

//Exam_9
//void main()
//{
//	vector<int> v(5);
//
//	v[0] = 10;
//	v[1] = 20;
//	v[2] = 30;
//	v[3] = 40;
//	v[4] = 50;
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	v.clear(); // v를 비운다.
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	if (v.empty()) // v가 비었는가?
//	{
//		cout << "v에 원소가 없습니다." << endl;
//	}
//}

//Exam_10
//void main()
//{
//	vector<int> v(5);
//
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//
//	vector<int>().swap(v);// 기본 생성자로 만든 vector컨테이너와 v 컨테어너를 swap한다.
//	cout << "size: " << v.size() << "  capacity: " << v.capacity() << endl;
//}

//Exam_11
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
//	cout << v[0] << ", " << v.front() << endl; // 첫 번째 원소
//	cout << v[4] << ", " << v.back() << endl; // 마지막 원소
//}

//Exam_12
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
//	v[0] = 100; //범위 점검 없는 0 index 원소의 참조
//	v[4] = 500; //범위 점검 없는 4 index 원소의 참조
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	v.at(0) = 1000; //범위 점검 있는 0 index 원소의 참조
//	v.at(4) = 5000; //범위 점검 있는 4 index 원소의 참조
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v.at(i) << " ";
//	cout << endl;
//}

//Exam_13
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	try
//	{
//		cout << v.at(0) << endl;
//		cout << v.at(3) << endl;
//		cout << v.at(6) << endl; //throw out_of_range 예외
//	}
//	catch (out_of_range &e)
//	{
//		cout << e.what() << endl;
//	}
//}

//Exam_14
//void main()
//{
//	vector<int> v(5, 1); // 초기값 1의 5개의 원소를 갖는 컨테이너 생성
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//
//	v.assign(5, 2); // 5개의 원소값을 2로 할당
//	cout << v.size() << ',' << v.capacity() << endl;
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//
//	cout << endl;
//}

//Exam_15
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin(); // 시작 원소(10)를 가리킨다.
//	cout << *iter << endl;
//
//	iter += 2; // +2한 위치의 원소(30)를 가리킨다.
//	cout << *iter << endl;
//
//	iter -= 1; // -1한 위치의 원소(20)를 가리킨다.
//	cout << *iter << endl;
//}

//Exam_16
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin();
//	vector<int>::const_iterator citer = v.begin();
//
//	cout << *iter << endl; //가리키는 원소의 참조
//	cout << *citer << endl; //가리키는 원소의 상수 참조
//
//	cout << *++iter << endl; //다음 원소로 이동한 원소의 참조
//	cout << *++citer << endl; //다음 원소로 이동한 원소의 상수 참조
//
//	*iter = 100;  // 일반 반복자는 가리키는 원소를 변경할 수 있음.
//	//*citer = 100; // 상수 반복자는 가리키는 원소를 변경할 수 없음.
//}

//Exam_17
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin() + 2;
//	vector<int>::iterator iter2;
//
//	// iter가 가리키는 위치에 정수 100을 삽입.
//	// iter2는 삽입한 정수를 가리키는 반복자.
//	iter2 = v.insert(iter, 100);
//
//	for (iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//	cout << "iter2: " << *iter2 << endl;
//}

//Exam_18
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter = v.begin() + 2;
//
//	// iter가 가리키는 위치에 정수 100을 3개 삽입.   
//	v.insert(iter, 3, 100);
//
//	for (iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//
//	/////////////////////////////////////////////////////
//	vector<int> v2;
//	v2.push_back(100);
//	v2.push_back(200);
//	v2.push_back(300);
//
//	iter = v2.begin() + 1;
//	// iter가 가리키는 위치에 [v.begin(), v.end()) 구간의 원소를 삽입.   
//	v2.insert(iter, v.begin(), v.end());
//
//	for (iter = v2.begin(); iter != v2.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_19
//void main()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int>::iterator iter;
//	vector<int>::iterator iter2;
//	for (iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//
//	iter = v.begin() + 2;
//	// iter가 가리키는 위치의 원소를 제거합니다. iter2는 다음 원소 40
//	iter2 = v.erase(iter);
//
//	for (iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//
//	// [v.begin()+1, v.end()) 구간의 원소를 제거합니다.   
//	iter2 = v.erase(v.begin() + 1, v.end()); // iter2는 다음 원소 v.end()
//
//	for (iter = v.begin(); iter != v.end(); ++iter)
//		cout << *iter << " ";
//
//	cout << endl;
//}

//Exam_20
//void main()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	vector<int> v2(v.begin(), v.end()); // 순차열 [v.begin(), v.end())로 v2를 초기화.
//
//	vector<int>::iterator iter;
//
//	for (iter = v2.begin(); iter != v2.end(); ++iter)
//		cout << *iter << " "; // v2 출력
//
//	cout << endl;
//
//	vector<int> v3;
//	v3.assign(v.begin(), v.end());  // v3에 순차열 [v.begin(), v.end())을 할당.
//
//	for (iter = v3.begin(); iter != v3.end(); ++iter)
//		cout << *iter << " "; // v3 출력
//
//	cout << endl;
//}

//Exam_21
void main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	vector<int> v2;
	v2.push_back(10);
	v2.push_back(20);
	v2.push_back(50);

	if (v1 == v2)
		cout << "v1 == v2" << endl;

	if (v1 != v2)
		cout << "v1 != v2" << endl;

	if (v1 < v2)
		cout << "v1 < v2" << endl;
}