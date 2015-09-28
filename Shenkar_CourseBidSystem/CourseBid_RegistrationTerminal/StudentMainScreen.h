/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** StudentMainScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef STUDENTMAINSCREEN_H
#define STUDENTMAINSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "UIMainScreen.h"
#include "Student.h"
#include "Terminal.h"

class StudentMainScreen: public Terminal {
private:
	Student* student;
	bool Log;
	void printDependencies();
public:
	StudentMainScreen()
	{
		cout << "StudentMainScreen() called" << endl;
		this->Log = true;

	}
	void printCourseList();
	void logOut();
	void getAssignitionResultsScreen();
	void getPointDistributionScreen();
	void show();

	
};

#endif STUDENTMAINSCREEN_H