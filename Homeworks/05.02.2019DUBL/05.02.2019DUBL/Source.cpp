//////////////////////////////// 5.02.2019 HOMEWORK ///////////////////////////
/*Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.
	Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
		функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-26..54]
		функцію Print(), яка виводить елементи масиву на екран
		перевантажені функції:
	-для знаходження суми елементів масиву
		- для знаходження мінімального елемента масиву до вказаної верхньої межі проміжку
		(від початку до вказаного індексу)*/

#include <iostream>;
#include <ctime>;
using namespace std;

int res = 0;//rezultat obchyslennia

void FillArray(int arr[], const int SIZE1) {
	srand(time(NULL));
	for (int i = 0; i < SIZE1; i++) {
		 arr[i] = rand() % 71 + (-26);		
	}
	
}

void FillArray(double arr[], const int SIZE1) {// perevantazhena funkcia
	srand(time(NULL));
	for (int i = 0; i < SIZE1; i++) {
		arr[i] = rand() % 71 + (-26);
	}
}


void PrintArray(int arr[], const int SIZE1) {
	for (int i = 0; i < SIZE1; i++) {
		cout << arr[i]<<"	";

	}cout << endl;
}

void PrintArray(double arr[], const int SIZE1) {//perevantazhena funkcia Print.
	for (int i = 0; i < SIZE1; i++) {
		cout << arr[i] << "	";

	}cout << endl;
}


void FillArray2(int arr[], const int SIZE2) {
	srand(time(NULL));
	for (int i = 0; i < SIZE2; i++) {
		arr[i] = rand() % 71 + (-26);
	}
}

void PrintArray2(int arr[], const int SIZE2) {
	for (int i = 0; i < SIZE2; i++) {
		cout << arr[i] << "	";

	}cout << endl;
}
	
//perevantageni phunkcii
// - dla znahodgennia sumy elementiv masyvu

int Sum(int arr[], const int SIZE1) {
	int sum = 0;//suma elementiv masyvu

	for (int i = 0; i < SIZE1; i++) {
		
		sum += arr[i];
		
	}cout <<"Suma elementiv masyvu : "<< sum << endl;
	return sum;
}

double Sum(double arr[], const int SIZE1) {// perevantazhena funkcia Sum;
int sum = 0;//suma elementiv masyvu
	for (int i = 0; i < SIZE1; i++) {
		sum += arr[i];

	}cout << "Suma elementiv masyvu : " << sum << endl;
	return sum;
}

// - dla znahodgennia minimalnogo elementa masyvu do vkazanoi megi promigku

void Min(int arr[], const int SIZE1, int Mezha) {
int MasyvNomer = 0;
int min = 0;
for (int i = 0; i < SIZE1; i++) {
	if (i <= Mezha) {
		if (arr[i] < arr[i + 1]) {
			min = arr[i];
			
		}
	}
}cout << "Minimalnyi element masyvu " << min << endl;

}

/////////////////////////////////////////// MAIN /////////////////////////////////////////////////
int main() {
int sum = 0;//suma elementiv masyvu
	const int SIZE1 = 10;
	const int SIZE2 = 7;
	
	int arr[SIZE1] = {};
	int arr2[SIZE2] = {};	

	cout << "=================================== FIRST ARRAY ===============================" << endl;

	FillArray(arr, SIZE1);
	PrintArray(arr, SIZE1);

	cout << "=================================== SECOND ARRAY ==============================" << endl;
		
	FillArray2(arr2, SIZE2);
	PrintArray2(arr2, SIZE2);

	cout << "====================znahodgennia sumy elementiv masyvu=========================" << endl;

	//vyklyk phunkcii:
	Sum(arr, SIZE1);
	Sum(arr2, SIZE2);
	cout <<"==== znahodgennia minimalnogo elementa masyvu do vkazanoi mezhi promigku ========" << endl;
	



	cout << "=============== exemple =================" << endl;

	double arr3[SIZE1] = {};
	FillArray(arr3, SIZE1);
	PrintArray(arr3, SIZE1);

	cout << "=============== exemple =================" << endl;
		


	cout << "Oberit masyv: 1 chy 2" << endl;
	int MasyvNomer = 0;
	cin >> MasyvNomer;
	int Mezha = 0;
	
	if (MasyvNomer == 1) {
		cout << "Vvedit # elementu iakyi stane mezheiu promizhku: vid 2 do 10" << endl;
		cin >> Mezha;
		Min(arr, SIZE1, Mezha);
	}
	else if (MasyvNomer == 2) {
		cout << "Vvedit # elementu iakyi stane mezheiu promizhku: vid 2 do 7" << endl;
		cin >> Mezha;
		Min(arr, SIZE2, Mezha);
	}
	
	system("pause");
	return 0;

}

