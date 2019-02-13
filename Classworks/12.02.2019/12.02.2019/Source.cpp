//////////////////////////////////////// 12.02.2019 /////////////////////////////////////////////////
///////////////////////////////////////// RECURTION /////////////////////////////////////////////////


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

////////////////////////////////// task 2 TEMPLATE FUNCTION FOR ARRAY /////////////////////////////////////////

/*	Template function for the work whith the array:
	a. array filling from keyboard or filling by random numbers.
	b. show array on the monitor
	c. do oppertunity to sort the array by the choice of user, using the bool	*/

/*	Написати шаблон функцію для роботи з масивом :
	a. (або заповнення випадковими числами)  масиву
	b.виведення масиву на екран
	c.реалізувати можливість сортування масиву(зростання.спадання) по вибору користувача(вибір здійснюється за допомогою типу bool)*/

# include <iostream>;
# include <ctime>;
using namespace std;
const int SIZE = 10;

//template <typename T>
//void Menu(T arr);

template <typename T>
void FillKeyboard(int HowFill, T arr[SIZE]);

template <typename T>
void FillArray(T arr[SIZE]);

template <typename T1>
void PrintArray(T1 arr[SIZE]);

template <typename T>
void SortUp(T arr[SIZE]);

template <typename T>
void SortDown(T arr[SIZE]);



int main() {

	srand(unsigned(time(NULL)));

	int arr[SIZE] = {};

	bool exit = false;
	while (exit != true) {
		/*Menu(arr);*/
		cout << "///////////////////////// MENU /////////////////////////////" << endl;
		cout << "Choose how to fill the array: from keyboard [1], by random numbers [2]" << endl;
		
		int Choice = 0;
		cin >> Choice;
		if (Choice == 1)  {
			FillKeyboard(Choice, arr);
			PrintArray(arr);
		}
		else if (Choice == 2) {
			FillArray(arr);
			PrintArray(arr);
		}		
		else {
			cout << "Error: incorrect number" << endl;
			exit = true;
		}
		cout << "Choose how to sort the array: " << endl;
		cout << "[1] sorting up, [2] sorting down" << endl;
		cout << "[3] - exit from the program" << endl;
		int temp = 0;
		cin >> temp;
		if (temp == 1) {
			SortUp(arr);
			PrintArray(arr);
		}
		else if (temp == 2) {
			SortDown(arr);
			PrintArray(arr);
		}
		else if (temp == 3) {
			exit = true;
		}
		else {
			cout << "Error: incorrect number" << endl;
			exit = true;
		}
	}	
	system("pause");
	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// FUNCTIONS /////////////////////////////////////////////////
//template <typename T>
//void Menu(T arr) {
//	cout << "///////////////////////// MENU /////////////////////////////" << endl;
//	cout << "Choose how to fill the array: from keyboard [1], by random numbers [2]" << endl;
//	int HowFill = 0;	//ask user how he wants to fill array
//
//	cin >> HowFill;		//user choice how to fill the array
//
//	if (HowFill == 1) {
//		FillKeyboard(HowFill, arr);	//filling by the keyboard
//		PrintArray(arr);
//		cout << "===========================================================" << endl;
//	}
//	else if (HowFill == 2) {
//		void FillArray();			//filling by the random elements
//		PrintArray(arr);
//		cout << "===========================================================" << endl;
//	}
//
//	cout << "Choose how to sort the array: to the up [1], to the down [2]" << endl;
//	int HowSort = 0;
//	cin >> HowSort;
//	if (HowSort == 1) {
//		SortUp(arr);				//Sorting to the up
//		PrintArray(arr);
//		cout << "===========================================================" << endl;
//	}
//	else if (HowSort == 2) {
//		SortDown(arr);				//Sorting to the down
//		PrintArray(arr);
//		cout << "===========================================================" << endl;
//	}
//}

////keyboard
template < typename T >
void FillKeyboard(int HowFill, T arr[SIZE]) {	//function for the filling array from the keyboard
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter number" << endl;
		int number = 0;
		cin >> number;
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
		cout << arr[i] << "  ";
	}cout << endl;
}

//Sorting array to the up
template <typename T>
void SortUp(T arr[SIZE]) {
	cout << "=========== Sorting to the up ============" << endl;
	int temp = 0;
	for (int j = 0; j < SIZE - 1; j++)
	{
		for (int i = 0; i < SIZE - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}/*cout << "=================================================" << endl;*/
}


//Sorting array to the down
template <typename T>
void SortDown(T arr[SIZE]) {
	cout << "=========== Sorting to the down ============" << endl;
	int temp = 0;
	for (int j = 0; j < SIZE - 1; j++)
	{
		for (int i = 0; i < SIZE - 1 - j; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}
