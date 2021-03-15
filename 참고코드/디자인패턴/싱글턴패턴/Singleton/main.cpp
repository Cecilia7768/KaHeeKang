#include"IntManager.h"
#include<Windows.h>

void main()
{
	int Select;
	while (true)
	{
		system("cls");
		cout << "자료 갯수 :" << IntManager::GetInstance()->GetSize() << endl;
		cout << "===메뉴===" << endl;
		cout << "1.값 추가" << endl;
		cout << "2.보기" << endl;
		cout << "3.종료" << endl;
		cin >> Select;
		switch (Select)
		{
			case 1:
				IntManager::GetInstance()->Insert();
				break;
			case 2:
				IntManager::GetInstance()->ShowList();
				system("pause");
				break;
			case 3:
			{
				IntManager::DestroyInstance();
				return;
			}
		}
	}
}