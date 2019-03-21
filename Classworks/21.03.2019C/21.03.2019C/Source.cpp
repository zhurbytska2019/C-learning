///===>>> 21.03.2019C <<<===///

//lets do programm, that get kurs valut from PrivatBank, NBU, SW.....
////# include <iostream>
////# include <string> //switch on class string
////using namespace std;
////
//////Fukcija sho bere kurs iz PB
////string GetDataFromPB() 
////{
////	return "Data from PB";
////}
////
//////f, jaka vyklykae poperednu f/ Vona pryjmae vkazivnyk na inshu funciju
////void ShowInfo(string (*FunkPtr)())
////{
////	/*cout << GetDataFromPB() << endl;*/
////	cout << FunkPtr() << endl;
////}
////
//////Fukcija sho bere kurs iz NBU
////string GetDataFromNBU()
////{
////	return "Data from NBU";
////}
////
////string GetDataFromSW()
////{
////	return "Data from SW";
////}
////
////
////int main()
////{
////	//       V funcciu peredaemo f-u z konkretnym bankom iz vypadajuchogo spysku
////	ShowInfo(GetDataFromPB); 
////
////	system("pause");
////	return 0;
////}



/*Написати 2 логічні функції : bigger(int, int) – повертає true, якщо перше число більше другого,
інакше повертає false; функція smaller(int, int) – навпаки, повертає true, якщо перше менше другого.
Написати функцію sort_arr(int *array, int size, bool(*f)(int, int)) для впорядкування масиву.
Функція отримує масив та вказівник на логічну функцію, яка буде задавати порядок сортування.
Так, наприклад, при передачі у функцію sort_arr() третім аргументом адреси функції bigger, 
масив впорядкується по зростанню, а при передачі адреси функції smaller, масив впорядкується по спаданню.*/

////# include <iostream>
////# include <string> //switch on class string
////# include <ctime>
////using namespace std;
////
////void Fill(int arr[], const int S) 
////{
////	for (int i = 0; i < S; i++)
////	{
////		arr[i] = rand() % 10 + 1;
////	}
////	
////}
////
////void Print(int arr[], const int S) 
////{
////	for (int i = 0; i < S; i++)
////	{
////		cout << "arr [ " << i << " ] = " << arr[i] << endl;
////	}
////	
////}
////
////bool Bigger(int a, int b)
////{
////	if (a>b)
////	{
////		return true;
////	}
////	else if (a < b)
////	{
////		return false;
////	}
////}
////
////bool Smaller(int a, int b)
////{
////	if (a < b)
////	{
////		return true;
////	}
////	else if (a > b)
////	{
////		return false;
////	}
////}
////
////void SortUp(int arr[], const int S)
////{
////	int temp; // временная переменная для обмена элементов местами
////
////		// Сортировка массива пузырьком
////	for (int i = 0; i < S - 1; i++) {
////		for (int j = 0; j < S - i - 1; j++) {
////			if (arr[j] > arr[j + 1]) {
////				// меняем элементы местами
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		}
////	}
////
////	// Вывод отсортированного массива на экран
////
////	cout << "Sorting Up" << endl;
////	for (int i = 0; i < S; i++) {
////		cout << "arr [ " << i << " ] = " <<arr[i]<<endl;
////	}
////}
////
////
////void SortDown(int arr[], const int S)
////{
////	int temp; // временная переменная для обмена элементов местами
////
////		// Сортировка массива пузырьком
////	for (int i = 0; i < S - 1; i++) {
////		for (int j = 0; j < S - i - 1; j++) {
////			if (arr[j] < arr[j + 1]) {
////				// меняем элементы местами
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		}
////	}
////
////	// Вывод отсортированного массива на экран
////	cout << "Sorting Down" << endl;
////	for (int i = 0; i < S; i++) {
////		cout << "arr [ " << i << " ] = " <<arr[i]<<endl;
////	}
////	
////}
////
////
////void SortArray(int *arr, const int S, bool(*f)(int a, int b))
////{
////	int a = 0;
////	int b = 0;
////
////	cout << "Enter first number: " << endl;
////	cin >> a;
////	cout << "Enter second number: " << endl;
////	cin >> b;
////
////	cout << "Resulf Bigger function  "<<Bigger(a, b) << endl;
////	cout << "Resulf Smaller function  " << Smaller(a, b) << endl << endl;
////
////	cout << "===========================================================" << endl;
////
////	cout << "Array after sorting: " << endl<<endl;
////
////	if (f(a, b)) {
////		SortUp(arr, S);
////	}
////	else {
////		SortDown(arr, S);
////	}
////}
////
////int main()
////{
////	srand(unsigned(time(NULL)));
////	const int S = 5;
////	int arr[S] = {};
////	Fill(arr, S);
////	Print(arr, S);
////
////	int a = 0;
////	int b = 0;	
////
////	SortArray(arr, S, Bigger);
////
////	system("pause");
////	return 0;
////}


/*Задано рядок, що складається із символів. Символи поєднуються в слова. 
Слова відокремлюються одним або декількома пробілами. Наприкінці тексту 
ставиться крапка. Текст містить не більш 255 символів 
*/

# include <iostream>
# include <string> //switch on class string
# include <ctime>
using namespace std;

void Separate(char *Row)
{
	for (int i = 0; i < 255; i++)
	{
		
	}
}

int main()
{
	char Row[255];
	cout << "Enter row of text" << endl;
	cout << "Instead whitespaces enter underscore ""_""" << endl;
	cin >> Row;


	system("pause");
	return 0;
}