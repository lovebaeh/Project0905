#pragma once
class FPlayer
{
public:
	int X;
	int Y;

	char Shape;

	void move(int Direction);
	bool DoCollision(int X, int Y);

};

