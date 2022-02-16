#pragma once 
class Data
{
	int day;
	int month;
	int year;
public:
	Data()
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
	Data(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	int getDay()
	{
		return this->day;
	}
	int getMonth()
	{
		return this->month;
	}
	int getYear()
	{
		return this->year;
	}
};
