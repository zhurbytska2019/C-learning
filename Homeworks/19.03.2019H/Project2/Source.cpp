////TEST2
/*Вводиться рядок. Порахувати кількість латинських букв,
цифр та розділових знаків у рядку.

*/
# include <iostream>
# include <string> //switch on class string
using namespace std;
int counterLit = 0;
int counterSym = 0;
int counterAllSym = 0;

void Foo(char *str);

int main()
{

	char str[255];
	cout << "Enter str" << endl;
	cin >> str;
	cout << "Common number of elemets is:  ";
	cout << strlen(str) << endl;
	Foo(str);

	cout << "Amount of Latin symbols" <<counterLit << endl;
	cout<< "Amount of Kirillic symbols" << counterSym << endl;
	cout<< "Amount of symbols" << counterAllSym << endl;
	
	system("pause");
	return 0;
}

void Foo(char *str) {

	for (int i = 0; i < strlen(str); i++)
	{

		if (str[i] > 65 && str[i] < 90 || str[i] > 97 && str[i] < 122) {
			cout << char(str[i]) << " ";
			cout << "IF 1 " << endl;
			cout << "The simbol is latin " << endl;
			counterLit++;
		}

		else if (str[i] > 128 && str[i] < 175 || str[i] > 224 && str[i] < 247) {
			cout << char(str[i]) << " ";
			cout << "The symbol is Kirillic " << endl;
			counterSym++;
		}

		else {

			cout << char(str[i]) << " ";
			cout << "Its technical symbol " << endl;
			counterAllSym++;
		}
		cout << endl;
	}
}