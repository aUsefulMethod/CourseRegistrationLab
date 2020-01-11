#include "Course.h"

Course::Course(string passedCourseName)
{

	this->courseName = passedCourseName;

}

void Course::addTeacher(Teacher& teacher)
{

	this->teacher.push_back(teacher);

}

void Course::addStudent(Student& student)
{

	this->students.push_back(student);

}

string& Course::getCourseName()
{
	return this->courseName;
}

void Course::setCourseName(string& passedCourseName)
{

	this->courseName = passedCourseName;

}
