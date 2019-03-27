
							///===>>> 19.03.2019H <<<===///
							////===>>> TASK 1 <<<===////
/*1) Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку.
1)Dano riadok. Vydalyty iz riadka zadanyj symvol. Rezultat rozmistyty u novomu riadku.*/
////===>>> TASK 1 <<<===////
# include <iostream>
# include <string>		//switch on class string
using namespace std;


int main()
{
	
	system("pause");
	return 0;
}



							////===>>> TASK 2 <<<===////
/*2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику: кількість
пробільних символів (whitespaces), голосних, приголосних, знаків пунктуації.
Введення передбачається англомовним.
2)Rozrobyty programu, jaka zchytuje z ekranu rjadok, a potim vydaje statystyku: kilkist
probilnyh symvoliv (whitespaces), golosnyh, prygolosnyh, znakiv punctuacii.
Vvedennia peredbachaetcia anglomovnym.
*/

//////# include <iostream>
//////# include <string>		//switch on class string
//////using namespace std;
//////
////////Function whith parametres array str, pointers for the counters
//////void SignsOfSound(char *str, int *pcntrVovel, int *pcntrConsonant, int *pcntrSp, int *pcntrComa);
//////
//////int main()
//////{
//////	int cauntVovel = 0;		 //golosni zvuky
//////	int cauntConsonant = 0;	 //prygolosni zvuky
//////	int cauntSp = 0;			 //counter of spaces
//////	int cauntComa = 0;		 // counter of punctuation
//////
//////	int *pcauntVovel = &cauntVovel;
//////	int *pcauntConsonant = &cauntConsonant;
//////	int *pcauntSp = &cauntSp;
//////	int *pcauntComa = &cauntComa;
//////
//////	char str[255];
//////	cout << "==> This program caunts number of whitespaces, vovel, consonant sounds and punctuation signs <==" << endl;
//////	cout << "Enter text in english: " << endl;
//////	cin.getline(str, sizeof(str));		//Zamist cin>> - dozvoliae vrahovuvaty probily
//////	
//////	//This function counts number of whitespaces, vovel, consonant sounds and punctuation signs
//////	
//////	SignsOfSound(str, pcauntVovel, pcauntConsonant, pcauntSp, pcauntComa);
//////
//////	cout << "	Vovel sounds:	" << *pcauntVovel << endl;
//////	cout << "	Consonant sounds:	" << *pcauntConsonant << endl;
//////	cout << "	Punctuation signs:	" << *pcauntComa << endl;
//////	cout << "	Whitespaces:	" << *pcauntSp << endl;
//////	
//////	system("pause");
//////	return 0;
//////}
//////
////////This function counts number of whitespaces, vovel, consonant sounds and punctuation signs
//////void SignsOfSound(char *str, int *pcauntVovel, int *pcauntConsonant, int *pcauntSp, int *pcauntComa) {
//////		
//////	for (int i = 0; i < strlen(str); i++)
//////	{
//////		if (((int(str[i])) >= 65 && (int(str[i])) <= 90) || (int(str[i])) >= 97 && (int(str[i])) <= 122) 
//////		{			
//////			if ((int (str[i])) == 65 || (int (str[i])) == 69 || (int(str[i])) == 73 || (int(str[i])) == 79 || (int(str[i])) == 85 || (int(str[i])) == 97 || (int(str[i])) == 101 || (int(str[i])) == 105 || (int(str[i])) == 111 || (int(str[i])) == 117)
//////			{
//////				(*pcauntVovel)++;
//////			}
//////			else
//////			{				
//////				(*pcauntConsonant)++;
//////			}
//////		}
//////						
//////		else if ((int(str[i])) == 32) {
//////			
//////			(*pcauntSp)++;
//////		} 		
//////		
//////		else if ((int(str[i])) == 33 || (int(str[i])) == 44){
//////			(*pcauntComa)++;
//////		}		
//////	}	
//////}
