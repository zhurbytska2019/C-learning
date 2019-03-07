////////////////////////// 5.03.2019C ClassWork ///////////////////////
//////////
////#include <iostream>
////#include <ctime>
////using namespace std;

//======================= DEMO 2 ======================>
////////void Fill(int *const arr, const int size) //zahystyly funcciu vid zminy rozmiru const!!! //constantnyi vkazivnyk int * const arr
////////{	
////////	
////////	cout << "arr addres" << arr << endl;
////////	for (int i = 0; i < size; i++)
////////		{
////////			arr[i] = rand() % 10;
////////			
////////		}
////////}
////////
////////void Print(int *const arr, const int size) 
////////{	
////////	for (int i = 0; i < size; i++)
////////	{		
////////		cout << "arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
////////	}
////////}
////////
////////void Push(int *&arr, int size)
////////{
////////	cout << "What value do you want to add" << endl;
////////	int value = 0;
////////	cin >> value;
////////	int *tmp = new int[size + 1];
////////	for (int i = 0; i < size; i++)
////////	{
////////		tmp[i] = arr[i];
////////	}
////////	
////////	tmp[size] = value;
////////	
////////	delete[] arr;
////////	arr = tmp;
////////}

//======================= DEMO 2 ======================>

//======================= DEMO 3 ======================>
//////void Fill(int *const arr, const int size) //zahystyly funcciu vid zminy rozmiru const!!! //constantnyi vkazivnyk int * const arr
//////{	
//////	
//////	for (int i = 0; i < size; i++)
//////		{
//////			arr[i] = rand() % 10;
//////			
//////		}
//////}
//////
//////void Print(int *const arr, const int size) 
//////{	
//////	cout << "arr addres" << arr << endl;
//////	for (int i = 0; i < size; i++)
//////	{		
//////		cout << "arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
//////	}
//////}
//////======================= DEMO 3 ======================>


////////////int main()
////////////{
////////////	srand(unsigned(time(NULL)));



	//////======================= DEMO 1 ======================>
	////int size = 0;
	////cout << "enter arr size" << endl;
	////cin >> size;
	////cout << "==========================>" << endl;
	////int *arr = new int[size]; //

	////for (int i = 0; i < size; i++)
	////{
	////	arr[i] = rand() % 10;
	////	cout << "arr [" << i << "] = " << arr[i] << "\t" << arr + i << endl;
	////}
	////delete[] arr;	//vydalyly masyv z operatyvnoi pamjati

	//////======================= DEMO 1 ======================>
	//======================= DEMO 2 ======================>
	/*int size = 0;
	cout << "Enter arr size" << endl;
	cin >> size;
	cout << "===========================>" << endl;
	int *arr = new int[size];
	
	cout << "arr addres" << arr << endl;
	Fill(arr, size);
	Print(arr, size);

	Push(arr, size);
	Print(arr, size+1);

	delete[] arr;*/
	//======================= DEMO 2 ======================>
	//======================= DEMO 3 ======================>
//Stvoryty dva masyvy. Zapovnuemo rand/ Vyvodymo na ekran. Kopiuemo odyn v inshuy
	/////*int size = 5;
	////int *arr1 = new int[5];
	////int *arr2 = new int[5];

	////Fill(arr1, size);
	////Fill(arr2, size);
	////cout << "Arr1===========================>" << endl;
	////Print(arr1, size);
	////cout << "Arr2===========================>" << endl;
	////Print(arr2, size);

	////delete[] arr1;
	////arr1 = new int[size];

	////for (int i = 0; i < size; i++)
	////{
	////	arr1[i] = arr2[i];
	////}

	////cout << "Arr1===========================>" << endl;
	////Print(arr1, size);
	////cout << "Arr2===========================>" << endl;
	////Print(arr2, size);

	////delete[] arr1;
	////delete[] arr2;*/

	//======================= DEMO 3 ======================>



	/*system("pause");
	return 0;
}*/


/////////////////////////// TASK vid vykladacha 1 //////////////////////////
/*Написати функції для роботи з динамічним одновимірним масивом :
1) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
2) Доповнення масиву одним елементом.
Меню*/


