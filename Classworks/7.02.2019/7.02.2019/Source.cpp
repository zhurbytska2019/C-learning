//////////////////////////////// 7.02.2019 CLASSWORK ///////////////////////////

//#include <iostream>;
//#include <ctime>;
//using namespace std;
//
////template <typename T>
////void Sum(T a, T b) {
////	cout << a << endl;
////	cout << b << endl;
////}
////
////template <typename T1, typename T2>
////void Sum(T1 a, T2 b) {
////	cout << a << endl;
////	cout << b << endl;
////}
//
//template <typename T1, typename T2>
//T1 Sum(T1 a, T2 b) {
//	return a + b;
//}
//
//template <typename T1, typename T2>
//T1 Sum(T1 a, T2 b, T1 c) {   // perevantazhena funckcia, dodaly tretiy parametr
//	return a + b + c;
//}
///////////////////////////////////////////// MAIN /////////////////////////////////////////////////
//int main() {
//	/*Sum(2, 4);
//	Sum(5.8, 2.1);
//	Sum("Bill", "Vasil");
//	Sum(5, 8.2);
//
//	Sum(5, 8.2);
//	Sum(8.2, 5);*/
//
//	cout << Sum(5, 5.2, 10) << endl;// perevantazhena funckcia, dodaly tretiy parametr
//	   	  
//
//	system("pause");
//	return 0;
//
//}

/*1 Написати наступні функції, які в якості параметра приймають двохвимірний масив і його
розмірності. Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5.
функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні[1..30]
шаблонну функцію Print(), яка виводить елементи масиву на екран в вигляді матриці
функцію, яка заміняє всі парні елементи нулями*/

#include <iostream>;
#include <ctime>;

using namespace std;

const int ROW = 7;
const int COL = 5;

template <typename T>
void Fill(T arr[ROW][COL]) {	
	srand(unsigned(time(0)));
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = rand() % 31 + 1;
			
		}
	}
}

template <typename T>
void Print(T arr[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << arr[i][j] << "	";
		}cout << endl;
	}
}


void Change(int arr[ROW][COL]) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {	
			if (arr[i][j] % 2 == 0) {
				arr[i][j] = 0;	

			}						
		}
	}

}


	int main(){

		int arr[ROW][COL] = {};
		double arr2[ROW][COL] = {};

		Fill(arr);	//vyklykaiemo funkciu zapovnennia masyvu
		Print(arr);	//vyklykaiemo funkciu vyvedennia masyvu
		cout << "=======================================" << endl;

		Change(arr);	//vyklykaiemo funkciu zaminy nuliamy parnyh elementiv masyvu
		Print(arr);		//vyklykaiemo funkciu vyvedennia masyvu

		cout << "=======================================" << endl;

		Fill(arr2);
		Print(arr2);

		cout << "=======================================" << endl;
		
		Print(arr2);

		system("pause");
		return 0;
	}	   	  