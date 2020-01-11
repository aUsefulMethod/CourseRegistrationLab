#pragma once
using namespace std;
#include <string>

//The Student and Teacher classes need to have private member variables for firstand last names, age, address, city, and phone along with public accessors for these.
//
//Each class needs to have a default constructorand one that sets the values of the member variables when the object is created.Each class should also have a destructor.
//
//Ensure that you are using a header(.h) and an implementation file(.cpp) for each class.
//
//The Teacher class needs to have a method called GradeStudent() that accepts no argumentsand returns nothing.
//Have this method output an appropriate message to the console such as "Student graded".
//
//Add a method to both Student and Teacher called SitInClass().it should take no arguments and return no arguments but, 
//to illustrate class scope, have the method output, "Sitting at front of class" for the teacher and "Sitting in main theater" for the students.

class Person {

private:

	string firstName;
	string lastName;
	int age;
	string address;
	string city;
	string phone;

public:

	void setFirstName(string);
	string getfirstName();

	void setLastName(string);
	string getLastName();

	void setAge(int);
	int getAge();

	void setAddress(string);
	string getAddress();

	void setCity(string);
	string getCity();

	void setPhone(string);
	string getPhone();

};




