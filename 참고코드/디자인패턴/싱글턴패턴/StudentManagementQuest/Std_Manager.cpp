#include "Std_Manager.h"

Std_manager::Std_manager()
{
	for (int i = 0; i < 30; i++)
		std[i] = new Student;
}

void Std_manager::display() {
	int sel;
	while (true)
	{
		cout << "=========================" << endl;
		cout << "   1.학생 등록" << endl;
		cout << "   2.전체 학생정보 출력" << endl;
		cout << "   3.학생 번호 검색" << endl;
		cout << "   4.학생 이름 검색" << endl;
		cout << "   5.등급별 출력" << endl;
		cout << "   0.종료" << endl;
		cout << "=========================" << endl;
		cin >> sel;
		switch (sel) {
		case 1:
			setStudent();
			break;
		case 2:
			showStudent();
			break;
		case 3:
			findNumber();
			break;
		case 4:
			findname();
			break;
		case 5:
			findClass();
			break;
		case 0:return;
		default:cout << "잘못 입력 " << endl;
		}
		system("pause"); system("cls");
	}
}

void Std_manager::setStudent()
{
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getnum() == 0)
		{
			std[i]->SetStudent(i + 1);
			return;
		}
	}
	cout << "학생이 전원 등록 되었습니다." << endl;
}

void Std_manager::showStudent()
{
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getnum() != 0)
		{
			std[i]->showStudent();
		}
		else
			return;
	}
}

void Std_manager::findNumber()
{
	int _find;
	cout << "찾을 학생의번호를 입력 하시오";
	cin >> _find;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getnum() == _find)
		{
			std[i]->showStudent();
			return;
		}
	}
	cout << endl << "해당 번호의 학생이 없습니다." << endl;
}

void Std_manager::findname()
{
	string _find;
	int find_num = 0;
	cout << "찾을 학생의이름을 입력 하시오";
	cin >> _find;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getname() == _find)
		{
			std[i]->showStudent();
			find_num++;
		}
	}
	if (find_num == 0)
		cout << "해당 이름의 학생이 없습니다." << endl;
}

void Std_manager::findClass()
{
	int _find = 0;
	cout << "========= [ A ] =========" << endl;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getClass() == 'A')
		{
			std[i]->showStudent();
			_find++;
		}
	}
	cout << "총 " << _find << "명" << endl;
	cout << "=========================" << endl << endl << endl;
	_find = 0;
	cout << "========= [ B ] =========" << endl;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getClass() == 'B')
		{
			std[i]->showStudent();
			_find++;
		}
	}
	cout << "총 " << _find << "명" << endl;
	cout << "=========================" << endl;
	_find = 0;
	cout << "========= [ C ] =========" << endl;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getClass() == 'C')
		{
			std[i]->showStudent();
			_find++;
		}
	}
	cout << "총 " << _find << "명" << endl;
	cout << "=========================" << endl;
	_find = 0;
	cout << "========= [ D ] =========" << endl;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getClass() == 'D')
		{
			std[i]->showStudent();
			_find++;
		}
	}
	cout << "총 " << _find << "명" << endl;
	cout << "=========================" << endl;
	_find = 0;
	cout << "========= [ F ] =========" << endl;
	for (int i = 0; i < 30; i++)
	{
		if (std[i]->getClass() == 'F')
		{
			std[i]->showStudent();
			_find++;
		}
	}
	cout << "총 " << _find << "명" << endl;
	cout << "=========================" << endl;

}
