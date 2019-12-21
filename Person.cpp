#pragma once
#include "Person.h"


Person::Person(std::string name1, long id1, int age1) : name(name1), id(id1), age(age1)
{
}

Person::Person(const Person& p) : name(p.name), id(p.id), age(p.age)
{
}

void Person::Print() const
{
	cout << "Name: " << name << " Id: " << id << " Age: " << age << endl;
}
