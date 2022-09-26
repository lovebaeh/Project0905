//상상을 해봅시다.월드에 몬스터가 있습니다.몬스터의 종류는 고블린, 슬라임, 멧돼지가 있습니다.몬스터는 hp를 가지고 있고 동서남북으로 이동 할 수 있습니다.매 스테이지마다 몬스터의 종류와 갯수는 변경이 됩니다.
//
//ex)
//고블린 hp는 1이고 동쪽으로 이동합니다.
//고블린 hp는 20이고 서쪽으로 이동합니다.
//고블린 hp는 3이고 남쪽으로 이동합니다.
//멧돼지 hp는 30이고 북쪽으로 이동합니다.
//멧돼지 hp는 35이고 남쪽으로 이동합니다.
//슬라임 hp는 33이고 서쪽으로 이동합니다.
// 
//아무키나 누르면 다음턴
// 
//고블린 hp는 1이고 서쪽으로 이동합니다.
//고블린 hp는 20이고 서쪽으로 이동합니다.
//고블린 hp는 3이고 북쪽으로 이동합니다.
//멧돼지 hp는 30이고 남쪽으로 이동합니다.
//멧돼지 hp는 35이고 동쪽으로 이동합니다.
//슬라임 hp는 33이고 서쪽으로 이동합니다.

//출력 입력

// 저장해야할것  몇마리  hp
// 껏다 켜도 다시 생성



#include <iostream>
#include <conio.h> // 입력 getch()

enum MoveDirection
{
	North = 1,
	South = 2,
	East = 3,
	West = 4,
};

using namespace std;

void PrintDirection()
{
	int Direction = (rand() % 4) + 1;

	if (Direction == North) // 북쪽
	{
		cout << "북쪽";
	}
	else if (Direction == South) // 남쪽
	{
		cout << "남쪽";
	}
	else if (Direction == East) // 동쪽
	{
		cout << "동쪽";
	}
	else if (Direction == West) // 서쪽
	{
		cout << "서쪽";
	}

}

void PrintMonster(const char* Name, int* Data, int Count)
{
	for (int I = 0; I < Count; ++I)
	{
		cout << Name << " hp는 " << Data[I] << "이고 ";

		PrintDirection();

		cout << "으로 이동합니다." << '\n';
	}
}



int main()
{
	srand((unsigned int)time(NULL));

	int GoblinCount = (rand() % 5) + 1;
	int SlimeCount = (rand() % 5) + 1;
	int BoarCount = (rand() % 5) + 1;

	//cin >> GoblinCount;
	//cin >> SlimeCount;
	//cin >> BoarCount;

	//
	
	int* GoblinHP = new int[GoblinCount];
	for (int I = 0; I < GoblinCount; ++I)
	{
		GoblinHP[I] = (rand() % 100) + 1;
	}

	


	

	int* SlimeHP = new int[SlimeCount];
	for (int I = 0; I < SlimeCount; ++I)
	{
		SlimeHP[I] = (rand() % 100) + 1;
	}


	


	
	int* BoarHP = new int[BoarCount];
	for (int I = 0; I < BoarCount; ++I)
	{
		BoarHP[I] = (rand() % 100) + 1;
	}
	
	

	
	while (true)
	{
		//출력
		PrintMonster("고블린", GoblinHP, GoblinCount);
		PrintMonster("슬라임", SlimeHP, SlimeCount);
		PrintMonster("멧돼지", BoarHP, BoarCount);

				
		cout << "아무키나 누르면 다음턴\n";
		cout << endl;

		//입력
		_getch();
		
	}

	

	delete[] GoblinHP;
	delete[] SlimeHP;
	delete[] BoarHP;

	return 0;
}




