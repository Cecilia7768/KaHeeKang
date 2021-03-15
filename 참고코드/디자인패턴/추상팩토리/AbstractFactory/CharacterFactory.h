#pragma once
#include <vector>
#include "JobClass.h"

//서브클래스를 하나로 묶어서 생성하는 팩토리를 만들어 관리해주면 실수를 줄일 수 있다.
class CharacterFactory
{
	vector<JobClass*> jobs;
	vector<Weapon*> weapons;

public:
	~CharacterFactory();

	virtual Weapon * CreateWeapon() = 0;
	virtual JobClass* CreateJobClass() = 0;

protected:
	void AddJob(JobClass* job);
	void AddWeapon(Weapon* weapon);

};

class KnightCharacter : public CharacterFactory
{
public:
	virtual Weapon * CreateWeapon();
	virtual JobClass* CreateJobClass();
};

class ArcherCharacter : public CharacterFactory
{
public:
	virtual Weapon * CreateWeapon();
	virtual JobClass* CreateJobClass();
};

class WizardCharacter : public CharacterFactory
{
public:
	virtual Weapon * CreateWeapon();
	virtual JobClass* CreateJobClass();
};

