#include <iostream>
#include <conio.h>

using namespace std;

int Map[10][10] =
{
	{0,0,0,0,0,0,0,0,0,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,1,1,1,1,1,1,1,1,0},
	{0,0,0,0,0,0,0,0,0,0},

};

int  KeyCode = 0;
bool IsRunning = true;
int PlayerX = 1;
int PlayerY = 1;
int GX = 8;
int GY = 8;

void Input()
{
	KeyCode = _getch();
}

void Tick()
{
	if (KeyCode == 'W' || KeyCode == 'w')
	{
		PlayerY--;
	}
	if (KeyCode == 'S' || KeyCode == 's')
	{
		PlayerY++;
	}
	if (KeyCode == 'A' || KeyCode == 'a')
	{
		PlayerX--;
	}
	if (KeyCode == 'D' || KeyCode == 'd')
	{
		PlayerX++;
	}
	if (KeyCode == 'Q' || KeyCode == 'q')
	{
		IsRunning = false;
	}

}

void Draw()
{
	system("cls");

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (X == PlayerX && Y == PlayerY)
			{
				cout << "P" << "";
			}
			else if (X == GX && Y == GY)
			{
				cout << "G";
			}
			else
			{
				if (Map[Y][X] == 0)
				{
					cout << Map[Y][X];
				}
				else
				{
					cout << " ";
				}
				
			}
			
			cout << " ";
		}
		cout << endl;
	}

}

int main()
{
	/*int Score[COUNT];
	int Total = 0;

	for (int i = 0; i < COUNT; ++i)
	{
		Total += Score[i];
	}*/

	while (IsRunning) // 1/60초 안에 계산
	{
		// 입력 받는다
		Input();
	
		// 처리한다
		Tick();
	

		 
		// 화면에 그린다
		Draw();

	}

	return 0;
}




