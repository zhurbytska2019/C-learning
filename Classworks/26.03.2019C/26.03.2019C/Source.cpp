////////////////////// 26.03.2019 STRUCTURES ///////////////////////

//////# include <iostream>
//////# include <ctime>
//////# include <string>
//////using namespace std;
//////
//////struct Dog
//////{
//////	string name;
//////	string breed;
//////	string description;
//////
//////	int age;
//////
//////	void ShowInfo()
//////	{
//////		cout << "name = " << name << "	bread = " << breed << "	age = " << age << endl;
//////	}	
//////
//////	void ShowDescription()
//////	{
//////		cout << "name = " << name << "	bread = " << breed << "	age = " << age <<"	description = "<< description<< endl;
//////	}
//////	   
//////	void SetDescription(string desc)
//////	{
//////		description = desc;
//////	}
//////};
//////
//////int main()
//////{
//////	Dog Tuzik;
//////	Tuzik.name = "Tuzik";
//////	Tuzik.breed = "taksa";
//////	Tuzik.age = 7;
//////	Tuzik.ShowInfo();
//////	cout << "============================" << endl;
//////	
//////	Dog Bobik;
//////	Bobik.name = "Bobik";
//////	Bobik.breed = "Dog";
//////	Bobik.age = 10;
//////	Bobik.ShowInfo();
//////	cout << "============================" << endl;
//////
//////	string des;
//////	cin >> des;
//////	Bobik.SetDescription(des);
//////	Bobik.ShowDescription();
//////	cout << "============================" << endl;
//////
//////	system("pause");
//////	return 0;
//////}





//////////////////// para na 12 godyn ///////////////////
//////////////////// structury //////////////////////////

//////# include <iostream>
//////# include <ctime>
//////# include <string>
//////using namespace std;
//////
//////struct RealEstate
//////{
//////	string type;					// typ neruhomosti
//////	short unsigned roomNumbers;		//k-st kimnat
//////	short unsigned floor;			// poverh
//////	float area;						//plosha
//////	string heating;					//typ opalennia
//////	string description;				//opys
//////	
//////
//////	void ShowInfo()
//////	{
//////		cout << "	type = " << type << "\n	roomNumbers = " << roomNumbers << "\n	floor = " << floor <<"\n	area = "<<area<<"\n	heating = "<<heating<< endl;
//////	}
//////
//////	void SetDescription(string desc) //f-ja pryjmae z  int main() opys kvartyry
//////	{
//////		description = desc;
//////	}
//////
//////	void ShowDescription()
//////	{
//////		cout<<"	description = " << description << endl;
//////	}	
//////};
//////
//////int main()
//////{
//////	cout << "	============================	" << endl;
//////	RealEstate megaFlat;
//////	megaFlat.type = "Flat";
//////	megaFlat.roomNumbers = 4;
//////	megaFlat.floor = 14;
//////	megaFlat.area = 150.0;
//////	megaFlat.heating = "Electro autonomic";
//////	megaFlat.ShowInfo();	
//////	cout << "	============================	"<< endl;
//////
//////	string desc;
//////	cin >> desc;
//////	megaFlat.SetDescription(desc);
//////	megaFlat.ShowDescription();
//////
//////
//////
//////	system("pause");
//////	return 0;
//////}


/// creating person and discribin him
////# include <iostream>
////# include <ctime>
////# include <string>
////using namespace std;
////
////struct address
////{
////	string country;
////	string region;
////	string town;
////	string street;
////	int zipCode;
////
////	void ShowAdrressInfo()
////	{
////		cout << "	Country: " << country << "\n	Region: " << region << "\n	Town: " << town << "\n	street: " << street << "\n	zipCode: " << zipCode << endl;
////		
////	}
////};
////
////struct Person
////{
////private:
////
////
////	string name;
////	string sername;
////	int age;
////
////
////public:
////
////
////	void ShowPersonInfo()
////	{
////		cout << "	name = " << name << "\n	sername = " << sername << "\n	age = " << age << endl;
////	}
////
////	void SetAge(int newAge)
////	{
////		if (newAge >= 100 || newAge <= 0) {
////			cout << "Incorrect age!" << endl;
////		}
////		else {
////			age = newAge;
////		}		
////	}
////
////	int GetAge() {
////		return age;
////	}
////
////	void SetName(string newName) {
////		name = newName;
////	}
////	void SetSername(string newSername) {
////		sername = newSername;
////	}	
////
////	address address;
////};
////
////int main()
////{
////	Person Bill;
////
////
////	/*Bill.name = "Bill";
////	Bill.sername = "Gates";
////	Bill.age = 60;*/
////
////
////	Bill.SetName("Bill");
////	Bill.SetSername("Gates");
////
////	Bill.SetAge(60);
////	Bill.ShowPersonInfo();
////	Bill.address.country = "USA";
////	Bill.address.region = "CA";
////	Bill.address.town = "LA";
////	Bill.address.street = "s. Bandery";
////	Bill.address.zipCode = 54524;
////	Bill.address.ShowAdrressInfo();
////		/*cout << Bill.GetAge() << endl;*/
////	cout << "============================" << endl;
////
////
////	Person Stive;
////	
////	Stive.SetName("Stive");
////	Stive.SetSername("Balmor");
////
////	Stive.SetAge(53);
////	Stive.ShowPersonInfo();
////	Stive.address.country = "USA";
////	Stive.address.region = "CA";
////	Stive.address.town = "SF";
////	Stive.address.street = "Shuhevycha";
////	Stive.address.zipCode = 3658;
////	Stive.address.ShowAdrressInfo();
////	
////	cout << "============================" << endl;
////
////	
////
////	system("pause");
////	return 0;
////}



				///////////  TASK  ///////////
/*Створити структуру, яка описує тварину (назва, клас, кличка).
Створити функції для роботи з цією структурою (заповнення об’єкта,
вивід на екран даних про об’єкт, функція «подати голос»).  

Stvoryty structuru, jaka opysuje tvarynu (nazva, clas, klychka).
Stvotyty funkcii dlia roboty z cieu structurou (zapovnennia objekta,
vyvid na ekran danyh pro objekt, funkcija "podaty golos")
*/
//
//# include <iostream>
//# include <ctime>
//# include <string>
//using namespace std;
//
//struct animal //stvoryly strukturu "animal"
//{
//	string clas;	// stvoryly zminnu typy "string" z nazvou "clas"
//	string vyd;
//	string name;
//
//	void ShowAnimalInfo()	//stvoryly funkciu dla vyvodu na ekran zminnyh (vlastyvostey abo poliv)
//	{
//		cout << "	Class: " << clas << "\n	Vyd of animal: " << vyd << "\n	Name: " << name << endl;
//	}
//
//	void SetClas(string newClas)	//stvoryly funkciu dla zapovnennia vlastyvostey
//	{
//		clas = newClas;
//	}
//
//	void SetVyd(string newVyd) {		//stvoryly funkciu dla zapovnennia vlastyvostey
//		vyd = newVyd;
//	}
//
//	void SetName(string newName) {		//stvoryly funkciu dla zapovnennia vlastyvostey
//		name = newName;
//	}
//
//	void GetVoice() {						//stvoryly funkciu dla vyvody komandy "golos"
//		cout << "Dolly get voice" << endl;
//	}
//
//};
//
//int main()
//{
//	animal Dolly;
//
//	Dolly.SetClas("mammal");
//	Dolly.SetVyd("Zebra");
//	Dolly.SetName("Dolly");
//	Dolly.ShowAnimalInfo();
//	Dolly.GetVoice();
//	/*cout << Bill.GetAge() << endl;*/
//	cout << "============================" << endl;
//
//
//	system("pause");
//	return 0;
//}


///////////  HOMEWORK  ///////////
/*Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю 
абонентів і всіма необхідними функціями. Використати вкладені структури (для адреси чи ПІБ). 

Napysaty programu, jaka realizuje telefonnu knygu z vkazanoju korystuvachem kilkistu
abonentiv i vsima neobhidnymy funkcijamy. Vykorystaty vkladeni struktury (dla adresy chy PIB)
*/

# include <iostream>
# include <ctime>
# include <string>
using namespace std;

struct address
{
	string country;
	string region;
	string town;
	string street;
	
	void ShowAdrressInfo()
	{
		cout << "	Country: " << country << "\n	Region: " << region << "\n	Town: " << town << "\n	street: " << street <<endl;
		
	}
};

struct Person
{
private:
	
	int foneNumber;
	string name;
	string sername;
	
public:


	void ShowPersonInfo()
	{
		cout << "	Fone Number is: "<<"\n	name = " << name << "\n	sername = " << sername << endl;
	}

	void SetNumber(int newNumber)
	{		
			foneNumber = newNumber;
				
	}

	int GetAge() {
		return foneNumber;
	}

	void SetName(string newName) {
		name = newName;
	}
	void SetSername(string newSername) {
		sername = newSername;
	}	

	address address;
};

int main()
{
		Person Bill;	
			
		Bill.SetName("Bill");
		Bill.SetSername("Gates");
	
		Bill.SetNumber(80685683681);
		Bill.ShowPersonInfo();
		Bill.address.country = "USA";
		Bill.address.region = "CA";
		Bill.address.town = "LA";
		Bill.address.street = "s. Bandery";		
		Bill.address.ShowAdrressInfo();
			
		cout << "============================" << endl;
	
	
		Person Stive;
		
		Stive.SetName("Stive");
		Stive.SetSername("Balmor");
	
		Stive.SetNumber(80685683695);
		Stive.ShowPersonInfo();
		Stive.address.country = "USA";
		Stive.address.region = "CA";
		Stive.address.town = "SF";
		Stive.address.street = "Shuhevycha";
		
		Stive.address.ShowAdrressInfo();
		
		cout << "============================" << endl;

	system("pause");
	return 0;
}