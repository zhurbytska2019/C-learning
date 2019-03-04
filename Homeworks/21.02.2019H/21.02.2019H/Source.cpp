//////////////////////////////////////// 21.02.2019 HOMEWORK ///////////////////////////////////////
	/*
	Äàíî äâà ìàñèâà: À[n] è B[m]. Óòâîðèòè òðåò³é ìàñèâ ì³í³ìàëüíîãî ìîæëèâîãî ðîçì³ðó, ó ÿêîìó ç³áðàòè:
	Åëåìåíòè îáîõ ìàñèâ³â;
	Ñï³ëüí³ ýëåìåíòè îáîõ ìàññèâîâ;
	Åëåìåíòè ìàñèâó A, ÿê³ íå çóñòð³÷àþòüñÿ ó B;
	Åëåìåíòè ìàñèâó Â, ÿê³ íå çóñòð³÷àþòüñÿ ó À;
	Åëåìåíòè ìàñèâ³â A ³ B, ÿê³ íå º ñï³ëüíèìè äëÿ íèõ (òîáòî îáºäíàííÿ ðåçóëüòàò³â äâîõ ïîïåðåäí³ ðåçóëüòàò³â).

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