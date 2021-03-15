#include "CharacterFactory.h"

CharacterFactory::~CharacterFactory()
{
	jobs.clear();
	weapons.clear();
}

void CharacterFactory::AddJob(JobClass * job)
{
	jobs.push_back(job);
}

void CharacterFactory::AddWeapon(Weapon * weapon)
{
	weapons.push_back(weapon);
}

/* Knight Character */
Weapon * KnightCharacter::CreateWeapon()
{
	return new Sword();
}

JobClass * KnightCharacter::CreateJobClass()
{
	return new Knight();
}

/* Archer Character */
Weapon * ArcherCharacter::CreateWeapon()
{
	return new Bow();
}

JobClass * ArcherCharacter::CreateJobClass()
{
	return new Archer();
}

/* Wizard Character */
Weapon * WizardCharacter::CreateWeapon()
{
	return new Staff();
}

JobClass * WizardCharacter::CreateJobClass()
{
	return new Wizard();
}

