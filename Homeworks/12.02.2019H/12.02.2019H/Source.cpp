////////////// homework 12.02.2019 /////////////
////////////// task 1 //////////////////////////
/*1.	�������� ���������� �������, ��� ������ ���� ����� � �������� ���� � ������� ������ ��������
 */
# include <iostream>;
using namespace std;

//prototyp
float BinaryConvers(float number);

int main() {
	cout << "Enter number and the programm will conwert it in binary system" << endl;
	float number = 0;
	cin >> number;
	float res = 0;

	res=BinaryConvers(number);
	

	system("pause");
	return 0;
}


float BinaryConvers(float number) {
	while (number!= 0) {
	cout << "Number is  " << (number/2)%2 << endl;
		/*cout<<number / 2<<endl;*/
	cout <<"test"<<(number / 2) << endl;
		if ((number / 2) % 2 == 0) {
			cout << "0" << endl;
		}
		else if ((number / 2) % 2 != 0) {
			cout << "1" << endl;
		}
	
		BinaryConvers(number/2);
		
		return (number / 2)%2;
	}
	
}


////////////// task 2 //////////////
/*�������� ���������� ������ �������, ��� �������� �� ��������� � ������� 
����� ������������� �� ����������(�� ���������).*/
//# include <iostream>;
//using namespace std;
//
//int main() {
//	
//
//	system("pause");
//	return 0;
//}
