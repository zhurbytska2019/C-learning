/////////////////////////////// CLASSWORK ////////////////////////////
/////////////////////////////// 21.02.2019 ///////////////////////////

//# include <iostream>
//using namespace std;
//
//
//int main()
//{
//	//Enter array at the cicle whith its adress
//
//	const int SIZE = 5;
//	int arr[SIZE] = { 2, 8, 16, 27, 92 };
//	for (int i= 0; i < SIZE; i++) {
//		cout << "arr[" << i << "] =   " << arr[i] << endl;
//	}
//	cout << "arr adress" << arr << endl;
//	/*//enter adress of the array/ 
/*ARRAY - ITS FROM THE BEGINING IS  A POINTER ON ADRESS AT THE MEMORY. THIS IS AN ADRESS OF THE ZERO (FIRST) ELEMENT 
OF THE ARRAY*/
//Масив це ізначально вказівник на адресу в пам'яті. ЦЕ АДРЕСА НУЛЬОВОГО (ПЕРШОГО) ЕЛЕМЕНТУ МАСИВА
//	THE NEXT ELEMENT OF THE ARRAY WILL HAVE AN ADRESS +4 BITES FROM THIS MININGS, IF THE ARRAY TYPE IS "INT"// 
/*НАСТУПНИЙ ЕЛЕМЕНТ МАСИВА БУДЕ МАТИ АДРЕСУ + 4 БАЙТИ ВІД ЦЬОГО ЗНАЧЕННЯ, ЯКЩО МАССИВ ТИПУ INT*/
//	
//	/*LET`S CREAT A POINTER ON THIS ARRAY  // CТВОРИМО ВКАЗІВНИК НА ЦЕЙ МАСИВ*/
//
//	int *pArr = arr;
//
//	for (int i = 0; i < SIZE; i++) {
//		cout << "arr[" << i << "] =   " << pArr[i] << endl;
//	}
//	cout << "pArr adress" << pArr << endl;
//
//	/*Enter first element of the array whith index arr[1]   //   Виведемо перший елемент массива з індексом  arr [1]*/
//	cout << "--------------------------------------------------\n Enter first element of the array whith index arr[1]\n" << endl;
//
//	cout << "arr[1] adress =  " << *(pArr + 1) << endl;
//	cout << "arr[2] adress =  " << *(pArr + 2) << endl;

////спосіб вивести адресу конкретного елементу массиву
////THE WAY TO PRINT AN ADRESS OF THE EXECTLY ELEMENT OF THE ARRAY:
//	cout << "arr[2] adress =  " << (pArr + 2) << endl;	
//
//	//enter at the cicle all adresses
//
//	cout <<"--------------------------------------------------\n enter at the cicle all adresses\n"<< endl;
//	for (int i = 0; i < SIZE; i++) {
//		cout << " arr[" << i << "] = adress " <<(pArr+i)<< endl;
//	}
//	system("pause");
//	return 0;
//}



/////////////////////// TASK 1///////////////////////////
	/*Дано цілочисельний одновимірний масив. Заповнити його,
	вивести на екран у прямому та зворотньому порядку та порахувати
	суму елементів з використанням вказівників. 
	
	Dano cilochyselnyi odnovymirnyi masyv. Zapovnyty jogo, vyvesty na ekran u priamomu ta zvorotniomu poriadku ta porahuvaty
	sumu elementiv z vykorystanniam vkazivnykiv.
	*/
	//////# include <iostream>
	//////using namespace std;
	//////
	//////
	//////int main()
	//////{
	//////	const int SIZE = 5;
	//////	int arr[SIZE] = { 5, 2, 4, 48, 3 };
	//////	int *pArr = arr;
	//////
	//////	cout << "Printing the arr" << endl;
	//////	for (int i = 0; i < SIZE; i++) {
	//////		cout << "arr[" << i << "] =   " << arr[i] << endl;
	//////	}
	//////	
	//////	cout << "Printing the arr at the revers order - в зворотньому порядку" << endl;
	//////
	//////	for (int i = 4; i >= 0; i--) {
	//////		cout << "arr[" << i << "] =   " << arr[i] << endl;
	//////	}
	//////	/*cout << "arr[1] adress =  " << *(pArr + 1) << endl;*/
	//////	int sum = 0;
	//////	cout << "Count the summ of the elements" << endl;
	//////	for (int i = 0; i < SIZE; i++) {
	//////		
	//////		sum += *(pArr+i);
	//////
	//////		/*cout << *(pArr + i) << endl;*/
	//////	}
	//////	cout << "Summ of the elements" <<sum<<endl;
	//////
	//////
	//////system("pause");
	//////return 0;
	//////}



	/////////////////////// TASK 2 ///////////////////////////
	/* Дано одновимірний масив. Знайти найбільше та найменше значення
	у масиві та поміняти їх у масиві місцями. Вивести перетворений
	масив на екран  
	
	Dano odnovymirnyi masyv. Znajty najbilshe ta najmenshe znachennia u massyvi ta pominaty ih u masyvi 
	misciamy. Vyvesty peretvorenyj masyv na ekran.
	
	*/

	//# include <iostream>
	//using namespace std;
	//
	//
	//int main()
	//{
	//
	//	int min = 10000;
	//	int max = 0;
	//
	//
	//	int minI = 0;//Created variable for index i mix element;
	//	int maxI = 0;//Created variable for index i max element;
	//
	//	int *pMax = &max;//Created pointer to maxI;
	//	int *pMin = &min;//Creater pointer to minI;
	//
	//	int *pMinI = &minI;//Creater pointer to minI;
	//	int *pMaxI = &maxI;//Created pointer to maxI;
	//
	//	
	//
	//	const int SIZE = 5;
	//	int arr[SIZE] = { 5, 2, 4, 48, 3 };
	//	int *pArr = arr;
	//
	//	cout << "Printing the arr" << endl;
	//	for (int i = 0; i < SIZE; i++) {
	//		cout << "arr[" << i << "] =   " << arr[i] << endl;
	//	}
	//
	//	cout << "Finding the max and the min element of the array" << endl;
	//	
	//
	//		
	//	for (int i = 0; i < SIZE; i++) {
	//		
	//		if (*(pArr + i) > *(pMax)) {
	//			*pMax = *(pArr + i);
	//			maxI = i;
	//		}
	//		
	//		if ( *(pArr + i) < *pMin) {
	//			*pMin = *(pArr + i);
	//			minI = i;
	//		}
	//	}
	//	cout << "Max [ " <<" i = "<< *pMaxI <<"] = " <<*pMax << endl;
	//	cout << "Min [ " << " i = " << *pMinI << "] = " << *pMin << endl;
	//
	//	cout << "Max arr = " << pArr[maxI] << endl;
	//	cout << "Min arr = " << pArr[minI] << endl;
	//
	//	cout << "\n Replase the max and the min elements of the array" << endl;
	//
	//	int temp = pArr[maxI];
	//	pArr[maxI] = pArr[minI];
	//	pArr[minI] = temp;
	//	
	//	for (int i = 0; i < SIZE; i++) {
	//		cout << "arr [ " << i << " ] = " << *(pArr + i) << endl;		
	//	}
	//	
	//	system("pause");
	//	return 0;
	//}


	/////////////////////// TASK 3 ///////////////////////////
		/*  Дано два масиви, впорядкованих по зростанню.
		Сформуйте третій масив, який складається з елементів
		масивів А і В, впорядкованих по зростанню. 
		
		Dano dva masyvy, vporiadkovani po zrostanniu. 
		Sformuite tretij masyv, jakyj skladaietsia z elementiv masyviv A i B, 
		vporiadkovanyh po zrostannu.
		*/

		//////////#include <iostream>
		//////////#include <ctime>
		//////////using namespace std;
		//////////
		//////////
		//////////void Fill(int arr[], const int SIZE);
		//////////void Sort(int arr[], const int SIZE, int *pTemp);
		//////////void Print(int arr[], const int SIZE);
		//////////void CreateNew(int arr1[], int arr2[], int arr3[], const int SIZE2);
		//////////
		//////////int main()
		//////////{
		//////////	srand(unsigned(time(NULL)));
		//////////	const int SIZE = 5;
		//////////	const int SIZE2 = SIZE * 2;
		//////////	int arr1[SIZE] = {};
		//////////	int arr2[SIZE] = {};
		//////////	int arr3[SIZE2] = {};
		//////////
		//////////	int *pArr1 = arr1;
		//////////	int *pArr2 = arr2;
		//////////	int *pArr3 = arr3;
		//////////
		//////////	int temp = 0;
		//////////	int *pTemp = &temp;
		//////////
		//////////	////filling the arrays with random numbers
		//////////
		//////////	Fill(arr1, SIZE);
		//////////	Fill(arr2, SIZE);
		//////////	///// Printing the arrays before sorting
		//////////	cout << "Printing the arrays before sorting" << endl;
		//////////	cout << "	array #1		" <<  endl <<endl;
		//////////	Print(arr1, SIZE);
		//////////	cout << "	array #2		" << endl << endl;
		//////////	Print(arr2, SIZE);
		//////////
		//////////	/////Sorning the arrays to the groing	
		//////////	Sort(arr1,SIZE,  pTemp);
		//////////	Sort(arr2, SIZE, pTemp);
		//////////
		//////////	////Printing the sorted array
		//////////	cout << "Printing the arrays after sorting" << endl;
		//////////	cout << "	array #1		" << endl<<endl;
		//////////	Print(arr1, SIZE);
		//////////	cout << "	array #2	" << endl << endl;
		//////////	Print(arr2, SIZE);
		//////////
		//////////	////Creating new array from the two another
		//////////	CreateNew(arr1, arr2, arr3, SIZE2);
		//////////	cout << "Printing the array 3 " << endl<<endl;
		//////////	Print(arr3, SIZE2);
		//////////	Sort(arr3, SIZE2, pTemp);
		//////////	Print(arr3, SIZE*2);
		//////////
		//////////	system("pause");
		//////////	return 0;
		//////////}
		//////////
		//////////
		//////////void Fill(int arr[], const int SIZE)
		//////////{
		//////////	for (int i = 0; i < SIZE; i++)
		//////////	{
		//////////		arr[i] = rand() % 20 + (-10);
		//////////	}
		//////////}
		//////////
		//////////void Sort(int arr[], const int SIZE, int *pTemp)
		//////////{
		//////////	for (int i = 0; i < SIZE - 1; i++)
		//////////	{
		//////////		for (int j = 0; j < SIZE - i - 1; j++)
		//////////		{
		//////////			if (arr[j] > arr[j + 1])
		//////////			{
		//////////				*pTemp = arr[j];
		//////////				arr[j] = arr[j + 1];
		//////////				arr[j + 1] = *pTemp;
		//////////			}
		//////////		}
		//////////	}
		//////////}
		//////////
		//////////void Print(int arr[], const int SIZE)
		//////////{
		//////////	for (int i = 0; i < SIZE; i++)
		//////////	{
		//////////		cout << arr[i] << "	";
		//////////	}cout << "	" << endl;
		//////////}
		//////////
		//////////	
		//////////void CreateNew(int arr1[], int arr2[], int arr3[], const int SIZE2)
		//////////{
		//////////	int tmp = 0;
		//////////	for (int i = 0; i < SIZE2; i++)
		//////////	{
		//////////		
		//////////		if (i < SIZE2/2) {
		//////////			arr3[i] = arr1[i];
		//////////		}
		//////////		else {
		//////////			arr3[i] = arr2[tmp];
		//////////			tmp++;
		//////////		}
		//////////		
		//////////
		//////////	}
		//////////
		//////////}


	//////////////////////////////////////// TASK 4 ///////////////////////////////////////
	/*
	Дано два масива: А[n] и B[m]. Утворити третій масив мінімального можливого розміру, у якому зібрати:
	Елементи обох масивів;
	Спільні элементи обох массивов;
	Елементи масиву A, які не зустрічаються у B;
	Елементи масиву В, які не зустрічаються у А;
	Елементи масивів A і B, які не є спільними для них (тобто об’єднання результатів двох попередні результатів). 
	
	Dano dva masyva: A[n] i B[m]. Utvoryty tretij masyv minimalno moglyvogo rozmiru, u jakomy zibraty:
	Elementy oboh masyviv;
	Spilni elementy oboh masyviv;
	Elementy masyvu A, jaki ne zustrichautsia u B;
	Elementy masyvu B, jaki ne zustrichautsia u A;
	Elementy masyviv A i B, jaki ne e spilnymy dlia nyh (tobto ob`ednannia rezultativ dvoh poperednih rezultativ).
	*/

#include <iostream>
#include <ctime>
using namespace std;


void Fill(int arr[], const int SIZE);
void Print(int arr[], const int SIZE);
void Create(int pArrA[], int pArrB[], int pArrC[], const int SIZE1, const int SIZE2, const int SIZE3);

void CommonEl(int pArrA[], int pArrB[], const int SIZE1, const int SIZE2);
void NotAppear(int pArrA[], int pArrB[], const int SIZE1, const int SIZE2);

void NotAppearB(int pArrA[], int pArrB[], const int SIZE1, const int SIZE2);

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE1 = 5;
	const int SIZE2 = 8;
	const int SIZE3 = SIZE1 + SIZE2;

	int arr1[SIZE1] = {};
	int arr2[SIZE2] = {};
	int arr3[SIZE3] = {};



	int *pArr1 = arr1;
	int *pArr2 = arr2;
	int *pArr3 = arr3;

	int temp = 0;
	int *pTemp = &temp;

	//filling the arrays with random numbers
	Fill(arr1, SIZE1);
	Fill(arr2, SIZE2);
	/// Printing the arrays

	cout << "\n	array #1		" << endl << endl;
	Print(arr1, SIZE1);
	cout << "\n	array #2		" << endl << endl;
	Print(arr2, SIZE2);

	cout << "\nElements of both arrays: " << endl << endl;
	Create(pArr1, pArr2, pArr3, SIZE1, SIZE2, SIZE3);
	Print(arr3, SIZE3);

	cout << "\nCommon elements of the array#1 and arr#2" << endl << endl;;
	CommonEl(pArr1, pArr2, SIZE1, SIZE2);

	cout << "\nElements of the array arr1, which not appears at arr2" << endl;
	NotAppear(pArr1, pArr2, SIZE1, SIZE2);

	cout << "\nElements of the array arr2, which not appears at arr1" << endl;
	NotAppearB(pArr1, pArr2, SIZE1, SIZE2);



	system("pause");
	return 0;
}


void Fill(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20 + 1;
	}
}


void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "	";
	}cout << "	" << endl;
}

void Create(int pArrA[], int pArrB[], int pArrC[], const int SIZE1, const int SIZE2, const int SIZE3)
{
	int tmp = 0;
	for (int i = 0; i < SIZE3; i++)
	{
		if (i < SIZE1)
		{
			*(pArrC + i) = *(pArrA + i);
		}
		else
		{
			*(pArrC + i) = *(pArrB + tmp);
			tmp++;
		}

	}
}

void CommonEl(int pArrA[], int pArrB[], const int SIZE1, const int SIZE2)
{

	for (int i = 0; i < SIZE1; i++)
	{

		for (int j = 0; j < SIZE2; j++)
		{

			if (*(pArrB + j) == *(pArrA + i))
			{

				cout << "Common Element arr1[ " << i << " ] = " << *(pArrA + i) << endl;
			}

		}


	}
}

void NotAppear(int pArrA[], int pArrB[], const int SIZE1, const int SIZE2)
{
	int k = 0;
	for (int i = 0; i < SIZE1; i++)
	{

		for (int j = 0; j < SIZE2; j++)
		{

			if (*(pArrA + i) != *(pArrB + j))
			{
				k++;
			}

		}
		if (k == SIZE2)
		{
			cout << "Not common element" << "[ " << i << " ] = " << *(pArrA + i) << endl;
		}

		k = 0;
	}
}

void NotAppearB(int pArrA[], int pArrB[], const int SIZE1, const int SIZE2)
{
	int k = 0;	//counter, jakyj rahue skilky raziv element masyvu A ne dorivnue elementu masuva B
	for (int i = 0; i < SIZE2; i++)
	{

		for (int j = 0; j < SIZE1; j++)
		{

			if (*(pArrB + i) != *(pArrA + j))
			{
				k++;
			}

		}
		if (k == SIZE1)
		{
			cout << "Not common element" << "[ " << i << " ] = " << *(pArrB + i) << endl;
		}

		k = 0;
	}
}