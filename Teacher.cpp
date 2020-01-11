#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher()
{

	cout << "Default Teacher Constructor called." << endl;

}

Teacher::Teacher(string firstName, string lastName)
{

	Teacher::Person::setFirstName(firstName);
	Teacher::Person::setLastName(lastName);

}

Teacher::~Teacher()
{

	cout << "Destructor called for Teacher Object." << endl;

}

void Teacher::gradeStudent()
{

	cout << "Student has been graded." << endl;

}

void Teacher::sitInClass()
{

	cout << "Standing in front of the class, delivering a lecture." << endl;

}
