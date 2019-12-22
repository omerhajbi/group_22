#include "Employee.h"

Employee::Employee(string name1, long id1, int age1, float salary) :Person(name1, id1, age1), salary(salary) {}

void Employee::Print() const
{
	Person::print();
	cout << "The salary is : " << salary << endl ;
}


