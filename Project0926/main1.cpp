#include <iostream>

using namespace std;

enum Result
{
	Same	= 0,
	High	= 1,
	Low		= 2,
};

int Initialize();
int Input();
int Process(int RandomNumber, int UserNumber);
void Draw(int NumberResult);
void Run(int RandomNumber);

int main()
{
	int RandomNumber = Initialize();

	Run(RandomNumber);

	return 0;
}

int Initialize()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	int RandomNumber = (rand() % 1000) + 1;

	return RandomNumber;
}

int Input()
{
	int UserNumber = 0;

	cin >> UserNumber;

	return UserNumber;
}

int Process(int RandomNumber, int UserNumber)
{
	if (RandomNumber == UserNumber)
	{
		return Same;
	}
	else if (RandomNumber < UserNumber)
	{
		return High;
	}
	else //(RandomNumber > UserNumber)
	{
		return Low;
	}

}

void Draw(int NumberResult)
{
	switch (NumberResult)
	{
	case High:
		cout << "High" << endl;
		break;
	case Low:
		cout << "Low" << endl;
		break;
	case Same:
		cout << "Correct" << endl;
		break;
	}
}

void Run(int RandomNumber)
{
	while (true)
	{
		int UserNumber = Input();
		int NumberResult = Process(RandomNumber, UserNumber);
		Draw(NumberResult);
		if (NumberResult == Same)
		{
			break;
		}
	}
}
