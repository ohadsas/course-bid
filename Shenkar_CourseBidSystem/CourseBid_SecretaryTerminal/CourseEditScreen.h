/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** CourseEditScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef COURSEEDITSCREEN_H
#define COURSEEDITSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "UIEditScreen.h"
#include "Course.h"
#include "VerifyDependencies.h"

class CourseEditScreen : public UIEditScreen {
private:
	long courseId;
	Course * course;
	VerifyDependencies* verifyDependencies;
public:
	CourseEditScreen();
	bool saveCourseAndVerify();
	bool deleteCourse();
	bool addPrerequisiteCourse();
	bool removePrerequisiteCourse();
	void show();
};

#endif COURSEEDITSCREEN_H