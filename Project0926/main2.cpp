#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand((unsigned int)time(0)); // ���� ���̺� ����
	int iAns[9] = {}; // ���� �迭 ����

	for (int i = 0; i < 9; i++)
	{
		iAns[i] = i + 1;
	}

	int iTemp, idx1, idx2;
	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 9;
		idx2 = rand() % 9;

		iTemp = iAns[idx1];
		iAns[idx1] = iAns[idx2];
		iAns[idx2] = iTemp;
	}
	// ���信 ���ڸ� �Է����ְ� shuffle���� �� �ؼ� index 0,1,2�� ������ �� 3���� ����Ǿ� ����. 

	int iNum[3] = {};

	int s_count = 0; // ��Ʈ����ũ�� �� ī��Ʈ ����
	int b_count = 0;
	cout << endl;
	cout << "*" << "\t" << "*" << "\t" << "*" << endl;

	while (true)
	{
		cout << "���ڸ� �Է��Ͻÿ�.(1~9, ����:0) :"; // ù��° ���� �Է¹���
		cin >> iNum[0] >> iNum[1] >> iNum[2];
		if (iNum[0] == 0 || iNum[1] == 0 || iNum[2] == 0) // 0�� �־��� ��� ���� ����.
		{
			cout << "���� ����" << endl;
			break;
		}
		else if (iNum[0] >= 10 || iNum[0] < 0
			|| iNum[1] >= 10 || iNum[1] < 0
			|| iNum[2] >= 10 || iNum[2] < 0) // ������ �Ѿ�� ��� �ٽ� �Է�.
		{
			cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�." << endl;
			continue;
		}
		if (iNum[0] == iNum[1] || iNum[0] == iNum[2] || iNum[1] == iNum[2])
		{
			cout << "�ߺ��� ���ڸ� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�." << endl;
			continue;
		}

		s_count = 0, b_count = 0; // strike�� ball ī��Ʈ �ʱ�ȭ

		for (int i = 0; i < 3; i++) //Ans�� Num �� ���� i�� Ans, j�� Num�̶�� ����.
			//���� ���� �ϳ��� �Է��� ���� 3���� ����
		{
			for (int j = 0; j < 3; j++)
			{
				if (iAns[i] == iNum[j])
					// ���ڰ� ������ ��ġ�� ã�Ƽ� ���� ��ġ�� strike,
					//�ٸ� ��ġ�� ball
				{
					if (i == j)
						s_count++;
					else
					{
						b_count++;
						break;

					}
				}
			}
		}

		if (s_count == 0 && b_count == 0) // ��ġ�ϴ� ���ڰ� ���� Out�� ���
		{
			cout << "Out" << "\t" << iNum[0] << "\t" << iNum[1]
				<< "\t" << iNum[2] << endl;
		}
		else if (s_count == 3) // ������ ���
		{
			cout << "�����Դϴ�. ���� :" << "\t" << iNum[0] << "\t"
				<< iNum[1] << "\t" << iNum[2] << endl;
			break;
		}
		else // Strike�� Ball ���� ���
		{
			cout << s_count << "Strike" << "\t" << b_count << "Ball"
				<< "\t" << iNum[0] << "\t" << iNum[1] << "\t" << iNum[2] << endl;
		}
	}
	return 0;
}