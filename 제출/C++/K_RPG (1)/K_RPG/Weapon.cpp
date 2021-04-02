#include "Weapon.h"

WEAPON::WEAPON()
{
}

void WEAPON::Kindof_Weapon_In_Shop(int x, int y, string what_weapon)
{
	if(m_sWeapon_Category == what_weapon)
		Print_Kindof_Weapon(x, y);
}

void WEAPON::Print_Kindof_Weapon(int x, int y)
{
	YELLOW
		m_DrawManager.gotoxy(x, y);
	cout << "가격 : " << GetPrice() << "  무기타입 : " << Create_Category() << endl;
	m_DrawManager.gotoxy(x, y+1);
	cout << "무기이름 : " << GetRealname() << "  공격력 : " << GetAttackPower() << endl;
	ORIGINAL
}

void WEAPON::Players_Weapon(int x, int y)
{
	m_DrawManager.gotoxy(x, y + 4);
	cout << "무기타입 : " << GetCategory() << "  무기이름 : " << GetRealname();
	m_DrawManager.gotoxy(x, y + 5);
	cout << "무기 공격력 : " << GetAttackPower();
}

string WEAPON::Create_Category()
{
	if (m_sWeapon_Category == "Dagger")
		return "대거";
	else if (m_sWeapon_Category == "Gun")
		return "총";
	else if (m_sWeapon_Category == "Sword")
		return "장검";
	else if (m_sWeapon_Category == "Wand")
		return "지팡이";
	else if (m_sWeapon_Category == "Bow")
		return "활";
	else if (m_sWeapon_Category == "Hammer")
		return "망치";
}
void WEAPON::Save(ofstream& Save)
{
	if (m_sWeapon_Category == "Dagger")
		Save << "대거 ";
	else if (m_sWeapon_Category == "Gun")
		Save << "총 ";
	else if (m_sWeapon_Category == "Sword")
		Save << "장검 ";
	else if (m_sWeapon_Category == "Wand")
		Save << "지팡이 ";
	else if (m_sWeapon_Category == "Bow")
		Save << "활 ";
	else if (m_sWeapon_Category == "Hammer")
		Save << "망치 ";

	Save << m_sWeapon_Category << " "<< m_sWeapon_Real_name<<" " << m_iAttackPower << " " << m_iprice;
}

WEAPON::~WEAPON()
{
}

Bow::Bow()
{
}

Bow::Bow(string name, string K_name, int AttackPower, int price)
{
	m_sWeapon_Category = "Bow";
	m_sWeaponName = name;	
	m_sWeapon_Real_name = K_name;
	m_iAttackPower = AttackPower;
	m_iprice = price;
}
Bow::~Bow()
{
}

Hammer::Hammer()
{
}
Hammer::Hammer(string name, string K_name, int AttackPower, int price)
{
	m_sWeapon_Category = "Hammer";
	m_sWeaponName = name;
	m_sWeapon_Real_name = K_name;
	m_iAttackPower = AttackPower;
	m_iprice = price;
}
Hammer::~Hammer()
{
}

Dagger::Dagger()
{
}

Dagger::Dagger(string name, string K_name, int AttackPower, int price)
{
	m_sWeapon_Category = "Dagger";
	m_sWeaponName = name;
	m_sWeapon_Real_name = K_name;
	m_iAttackPower = AttackPower;
	m_iprice = price;
}
Dagger::~Dagger()
{
}

Gun::Gun()
{

}
Gun::Gun(string name, string K_name, int AttackPower, int price)
{
	m_sWeapon_Category = "Gun";
	m_sWeaponName = name;
	m_sWeapon_Real_name = K_name;
	m_iAttackPower = AttackPower;
	m_iprice = price;
}
Gun::~Gun()
{
}

Sword::Sword()
{

}
Sword::Sword(string name, string K_name, int AttackPower, int price)
{
	m_sWeapon_Category = "Sword";
	m_sWeaponName = name;
	m_sWeapon_Real_name = K_name;
	m_iAttackPower = AttackPower;
	m_iprice = price;
}
Sword::~Sword()
{
}

Wand::Wand()
{
}

Wand::Wand(string name, string K_name, int AttackPower, int price)
{
	m_sWeapon_Category = "Wand";
	m_sWeaponName = name;
	m_sWeapon_Real_name = K_name;
	m_iAttackPower = AttackPower;
	m_iprice = price;
}
Wand::~Wand()
{
}