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

/*1 �������� ������� �������, �� � ����� ��������� ��������� ����������� ����� � ����
���������. ��������� ������ ������� ��� ����������� ������ ��������� 3�4 �� 7�5.
������� Fill(), ��� �������� ����������� ����� ����������� ���������� � �������[1..30]
�������� ������� Print(), ��� �������� �������� ������ �� ����� � ������ �������
�������, ��� ������ �� ���� �������� ������*/

#include <iostream>;
#include <ctime>;

using namespace std;

const int ROW = 3;
const int COL = 4;


void Fill(int arr[ROW][COL]) {
	srand(unsigned(time(0)));
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			arr[i][j] = rand() % 31 + 1;
		}
	}
}

template <typename T>
void Print(T arr[ROW][COL]) {
	for (T i = 0; i < ROW; i++) {
		for (T j = 0; j < COL; j++) {
			cout << arr[i][j] << "	";
		}cout << endl;
}
}

template <typename T>
void Change(T arr[ROW][COL]) {
	for (T i = 0; i < ROW; i++) {
		for (T j = 0; j < COL; j++) {	
			if (arr[i][j] % 2 == 0) {
				arr[i][j] = 0;	

			}						
		}
	}

}


	int main(){

		int arr[ROW][COL] = {};
		Fill(arr);
		Print(arr);
		cout << "=======================================" << endl;
		Change(arr);
		Print(arr);


		system("pause");
		return 0;
	}



	//const int ROW1 = 3;
	//const int COL1 = 4;
	//const int ROW2 = 7;
	//const int COL2 = 5;
	//
	//
	//
	//
	//int FillArray(arr[ROW1][COL1]);
	//
	//template <typename T1>
	//void PrintArray(arr[][]);
	//
	//
	//void FillArray(arr[][], ROW1, COL1) {
	//	srand(time(NULL));
	//	for (int i = 0; i < SIZE1; i++) {
	//		for (int j = 0; j < SIZE2; j++) {
	//			arr[i][j] = rand() % 31 + 1;
	//		}
	//	}
	//}cout << endl;
	//
	//template <typename T1>
	//void PrintArray(arr[ROW1][COL1]) {
	//	for (int i = 0; i < SIZE1; i++) {
	//		for (int j = 0; j < SIZE2; j++) {
	//			cout << arr[i][j] << "	";
	//		}cout << endl;
	//	}
	//}
	//
	////////////////////////////////// main /////////////////////////////////////////////
	//int main() {
	//	
	//	int arr[ROW1][COL1] = {};
	//
	//	
	//	FillArray(arr, ROW1, COL1);
	//
	//	PrintArray(arr, ROW1, COL1);



		/*
		system("pause");
		return 0;
	}*/