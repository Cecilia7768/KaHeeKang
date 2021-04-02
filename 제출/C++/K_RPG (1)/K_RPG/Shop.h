#pragma once
#include"Weapon.h"
#include"MapDraw.h"
#include"Mecro.h"
#include"Character.h"


class SHOP
{
private:
	MapDraw m_DrawManager;
	WEAPON* m_pWeaponList[MAX_WEAPONLIST];
	WEAPON* m_pMakePlayers;	
	int m_iWeaponCount;
	int m_ikind_of_weapon;
public:
	SHOP();
	void Print_ShopMenu(CHARACTER* Player);
	void WeaponMenu(CHARACTER* Player);
	void Load_Weapon();
	void Print_By_WeaponType(CHARACTER* Player,string what_weapon);
	string Kind_Of_Weapon();
	~SHOP();

};