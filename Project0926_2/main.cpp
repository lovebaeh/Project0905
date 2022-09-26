#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goal.h"
#include "Wall.h"
#include "Floor.h"

using namespace std;




int main()
{
	FWorld MyWorld;

	MyWorld.Player = new FPlayer();

	MyWorld.Goal = new FGoal();

	MyWorld.Walls[0] = new FWall();
	MyWorld.Walls[1] = new FWall();
	MyWorld.Walls[2] = new FWall();

	MyWorld.Floors[0] = new FFloor();
	MyWorld.Floors[1] = new FFloor();

	return 0;
}