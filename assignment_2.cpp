//============================================================================
// Name        : assignment_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class employee
{
public:
	string name;
	int Eid;


employee()
	{
	name = "andy";
	Eid = 31;
	}
employee(string en,int id)
{
	name ="andy";
	Eid =31;
}
void accept()
{
	cout << "Enter Name:" << endl;
	cin >> name;
	cout << "Enter ID:" << endl;
	cin >> Eid;
}
void display()
{
	cout << "Employee Name:" << name << endl;
	cout << "ID is:" << Eid << endl;
}
};


class salariedemployee
{
public:
	int weeklySalary;


salariedemployee()
	{
	weeklySalary="5000";
	}
salariedemployee(int sal)
{
	weeklySalary="5000";
}
void accept()
{
	cout << "Enter weekly salary:" << endl;
	cin >> weeklySalary;
}
void display()
{
	cout << "Employee Salary:" << weeklySalary << endl;
}
};


class Hourlyemployee
{
public:
	int wages;
	int hours;


Hourlyemployee()
	{
	wages = "500";
	hours = 30;
	}
Hourlyemployee(int wage,int hour)
{
	wages = "500";
	hours = 30;
}
void accept()
{
	cout << "Enter Wages:" << endl;
	cin >> wages;
	cout << "Enter Hours:" << endl;
	cin >> hours;
}
void display()
{
	cout << "Employee wage:" << wages << endl;
	cout << "Employee hours:" << hours << endl;
}
};


class commisionemployee
{
public:
	int grossSales;
	int commisionRate;
	int commisionSal;


commisionemployee()
	{
	grossSales = 23443;
	commisionRate = 10;
	commisionSal= 40000;
	}
commisionemployee(int gsale,int comRate,int comSal)
{
	grossSales = 23443;
	commisionRate = 10;
	commisionSal= 40000;
}
void accept()
{
	cout << "Enter Gross Sales:" << endl;
	cin >> grossSales;
	cout << "Enter Commission Rate;" << endl;
	cin >> commisionRate;
	cout << "Enter Commission Salary;" << endl;
	cin >> commisionSal;
}
void display()
{
	cout << "Employee gross sales:" << grossSales << endl;
	cout << "Employee commission rate:" << commisionRate << endl;
	cout << "Employee commission Salary:" << commisionSal << endl;
}
void earning()
{
	commisionSal = grossSales*commisionRate;
	cout << commisionSal;
}
};


int main()
{
	cout << "implicit constructor of salaried employee:\n";
	salariedemployee emp1(100);
	emp1.display();
	cout << "Earnings of emp1:" << endl;
	emp1.earning();
	cout << "implicit constructor of hourly employee:\n";
	Hourlyemployee emp2(2000,14);
	emp2.display();
	cout << "implicit constructor of commission employee:\n";
	commisionemployee emp3(2341,12,30000);
	emp3.display();
}







