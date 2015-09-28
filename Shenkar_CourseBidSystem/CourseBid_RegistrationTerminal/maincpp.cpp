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
#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;
#define BUFFER_SIZE 20
#define TRUE '1'
#define FALSE '0'

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

void AuthenticationMenu();
void LogInMenu(IStorage *);
void Wellcome();


//REGISTRATION TERMINAL
int main(int argc, char* argv[])
{
	//cout << "Welcome to course bid - REGISTRATION TERMINAL Shenkar!!" << endl;
	//cout << "\nFinish authentication to proceed\n" << endl;
//	CLEAN
	Wellcome();
	cout << "\nWelcome to course bid - REGISTRATION TERMINAL Shenkar!!" << endl;
	cout << "\nFinish authentication to proceed\n" << endl;
	CLEAN
		try{
			UserLoginScreen * login = new UserLoginScreen();
			login->show();
	}
	catch (bad_alloc e){
		cerr << e.what();
	}
	/*
		do { // Activate the menu until the user quits.

			AuthenticationMenu();
			//	cout << "\nPassword: ";
			//cout << endl;
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

		//	Student * stu = new Student(12, new FileStorage());

//			stu->setFirstName("Moshe");
	//		stu->setLastName("Shimon");
		//	stu->setEmail("john@gmail.com");
			//stu->setPassword("12345");
			//stu->setPoints(102);
			//stu->setLocked(true);
			//stu->addDesiredCourse(c);


			//stu->save(true);

//			vector<Student> students = stu->getAllStudents();*/



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
		
			//	system("pause");
		} while (true);
			*/
}

void AuthenticationMenu(){
	IStorage * fs = new FileStorage();
	// ---------------------------------------------------------------------------
	//** user local vars
	string userName;
	string userLastName;
	int userId;
	//	Student stud;
	// ---------------------------------------------------------------------------


	//Student stud = Student::getStudentById(fs, 12311);
	lOGO

		cout << "Please enter the following details" << endl;
	cout << "Name: ";
	cin >> userName;
	cout << "\nLast name: ";
	cin >> userLastName;
	cout << "\nId: ";

	while (!(cin >> userId) || userId < 0) // <<< note use of "short circuit" logical operation here
	{
		cout << "Bad input - try again: ";
		cin.clear();
		cin.ignore(INT_MAX, '\n'); // NB: preferred method for flushing cin
	}


	Student * stud = Student::getStudentByStudentId(fs, 2 /*userId*/);
	if (stud->getFirstName() == "John" /*userName*/ && stud->getLastName() == "The I"/*userLastName*/){
		//if(stude.getCounter == 3 ) student locked --- else...
		if (stud->verifyPassword("password@1")){
			cout << "Authenticate succeed" << endl;
			CLEAN
				LogInMenu(fs);
		}
		//else counter++
	}
}

void LogInMenu(IStorage * fs){
	char choice;
	do { // Activate the menu until the user quits.
		lOGO
			cout << "Your options are:\n\n";
		cout << "Please enter your choice:" << endl;
		cout << "1 - Print course list" << endl;
		cout << "2 - Get Mail Status " << endl;
		cout << "3 - Get Mails List  " << endl;
		cout << "4 - Get One Mail  " << endl;
		cout << "5 - Delete mail" << endl;
		cout << "6 - RSET" << endl;
		cout << "E - EXIT" << endl;
		choice = getchar();
		system("cls");
		switch (choice)
		{
		case '1':
		{
			vector<Course> courses = Course::getAllCourses(fs);
			for each (Course course in courses)
			{
				cout << course.ToString() << endl;
			}
			CLEAN
			break;
		}
		case '2':{


			CLEAN
				break;
		}
		case '3':{

			break;
		}
		case '4':{

			CLEAN
				break;

		}
		case '5':{

			break;

		}
		case '6':{

			CLEAN
				break;

		}

		case 'E': { // Set to 'E' and go to case 'E'.
		case 'e':  // End the switch.

			choice = 'E';

			break;
		}
		default:{
			cerr << "Worng choice" << endl;
			CLEAN;
			break;
		}
		}
	} while (choice != 'E');
	cout << "HAVE A NICE DAY!\n\n";
	CLEAN
}

void Wellcome(){
	cout << "             #    # ###### #      #       ####  " << endl;
	cout << "             #    # #      #      #      #    # " << endl;
	cout << "             ###### #####  #      #      #    # " << endl;
	cout << "             #    # #      #      #      #    # " << endl;
	cout << "             #    # #      #      #      #    # " << endl;
	cout << "             #    # ###### ###### ######  ####  " << endl;
}


#endif REGISTRATION_TERMINAL