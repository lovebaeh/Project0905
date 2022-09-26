#include <iostream>
#include <vector>

using namespace std;

template<typename CustomType>

class Store
{
public:
	CustomType Number;
};

class MyData
{
	int Number;

};




int main()
{
	Store<int> StoreI;
	StoreI.Number = 1;
	cout << StoreI.Number << endl;

	Store<float> StoreF;
	StoreF.Number = 1;
	cout << StoreF.Number << endl;

	Store<char> StoreC;
	StoreC.Number = 1;
	cout << StoreC.Number << endl;
}
