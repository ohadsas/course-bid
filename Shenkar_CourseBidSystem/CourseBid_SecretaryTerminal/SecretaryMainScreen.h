/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** SecretaryMainScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef SECRETARYMAINSCREEN_H
#define SECRETARYMAINSCREEN_H

#include <iostream>
#include <cstdint>	
#include <vector>
using namespace std;
#include "UIMainScreen.h"
#include "Course.h"
#include "Student.h"

#include "LockRegistrationScreen.h"

//#include "Expression.h"
#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;

class SecretaryMainScreen : public UIMainScreen {

public:
	SecretaryMainScreen();
	vector<Course*> getCourseList();
	vector<Student*> getStudentList();
	void getAssignitionResultsCourses();
	void getAssignitionResultsStudents();
	//Expression * getExpressionScreen();
	string getRegistrationStartDate();
	bool releaseTerminalScreen();
	bool studentUnlockScreen();
	bool studentResetPassScreen();
	void show();

};

#endif SECRETARYMAINSCREEN_H