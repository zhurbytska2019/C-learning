//////////////////////////////////////////////////////////////
////////////// 5.02.2019  CLASSWORK //////////////////////////

//#include <iostream>;
//using namespace std;
//
//int Sum(int a, int b) {
//	return a + b;
//}
//
//double Sum(double a, double b) {
//	cout << "double" << endl;
//	return a + b;
//}
//
//int Sum(int a, int b, int c) {
//	return a + b + c;
//}
//int main() {
//	cout << Sum(5, 10) << endl; //
//	cout << Sum(1.2, 8.3) << endl; // втратили точність
//
//	cout << "3 int function	"<<Sum(8, 2, 16) << endl;
	///// Отже одну і ту саму ф-ю можна копіювати багато разів з тією самою назвою, лише змінювати параметри, це називається 
	//                                                 ПЕРЕВАНТАЖЕННЯ функції.

	//////////////////////////// tasks //////////////////////////////////
	//	1. Написaти калькулятор з використанням перевантажених(overload) функцій.Додати можливість працювати з 3 - ма числами
#include <iostream>;
using namespace std;
void Menu() {
	cout << "//////////// CALCULATOR //////////////" << endl;
	cout << "choose operation: " << endl;
	cout << "[1] -  ""+"" addition 2 numbers" << endl;
	cout << "[11] - ""+ ,"" addition 2 numbers with point" << endl;

	cout << "[2] - "" + "" addition 3 numbers" << endl;
	cout << "[22] - "" + , "" addition 3 numbers with point" << endl;

	cout << "[3] -  ""-"" difference 2 numbers" << endl;
	cout << "[33] -  ""- ,"" difference 2 numbers with point" << endl;

	cout << "[4] -  ""-"" difference 3 numbers" << endl;
	cout << "[44] -  ""-"" difference 3 number with point" << endl;

	cout << "[5] -  ""*"" multiplication 2 numbers" << endl;
	cout << "[55] -  ""* ,"" multiplication 2 numbers with point" << endl;

	cout << "[6] -  ""*"" multiplication 3 numbers" << endl;
	cout << "[66] -  ""* ,"" multiplication 3 numbers with point" << endl;

	cout << "[7] -  ""/"" divide 2 numbers" << endl;
	cout << "[77] -  ""/"" divide 2 numbers with point" << endl;

	cout << "[8] -  ""/"" divide 3 numbers" << endl;
	cout << "[88] -  ""/"" divide 3 numbers with point" << endl;

	cout << "[9] - ""EXIT""" << endl;
}


int Sum(int a, int b) {			//int sum 2 numbers
	return a + b;
}
double Sum(double a, double b) {	//double sum 2 numbers
	cout << "double" << endl;
	return a + b;
}
int Sum(int a, int b, int c) {		//int sum 3 numbers
	return a + b + c;
}
int Sum(double a, double b, double c) {		//int sum 3 numbers
	return a + b + c;
}
int Min(int a, int b) {		//int differen 2 numbers
	return a - b;
}
double Min(double a, double b) {		//int differen 2 numbers with ,
	return a - b;
}
int Min(int a, int b, int c) {
	return a - b - c;
}
double Min(double a, double b, double c) {
	return a - b - c;
}
int Mult(int a, int b) {
	return a * b;
}
double  Mult(double a, double b) {
	return a * b;
}

int Mult(int a, int b, int c) {
	return a * b * c;
}

double Mult(double a, double b, double c) {
	return a * b * c;
}

int Div(int a, int b) {
	if (b != 0) {
		return a / b;
	}
	else {
		cout << "Uncorrect number. You can`t divide on zero" << endl;
	}

}
double Div(double a, double b) {
	if (b != 0) {
		return a / b;
	}
	else {
		cout << "Uncorrect number. You can`t divide on zero" << endl;
	}

}



int Div(int a, int b, int c) {
	if (b != 0 && c != 0) {
		return a / b / c;
	}
	else {
		cout << "Uncorrect number. You can`t divide on zero" << endl;
	}

}
double Div(double a, double b, double c) {
	if (b != 0 && c != 0) {
		return a / b / c;
	}
	else {
		cout << "Uncorrect number. You can`t divide on zero" << endl;
	}

}






int main() {
	int user = 0; // user choise
	bool exit = false;
	while (exit != true) {
		Menu();



		cin >> user;
		if (user == 1) {
			int a = 0, b = 0;
			cout << """ + "" addition 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << Sum(a, b) << endl;

		}

		else if (user == 11) {
			double a = 0, b = 0, c = 0;
			cout << """ + "" addition 2 numbers whith poin" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << Sum(a, b) << endl;

		}
		else if (user == 2) {
			int a = 0, b = 0, c = 0;
			cout << """ + "" addition 3 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;
			cout << Sum(a, b, c) << endl;
		}

		else if (user == 22) {
			double a = 0, b = 0, c = 0;
			cout << """ a, + b, + c,"" addition 3 numbers whith point" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;
			cout << Sum(a, b, c) << endl;
		}

		else if (user == 3) {
			int a = 0, b = 0, c = 0;
			cout << """ - "" difference 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;

			cout << Min(a, b) << endl;
		}

		else if (user == 33) {
			double a = 0, b = 0, c = 0;
			cout << """ - "" difference 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;

			cout << Min(a, b) << endl;
		}

		else if (user == 4) {
			int a = 0, b = 0, c = 0;
			cout << """ - "" difference 3 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;
			cout << Min(a, b, c) << endl;
		}

		else if (user == 44) {
			double a = 0, b = 0, c = 0;
			cout << """ - "" difference 3 numbers with point" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;
			cout << Min(a, b, c) << endl;
		}

		else if (user == 5) {
			int a = 0, b = 0;
			cout << """ * "" multiplication 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;

			cout << Mult(a, b) << endl;
		}

		else if (user == 55) {
			double a = 0, b = 0;
			cout << """ * "" multiplication 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;

			cout << Mult(a, b) << endl;
		}

		else if (user == 6) {
			int a = 0, b = 0, c = 0;
			cout << """ * "" multiplication 3 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;

			cout << Mult(a, b, c) << endl;
		}

		else if (user == 66) {
			double a = 0, b = 0, c = 0;
			cout << """ * "" multiplication 3 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;

			cout << Mult(a, b, c) << endl;
		}
		else if (user == 7) {
			int a = 0, b = 1;
			cout << """a / b"" divide 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;

			cout << Div(a, b) << endl;
		}

		else if (user == 77) {
			double a = 0, b = 1;
			cout << """a / b"" divide 2 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;

			cout << Div(a, b) << endl;
		}
		else if (user == 8) {
			int a = 0, b = 1, c = 1;
			cout << """a / b / c"" divide 3 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;

			cout << Div(a, b, c) << endl;
		}

		else if (user == 88) {
			double a = 0, b = 1, c = 1;
			cout << """a / b / c"" divide 3 numbers" << endl;
			cout << "enter first number" << endl;
			cin >> a;
			cout << "enter second number" << endl;
			cin >> b;
			cout << "enter third number" << endl;
			cin >> c;

			cout << Div(a, b, c) << endl;
		}


		else if (user == 9) {
			exit = true;
		}
	}

	system("pause");
	return 0;
}
