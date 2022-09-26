#include <iostream>

using namespace std;

enum PlayterClass
{
	Warrior = 0,
		Thief = 1,

};

struct FVector2D
{
	int X;
	int Y;


}


struct FPlayer
{
	int* YourMoney;
	char Name[100];
	int Level;
	int HP;
	int MP;
	int Class = Warrior;
	FVector2D  Position;
	float Height;
	float weight;
	int Money;
	int Attack;
	int Defence;
}

int main()
	{
		FPlayer* MyPlayer = new FPlayer;
		//(*MyPlayer).HP = 10;
		MyPlayer->HP = 10;

		cout << sizeof(FPlayer);

		return 0;
	}



};