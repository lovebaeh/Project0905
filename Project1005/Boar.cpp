#include "Boar.h"
#include <iostream>

using namespace std;

FBoar::FBoar()
{
	Type = "Boar";
	cout << "Boar ������" << endl;

	Gold = 0;
	HP = 0;
	Direction = 0;
}

FBoar::~FBoar()
{
	cout << "Boar �Ҹ���" << endl;
}
