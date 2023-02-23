#include <iostream>
#include <string>
using namespace std;

class person {
public:
  int unique_no;
  string name;
  int age;
  string city;
  string v_type;
  int income;

  person() {
    unique_no = 1;
    name = "Arvind";
    age = 20;
    city = "Pune";
    v_type = "Yes";
    income = 2000000;
  }

  person(int un, string na, int ag, string ci, string v_ty, int inc) {
    un = unique_no;
    na = name;
    ag = age;
    ci = city;
    v_ty = v_type;
    inc = income;
  }

  void print() {
    cout << "UNIQUE NUMBER: " << unique_no << endl;
    cout << "NAME: " << name << endl;
    cout << "AGE: " << age << endl;
    cout << "CITY: " << city << endl;
    cout << "VEHICLE TYPE: " << v_type << endl;
    cout << "INCOME: " << income << endl;
  }
};

int main() {
  person p;
  int t = 0;
  int a;
  string c;
  float b;
  char d;
  try {
    cout << "ENTER CUSTOMER UNIQUE NUMBER: ";
    cin >> p.unique_no;
    cout << "ENTER CUSTOMER NAME: ";
    cin >> p.name;
    cout << "ENTER CUSTOMER AGE: ";
    cin >> p.age;
    if (p.age > 18 && p.age < 60) {
      t++;
    } else
      throw a;

    cout << "ENTER CUSTOMER CITY: ";
    cin >> p.city;
    if (p.city == "PUNE" || p.city == "MUMBAI" || p.city == "BANGALORE" ||
        p.city == "HYDERABAD") {
      t++;
    } else
      throw c;

    cout << "VEHICLE TYPE: ";
    cin >> p.v_type;
    if (p.v_type == "4-WHEELER") {
      t++;
    } else
      throw d;

    cout << "ENTER CUSTOMER INCOME: ";
    cin >> p.income;
    if (p.income >= 50000 || p.income <= 90000) {
      t++;
    } else
      throw b;
  } catch (int a) {
    cout << "AGE ENTERED IS INVALID" << endl;
  } catch (string c) {
    cout << "CITY ENTERED IS INVALID" << endl;
  } catch (char d) {
    cout << "VEHICLE TYPE INVALID" << endl;
  } catch (float b) {
    cout << "INCOME INVALID" << endl;
  }

  person p1(p.unique_no, p.name, p.age, p.city, p.v_type, p.income);
  p1.print();
  return 0;
}
