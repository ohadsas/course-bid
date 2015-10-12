/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** maincpp.cpp
** This is Registration Terminal main fucntion. It will run when you will enter 
** the CourseBid from Registration Terminal.
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef REGISTRATION_TERMINAL
#define REGISTRATION_TERMINAL
#include <iostream>
#include <cstdint>
using namespace std;

#include <string>
#include "Course.h"
#include "FileStorage.h"

//#include "UITerminal.h"		//<--delete this is parent
//#include "UIScreen.h"		//<--delete this is parent
//#include "UILockScreen.h"	//<--delete this is parent
//#include "UIDataScreen.h"	//<--delete this is parent
//#include "UIListScreen.h"	//<--delete this is parent
//#include "UIMainScreen.h"	//<--delete this is parent
#include "UIErrorScreen.h"
#include "UserLoginScreen.h"

#include "Student.h"
#include "Technician.h"
#include "CoursePair.h"
#include "PointDistributionScreen.h"
#include "AssignmentCalculator.h"
#include "FileStorage.h"

//REGISTRATION TERMINAL
int main(int argc, char* argv[])
{
	
	cout << "Welcome to course bid - REGISTRATION TERMINAL Shenkar!!" << endl;
	
	IStorage * fs = new FileStorage();
	
	//Student stud = Student::getStudentById(fs, 12311);
	Student * stud = Student::getStudentByStudentId(fs, 2);
	cout << stud->ToString() << endl;
//	stud->deleteMe();
	

	/*Course * c = new Course(100, fs);
	c->setName("English");*/

	//vector<Course> courses = Course::getAllCourses(fs);
	//vector<Student> students = Student::getAllStudents(fs);
	

	
	/*
	vector<Course>vec = c->getAllCourses();
	for each (Course course in vec)
	{
		cout << course.ToString() << endl;
	}
	*/
	
	/*Student * stu = new Student(12311, fs);
	
	stu->setFirstName("John");
	stu->setLastName("The I");
	stu->setEmail("john@gmail.com");
	stu->setPassword("password@1");
	stu->setPoints(102);
	stu->setLocked(true);
	stu->addDesiredCourse(c);
	

	stu->save(true);

	vector<Student> students = stu->getAllStudents();*/

	
	
	/*
	Course * c1 = new Course(1, fs);
	c1->setName("Linear Algebra");
	c1->setDescription("Greate course of mathematics.");

	Course * c2 = new Course(2, fs);
	c2->setName("Image Processing");
	c2->setDescription("Fuck me but don't take it!");
	c2->setPrerequisiteCourse(*c1);
	c2->save(true);

	
	for each (string str in fs->getAll(1))
	{
		cout << str << endl;
	}
	

	fs->deleteObj(1, 1);
	fs->save();
	*/
	//fs->generateId(1);
	/*
	//DEMO CALLS TO VERIFY COMPILATION
	FileStorage * fs = new FileStorage();
	UIScreen * uis = new UserLoginScreen();
	//UITerminal * uit = new SecretaryTerminal();

	User * u = new Student(123123123);
	User * u2 = new Technician(123123456);
	
	Course * c1 = new Course(123123, fs);
	Course * c2 = new Course(123323, fs);
	CoursePair * cp = new CoursePair(c1, c2);

	UIScreen * uiss = new PointDistributionScreen();
	AssignmentCalculator * ac = new AssignmentCalculator();
	*/
	system("pause");

}

#endif REGISTRATION_TERMINAL