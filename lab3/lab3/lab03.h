#pragma once

class Tovar {

private:
	//char name[25];
	char *name;
	float price;
	int day;
	int month;
	int year;
	double number;
	double result;

public:

	Tovar()
	{
		//name[0] = '0';
		price = 0;
		day = 0;
		month = 0;
		year = 0;
		number = 0;
		result = 0;
	}

	void setPrice();

	void setName();

	void setDay();

	void setMonth();

	void setYear();

	void setNumber();

	void Time();

	void Result();

	void Change();

	char* getname();

	int getday();

	int getmonth();

	int getyear();

	double getnumber();

	double getresult();

	float getprice();

	void Enter()
	{
		setName();
		setPrice();
		setDay();
		setMonth();
		setYear();
		setNumber();
	}

};