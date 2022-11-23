#include <iostream>
#include <ctime>
#include <list>
#include <iterator>
using namespace std;

int main()
{
	list <int> mylistik;
	int need = 15;
	srand(time(0));
	const int size = 100;
	int arr[100]{};
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50 + 3;
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 11 || arr[i] == 12 || arr[i] == 13 || arr[i] == 14)
		{
			mylistik.push_back(arr[i]);
		}
	}
	for (auto L_Iter = mylistik.begin(); L_Iter != mylistik.end(); L_Iter++)
	{
		cout << *L_Iter << " ";
	}
}

