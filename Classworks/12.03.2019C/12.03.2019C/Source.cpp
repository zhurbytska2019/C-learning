/////////////////////////////// ==> 12.03.2019C <== ////////////////////////
////////////////////////////////////////////////////////////////////////////

//////#include <iostream>
//////#include <ctime>
//////using namespace std;
//////
//////int main()
//////{
//////	srand(unsigned(time(NULL)));
//////
//////	int cols = 4;
//////	int rows = 5;
//////
//////	cout << "Enter Rows: " << endl;
//////	cin >> rows;
//////	cout << "Enter Cols: " << endl;
//////	cin >> cols;
//////
//////	//����� ������ ������� ���� ���������� 
//////	int **arr = new int *[rows];
//////	//������ ��������� ����� // create array
//////	for (int i = 0; i < rows; i++)
//////	{
//////		arr[i] = new int[cols];
//////	}
//////
//////	// ���������� �����//fill array
//////	for (int i=0; i<rows; i++)
//////	{
//////		for (int j = 0; j < cols; j++)
//////		{
//////			arr[i][j] = rand() % 10;
//////		}
//////	}
//////	//�������� ����� �� ����� // print array
//////	for (int i = 0; i < rows; i++) {
//////		for (int j = 0; j < cols; j++) {
//////			cout << arr[i][j] << "\t";
//////		}
//////		cout << endl;
//////	}
//////	 //������� ���'���
//////	for (int i = 0; i < rows; i++) {
//////	delete[]arr[i];
//////	}
//////
//////	//��������� ����� � ���'��
//////	delete[]arr;
//////
//////	system("pause");
//////	return 0;
//////}

/// task 1 ///
/*�������� ������� ��� ������ � ��������� ��������:
������� ��������� �������� ������� ������� row x col
������� ���������� �������
������� ������ �������
������� ���������� ������� ����� ������
������� ��������� � ������� ����� �� �������� �������
������� ������� ������ ����� �� �������� �������
������� ���������� ������� ����� ����������
������� ��������� � ������� ������� �� �������� �������
������� ������� ������ ������� �� �������� �������
*/

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void Fill(const int *&rows, const int *cols, *&arr)
//{
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//}
//
//
//////int main()
//////{
//////	srand(unsigned(time(NULL)));
//////	int choise = 0;
//////	int *pChoise = &choise; //pointer on the variable user choise
//////	cout << "Quantity of rows // Kilkist riadkiv" << endl;
//////	int rows = 0;
//////	cin >> rows;
////// 
//////
//////	int **arr = new int *[rows];
//////	//create matrix
//////
//////	//fill matrix
//////
//////	//print matrix
//////
//////	bool exit = false;
//////	while (exit != true)
//////	{
//////		cout << "[1] - to add new row,\n[2] - remove the row by number;" << endl;
//////		cout << "[3] - to insert new row by  number; \n[4] - to insert new col;" << endl;
//////		cout << "[4] - to remove from the matrix col by number; \n[5] - to insert new col by number." << endl;
//////		cout << "[6] - exit" << endl;
//////		
//////		cin >> *pChoise;
//////		switch (*pChoise)
//////		{
//////		case 1:
//////		{
//////			cout << "1" << endl;
//////
//////			break;
//////		}
//////		case 2:
//////		{
//////			cout << "2" << endl;
//////			break;
//////		}
//////		case 3:
//////		{
//////			cout << "3" << endl;
//////			break;
//////		}
//////		case 4:
//////		{
//////			cout << "4" << endl;
//////			break;
//////		}
//////		case 5:
//////		{
//////			cout << "5" << endl;
//////			break;
//////		}
//////		case 6:
//////		{
//////			cout << "exit" << endl;
//////			exit = true;
//////			break;
//////		}
//////		}
//////	}
//////
//////	system("pause");
//////	return 0;
//////}



 





