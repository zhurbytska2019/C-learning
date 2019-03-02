////// POINTERS ////
# include <iostream>
using namespace std;

void Func(int *pA, int *pB)
{
	cout << "Func *pA value  " << *pA << "  a adress " << pA << endl;
	cout << "Func *pB value  " << *pB << "  a adress " << pB << endl;
	
	//створили тимчасову змінну для обміну значень змінних місцями// 
	int temp = *pA;
	*pA = *pB;
	*pB = temp;
	cout << "=================AFTER================" << endl;
	//поміняли місцями значення, не адреси
	cout << "Func *pA value  " << *pA << "  a adress " << pA << endl;
	cout << "Func *pB value  " << *pB << "  a adress " << pB << endl;
}

void Foo(int a, int b)
{
	cout << "Foo a value  " << a << "  a adress " << &a << endl;
	cout << "Foo a value  " << b << "  a adress " << &b << endl;

	

}

int main()
{
	////вказівники
	//////int a = 10;

	//////cout << "a value =  " << a << " a adress = " << &a << endl;
	//////int *pA = &a;

	//////cout << "*pA value =  " << a << " pA adress = " << *pA << endl;

	//////cout << "====================================>" << endl;

	//////int *pointer = &a;//створили новий вказівник і поклали в нього теж адресу на змінну а


	//створимо дві змінних  та поміняємо їх значення місцями

	int a = 10, b = 20;

	cout << "a value  " << a << "  a adress " << &a << endl;
	cout << "a value  " << b << "  a adress " << &b << endl;
	cout << "=================================" << endl;

	Foo(a, b);
	int *pA = &a;
	int *pB = &b;

	Func(pA, pB);////передаємо адреси в пам'яті

	cout << "----------------- RESULT --------------------" << endl;
	cout << "a value  " << a << "  a adress " << &a << endl;
	cout << "a value  " << b << "  a adress " << &b << endl;
	cout << "=================================" << endl;
	

	system("pause");
	return 0;
}




/*Дано три числа.Оголосити вказівники на ці числа.
	Отримати добуток трьох заданих чисел, середє арифметичне,
	найменше з них, користуючись непрямим доступом до чисел (через вказівники).

	Виконати задачу 1 з використанням void вказівників.
	*/


	# include <iostream>
	using namespace std;
	
	
	void Dob(int *pA, int *pB, int *pC, int*pDob);
	void Average(int *pA, int *pB, int *pC, int *pSAryph);
	void Minim(int *pA, int *pB, int *pC, int *pMin);
	
	
	
	
	int main()
	{
		int a = 5;
		int b = 10;
		int c = 20;
	
		int *pA = &a;
		int *pB = &b;
		int *pC = &c;
	
		int dob = 0;
		int SAryph = 0;
		int Min = 0;
	
		int *pDob = &dob;
		int *pSAryph = &SAryph;
		int *pMin=&Min;
	
		Dob(pA, pB, pC, pDob);
		Average(pA, pB, pC, pSAryph);
		Minim(pA, pB, pC, pMin);
	
		cout << "Dobutok a*b*c = " << *pDob << endl;
		cout << "Seredne aryfmetychne = " << *pSAryph << endl;
		cout << "Minimalne = " << *pMin << endl;
	
		system("pause");
		return 0;
	}
	void Dob(int *pA, int *pB, int *pC, int*pDob)
	{
		int dob = 0;
		*pDob = (*pA) * (*pB) * (*pC);	
	}
	
	void Average(int *pA, int *pB, int *pC, int *pSAryph)
	{	
		*pSAryph = ((*pA) + (*pB) + (*pC))/3;	
	}
	
	void Minim(int *pA, int *pB, int *pC, int *pMin)
	{
		
		if(*pA<*pB && *pA<*pC)
		{
			*pMin = *pA;
		}
		else if(*pB < *pA && *pB < *pC)
		{
			*pMin = *pB;
		}
		else if (*pC < *pA && *pC < *pB)
		{
			*pMin = *pC;
		}	
	}


	/*Дано три числа.Оголосити вказівники на ці числа.
		Отримати добуток трьох заданих чисел, середє арифметичне,
		найменше з них, користуючись непрямим доступом до чисел (через вказівники).

		Виконати задачу 1 з використанням void вказівників.

		Зробити її шаблонною
		*/

		# include <iostream>
		using namespace std;
		
		template <typename T>
		void Dob(T *pA, T *pB, T *pC, T *pDob);
		
		template <typename T>
		void Average(T *pA, T *pB, T *pC, T *pSAryph);
		
		template <typename T>
		void Minim(T *pA, T *pB, T *pC, T *pMin);
		
		
		
		
		int main()
		{
			double a = 5;
			double b = 10;
			double c = 20;
		
			double *pA = &a;
			double *pB = &b;
			double *pC = &c;
		
			double dob = 0;
			double SAryph = 0;
			double Min = 0;
		
			double *pDob = &dob;
			double *pSAryph = &SAryph;
			double *pMin = &Min;
		
			Dob(pA, pB, pC, pDob);
			Average(pA, pB, pC, pSAryph);
			Minim(pA, pB, pC, pMin);
		
			cout << "Dobutok a*b*c = " << *pDob << endl;
			cout << "Seredne aryfmetychne = " << *pSAryph << endl;
			cout << "Minimalne = " << *pMin << endl;
		
			system("pause");
			return 0;
		}
		
		template <typename T>
		void Dob(T *pA, T *pB, T *pC, T *pDob)
		{
			int dob = 0;
			*pDob = (*pA) * (*pB) * (*pC);
		}
		
		template <typename T>
		void Average(T *pA, T *pB, T *pC, T *pSAryph)
		{
			*pSAryph = ((*pA) + (*pB) + (*pC)) / 3;
		}
		
		template <typename T>
		void Minim(T *pA, T *pB, T *pC, T *pMin)
		{
		
			if (*pA < *pB && *pA < *pC)
			{
				*pMin = *pA;
			}
			else if (*pB < *pA && *pB < *pC)
			{
				*pMin = *pB;
			}
			else if (*pC < *pA && *pC < *pB)
			{
				*pMin = *pC;
			}
		}


		
