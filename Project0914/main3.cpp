
/*int Korean[10] = { 0, };


	for (int i = 0; i < 10; ++i)
	{
		continue;
		Korean[i] = 10;
		break;
	}*/





//#include <iostream>
//
//	using namespace std;
//
//	int main()
//	{
//
	
	/*int Sum = 0;
	


	for (int i = 1;  i <= 100; i++)
	{
		Sum += i;
	}

	cout << Sum  << endl;*/


	/*int Sum = 0;


		for (int i = 2; i <= 100; i = i + 2)
		{
			Sum += i;
		}

		cout << "1~100까지의 짝수의 합" << Sum << endl;


		*/



	/*int Sum = 0;


		for (int i = 1; i <= 100; i=i +2 )
		{
			Sum += i;
		}

		cout << "1~100까지의 홀수의 합" << Sum << endl;*/


	
//#include <iostream> //표준 
//
//using namespace std;
//
//int main()
//{
//	//1. Array(게임, 비니지스 로직) 0부터 시작
//	//2. 횟수(알고리즘) 1, <=
//
//
//    int a; 
//
//	cout << "원하는 수를 입력하세요." << endl;
//	cin >> a;
//	    
//	    // 다섯줄
//		for (int i = 1; i <= a; i++)
//		{
//			//줄수에 맞게 찍고 줄 바꾼다.
//			for (int j = 0; j < i; j++)
//			{
//				cout << "*";
//
//			}
//			
//			cout << "" << endl;
//		}
//
//
//	return 0;
//  }
		


//*
//**
//***
//****
//*****




//#include <iostream> 
//
//using namespace std;
//
//int main()
//{
//   for (int i = 1; i <= 5; i++)
//   {
//	    for (int j = 0; j < i; j++)
//	    {
//		  cout << "*";
//	    }
//	  cout << "" << endl;
//    }
//
//   for (int i = 1; i <= 4; i++)
//   {
//		for (int j = i; j <= 4; j++)
//		{ 
//			cout << "*";
//		}
//		cout << "" << endl;	
//	}
//   cout << "" << endl;
//
//   for (int i = 1; i <= 5; i++)
//   {
//	   for (int j = i; j <= 5 - 1; j++)
//	   {
//		   cout << " ";
//	   }
//
//	   for (int j = 1; j <= i; j++)
//	   {
//		   cout << "*";
//	   }
//	   cout << endl;
//   }
//
//      return 0;
//}










//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//    int a;
//
//	cout << "원하는 수를 입력하세요." << endl;
//	cin >> a;
//
//		for (int i = 1; i <= a; i++)
//		{	
//
//			for (int j = i; j <= a-1; j++)
//			{
//				cout << " ";
//				
//			}
//				for (int j = 1; j <= i; j++)
//				{
//					cout << "*";
//			    }
//
//				cout << endl;
//		}
//
//
//	return 0;
//  }


//    *
//   **
//  ***
// ****
//*****



//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	    for (int i = 1; i <= 5; i++)
//		{	
//
//			for (int j = i; j <= 5-1; j++)
//			{
//				cout << " ";				
//			}
//				for (int j = 1; j <= 2*i-1; j++)
//				{
//					cout << "*";
//			    }
//			cout << endl;
//		}
//
//		for (int i = 4; i >= 1; i--)
//		{
//
//			for (int j = 0; j <= 4 - i; j++)
//			{
//				cout << " ";
//			}
//			   for (int j = 1; j <= 2*i-1; j++)
//			   {
//				    cout << "*";
//			   }
//			cout << endl;
//		}
//		return 0;
//  }











//#include <iostream>
//
//using namespace std;
//
//int main()
//{


//		int a;
//
//		cout << "원하는 수를 입력하세요." << endl;
//		cin >> a;
//
//		for (int i = 1; i <= a; i++)
//		{
//			for (int j = i; j <= a; j++)
//			{ 
//				cout << "*";
//			}
//				cout << "" << endl;
//			
//		}
//			
//	return 0;
//}

//*****
//****
//***
//**
//*





//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//		int a;
//
//		cout << "원하는 수를 입력하세요." << endl;
//		cin >> a;
//
//		
//		       for (int i = 1; i <= a; i++)
//				{
//				
//			        for (int j = 1; j <= i-1; j++)
//				    {
//					    cout << " ";
//						
//				    }
//						for (int j = i; j <= a; j++)
//						{
//							cout << "*";
//						}
//
//						cout << endl;
//				}
//	return 0;
//}


//*****
// ****
//  ***
//   **
//    *




//#include <iostream>
//using namespace std;
//
//int main()
//{
//		int a;
//
//		cout << "원하는 수를 입력하세요." << endl;
//		cin >> a;
//	
//		       for (int i = 1; i <= a; i++)
//				{
//				   int SpaceNum = a - i;
//				   
//			          for (int j = 1; j <= SpaceNum; j++)
//				      {
//					    cout << " ";					
//				      }
//
//			    	int StarNum = 2 * i - 1;
//
//					    	for (int j = 1; j <= StarNum; j++)
//					    	{
//							   cout << "*";
//					        }
//
//						cout << endl;
//				}
//	return 0;
//}


//     *
//    ***
//   *****
//  *******
// *********




//#include <iostream>
//using namespace std;
//
//int main()
//{
//		int a;
//
//		cout << "원하는 수를 입력하세요." << endl;
//
//		cin >> a;
//
//		for (int i = a; i >= 1; i--)
//		{
//		   int SpaceNum = a - i;
//
//	          for (int j = 1; j <= SpaceNum; j++)
//		      {
//			     cout << " ";					
//		      }
//
//	    	int StarNum = 2 * i - 1;
//
//			    	for (int j = 1; j <= StarNum; j++)
//	    			{
//					   cout << "*";
//				    }
//			cout << endl;
//		}
//			return 0;
//}


// *********
//  *******
//   *****
//    ***
//     *







//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//	int Sum = 0;
//
//	int Add = 0;
//
//	int Sub = 0;
//
//
//		for (int j = 2; j <= 100; j += 2)
//		{
//			Add += j;
//		}
//
//		for (int i = 1; i <= 100; i += 2)
//		{
//			Sub += i;
//	    }
//
//		Sum = Sub - Add;
//
//	    cout << Sum  << endl;
//
//	
//		return 0;
//} 



#include <iostream>
#define COUNT  10


using namespace std;

int main()
{
	

	int Score[COUNT];
	int Total = 0;
	for (int i = 0; i < COUNT; ++i)
	{
		Total += Score[i];
	}

	return 0;

}





















