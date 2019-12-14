#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Student : public Person {
protected:
	int average;
	string institute;
public:
	Student() {};
	Student(string, long, int, int, string);
	~Student() {};
	int get_avg()const { return average; };
	string get_institute()const { return institute; };
	void Print()const;
	void Print1() const { cout << average; }
};
#endif