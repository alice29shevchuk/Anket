#include <iostream> 
#include<algorithm> 
#include<vector> 
#include"Anket.h" 
#include"Wrapper.h" 
using namespace std;
int main()
{
	setlocale(0, "");
	string name;
	string surname;
	string patronimuc;
	string login;
	string pass;
	int dayb;
	int monthb;
	int yearb;
	int dayr;
	int monthr;
	int yearr;
	Wrapper ob;
	ob.read();
	Anket* anket;
	int ch;
	do
	{
		cout << "МЕНЮ:\n";
		cout << "1 - ADD\n";
		cout << "2 - SHOW\n";
		cout << "3 - AMOUNT LETTERS IN NAME LESS THAN 7\n";
		cout << "4 - SHOW ANKET OF PEOPLE,WHO BORN YEAR BIGGER THAN 2000\n";
		cout << "5 - WRITE\n";
		cout << "6 - READ\n";
		cout << "0 - EXIT\n";
		cout << "Insert your choose: ";
		cin >> ch;
		cin.ignore();
		switch (ch)
		{
		case 1:
			system("cls");
			cout << "Insert your name: ";
			getline(cin, name);
			cout << "Insert your surname: ";
			getline(cin, surname);
			cout << "Insert your patronimuc: ";
			getline(cin, patronimuc);
			cout << "Insert your login: ";
			getline(cin, login);
			cout << "Insert your pass: ";
			getline(cin, pass);
			cout << "Insert your day born: ";
			cin >> dayb;
			cout << "Insert your month born: ";
			cin >> monthb;
			cout << "Insert your year born: ";
			cin >> yearb;
			cout << "Insert your day registration: ";
			cin >> dayr;
			cout << "Insert your month registration: ";
			cin >> monthr;
			cout << "Insert your year registration: ";
			cin >> yearr;
			anket = new Anket(name, surname, patronimuc, login, pass, dayb, monthb, yearb, dayr, monthr, yearr);
			ob.add(anket);
			cout << "ADD!\n";
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			ob.show();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			ob.amount();
			cout << "\n";
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			ob.year();
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			ob.write();
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			ob.read();
			system("pause");
			system("cls");
			break;
		}
	} while (ch != 0);
	ob.write();
}

