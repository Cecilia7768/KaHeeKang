#pragma once
#include "Mecro.h"
#include "MapDraw.h"
#include "Character.h"
#include "Shop.h"

enum WHAT_KINDOF_HAND
{
	KAWEE = 49,
	BAWEE = 50,
	BO = 51
};
enum WHO_WON_INGAME
{
	DRAW = 0,
	PLAYER_WIN = 1,
	MONSTER_WIN = 2
};

enum SAVE_OR_LOAD
{
	SAVE = 10,
	LOAD =11
};
class PLAY
{
private:	
	MapDraw m_DrawManager;
	CHARACTER *m_Player, *m_Monster;
	CHARACTER *tmpPlayer;
	CHARACTER *m_playerlist[11];
	WEAPON* m_Playersweaponlist[11];
	WEAPON* m_PlayersWeapon;	
	WEAPON* tmpWeapon;
	SHOP m_Shop;
	int m_iXpoint, m_iYpoint;
	int check_Newgame = 0;
public:
	PLAY();	
	bool m_bCheck_GameOver;
	bool m_bCheck_ResetGame;
	bool m_bCheck_Lose;
	bool m_bCheck_LoadGame = false;
	bool m_bCheck_Have_Weapon = false;
	void ReSetGame();
	void ReSetMonster();
	void Print_First_Main(); //맨처음 메뉴
	void Print_Playing_Main(); //이름 입력후 플레이 메뉴
	void First_Main(); 
	void Playing_Main();
	void Player_n_Monster_Load(int Check_New_Game, int Check_Who,int th);
	void Dongeon();
	void Fight(CHARACTER* Player, CHARACTER* Monster);
	void Savefile_List(CHARACTER *Player, int save_or_load,int th,int resultprint);
	int Check_Who_Win(int choice_of_player,int choice_of_monster); //누가 이긴건지 확인
	void Effect_from_game(int choice_of_player, int choice_of_monster, CHARACTER* Player, CHARACTER* Monster); //승패로 인한 스테이터스 변화
	void Save(int th);
	~PLAY();
};