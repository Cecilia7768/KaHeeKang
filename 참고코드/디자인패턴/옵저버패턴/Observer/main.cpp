#include "Alarm.h"

int main()
{
	BossDragon* dragon = new BossDragon();
	BossTwinHeadOrc* orc = new BossTwinHeadOrc();

	Player* player1 = new Player("다루");
	Player* player2 = new Player("까망");
	Player* player3 = new Player("하양");

	//주제개체에 구독개체를 등록한다.
	player1->SetBossAlarm(dragon);
	player2->SetBossAlarm(orc, false);
	player3->SetBossAlarm(orc);

	//주제개체가 구독개체에서 상태변화를 알려준다.
	dragon->SpawnBoss();
	orc->SpawnBoss();

	//구독개체가 주제개체에게 상태를 요청한다.
	player2->GetBossState();

	delete dragon;
	delete orc;

	delete player1;
	delete player2;
	delete player3;
}