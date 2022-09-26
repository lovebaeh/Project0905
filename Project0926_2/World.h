#pragma once

//#include "Player.h"
//#include "Wall.h"
//#include "Goal.h"
//#include "Floor.h"

class FPlayer;
class FWall;
class FFloor;
class FGoal;

class FWorld
{
public:
	FPlayer* Player;

	FWall* Walls[100];
	FFloor* Floors[100];
	FGoal* Goal;
};

