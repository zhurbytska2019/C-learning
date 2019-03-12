///////////////////////////07.03.2019///////////////////////////////
////////////// class work //////////////////////////////////////////
/////// dynamic arrays /////////////////////////////////////////////

//////#include <iostream>
//////#include <ctime>
//////using namespace std;
//////
//////void Fill_Arr(int *arr1, int size)
//////{
//////	for (int i = 0; i < size; i++)
//////	{
//////		arr1[i] = rand() % 10;
//////	}
//////}
//////
//////void Print_Arr(int *arr1, int size)
//////{
//////	for (int i = 0; i < size; i++)
//////	{
//////		cout << "El [" << i << "] = " << arr1[i] << endl;
//////	}
//////}
//////
//////void Push_Back_El(int *&arr1, int &size, int val)//dodae ostanniy element
//////{
//////	int *newArr = new int[size + 1];
//////
//////	for (int i = 0; i < size; i++)
//////	{
//////		newArr[i] = arr1[i];
//////	}
//////	newArr[size] = val;
//////	size++;
//////
//////	delete[] arr1;
//////	arr1 = newArr;
//////}
//////
//////void Push_Front_El(int *&arr1, int &size, int val1)//dodae pershyi element
//////{
//////	size++;
//////	int *newArr = new int[size + 1];
//////	newArr[0] = val1;
//////	for (int i = 1; i < size; i++)
//////	{
//////		newArr[i] = arr1[i - 1];
//////	}
//////	delete[] arr1;
//////	arr1 = newArr;
//////}
//////
//////void Delete_El(int *&arr1, int &size, int pos) //vydalae vkazanyi element
//////{
//////	int *newArr = new int[size];
//////	for (int i = 0; i < size; i++)
//////	{
//////		newArr[i] = arr1[i];
//////	}
//////	size--;
//////	for (int i = pos; i < size; i++)
//////	{
//////		newArr[i] = newArr[i + 1];
//////	}
//////	delete[] arr1;
//////	arr1 = newArr;
//////}
//////
//////void Add_El(int *&arr1, int &size, int pos1, int val2) //dodae vkazanyi element
//////{
//////	int *newArr = new int[size];
//////	for (int i = 0; i < size; i++)
//////	{
//////		newArr[i] = arr1[i];
//////	}
//////	size++;
//////	for (int i = 0; i < pos1; i++)
//////	{
//////		newArr[i] = arr1[i];
//////	}
//////
//////	newArr[pos1] = val2;
//////
//////	for (int i = pos1 + 1; i < size; i++)
//////	{
//////		newArr[i] = arr1[i - 1];
//////	}
//////
//////	delete[] arr1;
//////	arr1 = newArr;
//////}
//////
//////void Delete_El_from_the_end(int *&arr1, int &size) //vydalae ostanniy element
//////{
//////
//////	int *tmpArr = new int[size-1];
//////	for (int i = 0; i < size; i++)
//////	{
//////		tmpArr[i] = arr1[i];
//////	}	
//////	size--;
//////	for(int i=0; i<size; i++)
//////	{
//////		tmpArr[i] = arr1[i];
//////	}
//////
//////	delete[] arr1;
//////	arr1 = tmpArr;
//////}
//////
//////void Delete_first_El(int *&arr1, int &size) //vydalae pershyj element
//////{
//////	int *newArr = new int[size];
//////	for (int i = 0; i < size; i++)
//////	{
//////		newArr[i] = arr1[i];
//////	}
//////	size--;
//////	for (int i = 0; i < size; i++)
//////	{
//////		newArr[i] = newArr[i + 1];
//////	}
//////	delete[] arr1;
//////	arr1 = newArr;
//////}
//////
//////
//////
//////int main()
//////{
//////	cout << "\t\t\t[ work with arrays ]" << endl;
//////	srand(unsigned(time(NULL)));
//////	int size = 0;
//////	cout << "Enter amount of elements in array: ";
//////	cin >> size;
//////	int *arr1 = new int[size];
//////
//////	Fill_Arr(arr1, size);
//////	Print_Arr(arr1, size);
//////	cout << endl;
//////
//////	cout << "\tActions with array:\n\n[ 1 ] - add element in the end.\n[ 2 ] - add element in the front.\n[ 3 ] - delete element.\n[ 4 ] - add element into the array." << endl;
//////	cout << "[ 5 ] - delete element from the end of array. \n[ 6 ] - delete first element of the array.\n" << endl;
//////	int choise = 0;
//////	cin >> choise;
//////	if (choise == 1)
//////	{
//////		cout << "Enter one number: ";
//////		int val = 0;
//////		cin >> val;
//////		Push_Back_El(arr1, size, val);
//////		Print_Arr(arr1, size);
//////	}
//////	if (choise == 2)
//////	{
//////		cout << "Enter one number: ";
//////		int val1 = 0;
//////		cin >> val1;
//////		Push_Front_El(arr1, size, val1);
//////		Print_Arr(arr1, size);
//////	}
//////	if (choise == 3)
//////	{
//////		cout << "From what position delete element?: " << endl;
//////		int pos = 0;
//////		cin >> pos;
//////		Delete_El(arr1, size, pos);
//////		Print_Arr(arr1, size);
//////	}
//////	if (choise == 4)
//////	{
//////		cout << "In what position to add element?: " << endl;
//////		int pos1 = 0;
//////		cin >> pos1;
//////		cout << "Enter number for adding: ";
//////		int val2 = 0;
//////		cin >> val2;
//////		Add_El(arr1, size, pos1, val2);
//////		Print_Arr(arr1, size);
//////	}
//////	if (choise == 5)
//////	{
//////		Delete_El_from_the_end(arr1, size); //vydalae ostanniy element
//////		Print_Arr(arr1, size);
//////	}
//////	if (choise == 6) //delete first element of the array
//////	{
//////		cout << "Deleting element from the beginning" << endl;
//////		Delete_first_El(arr1, size);
//////		Print_Arr(arr1, size);
//////	}
//////
//////
//////	system("pause");
//////	return 0;
//////}



#include <iostream>
#include <ctime>
using namespace std;

void Fill(int *const arr, const int size)
{

	
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

void Add_Blok_El(int *&arr, int size)
{
	cout << "How many elements you will enter" << endl;
	int number = 0;
	cin >> number;
	int *BlokArr = new int[number];

	cout << "Enter element" << endl;

	for (int i = 0; i < number; i++)
	{		
		cin >> BlokArr[i];				
	}





}


int main()
{
	srand(unsigned(time(NULL)));
	int size = 0;
	cout << "Enter arr size" << endl;//asking user about size of array
	cin >> size;//user enter the size
	cout << "===========================>" << endl;
	int *arr = new int[size];//created dynamic array

	
	Fill(arr, size);
	Print(arr, size);
	Add_Blok_El(arr, size);
	

	system("pause");
	return 0;
}

