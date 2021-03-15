#include "Student.h"

void Student::SetStudent(int _num)
{
	cout << "이름을 입력 하시오 : ";
	cin >> name;
	cout << "3과목의 점수를 입력하시오" << endl;
	cout << "국어 : ";
	cin >> kor;
	cout << "영어 : ";
	cin >> eng;
	cout << "수학 : ";
	cin >> math;
	sum = kor + eng + math;
	avg = (float)sum / 3;
	num = _num;
	if (avg >= 90)
		Class = 'A';
	else if (avg >= 80)
		Class = 'B';
	else if (avg >= 70)
		Class = 'C';
	else if (avg >= 60)
		Class = 'D';
	else
		Class = 'F';
	return;
}

void Student::showStudent()
{
	cout << "----------------------" << endl;
	cout << num << "번 학생" << endl;
	cout << "이름 : " << name << endl;
	cout << "국어 점수 : " << kor << endl << "수학 점수 : " << math << endl << "영어 점수 : " << eng << endl;
	cout << "합계 점수 : " << sum << "\t 평균점수 : " << avg << endl;
	cout << "등급 : [ " << Class << "]" << endl << endl;
	return;
}
