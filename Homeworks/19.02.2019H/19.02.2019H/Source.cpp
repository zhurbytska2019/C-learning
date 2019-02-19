////////////// Homework 19.02.2019  /////////////////

///////////////////// TASK 1 ////////////////////////

//1. 	»спользу€ указатели и оператор разименовани€, определить наибольшее из двух чисел
////# include <iostream>
////using namespace std;
////
////void Maximum(int *pA, int *pB, int *pMax);
////
////int main()
////{
////	int a = 0;
////	int b = 0;
////
////	cout << "Enter first number " << endl;
////	cin >> a;
////	cout << "Enter second number " << endl;
////	cin >> b;
////
////	int *pA = &a;
////	int *pB = &b;
////
////	
////	int max = 0;
////	
////	int *pMax = &max;
////
////	
////	Maximum(pA, pB,  pMax);
////
////	
////	cout << "The maximum number is = " << *pMax << endl;
////	
////	system("pause");
////	return 0;
////}
////
////void Maximum(int *pA, int *pB, int *pMax)
////{
////
////	if (*pA > *pB)
////	{
////		*pMax = *pA;
////	}
////	else 
////	{
////		*pMax = *pB;
////	}	
////}


///////////////////// TASK 2 ////////////////////////

/*2	»спользу€ указатели и оператор разименовани€, обмен€ть местами значени€ 3-x переменных.*/


//# include <iostream>
//using namespace std;
//
//void Change(int *pA, int *pB, int *pC);
//
//
//int main()
//{
//	int a = 10, b = 20, c = 150;
//
//	cout << "a value a =  " << a << endl;
//	cout << "a value b = " << b << endl;
//	cout << "a value c = " << c << endl;
//		
//	int *pA = &a;
//	int *pB = &b;
//	int *pC = &c;
//	Change(pA, pB, pC);
//	
//	system("pause");
//	return 0;
//}
/////////// Function //////////
//void Change(int *pA, int *pB, int *pC)
//{
//	cout << " -------------- BEFORE ----------------" << endl;
//	cout << " *pA value  " << *pA << endl;
//	cout << " *pB value  " << *pB << endl;
//	cout << " *pC value  " << *pC << endl;
//
//	//створили 2 тимчасов≥ зм≥нн≥ дл€ обм≥ну значень заданих зм≥нних м≥сц€ми// 
//	int temp = *pA;
//	*pA = *pB;
//	*pB = temp;
//	int temp1 = *pC;
//	*pC = *pB;
//	*pB= temp1;
//
//	cout << "================= AFTER ================" << endl;
//	//пом≥н€ли м≥сц€ми значенн€
//	cout << "*pA value  " << *pA << endl;
//	cout << "*pB value  " << *pB << endl;
//	cout << "*pC value  " << *pC << endl;
//}


///////////////////// TASK 3 ////////////////////////

/*3 Ќаписать примитивный калькул€тор, пользу€сь только указател€ми.*/

////# include <iostream>
////using namespace std;
////
////template <typename T>
////void Plus(T *pA, T *pB, T *pSum);
////
////
////template <typename T>
////void Substruct(T *pA, T *pB, T *pMines);
////
////
////template <typename T>
////void Mult(T *pA, T *pB, T *pMultipl);
////
////
////template <typename T>
////void Div(T *pA, T *pB, T *pDivide);
////
////
////
////int main()
////{
////	cout << "/////////// CALCULATOR ////////////" << endl;
////	
////	cout << "Enter first number (a)" << endl;
////	int a = 0;
////	cin >> a;
////
////	int *pA = &a;
////
////	cout << "Enter second number (b)" << endl;
////	int b = 0;
////	cin >> b;
////
////	int *pB = &b;
////
////	int sum = 0;
////	int *pSum = &sum;
////
////	int mines = 0;
////	int *pMines = &mines;
////
////	int multipl = 0;
////	int *pMultipl = &multipl;
////
////	int divide = 0;
////	int *pDivide = &divide;
////	
////	cout << "choose an operation:  [1] - ""+"" addition \n [2] - ""-"" substruction; \n [3] - ""*"" multiplication;\n[4] - ""/"" deviding." << endl;
////	int choice = 0;
////	cin >> choice;
////
////	int *pChoice = &choice;
////	switch(choice)
////	{
////	case 1:
////	{
////		cout << " + " << endl;
////		cout << "============================" << endl;
////		Plus(pA, pB, pSum);
////		cout << *pSum << endl;
////		break;
////	}
////	case 2:
////	{
////		cout << " - " << endl;
////		cout << "============================" << endl;
////		Substruct(pA, pB, pMines);
////		cout << *pMines << endl;
////		break;
////	}
////	case 3:
////	{
////		cout << " * " << endl;
////		cout << "============================" << endl;
////		Mult(pA, pB, pMultipl);
////		cout << *pMultipl << endl;
////		break;
////	}
////	case 4:
////	{
////		cout << " / " << endl;
////		cout << "============================" << endl;
////		Div(pA, pB, pDivide);
////		cout << *pDivide << endl;
////		break;
////	}
////	}
////	system("pause");
////	return 0;
////}
////
////template <typename T>
////void Plus(T *pA, T *pB, T*pSum)
////{
////	*pSum = *pA + *pB;
////}
////
////template <typename T>
////void Substruct(T *pA, T *pB, T *pMines)
////{
////	*pMines = *pA - *pB;
////}
////
////template <typename T>
////void Mult(T *pA, T *pB, T *pMultipl)
////{
////	*pMultipl = (*pA) * (*pB);
////}
////
////template <typename T>
////void Div(T *pA, T *pB, T *pDivide)
////{
////	*pDivide = (*pA) / (*pB);
////}
