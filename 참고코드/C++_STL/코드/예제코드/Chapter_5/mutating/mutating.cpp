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
//
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end()) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end()) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end()) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end()) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end()) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	// 마지막 순열이므로 next_permutation()은 false 반환
//	cout << next_permutation(v.begin(), v.end()) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//}

//Exam_2
//class Point
//{
//	int x, y;
//public:
//	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) { }
//	int GetX() const { return x; }
//	int GetY() const { return y; }
//};
//
//ostream& operator<<(ostream& out, const Point& arg)
//{   //Point 객체 cout 출력을 위한 연산자 오버로딩
//	out << "(" << arg.GetX() << "," << arg.GetY() << ")";
//	return out;
//}
//
//bool Pred(const Point& left, const Point& right)
//{   //순열의 비교 기준으로 사용될 이항 조건자
//	return left.GetY() < right.GetY();
//}
//
//void main()
//{
//	vector<Point> v;
//	v.push_back(Point(5, 1));
//	v.push_back(Point(7, 2));
//	v.push_back(Point(5, 3));
//
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end(), Pred) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end(), Pred) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end(), Pred) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end(), Pred) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	cout << next_permutation(v.begin(), v.end(), Pred) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//	// Point의 y를 기준으로 마지막 순열이므로 next_permutation()은 false 반환
//	cout << next_permutation(v.begin(), v.end(), Pred) << endl;;
//	cout << "v : " << v[0] << " " << v[1] << " " << v[2] << endl;
//}

//Exam_3
//bool Pred(int n)
//{
//	return n < 40;
//}
//
//void main()
//{
//	vector<int> v;
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(60);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter_sep;
//	// 40 원소를 기준으로 미만과 이상을 분류한다.
//	iter_sep = partition(v.begin(), v.end(), Pred);
//
//	cout << "40미만의 순차열: ";
//	for (vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//	cout << "40이상의 순차열: ";
//	for (vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_4
//bool Pred(int n)
//{
//	return n < 40;
//}
//
//void main()
//{
//	vector<int> v;
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(60);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	vector<int>::iterator iter_sep;
//	// 원소들의 상대적인 순서를 유지하며 40 원소를 기준으로 미만과 이상을 분류한다.
//	iter_sep = stable_partition(v.begin(), v.end(), Pred);
//
//	cout << "40미만의 순차열: ";
//	for (vector<int>::iterator iter = v.begin(); iter != iter_sep; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//	cout << "40이상의 순차열: ";
//	for (vector<int>::iterator iter = iter_sep; iter != v.end(); ++iter)
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
//	v.push_back(40);
//	v.push_back(50);
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//	//#include <ctime>, #include <cstdlib> 추가 랜덤 초기값
//	//srand( (unsigned)time(NULL) ); 
//
//	// 원소를 뒤섞는다.
//	random_shuffle(v.begin(), v.end());
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	// 원소를 뒤섞는다.
//	random_shuffle(v.begin(), v.end());
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_6
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
//	// [v.begin(), v.end()) 순차열 뒤집기.
//	reverse(v.begin(), v.end());
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//}

//Exam_7
//void main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	cout << "v1 : ";
//	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
//		cout << v1[i] << " ";
//	cout << endl;
//
//	vector<int> v2(5); //size : 5 인 vector 생성 (덮어쓰기이므로)
//
//	vector<int>::iterator iter_end;
//	iter_end = reverse_copy(v1.begin(), v1.end(), v2.begin());
//
//	cout << "v2 : ";
//	for (vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
//		cout << *iter << " ";
//	cout << endl;
//}

//Exam_8
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
//	vector<int>::iterator middle = v.begin() + 2;
//	// 모든 원소를 왼쪽으로 2만큼씩 회전한다.
//	rotate(v.begin(), middle, v.end());
//
//	cout << "v : ";
//	for (vector<int>::size_type i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//
//}

//Exam_9
void main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); ++i)
		cout << v1[i] << " ";
	cout << endl;

	vector<int> v2(5);
	vector<int>::iterator middle = v1.begin() + 2;
	vector<int>::iterator iter_end;
	// 모든 원소를 왼쪽으로 2만큼씩 회전하여 [v2.begin(), iter_end) 순차열에 복사한다.
	iter_end = rotate_copy(v1.begin(), middle, v1.end(), v2.begin());

	cout << "v2 : ";
	for (vector<int>::iterator iter = v2.begin(); iter != iter_end; ++iter)
		cout << *iter << " ";
	cout << endl;
}