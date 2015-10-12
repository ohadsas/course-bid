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

class StudentMainScreen:public UIMainScreen {
private:
	Student* student;
public:
	StudentMainScreen()
	{
		cout << "StudentMainScreen() called" << endl;
	}
	void logOut();
	void getAssignitionResultsScreen();
	void getPointDistributionScreen();
	void show();
};

#endif STUDENTMAINSCREEN_H