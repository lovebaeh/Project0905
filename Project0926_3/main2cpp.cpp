#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <algorithm>
// STL


using namespace std;

// 2 총갯수

// 3
// 5  저장

// 3
// 5  출력



int main()
{
	//arry<int, 3> Data;
	vector<int> Data;
	Data.push_back(3);
	Data.push_back(2);
	Data.push_back(1);     //  템플릿 추가저장


	

	/*cout << Data[0] << endl;
	cout << Data[0] << endl;
	cout << Data[0] << endl;
	cout << Data.size() << endl;*/
	for (int i = 0; i < Data.size(); ++i)
	{
		cout << Data[i] << endl;      // 출력
		       
	}

	return 0;

}