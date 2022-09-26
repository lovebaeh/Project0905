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

int StringLength(char* Data)   //문자열길이
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
	for (int I = 0; I < StringLength(Data); ++I) //대문자 -> 소문자
	{
		if (Data[I] >= 'A' && Data[I] <= 'Z')
		{
			Data[I] += ('a' - 'A');
		}


	}
}

void ToUppercase(char* Data)
{
	for (int I = 0; I < StringLength(Data); ++I) //소문자 -> 대문자
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
	char* Destination = new char[NewLength];      // 동적 할당 선언  Name + Name2를 새로운 Destination 메모리 할당

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
	char* Destination = new char[StringLength(InSource) + 1];  // 순서 뒤집기 ->  olleH
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
	// 'H' != "H" 다르다  'H'  = 'H', '\0'
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

	//cout << (int)C << endl; // char C을 int로 형변환  값은 65

	//cout << Name << endl;  // Hello

	// 문자열길이
	//int Count = strlen(Name);

	//int Count = StringLength(Name);
	/*for (int i = 0; ; ++i)
	{
		if (Name[i] == '\0')
		{
			Count = i;
			break;
		}
	}                   */        // Name[i]을 비교하여 '\0' Count 누적 


	//cout << Count << endl;  // 5





	cout << (&Name) << endl;   //Name 주소값

	// to do code
	CopyString(Name, Name2);    //Name2로 복사



	//cout << strlen(Name) << sizeof(Name) << endl; // 문자열 길이 : 5 / 데이터크기 : 56
	//cout << strlen(Name) << "," << sizeof(Name) << endl; // 문자열 길이 : 5 / 데이터 크기 : 6  '\0'포함
	cout << Name2 << endl;   // Hello


	return 0;
}