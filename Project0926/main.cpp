/*컴퓨터가 임의 숫자를






1. 컴퓨터가 임의 숫자를 정합니다.                      - 초기화 합니다

2. 유저의 숫자 입력을 받는다.                          - 입력 받는다

3. 임의 숫자와 유저의 숫자를 비교합니다.              - 처리합니다
    3.1 임의 숫자 > 유저 숫자 면 Low를 출력합니다.
   	3.2 임의 숫자 < 유저 숫자 면 High를 출력합니다.
	3.3 임의 숫자 = 유저 숫자 면 Correct를 출력하고 종료합니다.
	                                                     - 출력합니다

4. 2부터 3을 반복합니다.


while (true)
{
	// 사건(이벤트)
	Input(); // 입력이 있을때, 시간이 바뀔때, 네트워크로 신호가 오면(입력)
	Process();
	Draw();
}
*/

#include <iostream> 

using namespace std;

enum Result
{
	Same = 0;
	High = 1;
	Low = 0;
};

int Initialize();
int Input();
int Process(); 
void Draw();
void Run();

int main()
{

	int RandomNumber = Initialize();

	Run(RandomNumber);

	return 0;
}

int Initialize()
{
	srand(static_cast) < unsigned int > (time(NULL)));

	int RandomNumber = (rand() % 100) + 1;

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
	else
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

void Run()
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


	

	

