#pragma once
#include "Person.h"

class Teacher : public Person {

public:

	Teacher();

	Teacher(string firstName, string lastName);

	~Teacher();

	void gradeStudent();

	void sitInClass();

};
