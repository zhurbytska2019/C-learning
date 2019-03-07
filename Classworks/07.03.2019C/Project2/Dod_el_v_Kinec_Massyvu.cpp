#include <iostream>
#include <ctime>
using namespace std;


void Fill(int *const arr, const int size) //zahystyly funkciu vid zminy rozmiru const!!! //constantnyi vkazivnyk int * const arr
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

void Push(int *&arr, int size)  //funkcija dodavannia elementu v kinec masyvu
{
	cout << "What value do you want to add" << endl;
	int value = 0;
	cin >> value;
	int *tmp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		tmp[i] = arr[i];
	}

	tmp[size] = value;

	delete[] arr;
	arr = tmp;
}

int main()
{


	srand(unsigned(time(NULL)));
	int size = 0;
	cout << "Enter arr size" << endl;
	cin >> size;
	cout << "===========================>" << endl;
	int *arr = new int[size];

	cout << "arr addres" << arr << endl;
	Fill(arr, size);
	Print(arr, size);

	Push(arr, size);	//funkcija dodavannia elementu v kinec masyvu
	Print(arr, size + 1); //funkcija vyvedennia novogo masyvu



	delete[] arr;
	system("pause");
	return 0;
}