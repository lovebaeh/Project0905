#include <iostream>
//#include <stdio.h>
//
//
//#define MAX2(A, B)  (A >= B) ? A : B
//
//#define MAX3(A, B, C)  MAX(A, B) > C) ? MAX(A, B) : C
//
using namespace std;
//
//
//int MAX(int A, int B)
//{
//	return (A > B) ? A : B;
//
//}
//

//	/*int a = 0;
//	int b = 0;
//	 
//	cin >> a;
//	cin >> b;
//
//
//
//	cout <<   (MAX(a, b));*/
//	int MAX3;
//	
//	//int Number = (MAX3());
//	int A = 30;
//	int B = 10;
//	int C = 20;
//
//	int Number = MAX3(A, B, C) ;
//
//	cout << Number;
//
//
//void CopyString(char* InSource, char* OutDesination)
//{
//
//	for (int i = 0; i < 6; ++i)
//	{
//		OutDesination[i] = InSource[i];
//
//	}
//}
//
//
//
//int main()
//{
//
//
//// char Name[] = "Hello";
//// 'H' != "H"  'H' != 'H', '\0'
//
//
//	char Name[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
//	char Name2[6] = { 0, };
//
//	// to do code
//	CopyString(Name, Name2);
//
//   // 문자열 길이
//	// 문자열 -> 소문자
//	// 문자열 -> 대문자
//	// 문자열 -> 뒤집어
//	// 문자열 합치기
//	cout << Name2 << endl;
//
//
//
//	return 0;
//


#include <iostream>

using namespace std;


int mytolower(int c) 
{ 
	if ((c >= 'A') && (c <= 'Z')) 
	{ 
		c = c - 'A' + 'a'; 
	}    
	return c; 
}

int mytoupper(int c) 
{ 
	if ((c >= 'a') && (c <= 'z'))
	{ 
		c = c - 'a' + 'A'; 
	} 
	return c; 
}






int main()
{

	char Name[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	// 문자열 길이

	cout << (&(Name));


	  
	int Count = 0;
	for (int i = 0)






		for (int i = 0; i < Name.size(); i++)
		{
		 Name[i] = mytolower(Name[i]); 
		} 
		 
    	cout << "ToLower : " << Name << endl;   

	    for (int i = 0; i < Name.size(); i++) 
	    { 
		 Name[i] = mytoupper(Name[i]); 
		}   
		cout << "ToUpper : " << Name << endl;      















		return 0;
}


	