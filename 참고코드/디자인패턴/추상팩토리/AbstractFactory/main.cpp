#include "CharacterFactory.h"

void AttackTest(JobClass* job);

int main()
{
	KnightCharacter* knightFactory = new KnightCharacter();
	ArcherCharacter* archerFactory = new ArcherCharacter();
	WizardCharacter* wizardFactory = new WizardCharacter();

	JobClass* knight = knightFactory->CreateJobClass();
	JobClass* archer = archerFactory->CreateJobClass();
	JobClass* wizard = wizardFactory->CreateJobClass();

	Weapon* sword = knightFactory->CreateWeapon();
	Weapon* bow = archerFactory->CreateWeapon();
	Weapon* staff = wizardFactory->CreateWeapon();

	knight->SetWeapon(sword);
	archer->SetWeapon(bow);
	wizard->SetWeapon(staff);

	AttackTest(knight);
	AttackTest(archer);
	AttackTest(wizard);
}

void AttackTest(JobClass* job)
{
	if (!job->EquipCheck())
		cout << "무기 사용 실패!" << endl;
}