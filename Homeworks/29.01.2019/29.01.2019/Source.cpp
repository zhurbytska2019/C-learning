////////////////// HOMEWORK //////////////////
/*�� ��� ����� ǳ��� ���� ������� �������� ����������� ������ �� 0 �� 10.
������ ��������� ������ ������� ��������(�������� 3), ��� ������������
�� ������ �����������, ��� ��� ���������� �������� �� ������� ������.
�������� ������ � ���������.*/

#include <iostream>;
#include <ctime>;
using namespace std;

//void FillArr (int arr[], const int SIZE1, const int SIZE2) {
//	srand(time(NULL));
//		cout << "			";
//		for (int i = 0; i < SIZE1; i++) {
//			for (int j = 0; j < SIZE1; j++) {
//				arr[i] = rand() % 10 + 1;
//	
//							cout << arr[i] << " ";
//						}cout << endl;
//			}
//			
//}

//float Average(a, b, c, d, e, max, min) {
//	res = ((a + b) / e);
//}

int main() {
	
	
	cout << "*********************************************" << endl;
	cout << "//////////// LOOKING FOR STARS //////////////" << endl;
	cout << "*********************************************" << endl;
	srand(time(NULL));
	//ogoloshuemo masyv, de 3 - kilkist uchastnykiv, 4 - kilkist suddiv	
	
	const int SIZE1 = 3;
	const int SIZE2 = 4;

	int Points[SIZE1][SIZE2] = {};

	//cykl zapovnennia
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			Points[i][j] = rand()% 11 + 1;
		}
	}
	/*FillArr (Points, SIZE1, SIZE2);*/


	cout << "=============Points of siners=============" << endl;
	
	int maxV = 0; // maximum point
	int maxK = 0; // maximum point
	int maxN = 0; // maximum point
	
	int minV = 0; //mimimum points
	int minK = 0; //mimimum points
	int minN = 0; //mimimum points

	int a = 0;
	int b = 0;
	int c = 0;

	//cykl vyvedennia	
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			cout << "VASIA	";
			for (int j = 0; j < 4; j++) {
			cout << Points[i][j] << "	";

			if (Points[i][j] > Points[i][j + 1]) {
				maxV = Points[i][j];				
			}
			if (Points[i][j] < Points[i][j + 1]) {
				minV = Points[i][j];
			}


		}cout << endl;
		
		}
		if (i == 1) {
			cout << "KATIA	";
			for (int j = 0; j < 4; j++) {
			cout << Points[i][j] << "	";

			if (Points[i][j] > Points[i][j + 1]) {
				maxK = Points[i][j];
			}
			if (Points[i][j] < Points[i][j + 1]) {
				minK = Points[i][j];
			}

		}cout << endl;
		
		}
		if (i == 2) {
			cout << "NASTIA	";
			for (int j = 0; j < 4; j++) {
				cout << Points[i][j] << "	";

				if (Points[i][j] > Points[i][j + 1]) {
					maxN = Points[i][j];
				}
				if (Points[i][j] < Points[i][j + 1]) {
					minN = Points[i][j];
				}

			}cout << endl;

		}
		
	}cout << "Maximum points Vasylia is  " << maxV << endl;
	cout << "Maximum points Kateryny is  " << maxK << endl;
	cout << "Maximum points Anastasii is  " << maxN << endl;

	cout << "Maximum points Vasylia is  " << maxV << endl;
	cout << "Maximum points Kateryny is  " << maxK << endl;
	cout << "Maximum points Anastasii is  " << maxN << endl;




	system("pause");
	return 0;
}
