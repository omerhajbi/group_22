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
	Person() {};
	Person(string name1, long id1, int age1);
	Person(const Person& p);
	~Person() {};
	string get_name()const { return name; };
	long get_id()const { return id; };
	int get_age()const { return age; };
	void print()const { cout << "name: "<< name <<"\nid: "<< id << "\nage: "<< age<< endl; }
};
#endif