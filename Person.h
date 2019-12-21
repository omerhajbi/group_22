#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;
class Person {
protected:
	string name;
	long id;
	int age;
public:
	Person():name(""), id(0), age(0) {};
	Person(string name1, long id1, int age1);
	Person(const Person& p);
	~Person() {};
	string get_name()const { return name; };
	long get_id()const { return id; };
	int get_age()const { return age; };
	virtual void Print()const;
};
#endif
