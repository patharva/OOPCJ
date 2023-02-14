#include<iostream>
#include<string>
using namespace std;

class person{
public:
	int unique_no;
	string name;
	int age;
	string city;
	string v_type;
	int income;

	person(){
		unique_no = 1;
		name = "Arvind";
		age = 20;
		city = "Pune";
		v_type = "Yes";
		income = 2000000;
	}

	person(int un, string na, int ag, string ci, string v_ty, int inc){
		un = unique_no;
		na = name;
		ag = age;
		ci = city;
		v_ty = v_type;
		inc = income;
	}

void print(){
	cout<<"UNIQUE NUMBER: "<<unique_no<<endl;
	cout<<"NAME: "<<name<<endl;
	cout<<"AGE: "<<age<<endl;
	cout<<"CITY: "<<city<<endl;
	cout<<"VEHICLE TYPE: "<<v_type<<endl;
	cout<<"INCOME: "<<income<<endl;

}

};

int main(){
	person p;
	int t=0;
	int a;
	string c;
	try{

	cout<<"ENTER CUSTOMER UNIQUE NUMBER: ";
	cin>>p.unique_no;
	cout<<"ENTER CUSTOMER NAME: ";
	cin>>p.name;
	cout<<"ENTER CUSTOMER AGE: ";
	cin>>p.age;
	if(p.age>18 && p.age<60){
		cout<<""
	}
	else
		throw a;
	}
	cout<<"ENTER CUSTOMER CITY: ";
	cin>>p.city;
	cout<<"DOES CUTOMER HAVE A 4-WHEELER? ";
	cin>>p.v_type;
	cout<<"ENTER CUSTOMER INCOME: ";
	cin>>p.income;
}
	/*if(p.v_type== "yes"){
		p.print();
	 }
	else{
		cout<<"OTHER TYPES OF VEHICLES ARE NOT ALLOWED!";
	}*/

	return 0;
}















