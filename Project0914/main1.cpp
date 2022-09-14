//#include <iostream>
//
//using namespace std;
//
//int main()
//{
	/*int Korean = 100;
	int English = 90;
	int Mathmatics = 100;

	int Total = Korean + English + Mathmatics;


	float Average = ((float)Korean + (float)English
		+ (float)Mathmatics) / 3.0f;*/

	// float Average = (float)Total / 3.0f;

	//cout << Average << endl;


	//int Korean1[5] = { 10, 20, 30, 40, 50 }; //배열

		/*bool IsAlive = true;
		bool IsDead = false;

		if (IsAlive)
		{

			cout << "true" << endl;

		}
		else
		{

			cout << "false" << endl;


		}*/
		// >, <, >=, <=, ==, !=


	//cout << (10 < 9) << endl;


	/*int Korean1[10] = { 0, };
	

	for (int i = 0; i < 10; i = i + 1)
	{

		cin >> Korean1[i];
	}

	for (int i = 0; i < 10; i = i + 1)
	{

		cout << Korean1[i] << endl;
	}*/


	/*cout << Korean1[0] << endl;
	cout << Korean1[1] << endl;
	cout << Korean1[2] << endl;
	cout << Korean1[3] << endl;
	cout << Korean1[4] << endl;*/


 #include <iostream>
 
 using namespace std;
 
 int main()
 {
 
 	int Number = 0;
 
 	cin >> Number;
 

	if (Number == 0) 
	{	
		cout << "0입니다" << endl;
	}
	else
	{
		if (Number % 2 == 0)
		{
			cout << "짝수입니다" << endl;
		}
		else
		{
			cout << "홀수입니다" << endl;
		}
	}


	if (Number == 0)
	{
		cout << "0입니다" << endl;
	}
	else if (Number % 2 == 0)
	{
		cout << "짝수입니다" << endl;
	}
	else if (Number % 2 == 1)
	{
		cout << "홀수입니다" << endl;
	}
	else
	{
		cout << "그런거 없음" << endl;
	}

#include <iostream>

using namespace std;

int main()
{

	//DataType
	//bool
	//char
	//int
	//float
	//Operator
	//+, -, /, *, %
	//=
	//>,<..
	//if else
	//switch
	//And Or Not
	//&& || !

	/*bool Test = true && true  - > true
	bool Test = true && false - > false

	bool Test = true || true - > true
	bool Test = true || false - > true

	bool Test = !true - > false */



	
	int Score = 0;

	cin >> Score;

	/*Score = Score / 10;*/

	//100 ~ 90 A
	//89 ~ 80  B
	//79 ~ 70  C 
	//69 ~ 60  D
	//60 ~     F

	if (Score >= 9)
	{
		cout << "A 입니다" << endl;
	}
	else if (Score >= 8)
	{
		cout << "B 입니다" << endl;
	}
	else if (Score >= 7)
	{
		cout << "C 입니다" << endl;
	}
	else if (Score >= 6)
	{
		cout << "D 입니다" << endl;
	}
	else
	{
		cout << "F 입니다" << endl;
	}




	if (Score <= 100 && Score >= 90)
	{
		cout << "A 입니다" << endl;
	}
	else if (Score <= 89 && Score >= 80)
	{
		cout << "B 입니다" << endl;
	}
	else if (Score <= 79 && Score >= 70)
	{
		cout << "C 입니다" << endl;
	}
	else if (Score <= 69 && Score >= 60)
	{
		cout << "D 입니다" << endl;
	}
	else
	{
		cout << "F 입니다" << endl;
	}








	switch (Score)

	{

	case 10:
	case 9:
		cout << "A 입니다" << endl;
		break;

	case 8:
		cout << "B 입니다" << endl;
		break;

	case 7:
		cout << "C 입니다" << endl;
		break;

	case 6:
		cout << "D 입니다" << endl;
		break;


	default:
		cout << "F 입니다" << endl;
		break;






		return 0;




	

}
	//}













