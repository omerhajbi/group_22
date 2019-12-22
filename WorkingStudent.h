#pragma once
#ifndef WORKINGSTUDENT_H
#define WORKINGSTUDENT_H

#include "Student.h"
#include "Employee.h"

using namespace std;

class WorkingStudent : public Student, public Employee {
protected:
	bool same_institute;
public:
	WorkingStudent(): same_institute(false) {};
	WorkingStudent(string name1, long id1, int age1, float salary1, int average1, string institude1, bool s_i = false);
	WorkingStudent(const WorkingStudent& ws);
	~WorkingStudent() {}
	void Print()const override;

};
#endif
