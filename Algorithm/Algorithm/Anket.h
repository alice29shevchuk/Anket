#pragma once 
#include<iostream> 
#include<string> 
#include"Data.h" 
using namespace std;
class Anket
{
private:
	string name;
	string surname;
	string patronimuc;
	string login;
	string pass;
	Data* born;
	Data* registr;
public:
	Anket(string name, string surname, string patronimuc, string login, string pass, int dayb, int monthb, int yearb, int day, int month, int year)
	{
		this->name = name;
		this->surname = surname;
		this->patronimuc = patronimuc;
		this->login = login;
		this->pass = pass;
		this->born = new Data(dayb, monthb, yearb);
		this->registr = new Data(day, month, year);
	}
	string getName()
	{
		return this->name;
	}
	string getSurname()
	{
		return this->surname;
	}
	string getPatronimuc()
	{
		return this->patronimuc;
	}
	string getLogin()
	{
		return this->login;
	}
	string getPass()
	{
		return this->pass;
	}
	int getYear()
	{
		return this->born->getYear();
	}
	int getDay()
	{
		return this->born->getDay();
	}
	int getMonth()
	{
		return this->born->getMonth();
	}

	int getYearR()
	{
		return this->registr->getYear();
	}
	int getDayR()
	{
		return this->registr->getDay();
	}
	int getMonthR()
	{
		return this->registr->getMonth();
	}
	void Show()
	{
		cout << "Name: " << this->name << "\nSurname: " << this->surname << "\nPatronimuc: " << this->patronimuc << "\nDay born: " << this->born->getDay() << "\nMonth born: " << this->born->getMonth() << "\nYear born: " << this->born->getYear() << "\nDay registr: " << this->registr->getDay() << "\nMonth registr: " << this->registr->getMonth() << "\nYear registr: " << this->registr->getYear() << "\nLogin: " << this->login << "\nPassword: " << this->pass << "\n";
	}
};
