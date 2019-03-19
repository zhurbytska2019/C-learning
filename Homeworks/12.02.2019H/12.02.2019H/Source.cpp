////////////// homework 12.02.2019 /////////////
////////////// task 1 //////////////////////////
/*1.	Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення
 */
//////# include <iostream>;
//////using namespace std;
//////
////////prototyp
//////float BinaryConvers(int number);
//////
//////int main() {
//////	cout << "Enter number and the programm will conwert it in binary system" << endl;
//////	int number = 0;
//////	cin >> number;
//////	int res = 0;
//////
//////	res = BinaryConvers(number);
//////
//////	system("pause");
//////	return 0;
//////}
//////
//////
//////float BinaryConvers(int number) {
//////	while (number != 0) {
//////		cout << "Number is  " << (number) % 2 << endl;
//////
//////		cout << "test" << (number / 2) << endl;
//////		if ((number) % 2 == 0) {
//////			cout << "0" << endl;
//////		}
//////		else if ((number) % 2 != 0) {
//////			cout << "1" << endl;
//////		}
//////
//////		BinaryConvers((number - number % 2) / 2);
//////
//////		return (number) % 2;
//////	}
//////}


////////////// task 2 //////////////
/*Написати рекурсивну логічну функцію, яка перевіряє чи переданий у функцію 
масив впорядкований за зростанням (не спаданням).*/

# include <iostream>;
using namespace std;

void Fill(const int S, int arr[]);
void Print(const int S, int arr[]);
int Check(int arr[], const int S, int counter);
//void Sort(int arr[], const int K);

int main() {	
	const int SIZE =5; // размер массива
	int arr[SIZE] = {};

	// заполнение массива
	Fill(SIZE, arr);
	cout << endl;
	int counter = SIZE;
	Check(arr, SIZE, counter);

	Print(SIZE, arr);



	//Sort(arr, SIZE); //сортировка массива

	

	system("pause");
	return 0;
}


void Fill(const int S, int arr[]) {
	for (int i = 0; i < S; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

}

void Print(const int S, int arr[]) {
	for (int i = 0; i < S; i++) {
		cout << "arr[" << i << "] = " << arr[i] << "\t";
		
	}
	cout << endl;
}

int Check(int arr[], const int S, int counter) {
	for (int i = 0; i < S; i++) {
		if (arr[i] > arr[i + 1]) {
			
		}

	}
	int Check(int arr[], const int S, int counter);
	counter--;
	cout <<"counter"<< counter << endl;
	return (counter < (S - 1));
}
//void Sort(int arr[], const int K) {
//	
//	int temp; // временная переменная для обмена элементов местами
//
//	// Сортировка массива пузырьком
//	for (int i = 0; i < K - 1; i++) {
//		for (int j = 0; j < K - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				// меняем элементы местами
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}

//	// Вывод отсортированного массива на экран
//	for (int i = 0; i < K; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//}