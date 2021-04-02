#include "Play.h"

PLAY::PLAY()
{
	if (check_Newgame == 0)
	{
		for (int i = 0; i < 11; i++)
		{
			m_playerlist[i] = NULL;
			m_Playersweaponlist[i] = NULL;
		}
	}
}

void PLAY::ReSetGame()
{
	m_bCheck_GameOver = false;
	m_bCheck_ResetGame = false;
	m_bCheck_Lose = false;
	m_Player->Setinfo(BASIC_EXP);
	m_Player->Setinfo(BASIC_LIFE);
	m_Monster->Setinfo(BASIC_EXP);
	m_Monster->Setinfo(BASIC_LIFE);
}

void PLAY::ReSetMonster()
{
	m_Monster->Setinfo(BASIC_LIFE);
}
void PLAY::Print_First_Main()
{
	m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
	m_DrawManager.DrawMidText("☆★  DonGeonRPG ★☆ ", WIDTH, HEIGHT * 0.3);
	m_DrawManager.DrawMidText("New Game ", WIDTH, HEIGHT * 0.5);
	m_DrawManager.DrawMidText("Load Game ", WIDTH, HEIGHT * 0.6);
	m_DrawManager.DrawMidText("Game Exit ", WIDTH, HEIGHT * 0.7);
}

void PLAY::Print_Playing_Main()
{
	m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
	m_DrawManager.DrawMidText("☆★ Menu ★☆ ", WIDTH, HEIGHT * 0.2);
	m_DrawManager.DrawMidText("Dongeon ", WIDTH, HEIGHT * 0.3);
	m_DrawManager.DrawMidText("Player Info ", WIDTH, HEIGHT * 0.4);
	m_DrawManager.DrawMidText("Monster Info ", WIDTH, HEIGHT * 0.5);
	m_DrawManager.DrawMidText("Weapon Shop ", WIDTH, HEIGHT * 0.6);
	m_DrawManager.DrawMidText("Save ", WIDTH, HEIGHT * 0.7);
	m_DrawManager.DrawMidText("Exit ", WIDTH, HEIGHT * 0.8);
}

void PLAY::First_Main()
{
	int Select;
	while (1) 
	{
		system("cls");
		Print_First_Main();
		switch (m_DrawManager.MenuSelectCursor(3, 3, WIDTH * 0.38, HEIGHT * 0.5))
		{
		case 1:						
			if (m_bCheck_LoadGame == false)
				m_bCheck_ResetGame = true;
			else
				m_bCheck_ResetGame = false;
			Playing_Main(); //처음 시작	
			break;
		case 2:
			Player_n_Monster_Load(LOAD, PLAYER, 0);		
			break;
		case 3:	
			return;
		}
	}	
}


void PLAY::Dongeon()
{
	char buf[256];
	if (m_bCheck_ResetGame == true)
		return;
	while (1)
	{
		ReSetMonster();
		if (m_bCheck_ResetGame == true)
			break;
		GRAY
		m_DrawManager.BoxErase(WIDTH, HEIGHT);
		m_DrawManager.DrawMidText("=====던전 입구=====  ", WIDTH, HEIGHT * 0.2);
		int i;
		int y = HEIGHT * 0.5 - (MONSTER_MAX / 2) * 2;
		int MaxNameLen = 0;
		for (i = 1; i <= MONSTER_MAX; i++)
		{
			sprintf(buf, "%d층던전 : [%s]", i, m_Monster[i - 1].Getname().c_str());
			if (MaxNameLen < m_Monster[i - 1].Getname().length())
				MaxNameLen = m_Monster[i - 1].Getname().length();
			m_DrawManager.DrawMidText(buf, WIDTH, y + i * 2);
		}
		m_DrawManager.DrawMidText("돌아가기", WIDTH, y + i * 2);

		int Select = m_DrawManager.MenuSelectCursor(MONSTER_MAX + 1, 2, (WIDTH - strlen(buf) / 2 - MaxNameLen / 2) / 2, y + 2);
		if (Select == MONSTER_MAX + 1)
			return;
		else if (Select >= 1 && Select <= MONSTER_MAX)
			Fight(m_Player, &m_Monster[Select - 1]);
	}
}


void PLAY::Fight(CHARACTER* Player, CHARACTER* Monster)
{
	int choice_of_player;
	m_DrawManager.BoxErase(WIDTH, HEIGHT);
	m_bCheck_GameOver = false;
	while (1)
	{
		if (m_bCheck_ResetGame == true)
			break;
		if (m_bCheck_GameOver == true)
			break;
		YELLOW
			Player->Print_Character_Info(WIDTH - 15, HEIGHT * 0.1);
		m_DrawManager.DrawMidText("                                 ", WIDTH, HEIGHT * 0.3);
		m_DrawManager.DrawMidText("가위 : 1   바위 : 2   보 : 3", WIDTH, HEIGHT * 0.3);
		ORIGINAL
			Monster->Print_Character_Info(WIDTH - 15, HEIGHT * 0.8);
		RED
			m_DrawManager.DrawMidText("-------------------------- vs --------------------------", WIDTH, HEIGHT * 0.5);
		ORIGINAL

		choice_of_player = getch();
		m_DrawManager.DrawMidText("                                 ", WIDTH, HEIGHT * 0.4);
		m_DrawManager.DrawMidText("                                 ", WIDTH, HEIGHT * 0.65);
		YELLOW
		if (choice_of_player == KAWEE)
		{
			m_DrawManager.DrawMidText("가위\n", WIDTH, HEIGHT * 0.4);
		}
		else if (choice_of_player == BAWEE)
		{
			m_DrawManager.DrawMidText("바위\n", WIDTH, HEIGHT * 0.4);
		}
		else if (choice_of_player == BO)
		{
			m_DrawManager.DrawMidText("보\n", WIDTH, HEIGHT * 0.4);
		}
		else
			continue;
		ORIGINAL
			srand((unsigned)time(NULL));
		int choice_of_monster = rand() % 4; 
		
		if (choice_of_monster == 1)
		{
			m_DrawManager.DrawMidText("가위\n", WIDTH, HEIGHT * 0.65);
			choice_of_monster = KAWEE;
		}
		else if (choice_of_monster == 2)
		{
			m_DrawManager.DrawMidText("바위\n", WIDTH, HEIGHT * 0.65);
			choice_of_monster = BAWEE;
		}
		else
		{
			m_DrawManager.DrawMidText("보\n", WIDTH, HEIGHT * 0.65);
			choice_of_monster = BO;
		}	 
		Effect_from_game(choice_of_player, choice_of_monster, Player, Monster);
	}
}

int PLAY::Check_Who_Win(int choice_of_player, int choice_of_monster)
{		
	m_DrawManager.DrawMidText("    ", WIDTH, HEIGHT * 0.45);
	m_DrawManager.DrawMidText("    ", WIDTH, HEIGHT * 0.6);
	RED
		if (choice_of_player == KAWEE && choice_of_monster == BO)
		{
			m_DrawManager.DrawMidText("Win", WIDTH, HEIGHT * 0.45);
			m_DrawManager.DrawMidText("Lose", WIDTH, HEIGHT * 0.6);
			return PLAYER_WIN;
		}
		else if (choice_of_player == BO && choice_of_monster == KAWEE)
		{
			m_DrawManager.DrawMidText("Lose", WIDTH, HEIGHT * 0.45);
			m_DrawManager.DrawMidText("Win", WIDTH, HEIGHT * 0.6);
			return MONSTER_WIN;
		}
		else if (choice_of_player == choice_of_monster)
		{
			m_DrawManager.DrawMidText("Draw", WIDTH, HEIGHT * 0.45);
			m_DrawManager.DrawMidText("Draw", WIDTH, HEIGHT * 0.6);
			return DRAW;
		}
		else if (choice_of_player > choice_of_monster)
		{
			m_DrawManager.DrawMidText("Win", WIDTH, HEIGHT * 0.45);
			m_DrawManager.DrawMidText("Lose", WIDTH, HEIGHT * 0.6);		
			return PLAYER_WIN;
		}
		else
		{
			m_DrawManager.DrawMidText("Lose", WIDTH, HEIGHT * 0.45);
			m_DrawManager.DrawMidText("Win", WIDTH, HEIGHT * 0.6);
			return MONSTER_WIN;
		}

	ORIGINAL
}

void PLAY::Effect_from_game(int choice_of_player, int choice_of_monster, CHARACTER* Player, CHARACTER* Monster)
{
	int winner = Check_Who_Win(choice_of_player, choice_of_monster);

	if (winner == PLAYER_WIN)
	{
		if(Player->Get_Have_Weapon() == true)
			Monster->SetLife(Monster->GetLife() - Player->GetPower() - Player->GetWeaponsPower());
		else
			Monster->SetLife(Monster->GetLife() - Player->GetPower());
	}
	else if(winner == MONSTER_WIN)
		Player->SetLife(Player->GetLife() - Monster->GetPower());

	if (Player->GetLife() <= 0)
	{
		Monster->ExpUp(Monster, Player);
		m_bCheck_GameOver = true;
		m_bCheck_ResetGame = true;
		m_bCheck_Lose = true;
	}
	else if (Monster->GetLife() <= 0)
	{
		Player->ExpUp(Player, Monster);
		m_bCheck_GameOver = true;
	}
	
}

void PLAY::Playing_Main() 
{
	int Select;
	Player_n_Monster_Load(NEWGAME, MONSTER, 0);
	if (m_bCheck_ResetGame == true)
	{
		Player_n_Monster_Load(NEWGAME, PLAYER, 0);
		ReSetGame();
	}
	else
	{	
		m_bCheck_GameOver = false;
		m_bCheck_ResetGame = false;
		m_bCheck_Lose = false;
	}
	while (1) 
	{		
		if (m_bCheck_Lose == true)
			return;
		system("cls");
		Print_Playing_Main();
		int y;	
		switch (m_DrawManager.MenuSelectCursor(6, 3, WIDTH * 0.38, HEIGHT * 0.3))
		{
		case 1:		
			Dongeon();
			break;
		case 2:
			system("cls");
			m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
			YELLOW
			m_Player->Print_Character_Info(WIDTH - 15, HEIGHT * 0.3);
			ORIGINAL
				getch();
			break;
		case 3:
			system("cls");
			m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
			y = HEIGHT * 0.5 - (MONSTER_MAX/2) * 4;
			for (int i = 0; i < MONSTER_MAX; i++)
				m_Monster[i].Print_Character_Info(WIDTH - 15, y + i * 4);
			getch();
			break;
		case 4:
			system("cls");
			m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
			m_Shop.Print_ShopMenu(m_Player); 
			if (m_Player->Get_Have_Weapon() == true) //무기를 샀으면
			{
				m_PlayersWeapon = m_Player->GetWeapon();
			}
			break;
		case 5:	
			Player_n_Monster_Load(SAVE, PLAYER, 0);	
			check_Newgame++;
			break;
		case 6:
			return;	
		}
	}
}

void PLAY::Savefile_List(CHARACTER* Player, int save_or_load, int findth, int resultprint)
{
	system("cls");
	m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
	int th;
	string checkNullFile;
	int choice;

	while (1)
	{
		if (resultprint == 1) //파일여부 체크만 할건지
		{
			m_playerlist[findth]=m_Player;
			break;		
		}
		else //파일 다읽었으니 프린트실행할지
		{
			for (int i = 0; i < SAVELIST_MAX; i++)
			{
				if (m_playerlist[i] == NULL)
					checkNullFile = 'X';
				else
					checkNullFile = "O";				
				th = i + 1;
				m_DrawManager.DrawMidText(to_string(th) + "번슬롯 : <파일여부 : " + checkNullFile + ">", WIDTH, (HEIGHT * 0.2) + i * 2);
				if (i == 9)
				{
					th = i + 2;
					m_DrawManager.DrawMidText(to_string(th) + ". 돌아가기", WIDTH, (HEIGHT * 0.2) + (i + 1) * 2);
				}
			}
		}

		choice = m_DrawManager.MenuSelectCursor(11, 2, WIDTH * 0.2, HEIGHT * 0.15 + 2); //어디 파일에 접근할지 선택하면

		if (choice == 11) //이전화면 돌아가기
			return;
		else //선택 num에따라 Save/Load 위치
		{
			if (save_or_load == SAVE)
			{		
				if ((m_Playersweaponlist[choice - 1] = m_PlayersWeapon) != NULL)
					m_bCheck_Have_Weapon = true;
				m_playerlist[choice - 1] = tmpPlayer; //미리 빼뒀던 Player 정보 넣어주고
				Save(choice - 1); //저장쓰
			}
			else
			{
				Player->Setting_Player_Info(LOADGAME, PLAYER, choice-1);					
				m_bCheck_LoadGame = true;
				break;
			}
		}
	}
}

void PLAY::Save(int th)
{
	char buf[256];
	ofstream SaveME;	
	sprintf(buf, "Savefile_%d.txt", th);
	SaveME.open(buf);
	m_playerlist[th]->Save(SaveME);
	SaveME.close();
	if (m_bCheck_Have_Weapon == false)
		return;
	else
	{
		ofstream SaveWeap;
		sprintf(buf, "SaveWeap_%d.txt", th);
		SaveWeap.open(buf);
		m_Playersweaponlist[th]->Save(SaveWeap);
		SaveWeap.close();
	}
}

void PLAY::Player_n_Monster_Load(int Check_New_Game, int Check_Who,int th) 
{
	char buf[256];
	int tmp;
	string name;
	int Level;
	int Power;
	int Life;
	int GetExperience;
	int MAXLife;
	int MAXExperience;
	int GetEXP;
	int Gold;
	int HaveWeapon;
	ifstream Load;
	if (Check_Who == PLAYER)		
	{
		tmpPlayer = m_Player;
		tmpWeapon = m_PlayersWeapon;
		m_Player = new CHARACTER;  //새로 동적할당 되면서 비워지니까 tmp에 따로 보관해둬야함
		if (Check_New_Game == NEWGAME)
		{		
			m_Player->Setting_Player_Info(Check_New_Game, Check_Who, 0);
		}
		else
		{	
			for (int i = 0; i < SAVELIST_MAX; i++)
			{		
				sprintf(buf, "Savefile_%d.txt", i);
				Load.open(buf);
				if (Load.is_open())
				{	
					Savefile_List(m_Player, LOAD, i, 1);//파일이 있는지만 체크하고
					Load.close();
				}	
				else if (!Load.is_open() && i == SAVELIST_MAX-1) //파일을 다 읽고나면 SAVE하려고 읽은건지 LOAD하려고 읽은건지 확인후 진행
				{
					if (Check_New_Game == SAVE)
					{
						Savefile_List(m_Player, SAVE, i, 0);
						break;
					}
					else
					{
						Savefile_List(m_Player, LOAD, i, 0);
						break;		
					}
				
				}
			}
		}
	}
	else
	{
		if(Check_New_Game == NEWGAME)
		{
			Load.open("DefaultMonster.txt");
		}
		if (!Load.is_open())
		{
			cout << "Monster정보 없음" << endl;
			return;
		}
		m_Monster = new CHARACTER[MONSTER_MAX];
		while (!Load.eof())
		{
			for (int i = 0; i < MONSTER_MAX; i++) 
			{				
				Load >> name;
				Load >> Power;
				Load >> MAXLife;
				Load >> MAXExperience;
				Load >> GetExperience;
				Load >> Level;
				Load >> Gold;
				m_Monster[i].Setinfo(name);
				m_Monster[i].Setinfo(Level, Power, MAXLife, GetExperience, MAXExperience, Gold);		
			}
		}
	}
	Load.close();
}


PLAY::~PLAY()
{
}
