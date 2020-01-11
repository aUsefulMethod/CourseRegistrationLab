#pragma once
#include "Student.h"
#include "Teacher.h"
#include <vector>
using namespace std;

//In this assignment, you need to create a class file for :
//
//	- A Student
//	- A Teacher
//	- A Course
//
//	The Course object should contain an array of Student objects so ensure that you create an array inside the Course object to hold Students.
//	A Course object will also contain a single Teacher object. For this assignment, create an array of size 3 for students.
//
//	Use this diagram as an example of how some objects relate to each other in a program that might be used to maintain class registrations.
//	The term UProgram is used so as not to confuse Program with a computer program.It is meant to represent a program such as Computer Science or Liberal Arts, etc.

class Course {

private:

	string courseName;
	vector<Student> students;
	vector<Teacher> teacher;

public:

	Course(string passedCourseName);

	void addTeacher(Teacher& teacher);
	void addStudent(Student& student);

	string& getCourseName();
	void setCourseName(string& passedCourseName);

};
