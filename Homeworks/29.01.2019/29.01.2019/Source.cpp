////////////////// HOMEWORK //////////////////
/*На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
Знайти підсумкову оцінку кожного учасника(учасників 3), яка обчислюється
як середнє арифметичне, але без врахування найкращої та найгіршої оцінок.
Виконати задачу з функціями.*/

#include <iostream>;
#include <ctime>;
using namespace std;

//cikl zapovnennia

const int SINERS = 3;
const int JUDGES = 4;

void FillArray(int Points[SINERS][JUDGES]) {

	for (int i = 0; i < SINERS; i++) {
		for (int j = 0; j < JUDGES; j++) {
			if (i == 0)
			{
				cout << "Enter points Vasya" << endl;
				cin >> Points[i][j];
			}
			if (i == 1)
			{
				cout << "Enter points Katia" << endl;
				cin >> Points[i][j];
			}
			if (i == 2)
			{
				cout << "Enter points Nastia" << endl;
				cin >> Points[i][j];
			}

		}
	}

}

float Average(int sum, int max, int min, float res) {

	res = (sum - max - min) / 2;
	return res;
}


int main() {


	cout << "*********************************************" << endl;
	cout << "//////////// LOOKING FOR STARS //////////////" << endl;
	cout << "*********************************************" << endl;


	//ogoloshuemo masyv, de 3 - kilkist uchastnykiv, 4 - kilkist suddiv	

	int Points[SINERS][JUDGES] = {};

	FillArray(Points);

	cout << "=============Points of siners=============" << endl;

	int maxV = 0; // maximum point
	int maxK = 0; // maximum point
	int maxN = 0; // maximum point

	int minV = 100; //mimimum points
	int minK = 100; //mimimum points
	int minN = 100; //mimimum points

	float resV = 0.0;
	float resK = 0.0;
	float resN = 0.0;


	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	float res = 0;
	int sumV = 0;
	int sumK = 0;
	int sumN = 0;

	//cikl vyvedennia	
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
	cout << "Minimum points Anastasii is  " << minN << endl << endl;

	for (int i = 0; i < 3; i++) {

		if (i == 0) {

			for (int j = 0; j < 4; j++)
			{
				sumV += Points[i][j];
				resV = Average(sumV, maxV, minV, res);
			}
		}

		else if (i == 1) {

			for (int j = 0; j < 4; j++)
			{
				sumK += Points[i][j];
				resK = Average(sumK, maxK, minK, res);
			}
		}

		else if (i == 2) {

			for (int j = 0; j < 4; j++)
			{
				sumN += Points[i][j];
				resN = Average(sumN, maxN, minN, res);
			}
		}

	}
	cout << "Average points for VASIA:	" << resV << endl;
	cout << "Average points for KATIA:	" << resK << endl;
	cout << "Average points for NASTIA:	" << resN << endl;

	system("pause");
	return 0;
}
