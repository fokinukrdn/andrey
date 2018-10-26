
#include <iostream>
#include <string>
#include<windows.h>
#include<conio.h>
#include <iomanip>
#include "lab03.h"
using namespace std;


void Tovar::setName()
{


	//gets_s(name);
	name = new char[20];
	do {
		cout << "Name:" << endl;
		scanf("%s", name);
	} while (strlen(name) > 20);
}

void Tovar::setPrice()
{
	int res;
	int count = 0;
	do {
		cout << "Enter Price:" << endl;
		if (count != 0)
		{
			cout << "wrong price" << endl;
		}
		res = scanf_s("%f", &price);
		while (getchar() != '\n');
		fflush(stdin);
		count++;
		system("cls");
	} while (res != 1 || price < 0);
}

void Tovar::setDay()
{
	int res;
	int count = 0;
	do {
		if (count != 0)
		{
			cout << "wrong day" << endl;
		}
		cout << "Enter date: (day)" << endl;
		res = scanf_s("%d", &day);
		while (getchar() != '\n');
		fflush(stdin);
		count++;
		system("cls");
	} while (res != 1 || day < 1 || day>31);
}

void Tovar::setMonth()
{
	int res;
	int count = 0;
	do {
		if (count != 0)
		{
			cout << "wrong month" << endl;
		}
		cout << "Enter date: (month)" << endl;
		res = scanf_s("%d", &month);
		while (getchar() != '\n');
		fflush(stdin);
		count++;
		system("cls");
	} while (res != 1 || month < 1 || month>12);
}

void Tovar::setYear()
{
	int res;
	int count = 0;
	do {
		if (count != 0)
		{
			cout << "wrong year" << endl;
		}
		cout << "Enter date: (year)" << endl;
		res = scanf_s("%d", &year);
		while (getchar() != '\n');
		fflush(stdin);
		count++;
		system("cls");
	} while (res != 1 || year < 1900 || year>2200);

}

void Tovar::setNumber()
{
	int res;
	int count = 0;
	do {
		if (count != 0)
		{
			cout << "wrong number" << endl;
		}
		cout << "Enter number of items:" << endl;
		res = scanf_s("%lf", &number);
		while (getchar() != '\n');
		fflush(stdin);
		count++;
		system("cls");
	} while (res != 1 || number < 0);

}

void Tovar::Time()
{
	SYSTEMTIME time;
	GetLocalTime(&time);
	printf("%d-%02d-%02d %02d:%02d:%02d\n", time.wYear, time.wMonth, time.wDay, time.wHour, time.wMinute, time.wSecond);
}

void Tovar::Result()
{
	result = number;
}

void Tovar::Change()
{
	double dif;
	int res;
	while (true) {
		do {
			printf("Enter dif: ");
			res = scanf_s("%lf", &dif);
			while (getchar() != '\n');
		} while (res != 1);
		double ch = result + dif;
		if (ch < 0) {
			printf("Rest < 0!\n");
		}
		else {
			result += dif;
			break;
		}
	}
}


char* Tovar::getname()
{
	return name;
}

int Tovar::getday()
{
	return day;
}

int Tovar::getmonth()
{
	return month;
}

int Tovar::getyear()
{
	return year;
}

double Tovar::getnumber()
{
	return number;
}

double Tovar::getresult()
{
	return result;
}


float Tovar::getprice()
{
	return price;
}
