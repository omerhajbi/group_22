#include "WorkingStudent.h"

WorkingStudent::WorkingStudent(string name1, long id1, int age1, float salary1, int average1, string institude1, bool s_i): Person(name1, id1, age1), Employee(salary1), Student(average1, institude1), same_institute(s_i)
{
}

WorkingStudent::WorkingStudent(const WorkingStudent& ws): Person(ws.name, ws.id, ws.age), Employee(ws.salary), Student(ws.average, ws.institute), same_institute(ws.same_institute)
{
}

void WorkingStudent::Print() const
{
	cout << "Name: " << Person::name << " Id: " << Person::id << " Age: " << Person::age << endl;
	cout << "Sallary: " << Employee::salary << " Average: " << Student::average << " Institude: " << Student::institute << endl;
	string same_i;
	if (same_institute) { same_i = "True"; }
	else { same_i = "False"; }
	cout << "Same institude: " << same_i << endl;
}
