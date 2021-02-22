#include "Shop.h"

SHOP::SHOP()
{
	m_iWeaponCount = 0;
}

void SHOP::Print_ShopMenu(CHARACTER* Player)
{
	int firstchoice;
	Load_Weapon();

	while (1)
	{
		m_DrawManager.BoxErase(WIDTH, HEIGHT);
		m_DrawManager.DrawMidText("♧ ♣ S H O P ♣ ♧", WIDTH, HEIGHT * 0.3);
		m_DrawManager.DrawMidText("Dagger", WIDTH, HEIGHT * 0.3 + 2);
		m_DrawManager.DrawMidText("Gun", WIDTH, HEIGHT * 0.3 + 4);
		m_DrawManager.DrawMidText("Sword", WIDTH, HEIGHT * 0.3 + 6);
		m_DrawManager.DrawMidText("Wand", WIDTH, HEIGHT * 0.3 + 8);
		m_DrawManager.DrawMidText("Bow", WIDTH, HEIGHT * 0.3 + 10);
		m_DrawManager.DrawMidText("Hammer", WIDTH, HEIGHT * 0.3 + 12);
		m_DrawManager.DrawMidText("돌아가기", WIDTH, HEIGHT * 0.3 + 14);
		firstchoice = m_DrawManager.MenuSelectCursor(7, 2, (WIDTH - strlen("Hammer") / 2 - 3) / 2, HEIGHT * 0.3 + 2);
		m_ikind_of_weapon = firstchoice;
		switch (firstchoice)
		{
		case DAGGER:	
			Print_By_WeaponType(Player, "Dagger");
			break;
		case GUN:
			Print_By_WeaponType(Player, "Gun");
			break;
		case SWORD:
			Print_By_WeaponType(Player, "Sword");
			break;
		case WAND:
			Print_By_WeaponType(Player, "Wand");
			break;
		case BOW:
			Print_By_WeaponType(Player, "Bow");
			break;
		case HAMMER:
			Print_By_WeaponType(Player, "Hammer");
			break;
		case 7:
			return;	
		}

	}
}

void SHOP::Print_By_WeaponType(CHARACTER* Player, string what_weapon) 
{
	int Page = 0, i = 0, count = 0;
	bool PageFlag;
	int choice, NextIndex, BeforeIndex, MenuCount = 0, Line;
	int y = HEIGHT * 0.2;
	int arrindex[5];
	while (1)
	{
		WeaponMenu(Player);
		Line = 0;
		count = 0;
		MenuCount = 0;
		for (i = 0; i < m_iWeaponCount; i++)
		{
			if (m_pWeaponList[i]->GetCategory() == what_weapon)
			{
				if (count >= Page && count < Page + 5)
				{
					m_pWeaponList[i]->Kindof_Weapon_In_Shop(WIDTH - 15, (HEIGHT * 0.2) + Line * 3, Kind_Of_Weapon());
					arrindex[MenuCount] = i;
					MenuCount++;
					Line++;
				}
				count++;
			}
		}
		if (count > Page + 5)
			PageFlag = true;
		else
			PageFlag = false;
		m_DrawManager.DrawMidText("이전페이지", WIDTH, y + Line++ * 3);
		m_DrawManager.DrawMidText("다음페이지", WIDTH, y + Line++ * 3);
		m_DrawManager.DrawMidText("나가기", WIDTH, y + Line * 3);
		MenuCount += 3;
		choice = m_DrawManager.MenuSelectCursor(MenuCount, 3, 5, y);
		if (choice == MenuCount)
			return;
		else if (choice == MenuCount - 1 && PageFlag)
			Page += 5;
		else if (choice == MenuCount - 2 && Page - 5 >= 0)
			Page -= 5;
		else
			if (Player->GetGold() >= m_pWeaponList[arrindex[choice - 1]]->GetPrice()) 
			{
				if (what_weapon == "Dagger")
				{
					Player->Buy((Dagger*)m_pWeaponList[arrindex[choice - 1]]);
					//Player->SetWeapon((Dagger*)m_pWeaponList[arrindex[choice - 1]]);
				}
				else if (what_weapon == "Gun")
					Player->Buy((Gun*)m_pWeaponList[arrindex[choice - 1]]);
				else if (what_weapon == "Sword")
					Player->Buy((Sword*)m_pWeaponList[arrindex[choice - 1]]);
				else if (what_weapon == "Wand")
					Player->Buy((Wand*)m_pWeaponList[arrindex[choice - 1]]);
				else if (what_weapon == "Bow")
					Player->Buy((Bow*)m_pWeaponList[arrindex[choice - 1]]);
				else if (what_weapon == "Hammer")
					Player->Buy((Hammer*)m_pWeaponList[arrindex[choice - 1]]);
			}
	}
}

string SHOP::Kind_Of_Weapon()
{
	if (m_ikind_of_weapon == DAGGER)
		return "Dagger";
	else if (m_ikind_of_weapon == GUN)
		return "Gun";
	else if (m_ikind_of_weapon == SWORD)
		return "Sword";
	else if (m_ikind_of_weapon == WAND)
		return "Wand";
	else if (m_ikind_of_weapon == BOW)
		return "Bow";
	else if (m_ikind_of_weapon == HAMMER)
		return "Hammer";
}

void SHOP::WeaponMenu(CHARACTER* Player)
{
	system("cls");
	m_DrawManager.BoxDraw(0, 0, WIDTH, HEIGHT);
	m_DrawManager.BoxErase(WIDTH, HEIGHT);
	m_DrawManager.DrawMidText("보유 Gold : ", WIDTH, HEIGHT * 0.2 - 4);
	cout << Player->GetGold();
	m_DrawManager.DrawMidText(Kind_Of_Weapon(), WIDTH-2, HEIGHT * 0.2 - 2);
	cout << " Shop";
}

void SHOP::Load_Weapon()
{
	ifstream Load;
	int price;
	int AttackPower;
	string name;
	string K_name;
	Load.open("WeaponList.txt");
	while (!Load.eof())
	{
		Load >> name;
		Load >> K_name;
		Load >> AttackPower;
		Load >> price;
		if (name == "Dagger")
			m_pWeaponList[m_iWeaponCount] = new Dagger(name, K_name, AttackPower, price);
		else if (name == "Hammer")
			m_pWeaponList[m_iWeaponCount] = new Hammer(name, K_name, AttackPower, price);
		else if (name == "Gun")
			m_pWeaponList[m_iWeaponCount] = new Gun(name, K_name, AttackPower, price);
		else if (name == "Sword")
			m_pWeaponList[m_iWeaponCount] = new Sword(name, K_name, AttackPower, price);
		else if (name == "Wand")
			m_pWeaponList[m_iWeaponCount] = new Wand(name, K_name, AttackPower, price);
		else if (name == "Bow")
			m_pWeaponList[m_iWeaponCount] = new Bow(name, K_name, AttackPower, price);
		m_iWeaponCount++;
	}
}
SHOP::~SHOP()
{
}