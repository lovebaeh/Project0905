#include <iostream>

using namespace std;

void Swap(int First, int Second)
{
	int Temp = First;
	First = Second;
	Second = Temp;

	
}

//int Add(int First, int Second)
//{
//	int Result = First + Second;
//
//	return Result;
//}


int main()
{
	int First = 1;
	int Second = 2;

	Swap(First, Second);



	//int Result = Add(First, Second);
	
	cout << First << endl;
	cout << Second << endl;

	return 0;
}
// main �Լ���  Swap �Լ��� ������Ұ� �ٸ��� ������ ���� �ٲ��� �ʴ´�
