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

//REGISTRATION TERMINAL
int main(int argc, char* argv[])
{
	cout << "Welcome to course bid - REGISTRATION TERMINAL Shenkar!!" << endl;

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

	system("pause");

}

#endif REGISTRATION_TERMINAL