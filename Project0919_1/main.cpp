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
//	cout << *PA << endl;  //�ٲ���ġ�� ��
//	cout << *PB << endl;  //�ٲ���ġ�� ��
//
//	int Temp = *PA;
//	*PA = *PB;   //*PA ���� �־��(��)    *PB ��ġ�� �����Ͷ� (��)
//	*PB = Temp;
//}
//
//
//
//int main()
//{
//
//
//	//������ ������ ��ġ
//	//������ ������
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
//	//�޸� �Ҵ��� ���� �Ҽ��ִ�
//	//heap �޸�
//
//	int Count = 3;
//
//	int* DynamicArray = new int[Count];
//
//	*DynamicArray = 1;     // ����
//	*(DynamicArray + 1) = 2;
//	*(DynamicArray + 2) = 3;
//
//
//
//	cout << *DynamicArray << endl;  // ������ġ ����
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
//	cout << Array << endl;  //������ġ��
//	cout << *(Array + 1) << endl;
//	cout << *(Array + 2) << endl;
//
//
//	//Spawn //�𸮾󿡼� ����
//	//Destroy 
//	
//
//
//	delete[] DynamicArray; //Smart Pointer, STL  ���ﶧ  new -> delete
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


// 1.�����Ҵ��� �̿��ؼ� ��������.
// 1 - 10���� �־��ٰ�
// 11 - 20���� ������ �ְ�


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