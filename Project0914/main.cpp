#include <iostream>

using namespace std;

//entry point
int main()
{
	// ��� ��� ����
//	// �ڷ���
//	// ���������
//
//
//
//
	//int x = 100;    //���� ���� 4ĭ�� �������� (-2^(32-1) ~ 0 ~ 2^(32-1)-1)
			  //�޸� (0~ 2^64)���� 4ĭ �����
			  //4byte ���� (����, ����)
			  // 
	//char x;  ���� �ڷ��� ���� 1byte ���� (���� ��� ���� (ascII))
	// 
	//float x; �Ǽ� �Ҽ� ���� 4ĭ�� ��������
			   //4byte ����(����, �Ǽ�)

	//��������� (+, -, *, /, %)   


	//char x = 'A' + 1;  // A�� ��� ���� 65�� �����Ѵ�. �ҹ��� a : 97
	//char x = 256;
	//unsigned char x = 0b100000000;

	//int Gold = 0;
	//int Gpld2 = 0;
	//char Type = 0;
	//float Temperture = 24.1f;
	int GoldAndFinsh = 100;
	int gold = 100;


	int A = 100;

	unsigned char x = (char)A;  // �ҹ��� d  ����ȯ


	std::cout << x << std::endl; // &x �޸� ���� ��ġ

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



	std::cin >> A; // A���� �ܼ�â�� �Է��ϼ���

	std::cin >> B; // B���� �ܼ�â�� �Է��ϼ���





	std::cout << A + B << std::endl;

	std::cout << A - B << std::endl;

	std::cout << A * B << std::endl;

	std::cout << (float)A / (float)B << std::endl;

	std::cout << A % B << std::endl;



	return 0;

}
// ctrl + k,c �ּ�
// ctrl + k,u �ּ� Ǯ��
