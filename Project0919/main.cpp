// ctrl + shift + a


// 1. n! = 1 * 2 * 3 *   . ..  n�� ���ϴ� ���α׷��� ��������.


//#include <iostream> //�����
//
//using namespace std;
//
//
//
//int main()
//{
//     //0���� ���� �ݺ��� : �迭Ž��
//     //1���� ���� �ݺ��� ; ���� ���ϱ� 
//     //n! = 1 * 2 * 3 . . .  .* n => Total ����
//	 //(1 < n < 10)
//
//	int n = 0;
//	n = 10;
//	int iValue = 1;
//
//	for (int j = 1; j <= n; ++j)
//	{
//		iValue *= j;
//	}
//
//
//
//	cout << iValue << endl;
//
//	return 0;
//
//}

//
// 2. ���� n�� �Է� �޾Ƽ� ������ n���� ����غ�����.
//
//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//
//	int n;
//
//	cout << "���ϴ� ���� �Է��ϼ���." << endl;
//	cin >> n;
//
//
//	int Sum = 0;
//
//	cout << n << "��" << endl;
//
//	for (int i = 1; i < 10 ; ++i)
//	{
//		Sum = n * i;
//
//		cout << n << "*" << i << "=" << Sum << endl;
//		
//	}
//
//	
//	return 0;
//
//}
//



//
//// 3. 1 - 100���� ���ڸ� �����ϰ� ��ġ�� �ʰ� ����غ�����.
//
////	 (rand, srand ���)
//
//
//#include <iostream>
//
//
//using namespace std;
//
////#define NUMBER   10
//
//int main()
//{
//	// rand ���ڰ� 30000����ǥ���Ҽ� �ִ�
//		
//	srand(static_cast <unsigned int> (time(nullptr)));
//
//	//int NumberPots[NUMBER] = { 0, };
//	int NumberPots[100] = { 0, };
//
//
//	for (int i = 0; i < 100; ++i)
//	{
//		NumberPots[i] = i + 1;
//	}
//
//
//	for (int i = 0; i < 100; ++i)
//	{
//		int First = rand() % 100;
//		int Second = rand() % 100;
//
//		int Temp = NumberPots[First];
//		NumberPots[First] = NumberPots[Second];
//		NumberPots[Second] = Temp;
//
//	}
//
//	for (int i = 0; i < 100; ++i)
//	{
//		cout << NumberPots[i] << endl;
//	}
//
//	/*for (int Number : NumberPots)
//	{
//		cout << Number << endl;
//	}*/
//


#include <iostream>
#include "Init.h"
#include "Shuffle.h"
#include "Draw.h"

//�������� ���α׷���
int main()
{
	Init();

	Shuffle();

	Draw();

	return 0;
}





//
//#include <iostream>A
//#include "Init.h"
//#include "Shuffle.h"
//#include "Draw.h"
//
//using namespace std;
//
//#define NUMBER		52
//
////atomic world -> bit world
//
//int Deck[NUMBER] = { 0, };
//
//void Init();
//
//void Shuffle()
//{
//	for (int I = 0; I < NUMBER * 3; ++I)
//	{
//		int First = rand() % NUMBER;
//		int Second = rand() % NUMBER;
//
//		int Temp = Deck[First];
//		Deck[First] = Deck[Second];
//		Deck[Second] = Temp;
//	}
//	
//
//}
//
//void Draw()
//
//
//// �����������α׷�
//
//int main()
//{
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//
//	//1
//	Init();
//
//
//
//
//	int Deck[NUMBER] = { 0, };
//
//	for (int I = 0; I < NUMBER; ++I)
//	{
//		Deck[I] = I;
//	}
//
//	for (int I = 0; I < NUMBER * 3; ++I)
//	{
//		int First = rand() % NUMBER;
//		int Second = rand() % NUMBER;
//
//		int Temp = Deck[First];
//		Deck[First] = Deck[Second];
//		Deck[Second] = Temp;
//	}
//
//	for (int I = 0; I < 4; ++I)
//	{
//		//int Portion = 52 / 13; //Card Type
//		//int Reminder = (52 % 13) + 1; //Card Number
//		int Portion = Deck[I] / 13; //Card Type
//		int Reminder = (Deck[I] % 13); //Card Number
//
//		switch (Portion)
//		{
//		case 0:
//			cout << "Heart" << " ";
//			break;
//		case 1:
//			cout << "Spade" << " ";
//			break;
//		case 2:
//			cout << "Diamond" << " ";
//			break;
//		case 3:
//			cout << "Clover" << " ";
//			break;
//		}
//
//		if (Reminder == 1)
//		{
//			cout << "A" << endl;
//		}
//		else if (Reminder == 11)
//		{
//			cout << "J" << endl;
//		}
//		else if (Reminder == 12)
//		{
//			cout << "Q" << endl;
//		}
//		else if (Reminder == 13)
//		{
//			cout << "K" << endl;
//		}
//		else
//		{
//			cout << Reminder << endl;
//		}
//
//	}
//
//
//
//	return 0;
//}
