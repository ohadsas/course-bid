/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** PointDistributionScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef POINTDISTRIBUTIONSCREEN_H
#define POINTDISTRIBUTIONSCREEN_H

#include <iostream>
#include <cstdint>	
#include <vector>
using namespace std;
#include "Course.h"
#include "Student.h"
#include "UIListScreen.h"

class PointDistributionScreen : public UIListScreen {
private:
	vector<Course*> courses;
	Student* student;
public:
	PointDistributionScreen();
	void getCourseData();
	void setDesiredCoursePoints();
	void saveDesiredCourses();
	void show();
};

#endif POINTDISTRIBUTIONSCREEN_H