#include "WorkingStudent.h"

Person generate_person() {
	string name1;
	long id1;
	int age1;
	cout << "Insert name(string): " << endl;
	cin.ignore();
	getline(cin, name1);
	cout << "Insert id(long): " << endl;
	cin >> id1;
	cout << "Insert age(int): " << endl;
	cin >> age1;
	
	return Person(name1, id1, age1);
};
Student generate_student() {
	string name1;
	long id1;
	int age1;
	int average1;
	string institude1;
	cout << "Insert name(string): " << endl;
	cin.ignore();
	getline(cin, name1);
	cout << "Insert id(long): " << endl;
	cin >> id1;
	cout << "Insert age(int): " << endl;
	cin >> age1;
	cout << "Insert average(int): " << endl;
	cin >> average1;
	cout << "Insert institude(string): " << endl;
	cin.ignore();
	getline(cin,institude1);

	return Student(name1, id1, age1, average1, institude1);
};
Employee generate_employee() {
	string name1;
	long id1;
	int age1;
	float salary1;
	cout << "Insert name(string): " << endl;
	cin.ignore();
	getline(cin, name1);
	cout << "Insert id(long): " << endl;
	cin >> id1;
	cout << "Insert age(int): " << endl;
	cin >> age1;
	cout << "Insert salary(float): " << endl;
	cin >> salary1;

	return Employee(name1, id1, age1, salary1);
};
WorkingStudent generate_workingstudent() {
	string name1;
	long id1;
	int age1;
	float salary1;
	int average1;
	string institude1;
	bool same_institude1;
	cout << "Insert name(string): " << endl;
	cin.ignore();
	getline(cin, name1);
	cout << "Insert id(long): " << endl;
	cin >> id1;
	cout << "Insert age(int): " << endl;
	cin >> age1;
	cout << "Insert salary(float): " << endl;
	cin >> salary1;
	cout << "Insert average(int): " << endl;
	cin >> average1;
	cout << "Insert institude(string): " << endl;
	cin.ignore();
	getline(cin, institude1);
	cout << "Insert if same institude(0/1): " << endl;
	cin >> same_institude1;

	return WorkingStudent(name1, id1, age1, salary1, average1, institude1, same_institude1);
};

int main() {

	cout << "Choose the number of people to insert (max 10)" << endl;
	int i;
	cin >> i;
	Person* temp_person = new Person[i];
	Employee* temp_employee = new Employee[i];
	Student* temp_student = new Student[i];
	WorkingStudent* temp_workingstudent = new WorkingStudent[i];
	int p_j = 0, e_j = 0, s_j = 0, w_j = 0;
	int choice;
	for (int j = 0; j < i; j++) {
		cout << "Choose a type for person number " << j + 1 << " by entering the corrisponding number:" << endl;
		cout << "1.Person 2.Student 3.Employee 4.WorkingStudent" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			temp_person[p_j] = generate_person();
			p_j++;
			break;
		case 2:
			temp_student[s_j] = generate_student();
			s_j++;
			break;
		case 3:
			temp_employee[e_j] = generate_employee();
			e_j++;
			break;
		case 4:
			temp_workingstudent[w_j] = generate_workingstudent();
			w_j++;
			break;
		default:
			cout << "Invalid number." << endl;
			j--;
			break;
		}

	}
	cout << endl;
	for (int k = 0; k < p_j; k++) 
	{
		temp_person[k].Print();
		cout << "---------------" << endl;
	}
	for (int k = 0; k < s_j; k++)
	{
		temp_student[k].Print();
		cout << "---------------" << endl;
	}
	for (int k = 0; k < e_j; k++)
	{
		temp_employee[k].Print();
		cout << "---------------" << endl;
	}
	for (int k = 0; k < w_j; k++)
	{
		temp_workingstudent[k].Print();
		cout << "---------------" << endl;
	}

	delete[] temp_person;
	delete[] temp_employee;
	delete[] temp_student;
	delete[] temp_workingstudent;

	getchar();

	return 0;
}
