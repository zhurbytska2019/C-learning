//# include <iostream>;
//using namespace std;
//int i = 0;
//
//void Foo() {
//
//	cout << i << endl;
//	
//	i++;             //4848 raziv bula vyklykana funkcia
//
//	Foo();           //recursyvnyi vyklyk funkcii. Ce vichnyi cykl, yakyi perevantazhuie pamiat "stek overflow" 
//}
//
//int main() {
//
//	Foo();
//	
//
//
//	system("pause");
//	return 0;
//}


//        VOID FUNCTION RECURTION EXIT       //

//# include <iostream>;
//using namespace std;
//
//
//void Foo(int counter) {
//	
//	counter--;
//	cout << "counter = " << counter << endl;
//	if (counter > 0) {
//		Foo(counter);
//	}
//}
//
//
//int main() {
//
//	Foo(10); //at the function Foo we put parametr 10
//	   
//	system("pause");
//	return 0;
//}


//        INT FUNCTION RECURTION EXIT       //
//# include <iostream>;
//using namespace std;
//
//
//int Foo(int counter) {//how to exit from int function
//	
//	if (counter < 1) {
//		return 0;		
//	}
//	counter--;
//	cout << "int Foo	" << counter << endl;
//	return Foo(counter);
//}
//
//
//int main() {
//
//	Foo(10); //at the function Foo we put parametr 10
//
//	system("pause");
//	return 0;
//}

//////// task 1////////
//Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні


//# include <iostream>;
//using namespace std;
//
//int sum = 0;
//
//int Sum(int a, int b) {
//
//	cout << a << " = " << b << endl;;
//	sum += a;
//	if (a == b) {
//		return 0;
//	}
//	cout << sum << endl;
//	
//	return Sum(a+1, b);
//}
//
//
//int main() {
//	int choise1 = 0;
//	int choise2 = 0;
//
//	cout << "Enter namber 1" << endl;
//	cin>> choise1;
//	cout << "Enter namber 2 " << endl;
//	cin>> choise2;
//	
//
//	Sum( choise1, choise2);
//
//	system("pause");
//	return 0;
//}

/////////////////// task 2 //////////////////
/*Написати шаблон функцію для роботи з масивом :
a. (або заповнення випадковими числами)  масиву
b.виведення масиву на екран
c.реалізувати можливість сортування масиву(зростання.спадання) по вибору користувача(вибір здійснюється за допомогою типу bool)*/

# include <iostream>;
# include <ctime>;
using namespace std;
const int SIZE = 10;


void Menu();
void FillKeyboard();
void FillArray();
void PrintArray();


void Menu() {
	cout << "///////////////////////// MENU /////////////////////////////" << endl;
	cout << "Choose how to fill the array: from keyboard [1], by random nambers [2]" << endl;
	int HowFill = 0;
	cin >> HowFill;
	if (HowFill == 1) {
		FillKeyboard();
	}
	else if (HowFill == 2) {
		void FillArray();
	}
	cout << "Choose how to sort the array: to the up [1], to the down [2]" << endl;
	int HowSort = 0;
	cin >> HowSort;
}
//keyboard
template <typename T>
void FillKeyboard(T arr[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter number" << endl;
		int number = 0;
		cin>> number;
		arr[i] = number;
	}
}
//random
template <typename T>
void FillArray(T arr[SIZE]) {
	for (int i = 0; i < SIZE; i++) {		
		arr[i] = rand() % 100 + 1;
	}
}
//print
template <typename T1>
void PrintArray(T1 arr[SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
}


int main() {
	srand(unsigned(time(NULL)));
	int arr[SIZE] = {};
	
	Menu();


	////fill array whith random elements
	//FillArray(arr);

	////print array
	//PrintArray(arr);

	system("pause");
	return 0;
}
