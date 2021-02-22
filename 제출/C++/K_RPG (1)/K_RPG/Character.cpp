#include "Character.h"

CHARACTER::CHARACTER()
{
	m_pWeapon = NULL;
}

void CHARACTER::SetLife(int L)
{
	m_iLife = L;
}
void CHARACTER::Setinfo(string N)
{
	m_sName = N;
}

void CHARACTER::Setinfo(int E)
{
	if (E == BASIC_EXP)
		m_iExperience = E;
	else
		m_iLife = m_iMAXLife;
}

void CHARACTER::AddExp(int getexp,int getgold)
{
	m_iExperience += getexp;
	m_iGold += getgold;
}

void CHARACTER::Setinfo(int level, int power,int maxlife, int getexp, int maxexp, int gold) 
{
	m_iLevel = level;
	m_iPower = power;
	m_iLife = m_iMAXLife = maxlife; 
	m_iMAXExperience = maxexp;
	m_iExperience = 0;
	m_iGetEXP = getexp;
	m_iGold = gold;

}

void CHARACTER::Setting_Player_Info(int Check_New_Game, int Check_Who,int check_open_file)
{
	char buf[256];
	ifstream Load;
	if (Check_Who == PLAYER)
	{
		if (Check_New_Game == NEWGAME) //새 게임이면		
		{
			system("cls");
			m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
			YELLOW
			m_DrawManager.DrawMidText("Player 이름 입력 : ", WIDTH, HEIGHT * 0.4);
			cin >> m_sName;
			ORIGINAL
			Load.open("DefaultPlayer.txt");
		}
		else
		{
			sprintf(buf, "Savefile_%d.txt", check_open_file);
			Load.open(buf); 
			Load >> m_sName;
		}

		if (!Load.is_open()) //
		{
			cout << "Player정보 없음" << endl;
			return;
		}
	}

	Load >> m_iPower;
	Load >> m_iMAXLife;
	Load >> m_iMAXExperience;
	Load >> m_iGetEXP;
	Load >> m_iLevel;
	Load >> m_iGold;
	Setinfo(m_sName);
	Setinfo(m_iLevel, m_iPower, m_iMAXLife, m_iGetEXP, m_iMAXExperience, m_iGold);
	Load.close();	

	string eng_name, detail_name,k_name;
	int power, price;
	sprintf(buf, "SaveWeap_%d.txt", check_open_file);
	Load.open(buf);
	if (!Load.is_open() && Check_New_Game != NEWGAME)
	{
		cout << "무기정보 없음" << endl;
		return;
	}
	Load >> k_name;
	Load >> eng_name;
	Load >> detail_name;
	Load >> power;
	Load >> price;
	if (k_name == "대거")
		m_pWeapon = new Dagger(eng_name, detail_name, power, price);
	else if (k_name == "총")
		m_pWeapon = new Gun(eng_name, detail_name, power, price);
	else if (k_name == "장검")
		m_pWeapon = new Sword(eng_name, detail_name, power, price);
	else if (k_name == "지팡이")
		m_pWeapon = new Wand(eng_name, detail_name, power, price);
	else if (k_name == "활")
		m_pWeapon = new Bow(eng_name, detail_name, power, price);
	else if (k_name == "망치")
		m_pWeapon = new Hammer(eng_name, detail_name, power, price);
}

void CHARACTER::Save(ofstream& Save)
{
	Save << m_sName << " ";
	Save << m_iPower << " ";
	Save << m_iMAXLife << " ";
	Save << m_iMAXExperience << " ";
	Save << m_iGetEXP << " ";
	Save << m_iLevel << " ";
	Save << m_iGold << " ";
	Save << m_iExperience << " ";
	Save << m_iLife << endl;
}


void CHARACTER::Print_Character_Info(int x,int y)
{	
	m_DrawManager.gotoxy(x+4,y);
	cout << "====== " << Getname() << " (" << GetLevel() << " Lv) " << "======" << endl;
	m_DrawManager.gotoxy(x, y+1);
	cout << "공격력 = " << GetPower() << "\t생명력 = " << GetLife() << "/" << GetMAXLife() <<"   "<< endl;
	m_DrawManager.gotoxy(x, y+2);
	cout << "경험치 = " << GetExperience() << "/" << GetMAXExperience() << "\tGetEXP : " << GetEXP() << endl;
	m_DrawManager.gotoxy(x, y+3);
	cout << "Gold = " << GetGold() << endl; 

	if (m_pWeapon != NULL)
	{
		m_pWeapon->Players_Weapon(x, y);
	}
}


void CHARACTER::ExpUp(CHARACTER *winner, CHARACTER *loser)
{
	int Num;
	getch();
	system("cls");
	m_DrawManager.BoxErase(WIDTH, HEIGHT);
	m_DrawManager.DrawMidText(m_sName + " 승리!!", WIDTH, HEIGHT * 0.3);
	m_DrawManager.DrawMidText(m_sName + "가 경험치 " + to_string(loser->GetEXP()) + "(을)를 얻었습니다.", WIDTH, HEIGHT * 0.4);
	winner->AddExp(loser->GetEXP(),loser->GetGold());  
	getch();

	if (winner->m_iExperience >= winner->GetMAXExperience())
		LvUp();

}
void CHARACTER::LvUp()
{
	int Num;
	PUPPLE
		m_DrawManager.BoxErase(WIDTH, HEIGHT);
	m_DrawManager.DrawMidText(m_sName + "레벨업!!", WIDTH, HEIGHT*0.4);
	Num = rand() % (RANDOM_LV_UP);
	m_iPower += Num;
	m_DrawManager.DrawMidText("공격력 " + to_string(Num) + " 증가!!", WIDTH, HEIGHT*0.5);
	Num = rand() % (RANDOM_LV_UP);
	m_iMAXLife += Num;
	m_DrawManager.DrawMidText("생명력 " + to_string(Num) + " 증가!!", WIDTH, HEIGHT*0.6);
	m_iExperience = 0;
	m_iMAXExperience += m_iMAXExperience *0.3; 
	m_iLevel++;
	m_iLife = m_iMAXLife;
	getch();
	ORIGINAL
}

void CHARACTER::Buy(WEAPON* weapon)
{
	m_pWeapon = weapon;
	m_iGold -= weapon->GetPrice();
}

CHARACTER::~CHARACTER()
{
}