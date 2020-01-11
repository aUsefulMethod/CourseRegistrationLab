#include <iostream>
using namespace std;
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include <vector>

//In the main() method:
//
//Instantiate three Student objects called Student1, Student2, and Student3, provide values for the member variables.
//Instantiate a Course object called Intermediate C++.
//Add your three students to this Course object.
//Instantiate at least one Teacher object.
//Add that Teacher object to your Course object
//Using cout statements where appropriate, follow these instructions :
//Output the name of the course
//Call the GradeStudent() method on the Teacher object

int main() {

	Student * studentOne = new Student("Gary", "Kroll");
	Student * studentTwo = new Student("Jimothy", "Taylor");
	Student * studentThree = new Student("Raylan", "Givens");

	Teacher * teacher = new Teacher("Nostrand", "Phillips");

	Course * computerScienceCourse = new Course("Intermediate C++");

	computerScienceCourse->addStudent(*studentOne);
	computerScienceCourse->addStudent(*studentTwo);
	computerScienceCourse->addStudent(*studentThree);
	computerScienceCourse->addTeacher(*teacher);

	cout << "You are in " << computerScienceCourse->getCourseName() << "." << endl;

	studentOne->~Student();
	teacher->~Teacher();
	delete studentOne;
	delete teacher;
	
	// so destroying an object, and then invoking methods on it is still possible???
	studentOne->sitInClass();
	studentTwo->sitInClass();
	teacher->sitInClass();
	teacher->gradeStudent();

}
