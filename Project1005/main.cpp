#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Monster.h"
#include "Boar.h"


using namespace std;


int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	FGoblin* Goblin = new FGoblin();
	Goblin->Move();

	FSlime* Slime = new FSlime();
	Slime->Move();

	FMonster* Monster = new FMonster();
	Monster->Move();

	FBoar* Boar = new FBoar();
	Boar->Move();

	








	//bool IsRunning = true;

	//while (IsRunning)
	//{
	//	MyPlayer->Move();
	//	Goblin->Move();
	//}

	delete MyPlayer;
	MyPlayer = nullptr;

	delete Goblin;
	Goblin = nullptr;

	delete Slime;
	Slime = nullptr;

	delete Monster;
	Monster = nullptr;

	delete Boar;
	Boar = nullptr;

	

	return 0;
}