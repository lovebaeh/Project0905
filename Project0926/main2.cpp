#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand((unsigned int)time(0)); // 난수 테이블 생성
	int iAns[9] = {}; // 정답 배열 생성

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
	// 정답에 숫자를 입력해주고 shuffle까지 다 해서 index 0,1,2에 랜덤한 수 3개가 저장되어 있음. 

	int iNum[3] = {};

	int s_count = 0; // 스트라이크와 볼 카운트 생성
	int b_count = 0;
	cout << endl;
	cout << "*" << "\t" << "*" << "\t" << "*" << endl;

	while (true)
	{
		cout << "숫자를 입력하시오.(1~9, 종료:0) :"; // 첫번째 숫자 입력받음
		cin >> iNum[0] >> iNum[1] >> iNum[2];
		if (iNum[0] == 0 || iNum[1] == 0 || iNum[2] == 0) // 0을 넣었을 경우 게임 종료.
		{
			cout << "게임 종료" << endl;
			break;
		}
		else if (iNum[0] >= 10 || iNum[0] < 0
			|| iNum[1] >= 10 || iNum[1] < 0
			|| iNum[2] >= 10 || iNum[2] < 0) // 범위를 넘어갔을 경우 다시 입력.
		{
			cout << "잘못 입력하셨습니다. 다시 입력하십시오." << endl;
			continue;
		}
		if (iNum[0] == iNum[1] || iNum[0] == iNum[2] || iNum[1] == iNum[2])
		{
			cout << "중복된 숫자를 입력하셨습니다. 다시 입력하십시오." << endl;
			continue;
		}

		s_count = 0, b_count = 0; // strike와 ball 카운트 초기화

		for (int i = 0; i < 3; i++) //Ans와 Num 답 대조 i를 Ans, j를 Num이라고 생각.
			//정답 숫자 하나씩 입력한 숫자 3개와 대조
		{
			for (int j = 0; j < 3; j++)
			{
				if (iAns[i] == iNum[j])
					// 숫자가 같으면 위치를 찾아서 같은 위치면 strike,
					//다른 위치면 ball
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

		if (s_count == 0 && b_count == 0) // 일치하는 숫자가 없어 Out일 경우
		{
			cout << "Out" << "\t" << iNum[0] << "\t" << iNum[1]
				<< "\t" << iNum[2] << endl;
		}
		else if (s_count == 3) // 정답일 경우
		{
			cout << "정답입니다. 정답 :" << "\t" << iNum[0] << "\t"
				<< iNum[1] << "\t" << iNum[2] << endl;
			break;
		}
		else // Strike와 Ball 갯수 출력
		{
			cout << s_count << "Strike" << "\t" << b_count << "Ball"
				<< "\t" << iNum[0] << "\t" << iNum[1] << "\t" << iNum[2] << endl;
		}
	}
	return 0;
}