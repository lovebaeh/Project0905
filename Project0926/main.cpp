/*��ǻ�Ͱ� ���� ���ڸ�






1. ��ǻ�Ͱ� ���� ���ڸ� ���մϴ�.                      - �ʱ�ȭ �մϴ�

2. ������ ���� �Է��� �޴´�.                          - �Է� �޴´�

3. ���� ���ڿ� ������ ���ڸ� ���մϴ�.              - ó���մϴ�
    3.1 ���� ���� > ���� ���� �� Low�� ����մϴ�.
   	3.2 ���� ���� < ���� ���� �� High�� ����մϴ�.
	3.3 ���� ���� = ���� ���� �� Correct�� ����ϰ� �����մϴ�.
	                                                     - ����մϴ�

4. 2���� 3�� �ݺ��մϴ�.


while (true)
{
	// ���(�̺�Ʈ)
	Input(); // �Է��� ������, �ð��� �ٲ�, ��Ʈ��ũ�� ��ȣ�� ����(�Է�)
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


	

	

