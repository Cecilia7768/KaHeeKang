#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//알람 목록을 작성하고 알람을 감시할 클래스
class Observer
{
public:
	virtual void Notify(string name) = 0;
};

//보스 알람 생성 클래스
class BossAlarm
{
	//Observer
	vector<Observer*> players;
	string name;

public:
	BossAlarm(string name) : name(name) { }

	//감시할 옵저버 등록
	void AddPlayer(Observer* player)
	{
		players.push_back(player);
	}

	//감시가 끝난 옵저버 해제
	void RemovePlayer(Observer* player)
	{
		vector<Observer*>::iterator seek = find(players.begin(), players.end(), player);
		players.erase(seek);
	}

	//노티피 케이션 등록
	void Notification()
	{
		vector<Observer*>::iterator seek = players.begin();
		vector<Observer*>::iterator end = players.end();

		while (seek != end)
		{
			(*seek)->Notify(name);
			seek++;
		}
	}

	void Notification(Observer* player)
	{
		if (isAppear)
		{
			player->Notify(name);
		}
	}

protected:
	bool isAppear;
};

//드래곤 보스 클래스
class BossDragon : public BossAlarm
{
public:
	BossDragon() : BossAlarm("드래곤")
	{
		isAppear = false;
	}

	//상태 변화를 알려줄 함수
	void SpawnBoss()
	{
		isAppear = true;
		Notification();
	}
};

//트윈 헤드 오크 보스 클래스
class BossTwinHeadOrc : public BossAlarm
{
public:
	BossTwinHeadOrc() : BossAlarm("트윈 헤드 오크")
	{
		isAppear = false;
	}

	//상태 변화를 알려줄 함수
	void SpawnBoss()
	{
		isAppear = true;
		Notification();
	}
};

class Player : public Observer
{
	string name;
	BossAlarm* bossAlarm;
	bool alarmState;

public:
	Player(string name) : name(name) { }

	//등록된 노티피 케이션 호출
	void Notify(string name) override
	{
		if (alarmState)
		{
			cout << "# " << this->name.c_str() << "에게 알림 #" << endl;
			cout << name.c_str() << " 보스 등장!" << endl << endl;
		}
		else
		{
			cout << "# " << this->name.c_str() << " 알람 해제 상태 #" << endl << endl;
		}
	}

	//보스 알람 설정
	void SetBossAlarm(BossAlarm* alarm, bool alarmOn = true)
	{
		bossAlarm = alarm;
		alarmState = alarmOn;

		bossAlarm->AddPlayer(this);
	}

	//보스 알람 호출
	void GetBossState()
	{
		cout << "# " << name.c_str() << " 보스 알림 요청 #" << endl;
		alarmState = true;
		bossAlarm->Notification(this);
	}
};
