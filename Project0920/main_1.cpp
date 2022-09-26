#include <iostream>
#include <conio.h>

#define SAFE_DELETE(X)	if (X != nullptr)  { delete[] X; }

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
	if (Direction == North) //����
	{
		cout << "����";
	}
	else if (Direction == South) //����
	{
		cout << "����";
	}
	else if (Direction == East) //����
	{
		cout << "����";
	}
	else if (Direction == West) //����
	{
		cout << "����";
	}
}

void PrintMonster(const char* Name, int* Data, int Count)
{
	for (int I = 0; I < Count; ++I)
	{
		cout << Name << " hp�� " << Data[I] << " �̰� ";

		PrintDirection();

		cout << "���� �̵��մϴ�." << '\n';
	}
}

int* CreateMonster(int Count)
{
	if (Count > 0)
	{

		int* Data = new int[Count];
		for (int I = 0; I < Count; ++I)
		{
			Data[I] = (rand() % 100) + 1;
		}

		return Data;
	}
	else
	{
		return nullptr;
	}
}


int main()
{
	srand((unsigned int)time(NULL));

	int GoblinCount = (rand() % 5);
	int SlimeCount = (rand() % 5);
	int BoarCount = (rand() % 5);

	//cin >> GoblinCount;
	//cin >> SlimeCount;
	//cin >> BoarCount;

	//CreateMonster
	int* GoblinHP = CreateMonster(GoblinCount);
	int* SlimeHP = CreateMonster(SlimeCount);
	int* BoarHP = CreateMonster(BoarCount);

	int KeyCode = 0;
	while (!(KeyCode == 'Q' || KeyCode == 'q'))
	{
		//���
		PrintMonster("���", GoblinHP, GoblinCount);
		PrintMonster("������", SlimeHP, SlimeCount);
		PrintMonster("�����", BoarHP, BoarCount);

		cout << "�ƹ�Ű�� ������ ������\n";
		cout << endl;

		//�Է�
		KeyCode = _getch();
	}

	SAFE_DELETE(GoblinHP);

	SAFE_DELETE(SlimeHP);

	SAFE_DELETE(BoarHP);


		//MAX(10, 20) ? 10 : 20;
		int a = 10;
		int b = 20;

		int MAX = 0;
		MAX = (a < b) ? a : b;
		cout << MAX << endl;

		return 0;


}