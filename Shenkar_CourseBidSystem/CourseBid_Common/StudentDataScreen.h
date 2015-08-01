/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** StudentDataScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef STUDENTDATASCREEN_H
#define STUDENTDATASCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "UIDataScreen.h"
#include "Student.h"

class StudentDataScreen : public UIDataScreen {
private:
	Student* student;
public:
	StudentDataScreen()
	{
		cout << "StudentDataScreen() called" << endl;
	}

	virtual void printCourseData();
	virtual void show();
};

#endif STUDENTDATASCREEN_H