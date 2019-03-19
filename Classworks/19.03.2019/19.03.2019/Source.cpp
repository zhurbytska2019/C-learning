//////////19.03.2019 C //////////////

////# include <iostream>
////using namespace std;
////
//////create an analog of Strlen function/ 
////int StrLenth(char *str);
////
////int main()
////{
////	char str[255];
////	cin >> str;
////	
////	cout << StrLenth(str) << endl;
////
////	system("pause");
////	return 0;
////}
////int StrLenth(char *str) {
////	int counter = 0;
////	while (str[counter] != '\0') { 
////		counter++;		
////	}
////	return counter;
////}

////////// exemple 2 ///////
////# include <iostream>
////using namespace std;
////
////
////int main()
////{//objednaty dvi stroki v odnu:
////	char str1[255];//jakscho
////	char str2[255];
////	cin >> str1 >> str2;
////
////	// функція strcat_s  - ДОДАЄ СТРОКИ ДРУГУ В ПЕРШУ. 
////	//перший параметр - куди будемо додавати, другим - що будемо додавати
////	
////	strcat_s(str1, str2); 
////	cout << str1 << endl;
////						
////						
////
////	system("pause");
////	return 0;
////}




////// exemple 3 ///////
//switch on class string

////# include <iostream>
////# include <string> //switch on class string
////using namespace std;
////
////
//////create an analog of Strlen function/ 
//////int StrLenth(char *str);
////
////int main()
////{//objednaty dvi stroki v odnu:
////	string str = "Hello";
////	string str1 = "World";
////
////	string res = str + " " + str1 + " My text"; // це КОНКАТЕНАЦІЯ СТРОК
////	//це не масив. Нам не потрібно під нього виділяти місце
////	cout << res << endl;
////
////	//Порахуємо довжину даної строки за допомогою нашої першої функції
////	
////
////	/*cout << StrLenth(str) << endl;*/
////	
////
////
////	system("pause");
////	return 0;
////}
//////int StrLenth(char *str) {
//////	int counter = 0;
//////	while (str[counter] != '\0') {
//////		counter++;
//////	}
//////	return counter;
//////}


///TASK 1///
/*Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?  

*/
//////# include <iostream>
//////# include <string> //switch on class string
//////using namespace std;
//////int counterA = 0;
//////int counterO = 0;
//////void Count(char str[]);
//////
//////int main()
//////{
//////
//////	char str[255];
//////	cout << "Enter str" << endl;
//////	cin >> str;
//////	cout << "Common number of elemets is:  ";
//////	cout << strlen(str) << endl;
//////	Count(str);
//////
//////	if (counterA > counterO) {
//////		cout << "'A' is more then 'O'";
//////	}
//////	if (counterA < counterO) {
//////		cout << "'O' is more then 'A'";
//////	}
//////	system("pause");
//////	return 0;
//////}
//////
//////void Count(char str[]) {
//////
//////	for (int i = 0; i < strlen(str); i++)
//////			{
//////		
//////		if (str[i] == 97) {
//////			cout << char(str[i]) << " ";
//////				counterA++;
//////		}
//////		if (str[i] == 111) {
//////			cout << char(str[i]) << " ";
//////			counterO++;
//////		}				
//////			}
//////			cout<<endl;
//////
//////}


///TASK 2///
/*Вводиться рядок. Порахувати кількість латинських букв, 
цифр та розділових знаків у рядку.

*/
//////# include <iostream>
//////# include <string> //switch on class string
//////using namespace std;
//////int counterLit = 0;
//////int counterSym = 0;
//////int counterAllSym = 0;
//////
//////void Foo(char *str);
//////
//////int main()
//////{
//////
//////	char str[255];
//////	cout << "Enter str" << endl;
//////	cin >> str;
//////	cout << "Common number of elemets is:  ";
//////	cout << strlen(str) << endl;
//////	Foo(str);
//////
//////	cout << "Amount of Latin symbols" <<counterLit << endl;
//////	cout<< "Amount of Kirillic symbols" << counterSym << endl;
//////	cout<< "Amount of symbols" << counterAllSym << endl;
//////	
//////	system("pause");
//////	return 0;
//////}
//////
//////void Foo(char *str) {
//////
//////	for (int i = 0; i < strlen(str); i++)
//////	{
//////
//////		if (str[i] > 65 && str[i] < 90 || str[i] > 97 && str[i] < 122) {
//////			cout << char(str[i]) << " ";
//////			cout << "IF 1 " << endl;
//////			cout << "The simbol is latin " << endl;
//////			counterLit++;
//////		}
//////
//////		else if (str[i] > 128 && str[i] < 175 || str[i] > 224 && str[i] < 247) {
//////			cout << char(str[i]) << " ";
//////			cout << "The symbol is Kirillic " << endl;
//////			counterSym++;
//////		}
//////
//////		else {
//////
//////			cout << char(str[i]) << " ";
//////			cout << "Its technical symbol " << endl;
//////			counterAllSym++;
//////		}
//////		cout << endl;
//////	}
//////}




///TASK 3///
/* 
Дано рядок. Замінити у рядку всі великі букви на малі і навпаки. 

*/
# include <iostream>
# include <string> //switch on class string
using namespace std;
int counterLit = 0;
int counterSym = 0;
int counterAllSym = 0;

void ChangeReg(char *str);
void Print(char *str);

int main()
{

	char str[255];
	cout << "Enter str" << endl;
	cin >> str;
	
	ChangeReg(str);
	Print(str);

	system("pause");
	return 0;
}


//function changes the register
void ChangeReg(char *str) {

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] > 65 && str[i] < 90) {
			/*cout << str[i] << endl;*/

			/*cout << char(str[i]+32) << " ";*/ //перевіряємо себе чи правильно виводить значення букви
		   str[i] = str[i] + 32;
		}
		
		 else if (str[i] > 97 && str[i] < 122) {
			/*cout << str[i] << endl;*/

			/*cout << char(str[i] - 32) << " ";*/
			str[i] = str[i] - 32;
		}
			
		cout << endl;
	}
}

void Print(char *str) {
	for (int i = 0; i < strlen(str); i++)
	{
		cout << char(str[i]);
	}
	cout << endl;
}
