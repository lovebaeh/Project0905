#include <iostream>
#include <vector>
using namespace std;

//function overloading
//name mangling

   template <typename T, typename Y>  
   //template <class T, class Y>
T Add(T A, Y B)
{
	return A + B;
}

//int Add(int A, int B)
//{
//	return A + B;
//}


//float Add(float A, float B)
//{
//	return A + B;
//}
//
//char Add(char A, char B)
//{
//	return A + B;
//}

int main()
{
	cout << Add<int,int>(2, 5) << endl;
	cout << Add<float,float>(2.5f, 5.1f) << endl;
	cout << Add<char,char>((char)'A', (char)(10)) << endl;
	cout << Add<int, float>(2, 5.1f) << endl;

	return 0;


}