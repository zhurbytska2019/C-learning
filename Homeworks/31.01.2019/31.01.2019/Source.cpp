/////////////////////////////////////////////////////
///////////////  homework  //////////////////////////

///////////////   task 1  ///////////////////////////
/*1. ����� ����� �����. �������� �������, ��� ����� ����� �� ��������� ��� �� ��������, 
� ��������� �� �������� ��������� �������. ���� �� ����� 0, ���������� ��� �� ��������, 
���� 1, ��� �� ���������.*/
//
//#include <iostream>;
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
//
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
//
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
//		cout << "	";
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
//	
//	system("pause");
//	return 0;
//}


//////////////////////////   task 2  //////////////////////////////////////
/*���� 2 ����������� ����������� ������: ����� ���� ������ (����� �����)
 �� ����� ��� ������. ������������ ������ �� ���������� ���.
 ������� ����� �� ���� ������ �� ����������� �� ��������� ���. 
����������� �������� ������������� ������� ���������.*/

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


// ������� ��� ���������� ������ �������� �� ��������� �� �����.
void FillPrintArray (int arr[], const int SIZE) {
	cout << "			";
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10 + 1;

		cout << arr[i] << " ";
	}cout << endl;
}

//�������, �� ����� ����� ��� �� ���������, ��� �� �������� � ��������� �� ������ �����������.
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

	
	int choice = 0; //���� �����������, ���� ����� ��������� �����: �� ��������� �� �� ��������	
	const int SIZE = 10;
	int arr[SIZE];
	srand(time(0));
//=============== ���������� ����� ����������� ������� �� �������� �� ����� =================
	cout << "=========== we have an array with random elements ==============" << endl;
	FillPrintArray (arr, SIZE); //��������� ������� ���������� �� ��������� ������

//============================= ���� ��� ����������� ===================================		
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
			SortArray(arr, SIZE, choice); //��������� ������� ���������� ������
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
