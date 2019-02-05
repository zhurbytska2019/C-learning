/////////////////////////////////////////////////////
///////////////  homework  //////////////////////////

///////////////   task 1  ///////////////////////////
/*1. Даний масив чисел. Написати функцію, яка сортує масив по зростанню або по спаданню, 
в залежності від третього параметра функції. Якщо він рівний 0, сортування йде по спаданню, 
якщо 1, тоді по зростанню.*/
//
//#include <iostream>;
//#include <ctime>;
//using namespace std;
//
//
//// Функція для заповнення масиву рандомом та виведення на екран.
//void FillPrintArray (int arr[], const int SIZE) {
//	srand(time(NULL));
//	cout << "			";
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10 + 1;
//
//		cout << arr[i] << " ";
//	}cout << endl;
//}
//
////Функція, що сортує масив або по зростанню, або по спаданню в залежності від вибору користувача.
//void SortArray(int arr[], const int SIZE, int choice) {
//	int temp = 0;
//		if (choice == 1) 
//		{
//			for (int j = 0; j < SIZE - 1; j++) 
//			{
//					for (int i = 0; i < SIZE - 1 - j; i++) 
//					{
//						if (arr[i] > arr[i + 1]) 
//						{
//							temp = arr[i];
//							arr[i] = arr[i + 1];
//							arr[i + 1] = temp;
//						}
//					}
//			}
//
//			for (int i = 0; i < SIZE; i++) {
//
//				cout << arr[i] << endl;
//			}
//		}
//		else if (choice == 0) 
//		{
//			for (int j = 0; j < SIZE - 1; j++)
//			{
//				for (int i = 0; i < SIZE - 1 - j; i++)
//				{
//					if (arr[i] < arr[i + 1])
//					{
//						temp = arr[i];
//						arr[i] = arr[i + 1];
//						arr[i + 1] = temp;
//					}
//				}
//			}
//
//			for (int i = 0; i < SIZE; i++) {
//				cout << arr[i] << endl;
//			}
//		}
//}	
//
//int main() {
//
//	
//	int choice = 0; //Вибір користувача, яким чином сортувати масив: по зростанню чи по спаданню	
//	const int SIZE = 10;
//	int arr[SIZE];
//	srand(time(0));
////=============== заповнюємо масив випадковими числами та виводимо на екран =================
//	cout << "=========== we have an array with random elements ==============" << endl;
//	FillPrintArray (arr, SIZE); //викликаємо функцію заповнення та виведення масиву
//
////============================= меню для користувача ===================================		
//	bool exit = false;
//	while(exit!=true)
//	{
//		cout << "//////////////////////////  MENU  ///////////////////////////" << endl;
//		cout << "You can to sort array or to the up, or to the down." << endl;
//		cout << "You have to choose :" << endl;
//		cout << "[1] - to the up; \n[0] - to the down." << endl;
//		cout << "To exit from the programm [3]" << endl;
//		cout << "	";
//		cout << "===================== Choice of user: =========================" << endl;
//		cin >> choice;
//		cout << "============================ sorted array =================================" << endl;
//		if (choice == 1 || choice == 0) {
//			SortArray(arr, SIZE, choice); //викликаємо функцію сортування масиву
//		}
//		else if (choice == 3) {
//			exit = true;
//		}
//		else {
//			cout << "Incorrect number/ only [0] or [1]" << endl;
//		}
//	}
//	
//	system("pause");
//	return 0;
//}


//////////////////////////   task 2  //////////////////////////////////////
/*Дано 2 паралельних одновимірних масиви: масив назв товарів (масив рядків)
 та масив цін товарів. Впорядкувати масиви за зростанням цін.
 Вивести назви та ціни товарів за заростанням та спаданням цін. 
Використати алгоритм впорядкування методом бульбашки.*/

//# include <iostream>;
//#include <ctime>;
//using namespace std;
//
//int main()
//{
<<<<<<< HEAD
//	//char arrGoods[5][10] = { "Milk", "Bread", "Apples", "Meat", "Tomatoes"};
//	int arrGoods[5] = { 0,1,2,3,4 };
//	int arrPrices[5] = { 25, 15, 28, 135, 75 };
//	int const MIL = 0, BREAD = 1, APPL = 2, MEAT = 3, TOM = 4;
//
//	cout << arrGoods[MIL] << " " << arrPrices[MIL]<<endl;
=======
//	char arrGoods[5] = { Milk, Bread, Apples, Meat, Tomatoes};
//	int arrPrices[5] = { 25, 15, 28, 135, 75 };
//	int const MIL = 0, BREAD = 1, APPL = 2, MEAT = 3, TOM = 4;
//
//	cout << arrGoods[MIL] << " " << arrPrices[MIL];
>>>>>>> be9ade4980e6f895ae3f5dfeffb3006029a06fbe
//
//
//
//	system("pause");
//	return 0;
<<<<<<< HEAD
//}
=======
//}


# include <iostream>;
#include <ctime>;
using namespace std;


// Функція для заповнення масиву рандомом та виведення на екран.
void FillPrintArray (int arr[], const int SIZE) {
	cout << "			";
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;

		cout << arr[i] << " ";
	}cout << endl;
}

//Функція, що сортує масив або по зростанню, або по спаданню в залежності від вибору користувача.
void SortArray(int arr[], const int SIZE, int choice) {
	int temp = 0;
		if (choice == 1) 
		{
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
			}

			for (int i = 0; i < SIZE; i++) {

				cout << arr[i] << endl;
			}
		}
		else if (choice == 0) 
		{
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

			for (int i = 0; i < SIZE; i++) {
				cout << arr[i] << endl;
			}
		}
}	

int main() {

	
	int choice = 0; //Вибір користувача, яким чином сортувати масив: по зростанню чи по спаданню	
	const int SIZE = 10;
	int arr[SIZE];
	srand(time(0));
//=============== заповнюємо масив випадковими числами та виводимо на екран =================
	cout << "=========== we have an array with random elements ==============" << endl;
	FillPrintArray (arr, SIZE); //викликаємо функцію заповнення та виведення масиву

//============================= меню для користувача ===================================		
	bool exit = false;
	while(exit!=true)
	{
		cout << "//////////////////////////  MENU  ///////////////////////////" << endl;
		cout << "You can to sort array or to the up, or to the down." << endl;
		cout << "You have to choose :" << endl;
		cout << "[1] - to the up; \n[0] - to the down." << endl;
		cout << "To exit from the programm [3]" << endl;
		cout << "	";
		cout << "===================== Choice of user: =========================" << endl;
		cin >> choice;
		cout << "============================ sorted array =================================" << endl;
		if (choice == 1 || choice == 0) {
			SortArray(arr, SIZE, choice); //викликаємо функцію сортування масиву
		}
		else if (choice == 3) {
			exit = true;
		}
		else {
			cout << "Incorrect number/ only [0] or [1]" << endl;
		}
	}
	
	system("pause");
	return 0;
}
>>>>>>> be9ade4980e6f895ae3f5dfeffb3006029a06fbe
