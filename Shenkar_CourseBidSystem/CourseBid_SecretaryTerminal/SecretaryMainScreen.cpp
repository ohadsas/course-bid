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
/*
Expression * SecretaryMainScreen::getExpressionScreen()
{

	return NULL;
}
*/
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
	char choice;
	do { // Activate the menu until the user quits.
		cout << "Welcome to course bid - SECRETARY TERMINAL Shenkar!!" << endl;
		lOGO
		cout << "\nYour options are:\n\n";
		cout << "Please enter your choice:" << endl;
		cout << "1 - Print course list" << endl;
		cout << "2 - Assign points for course" << endl;
		cout << "3 - Point Distribution" << endl;
		cout << "4 - Assign courses after registration" << endl;
		cout << "5 - Lock registration screen" << endl;
		cout << "6 - Unlock registration screen" << endl;
		choice = getchar();
		system("cls");
		switch (choice)
		{
		case '1':
		{

			CLEAN
				break;
		}
		case '2':{
		

			CLEAN
				break;
		}
		case '3':{
			
			CLEAN
				break;
		}
		case '4':{

			CLEAN
				break;

		}
		case '5':{
			try{
				LockRegistrationScreen *lock = new LockRegistrationScreen();
				lock->lockTerminal(LOCK);
				delete lock;
			}
			catch (bad_alloc e){
				cerr << e.what();
			}
			CLEAN
		
				break;

		}
		case '6':{
			try{
				LockRegistrationScreen *lock = new LockRegistrationScreen();
				lock->lockTerminal(UNLOCK);
				delete lock;
			}
			catch (bad_alloc e){
				cerr << e.what();
			}
			CLEAN
				break;

		}


		default:{
			cerr << "Wrong choice" << endl;
			CLEAN;
			break;
		}
		}
	} while (true);
	cout << "HAVE A NICE DAY!\n\n";
	CLEAN
}