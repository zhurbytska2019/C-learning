/////////////=====>>> 28.03.2019C <<<=====////////////////
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////
////struct Person {
////	string name;
////	string surname;
////	unsigned short age;
////
////	void ShowPersonInfo() {
////		cout << "===================Show Person Info=========" << endl;
////		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
////	}
////};
////
////void FillPerson(Person *person, int personCount) {
////	for (int i = 0; i < personCount; i++) {
////		cout << "Enter person name: " << i << endl;
////		cin >> person[i].name;
////		cout << "Enter person surname: " << i << endl;
////		cin >> person[i].surname;
////		cout << "Enter person age: " << i << endl;
////		cin >> person[i].age;
////		//person[i].ShowPersonInfo();
////	}
////}
////
////void ShowPerson(Person *person, int personCount) {
////	cout << "======================================>>>>>>>" << endl;
////	for (int i = 0; i < personCount; i++) {
////		person[i].ShowPersonInfo();
////	}
////	cout << "======================================>>>>>>>" << endl;
////}
////
////int main() {
////
////
////	int personCount = 0;
////	cout << "Enter person count " << endl;
////	cin >> personCount;
////
////	Person *person = new Person[personCount];
////	FillPerson(person, personCount);
////	ShowPerson(person, personCount);
////
////
////	system("pause");
////	return 0;
////}




//// FOOTBALL TEAM
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////
////struct Person {
////	string name;
////	string surname;
////	unsigned short age;
////
////	void ShowPersonInfo() {
////		cout << "===================Show Person Info=========" << endl;
////		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
////	}
////};
////
////void FillPerson(Person *person, int personCount) {
////	for (int i = 0; i < personCount; i++) {
////		cout << "Enter person name: " << i << endl;
////		cin >> person[i].name;
////		cout << "Enter person surname: " << i << endl;
////		cin >> person[i].surname;
////		cout << "Enter person age: " << i << endl;
////		cin >> person[i].age;
////		//person[i].ShowPersonInfo();
////	}
////}
////
////void ShowPerson(Person *person, int personCount) {
////	cout << "======================================>>>>>>>" << endl;
////	for (int i = 0; i < personCount; i++) {
////		person[i].ShowPersonInfo();
////	}
////	cout << "======================================>>>>>>>" << endl;
////}
////
////int main() {
////
////
////	int personCount = 0;
////	cout << "Enter person count " << endl;
////	cin >> personCount;
////
////	Person *person = new Person[personCount];
////	FillPerson(person, personCount);
////	ShowPerson(person, personCount);
////
////
////	system("pause");
////	return 0;
////}
////#include <iostream>
////#include <string>
////
////using namespace std;
////
////struct Player {
////	string name;
////	string surname;
////	int price;
////	void ShowPlayer() {
////		cout << "Name: " << name << "\nSurname: " << surname << "\nPrice: " << price << "\nPosition: " << position << endl;
////	}
////	string position;
////};
////
////struct Team {
////	string name;
////	string country;
////	string city;
////	int wins;
////	int draw;
////	int lose;
////	int size;
////
////	void SetTeamSize(int newSize) {
////		size = newSize;
////	}
////	void GetMemory() {
////		player = new Player[size];
////	}
////	void ShowTeam() {
////		cout << "Name: " << name << "\nCountry: " << country << "\nCity: " << city << "\nWins: " << wins << "\nDraw: " << draw << "\nLose" << "\nTeam size: " << size << endl;
////	}
////
////	Player *player = nullptr;
////};
////
////void FillPlayer(Player *player, const int size) {
////	for (int i = 0; i < size; i++) {
////		cout << "Enter player name: " << endl;
////		cin >> player[i].name;
////		cout << "Enter player surname: " << endl;
////		cin >> player[i].surname;
////		cout << "Enter player position: " << endl;
////		cin >> player[i].position;
////		cout << "Enter player price: " << endl;
////		cin >> player[i].price;
////	}
////}
////
////void ShowPlayer(Player *player, const int size) {
////	cout << "========================>>>>>>>>>>>>>>>>>>>" << endl;
////	for (int i = 0; i < size; i++) {
////		player[i].ShowPlayer();
////		cout << "|||||||||||||||||----------------|||||||||||||||" << endl;
////	}
////	cout << "========================>>>>>>>>>>>>>>>>>>>" << endl;
////}
////
////int main() {
////
////	int teamSize = 0;
////	cout << "enter team size: " << endl;
////	cin >> teamSize;
////
////	Team Karpaty;
////	Karpaty.name = "Karpaty";
////	Karpaty.city = "Lviv";
////	Karpaty.country = "Ukraine";
////	Karpaty.wins = 23;
////	Karpaty.draw = 3;
////	Karpaty.lose = 3;
////	Karpaty.SetTeamSize(teamSize);
////	Karpaty.GetMemory();
////	Karpaty.ShowTeam();
////
////	FillPlayer(Karpaty.player, Karpaty.size);
////	ShowPlayer(Karpaty.player, Karpaty.size);
////
////	system("pause");
////	return 0;
////}


