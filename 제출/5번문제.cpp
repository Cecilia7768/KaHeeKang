#include<iostream>
using namespace std;

void main()
{

	int Rnum;
	int turn = 10;
	int choiceNum;
	int min = 1, max = 100;


	Rnum = (rand() % (100)) + 1;

	while (1)
	{
		for (int i = 0; i < turn; i++)
		{
			cout << "숫자 입력 : ";
			cin >> choiceNum;

			if (Rnum > choiceNum)
			{
				cout << "Up" << endl;
				system("pause");
			}
			else if (Rnum < choiceNum)
			{
				cout << "Down" << endl;
				system("pause");
			}
			else if (Rnum == choiceNum)
			{
				cout << " 정답! 턴수 : " << i<<endl;
				system("pause");
				return;
			}
			else if (turn - 1 == i)
			{
				cout << "Turn수 초과 / Gameover";
				system("pause");
				return;
			}
		}
	}
}