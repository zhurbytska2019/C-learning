///===>>> 19.03.2019H <<<===///

/*1) Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку. 
2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику: кількість 
пробільних символів (whitespaces), голосних, приголосних, знаків пунктуації. 
Введення передбачається англомовним. 
*/
 
# include <iostream>
# include <string>		//switch on class string
using namespace std;

//Function whith parametres array str, pointers for the counters
void SignsOfSound(char *str, int *pcntrVovel, int *pcntrConsonant, int *pcntrSp, int *pcntrComa);

int main()
{
	int cntrVovel = 0;	 //golosni zvuky
	int cntrConsonant = 0;	 //prygolosni zvuky
	int cntrSp = 0;		//counter of spaces
	int cntrComa = 0;	// counter of punctuation

	int *pcntrVovel = &cntrVovel;
	int *pcntrConsonant = &cntrConsonant;
	int *pcntrSp = &cntrSp;
	int *pcntrComa = &cntrComa;

	char str[255];
	cout << "Enter text - any symbols, but instead witespace enter ""_"" " << endl;
	cin >> str;
	
	//This function counts number of whitespaces, vovel, consonant sounds and punctuation signs
	
	SignsOfSound(str, pcntrVovel, pcntrConsonant, pcntrSp, pcntrComa);

	cout << "Vovel sounds:	" << *pcntrVovel << endl;
	cout << "Consonant sounds:	" << *pcntrConsonant << endl;
	cout << "Punctuation signs:	" << *pcntrComa << endl;
	cout << "Whitespaces:	" << *pcntrSp << endl;

	char rem[2]; //Symbol need to remote
	cout << "What symbol need to remove?" << endl;
	cin >> rem;
	
	system("pause");
	return 0;
}

void SignsOfSound(char *str, int *pcntrVovel, int *pcntrConsonant, int *pcntrSp, int *pcntrComa) {
	
	
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {
			
			if (str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
			{
				*pcntrVovel++;				
			}
			else
			{				
				*pcntrConsonant++;
			}
		}
						
		else if (str[i] == 95) {
			
			*pcntrSp++;
		} 		
		
		else if (str[i] == 33 || str[i] == 44){
			*pcntrComa++;
		}		
	}	
}


void RemSymb(char *str, char rem) {
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == rem) {
			for (int j = 0; j < strlen(str); j++)
			{

			}
		}
	}
	

}




