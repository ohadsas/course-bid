/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** SecretaryMainScreen.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "SecretaryMainScreen.h"

SecretaryMainScreen::SecretaryMainScreen()
{
	cout << "SecretaryMainScreen() called" << endl;
}

vector<Course*> SecretaryMainScreen::getCourseList()
{


	return vector<Course*>();
}

vector<Student*> SecretaryMainScreen::getStudentList()
{


	return vector<Student*>();
}

void SecretaryMainScreen::getAssignitionResultsCourses()
{

}

void SecretaryMainScreen::getAssignitionResultsStudents()
{

}

Expression * SecretaryMainScreen::getExpressionScreen()
{

	return NULL;
}

string SecretaryMainScreen::getRegistrationStartDate()
{

	return string();
}

bool SecretaryMainScreen::releaseTerminalScreen()
{


	return true;
}

bool SecretaryMainScreen::studentUnlockScreen()
{


	return true;
}

bool SecretaryMainScreen::studentResetPassScreen()
{


	return true;
}

void SecretaryMainScreen::show()
{

}