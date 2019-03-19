
				///14.03.2019 HOMEWORK ///
						///TASK 1///

/*
Написати програму, яка отримує від користувача довільний набір
cимволів, шифрує його та виводить на екран новоутворений рядок.
Для шифрування скористатись звичайними арифметичними операціями ++, --,
збільшення або зменшення на якесь число тощо. Наприклад,
при введенні ABА на екрані буде ВСВ.
*/
//# include <iostream>
//# include <string> //switch on class string
//using namespace std;
//
//
//void Encript(char *str);
//void Encript(char *str, int *pCode);
//void Print(char *str);
//
//int main()
//{
//	int choice = 0; //variable, which contains choice of the user;
//	int code = 0; // variable, which contains number for encription;
//	int *pCode = &code;
//	cout << "==========> an encription program <==========" << endl;
//	cout << "[1] - encription by adding 1 symbol;\n[2] - encription by adding your number.[3]" << endl;
//	cin >> choice;
//	char str[255]; //created array type CHAR;
//	cout << "Enter str - any symbols: " << endl;
//	cin >> str;
//
//	switch (choice)
//	{
//	case 1:
//	{
//		Encript(str);
//		Print(str);
//		break;
//	}
//	case 2:
//	{				
//		Encript(str, pCode);
//		Print(str);
//		break;
//	}
//
//	}
//		
//	system("pause");
//	return 0;
//}
//
//
////function changes the register
//void Encript(char *str) {
//
//	for (int i = 0; i < strlen(str); i++)
//	{
//		str[i] = str[i]++;
//	}
//}
//
//void Encript(char *str, int *pCode) {
//	cout << "Enter number to encript your message" << endl;
//	cin >> *pCode;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		str[i] = str[i]+*pCode;
//	}
//}
//
//void Print(char *str) {
//	for (int i = 0; i < strlen(str); i++)
//	{
//		cout << char(str[i]);
//	}
//	cout << endl;
//}


# include <iostream>
# include <string> //switch on class string
using namespace std;


void Encript(char *str);
void Encript(char *str, int *pCode);
void Print(char *str);

int main()
{
	int choice = 0; //variable, which contains choice of the user;
	int code = 0; // variable, which contains number for encription;
	int *pCode = &code;
	cout << "==========> an encription program <==========" << endl;

	bool exit = false; //condition for exit from the cycl DO

	while (!exit)
	{
		cout << "[1] - exit;\n[2] - encription by adding 1 symbol;\n[3] - encription by adding your number." << endl;
		cin >> choice;
		char str[255]; //created array type CHAR;
		cout << "Enter str - any symbols: " << endl;
		cin >> str;

		switch (choice)
		{
		case 1:
		{
			cout << "exit" << endl;
			exit = true;
			break;
		}
		case 2:
		{
			Encript(str);
			Print(str);
			break;
		}
		case 3:
		{
			Encript(str, pCode);
			Print(str);
			break;
		}
		}
	}


	system("pause");
	return 0;
}


//overload function for encription
void Encript(char *str) {

	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = str[i]++;
	}
}

//overload function for encription
void Encript(char *str, int *pCode) {
	cout << "Enter number to encript your message" << endl;
	cin >> *pCode;
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = str[i] + *pCode;
	}
}

//function for printing
void Print(char *str) {
	for (int i = 0; i < strlen(str); i++)
	{
		cout << char(str[i]);
	}
	cout << endl;
}