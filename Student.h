#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Student : public virtual Person {
protected:
	int average;
	string institute;
public:
	Student() :average(0), institute("") {};
	Student(int, string);
	Student(string, long, int, int, string);
	Student(const Student&);
	~Student() {};
	int get_avg()const { return average; };
	string get_institute()const { return institute; };
	void Print()const override;
	void Print1() const { cout << average; }
};
#endif
