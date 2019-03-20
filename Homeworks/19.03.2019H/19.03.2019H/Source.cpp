///===>>> 19.03.2019H <<<===///

/*1) Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку. 
2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику: кількість 
пробільних символів (whitespaces), голосних, приголосних, знаків пунктуації. 
Введення передбачається англомовним. 
*/

# include <iostream>
# include <string> //switch on class string
using namespace std;
int counterVovel = 0; // golosni zvuky
int counterConsonant = 0; //prygolosni zvuky
int counterNum = 0; //counter of numbers
int counterSp = 0; //counter of spaces
int counterAllSym = 0; // counter of another symbols

void Foo(char *str);

int main()
{
	setlocale(LC_ALL, "Russian");
	char str[255];
	cout << "Enter text (any symbols): " << endl;
	cin >> str;
	cout << "Common number of elemets is:  ";
	cout << strlen(str) << endl;
	
	Foo(str);

	cout << "Amount of vovel sounds:	" << counterVovel << endl;
	cout << "Amount of consonant sounds:	" << counterConsonant << endl;
	cout << "Amount of numbers:	" << counterNum << endl;
	cout << "Amount of whitespaces:	" << counterSp << endl;


	system("pause");
	return 0;
}

void Foo(char *str) {

	for (int i = 0; i < strlen(str); i++)
	{

		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
			/*cout << char(str[i]) << " ";*/
			
			/*cout << "Latin " << endl;*/
			
			if (str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 89)
			{
				/*cout << "vovel sound (golosnyj)" << endl;*/
				counterVovel++;
			}
			
			else if (str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117 || str[i] == 121)
			{
				/*cout << "vovel sound (golosnyj)" << endl;*/
				counterVovel++;
			}


			else
			{
				/*cout << "consonant sound (prygolosnyj)" << endl;*/
				counterConsonant++;
			}
		}
						
		else if (str[i] >= 48 && str[i] <= 57) {
			/*cout << char(str[i]) << " ";
			cout << "Number " << endl;*/
			counterNum++;
		} 		
		
		else {
			/*cout << char(str[i]) << " ";
			cout << "Technical symbol " << endl;*/
			counterAllSym++;
		}
		cout << endl;
	}
}
