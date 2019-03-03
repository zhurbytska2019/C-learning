////////////////////////////////// CLASSWORK /////////////////////////////////////
////////////////////////////////// REFERENCE /////////////////////////////////////

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	cout << "a = " << a << endl;
//	cout << "adress a = " << &a << endl;
//
//									int *pA = &a;
//	cout << "Pointer a" << *pA << "\tAdress pointer a	" << pA << endl;
//	/*Зараз на одну і ту саму адресу ссилаються і вказівник і змінна*/
//	//Test (int a) - значення змінної а буде те саме, але під час передачі змінної а в функцію, в неї змінюється адреса

//	//якщо ж ми в функцію передаємо вказівник на змінну, то адреса буде та сама!!!
/////jakscho my v funkciju peredaemo vkazivnyk na zminnu, to adresa bude ta sama!!!

//	//AЛЬТЕРНАТИВА ВКАЗІВНИКУ
////ALTERNATYVA VKAZIVNYKU
//									int &RA = a;
//	//REFERENCE
//									cout << "Reference " << RA <<"	Adress reference	"<< &RA << endl;
////Та сама адреса, бо ми посилаємось на ту саму змінну
////Ta sama adresa, bo my posylaemos na tu samu zminnu
//
//	system("pause");
//	return 0;
//}

//////example.
//////# include <iostream>
//////
//////
//////using namespace std;
//////
//////void FVAR(int a) {
//////	cout << "FVAR BEFORE a  value: " << a << " : a addr : " << &a << endl;
//////	a += 100;
//////	cout << "FVAR AFTER a  value: " << a << " : a addr : " << &a << endl;
//////}
//////void FREF(int &a) {
//////	cout << "FREF BEFORE a  value: " << a << " : a addr : " << &a << endl;
//////	a += 300;
//////	cout << "FREF AFTER a  value: " << a << " : a addr : " << &a << endl;
//////}
//////
//////void FPTR(int *a) {
//////	cout << "FPTR BEFORE a  value: " << *a << " : a addr : " << a << endl;
//////	*a += 500;
//////	cout << "FPTR AFTER a  value: " << *a << " : a addr : " << a << endl;
//////}
//////
//////
//////int main() {
//////
//////	int a = 10;
//////
//////	cout << "main a  value: " << a << "  : a addr : " << &a << endl;
//////	//int *pA = &a;
//////	//cout << "*pA  value: " << *pA << " : *pA addr : " << pA << endl;
//////	//cout << "========================Before Ra==================>" << endl;
//////
//////	//int &Ra = a;
//////
//////	//cout << "a  value: " << a << " : a addr : " << &a << endl;
//////	//cout << "&Ra  value: " << Ra << " : &Ra addr : " << &Ra << endl;
//////	cout << "========================After Ra==================>" << endl;
//////
//////	FVAR(a);
//////	//FREF(Ra);
//////	FREF(a); //FREF( Ra );
//////	FPTR(&a);
//////
//////	cout << "main a  value: " << a << "  : a addr : " << &a << endl;
//////
//////	system("pause");
//////	return 0;
//////}


/*		Дано три числа.Оголосити посилання на ці числа. Отримати добуток
		трьох заданих чисел, середє арифметичне, найменше з них, користуючись
		непрямим доступом до чисел(через посилання).
		
		Dano try chysla. Ogolosyty posylannia na ci chysla. Otrymaty dobutok trioh zadanyh chysel, seredne aryfmetychne, 
		najmenshe z nyh, korystujuchyc nepriamym dostupom do chysel (Cherez posylannia).
		*/
		//#include <iostream>
		//#include <ctime>
		//using namespace std;
		//void Dob(int &Ra, int &Rb, int &Rc);
		//void Average(int &Ra, int &Rb, int &Rc);
		//void Min(int &Ra, int &Rb, int &Rc);
		//
		//int main()
		//{
		//	int a = 5, b = 7, c = 10;
		//	int &Ra = a, &Rb = b, &Rc = c;
		//	Dob(Ra, Rb, Rc);
		//	Average(Ra, Rb, Rc);
		//	Min(Ra, Rb, Rc);
		//	system("pause");
		//	return 0;
		//}
		//
		//void Dob(int &Ra, int &Rb, int &Rc) 
		//{
		//	cout << "Dobutok = " << Ra * Rb*Rc << endl;
		//}
		//
		//void Average(int &Ra, int &Rb, int &Rc)
		//{
		//	cout << "Seredne Arufmetychne = " << (Ra + Rb + Rc) / 3 << endl;
		//}
		//
		//void Min(int &Ra, int &Rb, int &Rc)
		//{
		//	
		//	if(Ra<Rb && Ra<Rc)
		//	{
		//		cout << "Minimalne = " << Ra << endl;
		//	}
		//	else if(Rb < Ra && Rb < Rc)
		//	{
		//		cout << "Minimalne = " << Rb << endl;
		//	}
		//	else if (Rc < Ra && Rc < Rb)
		//	{
		//		cout << "Minimalne = " << Rc << endl;
		//	}
		//} 




/*Написати функцію, яка отримує одновимірний масив і повертає ссилку на
найменший елемент масиву.За допомогою цієї функції вивести на екран найменший
елемент та подвоїти найменший елемент масиву.

Napysaty funkciu, jaka otrymye odnovymirnyi masyv i povertae ssylky na naymenshyi element masyvu.
Za dopomogou ciei funkcii vyvesty na ekran najmenshyi element i podvoity jogo.
*/

//////#include <iostream>
//////#include <ctime>
//////using namespace std;
//////
//////void Fill(int arr[], int SIZE);
//////void Print(int arr[], int SIZE);
//////void MinArr(int arr[], int SIZE, int &Rmin);
//////
//////int main()
//////{
//////	srand(unsigned(time(NULL)));
//////	const int SIZE = 5;
//////	int arr[SIZE] = {};
//////	int min = 111110;
//////	int &Rmin = min;
//////
//////	Fill(arr, SIZE);
//////	Print(arr, SIZE);
//////	MinArr(arr, SIZE, Rmin);
//////	cout << "Min element = " << Rmin << endl;
//////	cout << "Min element adress = " << &Rmin << endl;
//////	cout << "Min element *2 = " << Rmin * 2 << endl;
//////
//////
//////	system("pause");
//////	return 0;
//////}
//////
//////void Fill(int arr[], int SIZE)
//////{
//////	for (int i = 0; i < SIZE; i++)
//////	{
//////		arr[i] = rand() % 10 + 1;
//////	}
//////}
//////
//////void Print(int arr[], int SIZE)
//////{
//////	for (int i = 0; i < SIZE; i++)
//////	{
//////		cout << arr[i] << "	";
//////	}cout << endl;
//////
//////}
//////
//////void MinArr(int arr[], int SIZE, int &Rmin)
//////{
//////
//////	for (int i = 0; i < SIZE; i++)
//////	{
//////
//////		if (arr[i] < Rmin)
//////		{
//////			Rmin = arr[i];
//////		}
//////	}
//////}

/*Написати функцію, яка замінює всі від’ємні елементи переданого масиву 
нулями. Примітка! Функція повинна повертати ссилку на відємний елемент

Napysaty funkciu, iaka zaminue vsi videmni elementy peredanogo masyvu
nulamy. Funkcia povynna povertaty ccylku na videmnyi element.*/

//////#include <iostream>
//////#include <ctime>
//////using namespace std;
//////
//////
//////void Fill(int arr[], int SIZE, int &Ra);
//////void Print(int arr[], int SIZE);
//////void Zero(int arr[], int SIZE, int &Ri);
//////
//////
//////int main()
//////{
//////	srand(unsigned(time(NULL)));
//////	const int SIZE = 5;
//////	int arr[SIZE] = {};
//////	int a = 0;
//////	int &Ra = a;	
//////	int i = 0;
//////	int &Ri = i;
//////	
//////	Fill(arr, SIZE, Ra);
//////	cout << "Array before changes" << endl;
//////	Print(arr, SIZE);
//////	Zero(arr, SIZE, i);
//////
//////	cout << "Array after changes/ All negative elements were changed by zeroes" << endl;
//////	Print(arr, SIZE);
//////	
//////	system("pause");
//////	return 0;
//////}
//////
//////void Fill(int arr[], int SIZE, int &Ra)
//////{
//////	cout << "Enter number from - 10 to 10;" << endl;
//////	for (int i = 0; i < SIZE; i++)
//////	{
//////		cin >> Ra;
//////		arr[i] = Ra;
//////	}
//////}
//////
//////void Print(int arr[], int SIZE)
//////{
//////	for (int i = 0; i < SIZE; i++)
//////	{
//////		cout << arr[i] << "	";
//////	}
//////	cout << endl;
//////
//////}
//////
//////void Zero(int arr[], int SIZE, int &Ri)
//////{
//////	for (int Ri = 0; Ri < SIZE; Ri++)
//////
//////	{
//////		if (arr[Ri] < 0)
//////		{			
//////			cout << "Negative element " << Ri << " = " << arr[Ri] << endl;
//////			arr[Ri] = 0;
//////		}
//////	}
//////}

