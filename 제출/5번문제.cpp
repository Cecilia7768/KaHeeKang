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
			cout << "���� �Է� : ";
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
				cout << " ����! �ϼ� : " << i<<endl;
				system("pause");
				return;
			}
			else if (turn - 1 == i)
			{
				cout << "Turn�� �ʰ� / Gameover";
				system("pause");
				return;
			}
		}
	}
}