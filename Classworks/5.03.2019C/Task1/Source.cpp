#include <iostream>
#include <ctime>
using namespace std;

void Fill(int *const arr, const int size)
{
	cout << "arr addres" << arr << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;

	}
}

void Print(int *const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
	}
}
int main()
{
	int size = 5;
	int *arr = new int[5];


	Fill(arr, size);

	cout << "Arr1===========================>" << endl;
	Print(arr, size);


	delete[] arr;
	arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];
	}

	cout << "Arr1===========================>" << endl;
	Print(arr1, size);
	cout << "Arr2===========================>" << endl;
	Print(arr2, size);

	delete[] arr1;
	delete[] arr2;




	system("pause");
	return 0;
}