/////////////////////////////////////////////////////
///////////////  homework  //////////////////////////

///////////////   task 1  ///////////////////////////
/*1. ����� ����� �����. �������� �������, ��� ����� ����� �� ��������� ��� �� ��������, 
� ��������� �� �������� ��������� �������. ���� �� ����� 0, ���������� ��� �� ��������, 
���� 1, ��� �� ���������.*/
//
//#include <iostream>;
//#include <windows.h>;
//#include <ctime>;
//using namespace std;
//
//
//// ������� ��� ���������� ������ �������� �� ��������� �� �����.
//void FillPrintArray (int arr[], const int SIZE) {
//	srand(time(NULL));
//	cout << "			";
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10 + 1;
//		Sleep(10);
//		cout << arr[i] << " ";
//	}cout << endl;
//}
//
////�������, �� ����� ����� ��� �� ���������, ��� �� �������� � ��������� �� ������ �����������.
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
/////////////////////////////////////====> MAIN <====/////////////////////////////////////
//int main() {
//
//	
//	int choice = 0; //���� �����������, ���� ����� ��������� �����: �� ��������� �� �� ��������	
//	const int SIZE = 10;
//	int arr[SIZE];
//	srand(time(0));
////=============== ���������� ����� ����������� ������� �� �������� �� ����� =================
//	cout << "=========== we have an array with random elements ==============" << endl;
//	FillPrintArray (arr, SIZE); //��������� ������� ���������� �� ��������� ������
//
////============================= ���� ��� ����������� ===================================		
//	bool exit = false;
//	while(exit!=true)
//	{
//		cout << "//////////////////////////  MENU  ///////////////////////////" << endl;
//		cout << "You can to sort array or to the up, or to the down." << endl;
//		cout << "You have to choose :" << endl;
//		cout << "[1] - to the up; \n[0] - to the down." << endl;
//		cout << "To exit from the programm [3]" << endl;		
//		cout << "===================== Choice of user: =========================" << endl;
//		cin >> choice;
//		cout << "============================ sorted array =================================" << endl;
//		if (choice == 1 || choice == 0) {
//			SortArray(arr, SIZE, choice); //��������� ������� ���������� ������
//		}
//		else if (choice == 3) {
//			exit = true;
//		}
//		else {
//			cout << "Incorrect number/ only [0] or [1]" << endl;
//		}
//	}	
//	system("pause");
//	return 0;
//}


//////////////////////////   task 2  //////////////////////////////////////
/*���� 2 ����������� ����������� ������: ����� ���� ������ (����� �����)
 �� ����� ��� ������. ������������ ������ �� ���������� ���.
 ������� ����� �� ���� ������ �� ���������� �� ��������� ���. 
����������� �������� ������������� ������� ���������.*/

# include <iostream>;
#include <ctime>;
using namespace std;


////�������, �� ����� �����  �� ���������, �� �� ��������.
void SortArrayUP(int arr[], const int SIZE) {
	int temp = 0;

	//���������� �� ���������
	cout << "===============  Sorting them to up  ==================" << endl;
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
}

void SortArrayDOWN(int arr[], const int SIZE){
	
	int temp = 0;

						//���������� �� ���������
	
	cout << "===============  Sorting them to down  ==================" << endl;
	//���������� �� ��������

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


int main()
{
	
	const int GOODS = 5;
	const int PRICES = 5;
	int Goods[GOODS] = { 0,1,2,3,4 };
	int Prices[PRICES] = { 25, 15, 28, 135, 75 };
	
	/*int const MIL = 0, BREAD = 1, APPL = 2, MEAT = 3, TOM = 4;
	
	cout << Goods[MIL] << " " << Prices[MIL] << endl;*/
	
	
		
//============== PRINT ARRAY ===============>>
	cout << "We have an array of goods and an array of prices:" << endl;
		for (int i = 0; i < GOODS; i++) {
			if (Goods[i] == 0) {			
				cout << "Milk" << "	";
				cout << Prices[i] << endl;
			}
			if (Goods[i] == 1) {
				cout << "Bread" << "	";
				cout << Prices[i] << endl;

			}
			if (Goods[i] == 2) {
				cout << "Apples" << "	";
				cout << Prices[i] << endl;

			}
			if (Goods[i] == 3) {
				cout << "Meat" << "	";
				cout << Prices[i] << endl;

			}
			if (Goods[i] == 4) {
				cout << "Tomat" << "	";
				cout << Prices[i] << endl;

			}			
		}
//============== SORT ARRAY UP===============>>
		SortArrayUP(Prices, PRICES);

//============== PRINT ARRAY SORT ===============>>
		for (int i = 0; i < PRICES; i++) {
			if (Prices[i] == 25) {
				cout << "Milk" << "	";
				cout << Prices[i] << endl;
			}
			if (Prices[i] == 15) {
				cout << "Bread" << "	";
				cout << Prices[i] << endl;

			}
			if (Prices[i] == 28) {
				cout << "Apples" << "	";
				cout << Prices[i] << endl;

			}
			if (Prices[i] == 135) {
				cout << "Meat" << "	";
				cout << Prices[i] << endl;

			}
			if (Prices[i] == 75) {
				cout << "Tomat" << "	";
				cout << Prices[i] << endl;

			}
		}


		//============== SORT ARRAY DOWN===============>>
		SortArrayDOWN(Prices, PRICES);

		//============== PRINT ARRAY SORT ===============>>
		for (int i = 0; i < PRICES; i++) {
			if (Prices[i] == 25) {
				cout << "Milk" << "	";
				cout << Prices[i] << endl;
			}
			if (Prices[i] == 15) {
				cout << "Bread" << "	";
				cout << Prices[i] << endl;

			}
			if (Prices[i] == 28) {
				cout << "Apples" << "	";
				cout << Prices[i] << endl;

			}
			if (Prices[i] == 135) {
				cout << "Meat" << "	";
				cout << Prices[i] << endl;

			}
			if (Prices[i] == 75) {
				cout << "Tomat" << "	";
				cout << Prices[i] << endl;

			}
		}
			   		 	  	  	   	
	system("pause");
	return 0;
}



