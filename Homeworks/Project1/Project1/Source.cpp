//////Конвертер бінарних чисел в десяткові
////
//////#include <iostream>
//////#include <cmath>
//////#include <bitset>
//////using namespace std;
//////
//////int DecimalConversion(int number, int power = 0, int sum = 0) // changes here
//////{
//////	if (number == 0)
//////	{
//////		return sum;
//////	}
//////
//////	int bit = number % 10;
//////	sum = sum + bit * pow(2, power);
//////	number /= 10;
//////	power++;
//////
//////	return DecimalConversion(number, power, sum); // changes here
//////}
//////
//////int main() {
//////	int number = 0;
//////
//////	cout << "Enter binary number: " << endl;
//////	cin >> number;
//////	cout << "Number is: " << DecimalConversion(number);
//////
//////	system("PAUSE >> NULL");
//////	return 0;
//////}
////
////
///////////////////////////////////////////////////////////////////
////			//ПРисвоєння елементів масиву в окремі змінні
//////# include <iostream>;
//////# include <ctime>;
//////
//////using namespace std;
//////
//////
//////int main() {
//////	//змінна, зі значенням елементу массиву
//////	int n1 = 0;
//////	int n2 = 0;
//////	int n3 = 0;
//////	srand(unsigned(time(NULL)));
//////	int array[3] = {};
//////	for (int i = 0; i < 3; i++) {
//////		array[i] = rand() % 10 + 1;
//////		if (i == 0) 
//////		{
//////			n1 = array[i];
//////		}
//////		else if (i == 1) 
//////		{
//////			n2 = array[i];
//////		}
//////		else if (i==2)
//////		{
//////			n3 = array[i];
//////		}
//////
//////	}
//////
//////	for(int i=0; i<3; i++)
//////	{
//////		cout << i << "	element =	" << array[i] << endl;
//////	}
//////	cout << endl;
//////
//////	
//////	system("pause"); 
//////	return 0;
//////}
////
////
////# include <iostream>;
////# include <ctime>;
////using namespace std;
////
////const int SIZE = 5;
////
////void Fill(int arr[SIZE]);
////void Print(int arr[SIZE]);
////int SummElem(int arr[SIZE]);
////
////int main()
////{
////	int arr[SIZE] = {};
////
////	srand(unsigned(time(NULL)));
////
////	for(int i=0; i<10; i++)
////	{
////		cout << "Array #	" << i+1 << endl;
////		Fill(arr);
////		Print(arr);
////		SummElem(arr);
////	}
////	
////
////	system("pause");
////	return 0;
////}
////
////void Fill(int arr[SIZE])
////{
////	for (int i = 0; i < SIZE; i++)
////	{
////		arr[i] = rand() % 10 + 1;
////	}
////}
////
////void Print(int arr[SIZE])
////{	
////	for (int i = 0; i < SIZE; i++)
////	{		
////		cout << arr[i] << "	";		
////	}cout << endl;	
////}
////
////int SummElem(int arr[SIZE])
////{
////	int SumElem = 0;
////	for (int i = 0; i < SIZE; i++)
////	{
////		SumElem += arr[i];
////	}cout << endl;
////	cout << "The Summ of elements of the array is	" << SumElem << endl;
////	return SumElem;
////}



//Конвертер бінарних чисел в десяткові

//#include <iostream>
//#include <cmath>
//#include <bitset>
//using namespace std;
//
//int DecimalConversion(int number, int power = 0, int sum = 0) // changes here
//{
//	if (number == 0)
//	{
//		return sum;
//	}
//
//	int bit = number % 10;
//	sum = sum + bit * pow(2, power);
//	number /= 10;
//	power++;
//
//	return DecimalConversion(number, power, sum); // changes here
//}
//
//int main() {
//	int number = 0;
//
//	cout << "Enter binary number: " << endl;
//	cin >> number;
//	cout << "Number is: " << DecimalConversion(number);
//
//	system("PAUSE >> NULL");
//	return 0;
//}


///////////////////////////////////////////////////////////////
			//ПРисвоєння елементів масиву в окремі змінні
//# include <iostream>;
//# include <ctime>;
//
//using namespace std;
//
//
//int main() {
//	//змінна, зі значенням елементу массиву
//	int n1 = 0;
//	int n2 = 0;
//	int n3 = 0;
//	srand(unsigned(time(NULL)));
//	int array[3] = {};
//	for (int i = 0; i < 3; i++) {
//		array[i] = rand() % 10 + 1;
//		if (i == 0) 
//		{
//			n1 = array[i];
//		}
//		else if (i == 1) 
//		{
//			n2 = array[i];
//		}
//		else if (i==2)
//		{
//			n3 = array[i];
//		}
//
//	}
//
//	for(int i=0; i<3; i++)
//	{
//		cout << i << "	element =	" << array[i] << endl;
//	}
//	cout << endl;
//
//	
//	system("pause"); 
//	return 0;
//}





# include <iostream>;
using namespace std;

////PROTOTIPES 
void Menu();
int main()
{	
	int userAutoriz = 0;	// user choice the way of autorization;
	int userNCard = 0;
	int arrCards[3] = { 1234, 2233, 3344 }; //array of cards numbers
	int parol = 0;
	int arrParolsCards[3] = { 99, 77, 55 };	//array of passwords 
	int balance[3] = { 1000, 25000, 1500 };	//array of balance

	const int login = 3333;
	const int Telephone = 80685683695;

	cout << "Choose the way of autorization" << endl;	
	cout << "[1] by number of credit card" << endl;
	cout << "[2] by telephon number " << endl;


	cin >> userAutoriz;
	if (userAutoriz == 1 || userAutoriz == 2) //check for entering correct number
	{
		//авторизація за НОМЕРОМ КРЕДИТКИ ТА ПАРОЛЕМ:
		if (userAutoriz == 1)
		{

			cout << "you choose autorization by number of credit card" << endl;
			cout << "Enter card number[1], [2], [3]" << endl;
			cin >> userNCard;
			/*system("cls");*/
			if (userNCard == 1)//картка №1
			{
				//цикл, що забезпечує 3-х разову можливість ввести пароль
				for (int i = 0; i < 3; i++) {
					cout << "The number of card is " << arrCards[0] << endl;
					cout << "Enter password" << endl;
					cin >> parol;
					if (parol == 99)
					{
						cout << "Correct" << endl;
						Menu();
						///вивести меню можливих операцій з цією карткою								
					}
					else
					{
						cout << "Uncorrect password!!! \nYou`ve enter password  " << i + 1 << "  times. \nAfter third unfortunelly try your card will be bloked!" << endl;
					}

				}
			}
			else if (userNCard == 2)
			{
				cout << "The number of card is " << arrCards[1] << endl;

				cout << "Enter password" << endl;
				cin >> parol;
				if (parol == 77)
				{
					/*void Menu();*///вивести меню можливих операцій з цією карткою	
				}
				else
				{
					cout << "Uncorrect password!!! " << endl;
				}
			}
			else if (userNCard == 3)
			{
				cout << "The number of card is " << arrCards[2] << endl;
			}
			else
			{
				cout << "Your choice is uncorrect" << endl;
			}
		}




		else if (userAutoriz == 2)
		{
			cout << "you choose 2" << endl;
		}
		}
		system ("pause");
		return 0;
	}

	///////////////////////////////// FUNCTIONS /////////////////////////////////
	void Menu() {
		cout << "////////////////////// MENU /////////////////////////" << endl;
		cout << "Choose the operation:\n [1] - BALANCE ON THE MONITOR;\n [2] - GET CASH." << endl;
		int userMenuOrCash = 0;
		cin >> userMenuOrCash;
		/*if(userMenuOrCash==1)
		{
			cout << "Your balance is " << balance << endl;
		}*/
	}	

	void balance(int userMenuOrCash, int userNCard, int arrCards, int arrParolsCards)
	{
		
		
		
		/*for(int i=0; i<3; i++)
		{
		
		}*/

	}