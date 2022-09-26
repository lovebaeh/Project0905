//#include <iostream>
//
//using namespace std;
//
//int A = 10;
//int B = 20;
//
//void Swap(int* PA, int* PB)
//{
//
//	cout << *PA << endl;  //바뀐위치의 값
//	cout << *PB << endl;  //바뀐위치의 값
//
//	int Temp = *PA;
//	*PA = *PB;   //*PA 값을 넣어라(왼)    *PB 위치을 가져와라 (오)
//	*PB = Temp;
//}
//
//
//
//int main()
//{
//
//
//	//정수형 변수의 위치
//	//정수형 포인터
//
//	/*int* PA;
//	int A = 10;
//	PA = &A;
//	cout << &A << endl;
//	cout << PA << endl;
//	cout << *PA << endl;*/
//
//	//int*
//	//char*
//	//bool*
//	//float*
//
//
//	//메모리 할당을 내가 할수있다
//	//heap 메모리
//
//	int Count = 3;
//
//	int* DynamicArray = new int[Count];
//
//	*DynamicArray = 1;     // 선언
//	*(DynamicArray + 1) = 2;
//	*(DynamicArray + 2) = 3;
//
//
//
//	cout << *DynamicArray << endl;  // 시작위치 찍어라
//	cout << *(DynamicArray+1) << endl;
//	cout << *(DynamicArray+2) << endl;
//
//	cout << DynamicArray[0] << endl;
//	cout << DynamicArray[1] << endl;
//	cout << DynamicArray[2] << endl;
//
//
//	int Array[3] = { 1, 2, 3 };
//
//	cout << Array << endl;  //시작위치값
//	cout << *(Array + 1) << endl;
//	cout << *(Array + 2) << endl;
//
//
//	//Spawn //언리얼에서 생성
//	//Destroy 
//	
//
//
//	delete[] DynamicArray; //Smart Pointer, STL  지울때  new -> delete
//
//
//
//	int A = 40;
//	int B = 50;
//
//
//	Swap(&A, &B);
//
//	cout << A << endl;
//	cout << B << endl;
//
//
//
//   return 0;
//
//}


// 1.동적할당을 이용해서 만들어보세요.
// 1 - 10까지 넣었다가
// 11 - 20까지 넣을수 있게


#include <iostream>


using namespace std;

void Process(int* Map)
{

}

void Draw(int* Map)
{

}

int main()
{


	int* array = new int[10];
	
	Process(array);


	for (int i = 0; i < 10; i++)
	{
		//array[i] = rand()% 1000;
		/**array = i;*/
		*(array + i) = rand() % 1000;
	}
	// &array[1] = array +1
	int* newArray = new int[20];


	for (int i = 0; i < 10; i++)
	{
		newArray[i] = array[i];

	}
	 
	delete[] array; 

	array = newArray;


	for (int i = 10; i < 20; ++i)
	{
		//array[i] = rand() % 1000;
		*(array + i) = rand() % 1000;
	}
	
	//delete[] newArray; //Dangling pointer

	for (int i = 0; i < 20; ++i)
	{

		cout << array[i] << ",";
	}

	delete[] newArray;
	return 0;

}