#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Employee : public virtual Person {
protected:
	float salary;
public:
	Employee(): salary(0) {};
	Employee(float s) : salary(s) {};
	Employee(string, long, int, float);
	Employee(const Employee&);
	~Employee() {};
	float get_salary()const { return salary; };
	void Print()const override;
	void Print1() const { cout << salary; }
};
#endif
