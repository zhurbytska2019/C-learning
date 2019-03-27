/*
HOMEWORK
1) Написати функції для роботи з динамічним одновимірним масивом :
a) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні[-12..56].
Функція повертає адресу створеного масиву.
b) Виводу масиву
c) Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.*/

#include <iostream>
#include <ctime>
using namespace std;


void Fill(int *const arr, const int size) //zahystyly funcciu vid zminy rozmiru const!!! //constantnyi vkazivnyk int * const arr
{
	cout << "arr addres" << arr << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 68 + (-12);

	}
}

void Print(int *const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
	}
}

void PushEl(int *&arr, int &size, int place, int val2)
{
	int *newArr1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArr1[i] = arr[i];
	}
	size++;
	for (int i = 0; i < place; i++)
	{
		newArr1[i] = arr[i];
	}

	newArr1[place] = val2;

	for (int i = place + 1; i < size; i++)
	{
		newArr1[i] = arr[i - 1];
	}

	delete[] arr;
	arr = newArr1;
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


	cout << "Where do you want to add the element?: " << endl;
	int place = 0;
	cin >> place;
	cout << "Enter number to add: ";
	int number = 0;
	cin >> number;
	PushEl(arr, size, place, number);
	Print(arr, size);


	delete[] arr;

	system("pause");
	return 0;
}
