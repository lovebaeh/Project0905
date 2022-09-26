#include <iostream>
#include <string>

using namespace std;

void CopyString(char* InSource, char* OutDesination)
{
	for (int I = 0; I < 6; ++I)
	{
		//*(OutDesination+I) = *(InSource+I);
		OutDesination[I] = InSource[I];
	}
}

int StringLength(char* Data)
{
	//for (int i = 0; ; ++i)
	//{
	//	if (Data[i] == '\0')
	//	{
	//		return i;
	//	}
	//}

	int i = 0;
	while (Data[i] != '\0')
	{
		i++;
	}

	return i;
}

void ToLowercase(char* Data)
{
	for (int I = 0; I < StringLength(Data); ++I)
	{
		if (Data[I] >= 'A' && Data[I] <= 'Z')
		{
			Data[I] += ('a' - 'A');
		}
	}
}

void ToUppercase(char* Data)
{
	for (int I = 0; I < StringLength(Data); ++I)
	{
		if (Data[I] >= 'a' && Data[I] <= 'z')
		{
			Data[I] -= ('a' - 'A');
		}
	}
}

char* StringCat(char* InSource1, char* InSource2)
{
	int NewLength = StringLength(InSource1) + StringLength(InSource2) + 1;
	char* Destination = new char[NewLength];

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
	char* Destination = new char[StringLength(InSource) + 1];
	for (int I = 0; I < StringLength(InSource); ++I)
	{
		Destination[StringLength(InSource) - I - 1] = InSource[I];
	}
	Destination[StringLength(InSource)] = '\0';

	return Destination;
}

int main()
{
	//char Name[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	//char Name2[] = "World";

	string Name = "Hello";
	string greeting = Name + "World";

	cout << greeting.length() << endl;

	return 0;
}