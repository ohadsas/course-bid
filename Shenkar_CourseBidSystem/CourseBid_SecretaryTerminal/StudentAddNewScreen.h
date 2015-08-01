/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** StudentAddNewScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef STUDENTADDNEWSCREEN_H
#define STUDENTADDNEWSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "Student.h"
#include "UIAddNewScreen.h"

class StudentAddNewScreen :public UIAddNewScreen {
private:
	long studentId;
	Student * student;
public:
	StudentAddNewScreen()
	{
		cout << "StudentAddNewScreen() called" << endl;
	}
	void setStudentId(long studentId) { this->studentId = studentId; }
	bool addStudentAndVerify();
	void show();
};

#endif STUDENTADDNEWSCREEN_H