/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** CourseListScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef COURSELISTSCREEN_H
#define COURSELISTSCREEN_H

#include <iostream>
#include <cstdint>	
#include <vector>
using namespace std;
#include "UIListScreen.h"
#include "Course.h"

class CourseListScreen : public UIListScreen {
private:
	vector<Course*> courses;
public:
	CourseListScreen();
	void getCourseData();
	void setCourseData();
	void deleteCourse();
	void show();
};

#endif COURSELISTSCREEN_H