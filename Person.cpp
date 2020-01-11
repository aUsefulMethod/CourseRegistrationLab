#include "Person.h"
using namespace std;
#include <iostream>

void Person::setFirstName(string passedFirstName)
{

	this->firstName = passedFirstName;

}

string Person::getfirstName()
{
	return this->firstName;
}

void Person::setLastName(string passedLastName)
{

	this->lastName = passedLastName;

}

string Person::getLastName()
{
	return this->lastName;
}

void Person::setAge(int passedAge)
{

	if (passedAge > 0)
	{

		this->age = passedAge;

	}
	else {

		cout << "Please enter a valid age" << endl;

	}

}

int Person::getAge()
{
	return this->age;
}

void Person::setAddress(string passedAddress)
{

	this->address = passedAddress;

}

string Person::getAddress()
{
	return this->address;
}

void Person::setCity(string passedCity)
{

	this->city = passedCity;

}

string Person::getCity()
{
	return this->city;
}

void Person::setPhone(string passedPhone)
{

	this->phone = passedPhone;

}

string Person::getPhone()
{
	return this->phone;
}


