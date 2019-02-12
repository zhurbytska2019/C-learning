////////////////// HOMEWORK //////////////////
/*На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
Знайти підсумкову оцінку кожного учасника(учасників 3), яка обчислюється
як середнє арифметичне, але без врахування найкращої та найгіршої оцінок.
Виконати задачу з функціями.*/

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

//float Average(a, b, c, d, e, max, min) {
//	res = ((a + b) / e);
//}

//cykl zapovnennia

const int SINERS = 3;
const int JUDGES = 4;

void FillArray(int Points[SINERS][JUDGES]) {
	for (int i = 0; i < SINERS; i++) {
		for (int j = 0; j < JUDGES; j++) {
			
			/*srand(unsigned(time(NULL)));*/
			
			Points[i][j] = rand() % 11 + 1;
		}
	}

}
	

int main() {
	
	
	cout << "*********************************************" << endl;
	cout << "//////////// LOOKING FOR STARS //////////////" << endl;
	cout << "*********************************************" << endl;
	srand(time(NULL));
	//ogoloshuemo masyv, de 3 - kilkist uchastnykiv, 4 - kilkist suddiv	
	
	/*const int SINERS = 3;
	const int JUDGES = 4;*/

	int Points[SINERS][JUDGES] = {};

	////cykl zapovnennia
	//for (int i = 0; i < SINERS; i++) {
	//	for (int j = 0; j < JUDGES; j++) {
	//		Points[i][j] = rand()% 11 + 1;
	//	}
	//}
	/*FillArr (Points, SIZE1, SIZE2);*/
	FillArray(Points);

	cout << "=============Points of siners=============" << endl;
	
	int maxV = 0; // maximum point
	int maxK = 0; // maximum point
	int maxN = 0; // maximum point
	
	int minV = 100; //mimimum points
	int minK = 100; //mimimum points
	int minN = 100; //mimimum points

	int a = 0;
	int b = 0;
	int c = 0;

	//cykl vyvedennia	
	for (int i = 0; i < 3; i++) {

		if (i == 0) {
			cout << "VASIA	";
			for (int j = 0; j < 4; j++) {
			cout << Points[i][j] << "	";
						

			if (Points[i][j] > maxV) {
				maxV = Points[i][j];
							
			}
			if (Points[i][j] < minV) {
				minV = Points[i][j];
							
				
			} 		

		}cout << endl;		
		}

		else if (i == 1) {
			cout << "KATIA	";
			for (int j = 0; j < 4; j++) {
			cout << Points[i][j] << "	";

			if (Points[i][j] > maxK) {
				maxK = Points[i][j];
			
			}
			if (Points[i][j] < minK) {
				minK = Points[i][j];
				
			}

		}cout << endl;
		
		}
		else if (i == 2) {
			cout << "NASTIA	";
			for (int j = 0; j < 4; j++) {
				cout << Points[i][j] << "	";

				if (Points[i][j] > maxN) {
					maxN = Points[i][j];
				}
				if (Points[i][j] < minN) {
					minN = Points[i][j];
				}

			}cout << endl;
		}		
	}

	cout << endl;

			///////// Max ta min ocinky /////////

	cout << "===========>> Max and min points <<===========" << endl;
	cout << endl;
	cout << "Maximum points Vasylia is  " << maxV << endl;
	cout << "Maximum points Kateryny is  " << maxK << endl;
	cout << "Maximum points Anastasii is  " << maxN << endl;
	cout << endl;
	cout << "Minimum points Vasylia is  " << minV << endl;
	cout << "Minimum points Kateryny is  " << minK << endl;
	cout << "Minimum points Anastasii is  " << minN << endl;

	int NewVasia[JUDGES] = {};
	for (int i = 0; i < JUDGES - maxV - minV; i++) {
		if (i != maxV && i != minV) {
		cout << NewVasia[i];
		}
		
	}

	system("pause");
	return 0;
}
