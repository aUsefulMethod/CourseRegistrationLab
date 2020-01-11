#pragma once
#include "Person.h"

class Student : public Person {

public:

	Student(string firstName, string lastName);

	Student();

	~Student();

	void sitInClass();

};
