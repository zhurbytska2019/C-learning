//////////////////////////////// 14.02.2019 /////////////////////////////////
///////////////////////// control work ///////////////////////////////////////

////// TASK 1 //////
/*1. ������������� ������ �������� �� ��������� �����. ������� �� � ����� ��
��������� �� �����. ����� ����� ��� ���� � ������������ ������ ���������.
������� ����� �� �� �����, �������� ������� ���� ������ � ����� ��� ���������.
���������� ������� � ������� ����� ��� ��������� �������� � ���� ��������� �������.*/

# include <iostream>;
# include <ctime>;
using namespace std;

const int SIZE = 5;

void Fill(int arr[SIZE]);
void Print(int arr[SIZE]);
int SummElem(int arr[SIZE]);
int MaxSum(int arrSum[10]);

int main()
{
	int arrTot[10][5];
	int arr[SIZE] = {};
	int arrSum[10];

	int sum = 0;

	int max = 0;

	srand(unsigned(time(NULL)));

	for (int i = 0; i < 10; i++)
	{
		cout << "Array #	" << i + 1 << endl;
		Fill(arr);
		Print(arr);
		sum = SummElem(arr);

		cout << "Summ is	" << sum << endl << endl;

		for (int j = 0; j < 10; j++)
		{
			arrTot[i][j] = arr[j];
			arrSum[i] = SummElem(arr);
			///========================
			/////*for (int i=0; i < 10; i++)
			////{
			////	if (arrSum[i] == max)
			////	{
			////		cout << "Max sum is" << arrSum[i] << endl;
			////		for (int j = 0; j < 10; j++)
			////		{
			////			cout << arrTot[i][j] << endl;
			////		}

			////	}

			////}*/
			//=============================
		}		
		
	}
	cout << "=========================================================" << endl;

	//��������� ����� ����
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arrTot[i][j] << "	";
		}
	cout << "	" << endl;
	}cout << endl;

	//�������� ����� ����		
	for (int i = 0; i < 10; i++)
	{
		cout << arrSum[i] << "	";

	}
	cout << endl;

	max = MaxSum(arrSum);
	cout << "Maximum of summ is " << max << endl;


	//found and print # of max array:
	for (int i = 0; i < 10; i++)
	{
		if (arrSum[i] == max)
		{
			cout << "Array with maximum summ of elements has #  " << i+1 << endl;
			for (int j = 0; j < 5; j++)
			{
				cout << arrTot[i][j] << "	";
			}
			cout << endl;
		}

	}

	system("pause");
	return 0;
}

void Fill(int arr[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

void Print(int arr[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "	";
	}
}

int SummElem(int arr[SIZE])
{
	int SumElem = 0;
	for (int i = 0; i < SIZE; i++)
	{
		SumElem += arr[i];
	}
	return SumElem;
}

int MaxSum(int arrSum[10])
{
	int max = arrSum[0];//� ����� �������� �������� ������� �������� ������, � ���� ��������� �������� ��������
	for (int i = 0; i < 9; i++)
	{

		if (max < arrSum[i + 1])
		{
			max = arrSum[i + 1];

		}

	}
	return max;
}

////// TASK 2 //////
/*2. ��������.���������� ������������� ������� ���, �� �� ���������.
- � ��������� ����������� (���� �� ������ ����� (�����  int), ������ (����� int), 
��� ���� �� ������ ��������(����� int)).
- ���� � ������� ����� ���� � ������ ��� ����� ���� � ����� ��������(����� int).
- ������� ������ ��� �� ������ ��� �� �������.
- ���� ������ ��� ���� �����(�������� int) ��� ������� �����(�������� double).
��������� ������(�� �����).*/

//# include <iostream>;
//using namespace std;
//
//int CardN = 0;
//
//int money = 0;
//const int R = 3;
//const int C = 3;
//int CardBalance[R][C] =
//{ { 2222, 3333, 4444},
//{3127, 500, 12369} };
//
/////PROTOTIPES
//
//void LoginCard();
//void LoginTel();
//void Menu();
//int Balance(int CardBalance[R][C]);
//
/////////////////// MAIN ////////////////
//int main()
//{
//	int arrCard[3] = { 2222, 3333, 4444 };
//	int arrPassw[3] = { 74, 53, 49 };
//		
//	cout << "How do you want to login: [1] by the card number, [2] by the telephone number;" << endl;
//	int user = 0;
//	cin >> user;
//	switch(user)
//	{
//	case 1:
//	{
//		LoginCard();
//		break;
//	}
//	case 2:
//	{
//		LoginTel();
//		break;
//	}
//	}
//	
//	
//	
//	system("pause");
//	return 0;
//}
//
//
/////////////////// FUNCTIONS ///////////
//
//void LoginCard()
//{
//	cout << "Enter card number( if you`ve forget there were 3 cards: 2222, 3333, 4444)" << endl;
//	int CardN = 0;
//	cin >> CardN;
//	if(CardN==2222)
//	{
//		cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
//		int parol = 0;
//		cin>>parol;
//
//		if (parol==74)
//		{
//			cout << "Correct" << endl;
//			Menu();
//		}
//		else
//		{
//			cout << "Incorrect password" << endl;
//		}
//
//	}
//	if (CardN == 3333)
//	{
//		cout<< "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
//		int parol = 0;
//		cin >> parol;
//		if(parol==53)
//		{
//			cout << "Correct" << endl;
//			Menu();
//		}
//		else
//		{
//			cout << "Incorrect password" << endl;
//		}
//	}
//	if (CardN == 4444)
//	{
//		cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
//		int parol = 0;
//		cin >> parol;
//		if (parol == 49)
//		{
//			cout << "Correct" << endl;
//			Menu();
//		}
//		else
//		{
//			cout << "Incorrect password" << endl;
//		}
//	}
//}
//
//void LoginTel()
//{
//	cout << "Enter telephone number( if you`ve forget, you have only one finantial telephone numbers: 8068)" << endl;
//	int TelN = 0;
//	cin >> TelN;
//	if (TelN == 8068)
//	{
//		cout << "Enter card number( if you`ve forget there were 3 cards: 2222, 3333, 4444)" << endl;
//		
//		cin >> CardN;
//		if (CardN == 2222)
//		{
//			cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
//			int parol = 0;
//			cin >> parol;
//
//			if (parol == 74)
//			{
//				cout << "Correct" << endl;
//				Menu();
//			}
//			else
//			{
//				cout << "Incorrect password" << endl;
//			}
//
//		}
//		if (CardN == 3333)
//		{
//			cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
//			int parol = 0;
//			cin >> parol;
//			if (parol == 53)
//			{
//				cout << "Correct" << endl;
//				Menu();
//			}
//			else
//			{
//				cout << "Incorrect password" << endl;
//			}
//		}
//		if (CardN == 4444)
//		{
//			cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
//			int parol = 0;
//			cin >> parol;
//			if (parol == 49)
//			{
//				cout << "Correct" << endl;
//				Menu();
//			}
//			else
//			{
//				cout << "Incorrect password" << endl;
//			}
//		}
//	}
//	else { cout << "Uncorrect number" << endl; }
//	
//}
//
//void Menu()
//{
//	cout << "Choose the operation: [1] - balance; [2] - get money; [3] - top up the phone" << endl;
//	int User2 = 0;
//	int sum = 0;
//	int temp = 0;
//	cin >> User2;
//	switch (User2)
//	{
//		case 1: 
//		{	
//
//			sum=Balance(CardBalance);
//			cout << "Your balance is  " << sum <<" grn. "<< endl;
//			break;
//		}
//		case 2:
//		{
//			cout << "How much money do you want to get? Enter the natural number" << endl;
//			cin >> money;
//			temp = sum - money;
//		
//			if (temp > 0) 
//			{
//				cout << "Your balance is  " << sum - money << "  grn" << endl;
//			}
//			
//			else if (temp < 0)
//			{
//				cout << "You have not enough money" << endl;
//			}
//			
//			else if (temp = 0)
//		
//			{
//				cout << "Your balance now is 0 grn." << endl;
//			}	
//			break;
//		}
//		case 3:
//		{
//			cout << "How much money do you want to caunt to top up the phone" << endl;
//			cin >> money;
//			sum = Balance(CardBalance);
//			cout << "Your balance is  " << sum << " grn. " << endl;
//			break;
//		}
//
//	}
//}
//
//int Balance(int CardBalance[R][C])
//{
//	int bal = 0;
//	for (int i = 0; i < R; i++)
//	{
//		for(int j=0; j<C; j++)
//		{
//			if (CardN == 2222)
//			{
//				
//				bal = CardBalance[0][1];
//				cout << "Your balance is  " << bal << endl;
//				return bal;
//				
//			}
//			else if (CardN==3333)
//			{
//				
//				bal = CardBalance[1][1];
//				cout << "Your balance is  " << bal << endl;
//				return bal;
//			}
//			else if (CardN==4444)
//			{
//				
//				bal = CardBalance[2][1];
//				cout << "Your balance is  " << bal << endl;
//				return bal;
//			}
//				
//		}
//	
//		
//	}
//	
//	
//}



//////////////��������-----------------------------------------------------------------------
//////////# include <iostream>
//////////using namespace std;
////////// 
//////////int main()
//////////{
//////////	const int PIN = 1111;
//////////	int userPin = 0;// ������ � ���� �������� ������ �� ���� ����� ����� ���� ������
//////////	int balance = 1000;
//////////	int choice = 0;
//////////	int amount = 0;
//////////	int pinCounter = 1;
//////////	bool exit = false;
//////////
//////////	while (!exit)
//////////	{
//////////
//////////		if (pinCounter >= 3)
//////////		{
//////////			exit = true;
//////////		}
//////////		cout << "Enter pin" << endl;
//////////		cin >> userPin;
//////////
//////////		if (userPin == PIN)
//////////		{
//////////			cout << "1. Show Balance\n2. Get money\n3. 0. Exit" << endl;
//////////			cin >> choice;
//////////
//////////			system("cls");//��������� ���������� ����
//////////
//////////			if (choice == 1) {
//////////				cout << "Balance = " << balance << endl;
//////////			}
//////////
//////////			else if (choice == 2) {
//////////				cout << "Enter amount: " << endl;
//////////				int amount = 0;
//////////				cin >> amount;
//////////				if (balance <= amount) {
//////////					cout << "Low money" << endl;
//////////				}
//////////				else {
//////////					balance -= amount;
//////////					cout << "Balance= " << balance << endl;
//////////				}
//////////
//////////			}
//////////			else if (choice == 0) {
//////////				exit = true;
//////////			}
//////////		}
//////////		else
//////////		{
//////////			cout << "Enter pin" << endl;
//////////			cin >> userPin;
//////////			pinCounter++;
//////////			system("cls");//��������� ���������� ����
//////////		}
//////////	}
//////////	system("pause");
//////////	return 0;
//////////}