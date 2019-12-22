#pragma once
#include "Student.h"

Student::Student(int average1, string institude1): average(average1), institute(institude1)
{
}

Student::Student(string name1, long id1, int age1, int avg, string inst) :Person(name1, id1, age1), average(avg), institute(inst) {}

Student::Student(const Student& s): Person(s.name, s.id, s.age), average(s.average), institute(s.institute)
{
}

void Student::Print() const
{
	Person::Print();
	cout << "The average is : " << average << endl << "The institute is :" << institute << endl;
}
