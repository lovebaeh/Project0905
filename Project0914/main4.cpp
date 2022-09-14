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
// main 함수와  Swap 함수의 저장장소가 다르기 때문에 값이 바뀌지 않는다
