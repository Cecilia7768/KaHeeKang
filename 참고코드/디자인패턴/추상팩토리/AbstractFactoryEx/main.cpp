#include "JobClass.h"

void AttackTest(JobClass* job);

//무기를 검, 활, 지팡이의 서브 클래스를 가지고 있고,
//직업은 기사, 궁수, 마법사 서브클래스를 가지고 있다.
//각 직업은 해당 직업에 맞는 무기를 가져야만 공격할 수 있다.
//맞지 않는 무기를 들면 무기를 가지고 공격을 하려고 하면 공격이 되지 않고, 검을 가져야만 공격이 가능한상황이다.
//아래처럼 특정 오류 메세지를 띄위지 않는다면 체크 할 수 없는 상황이다.
//예외처리보다 더 확실한 제어가 필요하다.
int main()
{
	JobClass* knight = new Knight();
	JobClass* archer = new Archer();
	JobClass* wizard = new Wizard();

	knight->SetWeapon(new Bow());
	archer->SetWeapon(new Staff());
	wizard->SetWeapon(new Sword());

	AttackTest(knight);
	AttackTest(archer);
	AttackTest(wizard);
}

void AttackTest(JobClass* job)
{
	if (!job->EquipCheck())
		cout << "무기 사용 실패!" << endl;
}