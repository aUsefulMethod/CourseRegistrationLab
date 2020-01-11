#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string firstName, string lastName)
{

	Student::Person::setFirstName(firstName);
	Student::Person::setLastName(lastName);

}

Student::Student()
{

	cout << "Default Student Constructor called." << endl;

}

Student::~Student()
{

	cout << "Student Object has been destroyed." << endl;
	
}

void Student::sitInClass()
{

	cout << "Sitting in the main theater." << endl;

}
