//����� �غ��ô�.���忡 ���Ͱ� �ֽ��ϴ�.������ ������ ���, ������, ������� �ֽ��ϴ�.���ʹ� hp�� ������ �ְ� ������������ �̵� �� �� �ֽ��ϴ�.�� ������������ ������ ������ ������ ������ �˴ϴ�.
//
//ex)
//��� hp�� 1�̰� �������� �̵��մϴ�.
//��� hp�� 20�̰� �������� �̵��մϴ�.
//��� hp�� 3�̰� �������� �̵��մϴ�.
//����� hp�� 30�̰� �������� �̵��մϴ�.
//����� hp�� 35�̰� �������� �̵��մϴ�.
//������ hp�� 33�̰� �������� �̵��մϴ�.
// 
//�ƹ�Ű�� ������ ������
// 
//��� hp�� 1�̰� �������� �̵��մϴ�.
//��� hp�� 20�̰� �������� �̵��մϴ�.
//��� hp�� 3�̰� �������� �̵��մϴ�.
//����� hp�� 30�̰� �������� �̵��մϴ�.
//����� hp�� 35�̰� �������� �̵��մϴ�.
//������ hp�� 33�̰� �������� �̵��մϴ�.

//��� �Է�

// �����ؾ��Ұ�  ���  hp
// ���� �ѵ� �ٽ� ����



#include <iostream>
#include <conio.h> // �Է� getch()

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

	if (Direction == North) // ����
	{
		cout << "����";
	}
	else if (Direction == South) // ����
	{
		cout << "����";
	}
	else if (Direction == East) // ����
	{
		cout << "����";
	}
	else if (Direction == West) // ����
	{
		cout << "����";
	}

}

void PrintMonster(const char* Name, int* Data, int Count)
{
	for (int I = 0; I < Count; ++I)
	{
		cout << Name << " hp�� " << Data[I] << "�̰� ";

		PrintDirection();

		cout << "���� �̵��մϴ�." << '\n';
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
		//���
		PrintMonster("���", GoblinHP, GoblinCount);
		PrintMonster("������", SlimeHP, SlimeCount);
		PrintMonster("�����", BoarHP, BoarCount);

				
		cout << "�ƹ�Ű�� ������ ������\n";
		cout << endl;

		//�Է�
		_getch();
		
	}

	

	delete[] GoblinHP;
	delete[] SlimeHP;
	delete[] BoarHP;

	return 0;
}




