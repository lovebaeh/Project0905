#include <iostream>

using namespace std;

//entry point
int main()
{
	// 모든 언어 공통
//	// 자료형
//	// 산술연산자
//
//
//
//
	//int x = 100;    //정수 숫자 4칸에 저장하자 (-2^(32-1) ~ 0 ~ 2^(32-1)-1)
			  //메모리 (0~ 2^64)내에 4칸 잡아줘
			  //4byte 저장 (숫자, 정수)
			  // 
	//char x;  문자 자료형 변수 1byte 저장 (숫자 출력 문자 (ascII))
	// 
	//float x; 실수 소수 숫자 4칸에 저장하자
			   //4byte 저장(숫자, 실수)

	//산술연산자 (+, -, *, /, %)   


	//char x = 'A' + 1;  // A로 출력 숫자 65을 저장한다. 소문자 a : 97
	//char x = 256;
	//unsigned char x = 0b100000000;

	//int Gold = 0;
	//int Gpld2 = 0;
	//char Type = 0;
	//float Temperture = 24.1f;
	int GoldAndFinsh = 100;
	int gold = 100;


	int A = 100;

	unsigned char x = (char)A;  // 소문자 d  형변환


	std::cout << x << std::endl; // &x 메모리 저장 위치

	std::cout << gold << std::endl;



	std::cout << "Hello World" << std::endl;

	std::cout << 100 << std::endl;

	std::cout << 1000 << std::endl;


	int A = 0;

	int B = 0;

	/*float C = 3.5f;
	char D = 'A';
	A = static_cast<int>(C);
	B = (int)D;*/



	//cout << static_cast<int>(3.5f) << endl;



	std::cin >> A; // A값을 콘솔창에 입력하세요

	std::cin >> B; // B값을 콘소창에 입력하세요





	std::cout << A + B << std::endl;

	std::cout << A - B << std::endl;

	std::cout << A * B << std::endl;

	std::cout << (float)A / (float)B << std::endl;

	std::cout << A % B << std::endl;



	return 0;

}
// ctrl + k,c 주석
// ctrl + k,u 주석 풀기
