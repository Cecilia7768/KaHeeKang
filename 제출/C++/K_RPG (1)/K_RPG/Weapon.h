#pragma once
#include"MapDraw.h"
#include"Mecro.h"

enum KIND_OF_WEAPON
{
	DAGGER = 1,
	GUN,
	SWORD,
	WAND,
	BOW,
	HAMMER,	
};

class WEAPON 
{
protected:
	MapDraw m_DrawManager;
	int m_iprice;
	int m_iAttackPower;
	string m_sWeapon_Category; //���� �ѱ� �з� ex)���
	string m_sWeaponName; //���� ���� �з� ex)Dagger
	string m_sWeapon_Real_name; //���⺰ ���̸� ex)��������
public:
	WEAPON();	
	void Kindof_Weapon_In_Shop(int x, int y,string what_weapon);
	void Print_Kindof_Weapon(int x, int y);
	void Players_Weapon(int x, int y); //�÷��̾� �ϴܿ� ���� ���� ǥ��
	string Create_Category();
	void Save(ofstream& Save);
	
	inline string GetCategory()
	{
		return m_sWeapon_Category;
	}
	inline string Getname()
	{
		return m_sWeaponName;
	}
	inline string GetRealname()
	{
		return m_sWeapon_Real_name;
	}
	inline int GetAttackPower()
	{
		return m_iAttackPower;
	}
	inline int GetPrice()
	{
		return m_iprice;
	}
	~WEAPON();
};

class Bow : public WEAPON
{
public:
	Bow(); 
	Bow(string name, string K_name, int AttackPower, int price);
	~Bow();
};

class Hammer : public WEAPON
{
public:
	Hammer();
	Hammer(string name, string K_name, int AttackPower, int price);
	~Hammer();
};

class Dagger : public WEAPON
{
public:
	Dagger();
	Dagger(string name, string K_name, int AttackPower, int price);
	~Dagger();
};

class Gun : public WEAPON
{
public:
	Gun();
	Gun(string name, string K_name, int AttackPower, int price);
	~Gun();
};

class Sword : public WEAPON
{
public:
	Sword();
	Sword(string name, string K_name, int AttackPower, int price);
	~Sword();
};

class Wand : public WEAPON
{
public:
	Wand();
	Wand(string name, string K_name, int AttackPower, int price);
	~Wand();
};
