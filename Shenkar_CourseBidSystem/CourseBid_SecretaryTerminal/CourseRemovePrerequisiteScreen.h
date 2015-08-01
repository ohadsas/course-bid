/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** CourseRemovePrerequisiteScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef COURSEREMOVEPREREQUISITESCREEN_H
#define COURSEREMOVEPREREQUISITESCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "UIScreen.h"
#include "Course.h"

class CourseRemovePrerequisiteScreen : public UIScreen {
private:
	Course * rootCourse;
	long rootCourseId;
	Course * leafCourse;
	long leafCourseId;
public:
	CourseRemovePrerequisiteScreen(long rootCourseId);
	bool removePrerequisiteScreen();
	void show();
};

#endif COURSEREMOVEPREREQUISITESCREEN_H