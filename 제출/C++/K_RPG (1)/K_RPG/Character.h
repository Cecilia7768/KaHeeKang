#pragma once
#include "Mecro.h"
#include "MapDraw.h"
#include"Weapon.h"


enum PLYER_INFO
{
	BASIC_EXP = 0,
	BASIC_LIFE = 50
};
class CHARACTER
{
private:
	MapDraw m_DrawManager;
	WEAPON* m_pWeapon;
	string m_sName;
	int m_iLevel;
	int m_iPower;
	int m_iLife;
	int m_iExperience;
	int m_iMAXLife;
	int m_iMAXExperience;
	int m_iGetEXP; 
	int m_iGold;

public:
	CHARACTER();
	void Setting_Player_Info(int Check_New_Game, int Check_Who, int check_open_file);//Load
	void Print_Character_Info(int x, int y);
	void Setinfo(string N);	
	void Setinfo(int level, int power, int maxlife, int exp, int maxexp, int gold);
	~CHARACTER();	
	void Setinfo(int E); 
	void SetLife(int L);//life
	void AddExp(int getexp,int getgold);
	void ExpUp(CHARACTER *Who, CHARACTER *loser);
	void LvUp();
	void Buy(WEAPON* weapon);
	void Save(ofstream& Save); 
	inline void SetWeapon(WEAPON* W)
	{
		m_pWeapon = W;
	}
	inline WEAPON* GetWeapon()
	{
		return m_pWeapon;
	}
	bool Get_Have_Weapon()
	{
		if (m_pWeapon != NULL)
			return true;
		else
			return false;
	}
	inline int GetWeaponsPower()
	{
		return m_pWeapon->GetAttackPower();
	}
	inline string Getname()
	{
		return m_sName;
	}
	inline int GetPower()
	{
		return m_iPower;
	}
	inline int GetLevel()
	{
		return m_iLevel;
	}
	inline int GetMAXLife()
	{
		return m_iMAXLife;

	}
	inline int GetLife()
	{
		return m_iLife;
	}
	inline int GetMAXExperience()
	{
		return m_iMAXExperience;
	}
	inline int GetExperience()
	{
		return m_iExperience ;
	}
	inline int GetEXP()
	{
		return m_iGetEXP;
	}
	inline int GetGold()
	{
		return m_iGold;
	}


};