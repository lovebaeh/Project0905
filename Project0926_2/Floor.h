#pragma once

class FPlayer;

//Custom Data Type
class FFloor
{
public:
	int X;
	int Y;

	char Shape;

	bool IsOverlapPlayer(FPlayer Player);
};

