#include <iostream>

using namespace std;


void CopyString(char* InSource, char* OutDesination)
{
	for (int I = 0; I < 6; ++I)
	{
		// *(OutDesination + I) = *(InSource + I);
		OutDesination[I] = InSource[I];
	}
}

int StringLength(char* Data)   //���ڿ�����
{
	/*for (int i = 0; ; ++i)
	{
		if (Data[i] == '\0')
		{
			return i;
		}
	}*/

	int i = 0;
	while (Data[i] != '\0')
	{
		i++;
	}

	return i;
}
void ToLowercase(char* Data)
{
	for (int I = 0; I < StringLength(Data); ++I) //�빮�� -> �ҹ���
	{
		if (Data[I] >= 'A' && Data[I] <= 'Z')
		{
			Data[I] += ('a' - 'A');
		}


	}
}

void ToUppercase(char* Data)
{
	for (int I = 0; I < StringLength(Data); ++I) //�ҹ��� -> �빮��
	{
		if (Data[I] >= 'a' && Data[I] <= 'z')
		{
			Data[I] -= ('a' - 'A');
		}


	}
}

char* StringCat(char* InSource1, char* InSource2)
{
	//char* Destination = StringLength(Name) + StringLength(Name2) + 1;
	int NewLength = StringLength(InSource1) + StringLength(InSource2) + 1;
	char* Destination = new char[NewLength];      // ���� �Ҵ� ����  Name + Name2�� ���ο� Destination �޸� �Ҵ�

	for (int I = 0; I < StringLength(InSource1); ++I)
	{
		Destination[I] = InSource1[I];

	}
	for (int I = 0; I < StringLength(InSource2); ++I)
	{

		Destination[StringLength(InSource1) + I] = InSource2[I];
	}

	Destination[NewLength - 1] = '\0';

	return Destination;

}

char* ReverseString(char* InSource)
{
	char* Destination = new char[StringLength(InSource) + 1];  // ���� ������ ->  olleH
	for (int I = 0; I < StringLength(InSource); ++I)
	{
		Destination[StringLength(InSource) - I - 1] = InSource[I];
	}
	Destination[StringLength(InSource)] = '\0';

	return Destination;

}

int main()
{
	//char Name[] = "Hello";
	// 'H' != "H" �ٸ���  'H'  = 'H', '\0'
	char Name[6] = { 'H', 'e','l', 'l', 'o', '\0' };
	char Name2[] = "World";

	
	cout << ReverseString(Name)<< endl;

	//cout << Destination << endl;


	cout << StringCat(Name, Name2) << endl;



	ToLowercase(Name);

	cout << Name << endl;

	ToUppercase(Name);


	cout << Name << endl;




	//char C = 'A';

	//cout << (int)C << endl; // char C�� int�� ����ȯ  ���� 65

	//cout << Name << endl;  // Hello

	// ���ڿ�����
	//int Count = strlen(Name);

	//int Count = StringLength(Name);
	/*for (int i = 0; ; ++i)
	{
		if (Name[i] == '\0')
		{
			Count = i;
			break;
		}
	}                   */        // Name[i]�� ���Ͽ� '\0' Count ���� 


	//cout << Count << endl;  // 5





	cout << (&Name) << endl;   //Name �ּҰ�

	// to do code
	CopyString(Name, Name2);    //Name2�� ����



	//cout << strlen(Name) << sizeof(Name) << endl; // ���ڿ� ���� : 5 / ������ũ�� : 56
	//cout << strlen(Name) << "," << sizeof(Name) << endl; // ���ڿ� ���� : 5 / ������ ũ�� : 6  '\0'����
	cout << Name2 << endl;   // Hello


	return 0;
}