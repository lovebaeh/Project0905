#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>



//hp 랜덤생성 고정
//방향 랜덤으로
// 
// 고블린 생성함수 hp 
// 멧돼지 생성함수 hp
// 슬라임 생성함수 hp


void Move()
{
	int Direction = rand() % 4 + 1;

	switch (Direction)
	{
	case 1:
		std::cout << "동쪽으로 이동합니다." << std::endl;
		break;
	case 2:
		std::cout << "서쪽으로 이동합니다." << std::endl;
		break;
	case 3:
		std::cout << "남쪽으로 이동합니다." << std::endl;
		break;
	case 4:
		std::cout << "북쪽으로 이동합니다." << std::endl;
		break;

	default:
		std::cout << "오류";
		break;
	}
}

void Read_Goblin(int Hp)
{
	std::cout << "고블린 hp는 " << Hp << "이고 ";

	Move();
}
int New_Goblin()
{
	int Max_Hp = 79;
	int Current_Hp;
	int* Goblin_Hp = new int[Max_Hp];

	for (int i = 0; i < Max_Hp; i++)
	{
		Goblin_Hp[i] = i + 1;
	}


	Current_Hp = Goblin_Hp[(rand() % Max_Hp) + 1];

	delete[] Goblin_Hp;

	return Current_Hp;

}

void Read_Boar(int Hp)
{
	std::cout << "멧돼지 hp는 " << Hp << "이고 ";

	Move();
}
int New_Boar()
{
	int Max_Hp = 59;
	int Current_Hp;
	int* Boar_Hp = new int[Max_Hp];

	for (int i = 0; i < Max_Hp; i++)
	{
		Boar_Hp[i] = i + 1;
	}


	Current_Hp = Boar_Hp[(rand() % Max_Hp) + 1];

	delete[] Boar_Hp;

	return Current_Hp;

}

void Read_Slime(int Hp)
{
	std::cout << "슬라임 hp는 " << Hp << "이고 ";

	Move();
}


int New_Slime()
{
	int Max_Hp = 59;
	int Current_Hp;
	int* Slime_Hp = new int[Max_Hp];

	for (int i = 0; i < Max_Hp; i++)
	{
		Slime_Hp[i] = i + 1;
	}


	Current_Hp = Slime_Hp[(rand() % Max_Hp) + 1];

	delete[] Slime_Hp;

	return Current_Hp;

}



int main()
{
	srand((unsigned)time(NULL));
	char none;

	int Goblin_num = rand() % 2 + 1;
	int Boar_num = rand() % 2 + 1;
	int Slime_num = rand() % 2 + 1;

	int Goblin_Hp = New_Goblin();
	int Boar_Hp = New_Boar();
	int Slime_Hp = New_Slime();

	std::cout << std::endl;

	none = _getch();

	while (1)
	{
		none = _getch();





		for (int i = 0; i < Goblin_num; i++)
		{
			Read_Goblin(Goblin_Hp);
		}
		for (int i = 0; i < Boar_num; i++)
		{
			Read_Boar(Boar_Hp);
		}
		for (int i = 0; i < Slime_num; i++)
		{
			Read_Slime(Slime_Hp);
		}
		std::cout << std::endl;
	}





	return 0;
}