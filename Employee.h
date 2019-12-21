#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Employee : public Person {
protected:
	float salary;
public:
	Employee() {};
	Employee(string, long, int, float);
	~Employee() {};
	int get_salary()const { return salary; };
	void Print()const;
	void Print1() const { cout << salary; }
};
#endif
