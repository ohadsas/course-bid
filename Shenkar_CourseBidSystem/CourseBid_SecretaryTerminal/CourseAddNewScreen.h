/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** CourseAddNewScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef COURSEADDNEWSCREEN_H
#define COURSEADDNEWSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "Course.h"
#include "UIAddNewScreen.h"

class CourseAddNewScreen:public UIAddNewScreen {
private:
	long courseId;
	Course * course;
public:
	CourseAddNewScreen()
	{
		cout << "CourseAddNewScreen() called" << endl;
	}
	void setCourseId(long courseId) { this->courseId = courseId; }
	bool addCourseAndVerify();
	void show();
};

#endif COURSEADDNEWSCREEN_H