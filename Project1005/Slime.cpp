#pragma once
#include <iostream>
#include "Slime.h"
using namespace std;

FSlime::FSlime()
{
	Type = "Slime";
	cout << "Slime 持失切" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}
FSlime::~FSlime()
{
	cout << "Slime 社瑚切" << endl;
}
