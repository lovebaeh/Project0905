#include "Monster.h"
#include <iostream>

using namespace std;
FMonster::FMonster()
{
	Type = "Monster";
	cout << "Monster 持失切" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}
FMonster::~FMonster()
{
	cout << "Monster 社瑚切" << endl;
}
