/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** StudentEditScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef STUDENTEDITSCREEN_H
#define STUDENTEDITSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "UIEditScreen.h"
#include "Student.h"

class StudentEditScreen : public UIEditScreen {
private:
	long studentId;
	Student * student;
public:
	StudentEditScreen();
	bool saveStudentAndVerify();
	bool deleteStudent();
	bool addCompletedCourse();
	bool removeCompletedCourse();
	void show();
};

#endif STUDENTEDITSCREEN_H