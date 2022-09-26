#include <iostream>
#include <vector> //TArray
#include <list>
#include <set> //TSet

using namespace std;

int main()
{
	vector<int> Store;
	list<int> Store2;
	set<int> Store3;

	srand(static_cast<unsigned int>(time(nullptr)));  //랜덤으로 수를 불러올때

	int Count = rand() % 10 + 1;
	//cin >> Count;

	for (int i = 0; i < Count; ++i)
	{
		Store.push_back(rand() % 100);    //vector
		Store2.push_back(rand() % 100);  //list
		Store3.insert(rand() % 100);       //set
	}

	//for (auto Value : Store3)
	//{
	//	cout << Value << endl;
	//}

	for (auto iter = Store3.rbegin(); iter != Store3.rend(); ++iter)
	{
		cout << *iter << endl;
	}


	//iterator
	//for (auto iter = Store.rbegin(); iter != Store.rend(); ++iter)     //숫자 거꾸로
	//{
	//	cout << *iter << endl;
	//}

	//for (auto iter = Store2.rbegin(); iter != Store2.rend(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//c++ 14
	//for (auto Value : Store)
	//{
	//	cout << Value << endl;
	//}




	return 0;
}