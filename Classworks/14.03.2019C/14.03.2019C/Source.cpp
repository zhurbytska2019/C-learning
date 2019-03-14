////////////////////////// 14.03.2019 Symvolnyi typ char ///////////////////////
//# include <iostream>
//using namespace std;

//int main() {
//	setlocale(LC_ALL, "ru");
	//------------------Block1------------------
	//char str[] = "Hello world!";
	//char string[] = { 'H','e','l','l','o','\0' };

	//cout << str << endl;
	//cout << string << endl;
	//cout << strlen(string) << endl; // kilkist symvoliv

	//char name[255] = ""; //255 - max rozmir masyvu,
	//cout << "Enter your name:" << endl;
	//cin >> name;
	//cout << "Hi, " << name << endl;
	//cout << strlen(name) << endl;
	//------------------Block1------------------
	//------------------Block2------------------

	//double a = 3.14;
	//cout << char(a) << endl;
	//cout << int(a) << endl;
	//cout << float(a) << endl;
	//cout << bool(a) << endl;

	//int x = a;
	//cout << "x " <<x << endl;
	//------------------Block2------------------
	//------------------Block3------------------


	//char str[] = "Привіт!";
	//cout << str << endl;
	//cout << sizeof(char) << endl;

	/*for (int i = 0; i <= 255; i++) {
		cout << "code = " << i << " char = " << (char)i << endl;
	}*/
	//------------------Block3------------------

	/*system("pause");
	return 0;
}*/

//cout << (char)65 << endl;
//cout << (char)32 << endl;
//cout << (char)72 << endl;
//cout << (char)7 << endl;




/*Написати програму, яка отримує від користувача довільний 
набір цифр(кодів) та виводить на екран новоутворений рядок 
символів.Наприклад, при введенні цифр 65 66 65 на екрані буде ABA*/

//# include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Please enter digits from the diapason: 65 - 90 and 97 -122" << endl;
//	
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (a<65 && a>90 && a<97 && a>122)
//	{
//		cout << "Error. Please enter correct number" << endl;
//	}
//	else if (b < 65 && b>90 && b < 97 && b>122)	
//	{
//		cout << "Error. Please enter correct number" << endl;
//	}
//	else if (c < 65 && c>90 && c < 97 && c>122)
//	{
//		cout << "Error. Please enter correct number" << endl;
//	}
//cout << (char)a << (char)b<< (char)c<< endl;
//
//system("pause");
//return 0;
//}

/*Написати програму, яка отримує від користувача довільний 
набір cимволів та виводить на екран рядок кодів символів, 
по суті, закодований рядок.Наприклад, при введенні ABA на 
екрані буде 65 66 65.
Примітка!Для вводу символів скористайтеся властивістю обєкта 
cin вводити кілька значень обночасно(cin >> a >> b;)*/

//# include <iostream>
//using namespace std;
//
//int main()
//{
//	char strArr[255];
//	cout << "Enter strArr" << endl;
//	cin >> strArr;
//	for (int i = 0; i < strlen(strArr); i++)
//	{
//		cout << int(strArr[i]) << " ";
//	}
//	cout<<endl;
//	
//system("pause");
//return 0;
//}


//# include <iostream>
//using namespace std;
//
//int main()
//{
//	char strArr[255];
//	cout << "Enter strArr" << endl;
//	cin >> strArr;
//	for (int i = 0; i < strlen(strArr); i++)
//	{
//		cout << "Text: " << strArr[i] << " CharCode = " << int(strArr[i]) << "\t";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

///CLASSWORK SECOND TIME///////////
# include <iostream>
using namespace std;

int main()
{
	/*char str[4] = "www";
	cout << sizeof(char) << endl;
	cout << sizeof(str) << endl;
	cout << str << endl;

	char stringArr[] = { 'h','e','l','l','o', '\0'};
	cout << stringArr << endl;

	cout << strlen(str) << endl;

	for (int i = 0; i <= strlen(stringArr); i++)
	{
		cout << stringArr[i] << "\t";
	}
	*/


	//char name[10];
	//cin >> name; //for exemple Jack
	////for printing Jack we don`t need cicle:
	//cout << name<<endl;
	


	//char name[255];
	//cin >> name; //for exemple Jack
	////for printing Jack we don`t need cicle:
	//cout << name<<endl;



	/*int a = 65;
	cout << (char)a << endl;
	cout << (char)66 << endl;
	cout << (char)32 << endl;
	cout << (char)72 << endl;
	cout << (char)7 << endl;*/


	//NEJAVNE PRYVEDENNIA typiv

	double a = 65.14231523456987; 
	int x = a;
	cout << "x" << x << endl;


	//JAVNE PRYVEDENNIA typiv

	double a = 65.14231523456987; 
	cout << int(a) << endl;
	cout << char(a) << endl;
	cout << float(a) << endl;
	cout << bool(a) << endl;



	system("pause");
	return 0;
}