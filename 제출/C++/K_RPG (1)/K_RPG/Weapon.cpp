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
	cout << "���� : " << GetPrice() << "  ����Ÿ�� : " << Create_Category() << endl;
	m_DrawManager.gotoxy(x, y+1);
	cout << "�����̸� : " << GetRealname() << "  ���ݷ� : " << GetAttackPower() << endl;
	ORIGINAL
}

void WEAPON::Players_Weapon(int x, int y)
{
	m_DrawManager.gotoxy(x, y + 4);
	cout << "����Ÿ�� : " << GetCategory() << "  �����̸� : " << GetRealname();
	m_DrawManager.gotoxy(x, y + 5);
	cout << "���� ���ݷ� : " << GetAttackPower();
}

string WEAPON::Create_Category()
{
	if (m_sWeapon_Category == "Dagger")
		return "���";
	else if (m_sWeapon_Category == "Gun")
		return "��";
	else if (m_sWeapon_Category == "Sword")
		return "���";
	else if (m_sWeapon_Category == "Wand")
		return "������";
	else if (m_sWeapon_Category == "Bow")
		return "Ȱ";
	else if (m_sWeapon_Category == "Hammer")
		return "��ġ";
}
void WEAPON::Save(ofstream& Save)
{
	if (m_sWeapon_Category == "Dagger")
		Save << "��� ";
	else if (m_sWeapon_Category == "Gun")
		Save << "�� ";
	else if (m_sWeapon_Category == "Sword")
		Save << "��� ";
	else if (m_sWeapon_Category == "Wand")
		Save << "������ ";
	else if (m_sWeapon_Category == "Bow")
		Save << "Ȱ ";
	else if (m_sWeapon_Category == "Hammer")
		Save << "��ġ ";

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