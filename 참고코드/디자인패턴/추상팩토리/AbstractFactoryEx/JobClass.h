#pragma once
#include "Weapon.h"

class JobClass
{
private:
	Weapon * weapon;

public:
	void SetWeapon(Weapon* _weapon);
	virtual bool EquipCheck() = 0;

protected:
	Weapon* GetWeapon();
};

class Knight : public JobClass
{
public:
	virtual bool EquipCheck();
};

class Archer : public JobClass
{
public:
	virtual bool EquipCheck();
};

class Wizard : public JobClass
{
public:
	virtual bool EquipCheck();
};
