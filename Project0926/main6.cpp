#include <iostream>

using namespace std;

class FPlayer
{
public:
	int X;
	int Y;

	char Shape;

	void move(int Direction);
	bool DoCollision(int X, int Y);





};






int main()
{
	FWorld MyWorld;

	MyWorld.Player = FPlayer;

	return 0;

}