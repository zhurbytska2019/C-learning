///////////////////////////////// 14.02.2019 /////////////////////////////////
///////////////////////// control work ///////////////////////////////////////
/*1. ������������� ������ �������� �� ��������� �����. ������� �� � ����� ��
��������� �� �����. ����� ����� ��� ���� � ������������ ������ ���������.
������� ����� �� �� �����, �������� ������� ���� ������ � ����� ��� ���������.
���������� ������� � ������� ����� ��� ��������� �������� � ���� ��������� �������.*/

# include <iostream>;
# include <ctime>;
using namespace std;

const int SIZE = 10;

int MaxSum = 0;
int arrSum[SIZE] = {};


template <typename T>
void FillArray(T arr[SIZE]);

template <typename T>
void PrintArray(T arr[SIZE]);

template <typename T>
int Sum(T arr[SIZE]);

template <typename T>
void PrintArraySum(T arrSum[SIZE]);

//////////////// MAIN //////////////////

int main() {
	srand(unsigned(time(NULL)));
	int arr[SIZE] = {};
	int resSum = 0;
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		cout << endl;
		cout << "The array #  " << i + 1 << endl;
		cout << endl;

		FillArray(arr);

		PrintArray(arr);

		resSum = Sum(arr);

	}

	PrintArraySum(arrSum);

	system("pause");
	return 0;
}


/////////////////////// FUNCTIONS ///////////////////////
template <typename T>
void FillArray(T arr[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 + 0;
	}
}

template <typename T>
void PrintArray(T arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << "	";
	}
	cout << endl;
}


template <typename T>
void PrintArraySum(T arrSum[SIZE]) {
	cout << "============================================" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arrSum[i] << "	";
	}
	cout << endl;
}


//function for printing array of sums
template <typename T>
int Sum(T arr[SIZE]) {

	/* int arrSum[SIZE] = {};*/

	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
		arrSum[i] = sum;
	}

	cout << "The sum of the elements of the array is " << sum << endl;
	return sum;
}



////////////////////////////// TASK 2 /////////////////////////////////
/*.
��������. ���������� ������������ ������� ���, �� �� ���������.
-       � ��������� �����������(���� �� ������ ����� (�����  int), ������(����� int), ��� ���� �� ������ ��������(����� int)).
-       ���� � ������� ����� ���� � ������ ��� ����� ����      �    ����� ��������(����� int).

-	������� ������ ��� �� ������ ��� �� �������.
-	���� ������ ��� ���� �����(�������� int) ��� ������� �����(�������� double). ��������� ������(�� ����).
 */

 //# include <iostream>;
 //# include <ctime>;
 // using namespace std;
 //
 //
 //
 // int main() {
 //
 //
 //	 system("pause");
 //	 return 0;
 // }

