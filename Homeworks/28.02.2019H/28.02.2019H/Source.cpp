///////// HOMEWORK 28.02.2019/////////
///////// task 1 /////////////////////
/*Створити 3 динамічних змінних різного типу. Заповнити їх деякими значеннями. 
Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних.

Stvoryty try dynamichnyh zminnyh riznogo typu. Zapovnyty ih dejakymy znachenniamy.
Obchyslyty i vyvesty na ekran ih dobutok, a takog sami znachennia dynamichnyh zminnyh
*/

#include <iostream>
using namespace std;


int main()
{
	int *pa = new int;
	cout << "Enter number int" << endl;
	cin >> *pa;

	float *pb = new float;
	cout << "Enter number float" << endl;
	cin >> *pb;

	double *pc = new double;
	cout << "Enter number double" << endl;
	cin >> *pc;

	cout << "\t" << endl;
	cout << "A value a = " << *pa << "\t An adress a = " << pa << endl;
	cout << "A value b = " << *pb << "\t An adress b = " << pb << endl;
	cout << "A value c = " << *pc << "\t An adress c = " << pc << endl<<endl;

	cout << "Multiplication a * b * c = " << (*pa)<<" * "<<(*pb)<<" * "<<(*pc)<<" = " << (*pa) * (*pb) * (*pc) << endl<<endl;
	
	pa = NULL;
	delete pa;

	pb = NULL;
	delete pb;

	pc = NULL;
	delete pc;

	system("pause");
	return 0;
}