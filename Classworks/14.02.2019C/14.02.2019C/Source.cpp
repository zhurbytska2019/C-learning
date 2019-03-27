//////////////////////////////// 14.02.2019 /////////////////////////////////
///////////////////////// control work ///////////////////////////////////////

////// TASK 1 //////
/*1. Сгенерировать десять массивов из случайных чисел. Вывести их и сумму их
элементов на экран. Найти среди них один с максимальной суммой элементов.
Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.*/
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
////int MaxSum(int arrSum[10]);
////
////int main()
////{
////	int arrTot[10][5];
////	int arr[SIZE] = {};
////	int arrSum[10];
////
////	int sum = 0;
////
////	int max = 0;
////
////	srand(unsigned(time(NULL)));
////
////	for (int i = 0; i < 10; i++)
////	{
////		cout << "Array #	" << i + 1 << endl;
////		Fill(arr);
////		Print(arr);
////		sum = SummElem(arr);
////
////		cout << "Summ is	" << sum << endl << endl;
////
////		for (int j = 0; j < 10; j++)
////		{
////			arrTot[i][j] = arr[j];
////			arrSum[i] = SummElem(arr);
////			///========================
////			/////*for (int i=0; i < 10; i++)
////			////{
////			////	if (arrSum[i] == max)
////			////	{
////			////		cout << "Max sum is" << arrSum[i] << endl;
////			////		for (int j = 0; j < 10; j++)
////			////		{
////			////			cout << arrTot[i][j] << endl;
////			////		}
////
////			////	}
////
////			////}*/
////			//=============================
////		}		
////		
////	}
////	cout << "=========================================================" << endl;
////
////	//створюємо масив сумм
////	for (int i = 0; i < 10; i++)
////	{
////		for (int j = 0; j < 5; j++)
////		{
////			cout << arrTot[i][j] << "	";
////		}
////	cout << "	" << endl;
////	}cout << endl;
////
////	//виводимо масив сумм		
////	for (int i = 0; i < 10; i++)
////	{
////		cout << arrSum[i] << "	";
////
////	}
////	cout << endl;
////
////	max = MaxSum(arrSum);
////	cout << "Maximum of summ is " << max << endl;
////
////
////	//found and print # of max array:
////	for (int i = 0; i < 10; i++)
////	{
////		if (arrSum[i] == max)
////		{
////			cout << "Array with maximum summ of elements has #  " << i+1 << endl;
////			for (int j = 0; j < 5; j++)
////			{
////				cout << arrTot[i][j] << "	";
////			}
////			cout << endl;
////		}
////
////	}
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
////	}
////}
////
////int SummElem(int arr[SIZE])
////{
////	int SumElem = 0;
////	for (int i = 0; i < SIZE; i++)
////	{
////		SumElem += arr[i];
////	}
////	return SumElem;
////}
////
////int MaxSum(int arrSum[10])
////{
////	int max = arrSum[0];//в змінну вкладаємо значення першого елементу масиву, з яким порівнюємо наступні елементи
////	for (int i = 0; i < 9; i++)
////	{
////
////		if (max < arrSum[i + 1])
////		{
////			max = arrSum[i + 1];
////
////		}
////
////	}
////	return max;
////}

							////// TASK 2 //////

/*2. Банкомат.Реалізувати перевантажені функції там, де це необхідно.
- Є реєстрація користувача (логін по номеру карти (масив  int), пароль (масив int), 
або логін по номеру телефону(масив int)).
- Вхід в аккаунт через логін і пароль або через логін і номер телефону(масив int).
- Переказ грошей або на картку або на телефон.
- Вивід грошей або ціле число(передати int) або дробове число(передати double).
Перевірити баланс(на екран).
ATM. Realise overload functions were it needs. 
- there are user registration ()
*/

#include <iostream>;
using namespace std;

int CardBalance1 = 3000;
int CardBalance2 = 500;
int CardBalance3 = 10000;
int CardN = 0;
int money = 0;

///PROTOTIPES

void LoginCard();
void LoginTel();
void Menu();
int Balance(int CardBalance1, int CardBalance2, int CardBalance3);

///////////////// MAIN ////////////////
int main()
{	
		int arrCard[3] = { 2222, 3333, 4444 };
		int arrPassw[3] = { 74, 53, 49 };
		cout << "============>>>   CASH MACHINE   <<<==============" << endl;
		cout << "How to login:\n[1] by the card number;\n[2] by the telephone number;" << endl;
		int userLog = 0;
		cin >> userLog;
		switch (userLog)
		{
		case 1:
		{

			LoginCard();
			break;


		}
		case 2:
		{
			LoginTel();
			break;
		}
		
		}	 
	
	system("pause");
	return 0;
}


///////////////// FUNCTIONS //////////////////

void LoginCard()
{
	cout << "Enter card number( if you`ve forget there were 3 cards: 2222, 3333, 4444)" << endl;
	int CardN = 0;
	cin >> CardN;
	if(CardN==2222)
	{
		cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
		int parol = 0;
		cin>>parol;

		if (parol==74)
		{
			cout << "Correct" << endl;
			Menu();
		}
		else
		{
			cout << "Incorrect password" << endl;
		}

	}
	if (CardN == 3333)
	{
		cout<< "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
		int parol = 0;
		cin >> parol;
		if(parol==53)
		{
			cout << "Correct" << endl;
			Menu();
		}
		else
		{
			cout << "Incorrect password" << endl;
		}
	}
	if (CardN == 4444)
	{
		cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
		int parol = 0;
		cin >> parol;
		if (parol == 49)
		{
			cout << "Correct" << endl;
			Menu();
		}
		else
		{
			cout << "Incorrect password" << endl;
		}
	}
}

void LoginTel()
{
	cout << "Enter telephone number( if you`ve forget, you have only one finantial telephone number: 8068)" << endl;
	int TelN = 0;
	cin >> TelN;
	if (TelN == 8068)
	{
		cout << "Enter card number( if you`ve forget there were 3 cards: 2222, 3333, 4444)" << endl;
		
		cin >> CardN;
		if (CardN == 2222)
		{
			cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
			int parol = 0;
			cin >> parol;

			if (parol == 74)
			{
				cout << "Correct" << endl;
				Menu();
			}
			else
			{
				cout << "Incorrect password" << endl;
			}

		}
		if (CardN == 3333)
		{
			cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
			int parol = 0;
			cin >> parol;
			if (parol == 53)
			{
				cout << "Correct" << endl;
				Menu();
			}
			else
			{
				cout << "Incorrect password" << endl;
			}
		}
		if (CardN == 4444)
		{
			cout << "enter password: (maybe you didn`t remember, but this cards has such passwords: 74, 53, 49 )" << endl;
			int parol = 0;
			cin >> parol;
			if (parol == 49)
			{
				cout << "Correct" << endl;
				Menu();
			}
			else
			{
				cout << "Incorrect password" << endl;
			}
		}
	}
	else { cout << "Uncorrect number" << endl; }
	
}

void Menu()
{int User2 = 0;
	do {
		cout << "Choose the operation: [1] - balance; [2] - get money; [3] - top up the phone; [4] - quit" << endl;

		int sum = 0;
		int temp = 0;
		cin >> User2;
		switch (User2)
		{
		case 1:
		{

			sum = Balance(CardBalance1, CardBalance2, CardBalance3);
			cout << "Your balance is  " << sum << " grn. " << endl;
			break;
		}
		case 2:
		{
			cout << "How much money do you want to get? Enter the natural number" << endl;
			cin >> money;
			temp = sum - money;

			if (temp > 0)
			{
				cout << "Your balance is  " << sum - money << "  grn" << endl;
			}

			else if (temp < 0)
			{
				cout << "You have not enough money" << endl;
			}

			else if (temp = 0)

			{
				cout << "Your balance now is 0 grn." << endl;
			}
			break;
		}
		case 3:
		{
			cout << "How much money do you want to caunt to top up the phone" << endl;
			cin >> money;
			sum = Balance(CardBalance1, CardBalance2, CardBalance3);
			cout << "Your balance is  " << sum << " grn. " << endl;
			break;
		}
		case 4:
		{
			break;
		}

		}
	} while (User2 != 4);

}

int Balance(int CardBalance1, int CardBalance2, int CardBalance3)
{
	int bal=0;
	
		if (CardN == 2222)
		{
			
			bal = CardBalance1;
			cout << "Your balance is  " << bal << endl;
			return bal;			
		}
		else if (CardN==3333)
		{			
			bal = CardBalance2;
			cout << "Your balance is  " << bal << endl;
			return bal;
		}
		else if (CardN==4444)
		{			
			bal = CardBalance3;
			cout << "Your balance is  " << bal << endl;
			return bal;
		}
		
}
