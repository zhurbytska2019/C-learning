////test1
# include <iostream>
# include <string> //switch on class string
using namespace std;

void ChangeReg(char *str);
void Print(char *str);

int main()
{
	char str[255];
	cout << "Enter your text (in english only): " << endl;
	cin >> str;

	ChangeReg(str);
	Print(str);

	system("pause");
	return 0;
}


 ==> function changes the register
void ChangeReg(char *str) {

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] <= 90) {
			/*cout << str[i] << endl;*/

			/*cout << char(str[i]+32) << " ";*/ //перевіряємо себе чи правильно виводить значення букви
			str[i] = str[i] + 32;
		}

		else if (str[i] >= 97 && str[i] <= 122) {
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
