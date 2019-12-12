#include <string>
#include <iostream>

class Person {
private:
	std::string name;
	long id;
	int age;
public:
	Person() {};
	Person(std::string name1, long id1, int age1);
	Person(const Person& p);
	~Person() {};
	std::string get_name()const { return name; };
	long get_id()const { return id; };
	int get_age()const { return age; };
	void print()const { std::cout << name; }
};