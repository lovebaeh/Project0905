#include "Monster.h"
#include <iostream>

using namespace std;
FMonster::FMonster()
{
	Type = "Monster";
	cout << "Monster ������" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}
FMonster::~FMonster()
{
	cout << "Monster �Ҹ���" << endl;
}
