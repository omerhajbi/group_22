#include "Student.h"

Student::Student(string name1, long id1, int age1, int avg, string inst) :Person(name1, id1, age1), average(avg), institute(inst) {}

void Student::Print() const
{
	Person::print();
	cout << "The average is : " << average<< endl << "The institute is :" << institute << endl;
}

