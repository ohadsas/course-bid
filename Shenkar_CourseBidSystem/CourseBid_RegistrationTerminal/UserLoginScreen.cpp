/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** UserLoginScreen.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include <string>
#include "Course.h"
#include "FileStorage.h"

#include "UIErrorScreen.h"
#include "UserLoginScreen.h"

#include "Student.h"
#include "Technician.h"
#include "CoursePair.h"
#include "PointDistributionScreen.h"
#include "AssignmentCalculator.h"
#include "FileStorage.h"
#include "StudentMainScreen.h"


UserLoginScreen::UserLoginScreen()
{
	cout << "UserLoginScreen() called" << endl;
	this->initLoginCounter();
	this->checkLoginCounter();
}


void UserLoginScreen::initLoginCounter(){///check login attempts
	ifstream counterData;
	try{
		counterData.open("../counterAttempts.txt");
		char output[100];
		if (counterData.is_open()) {
			while (!counterData.eof()) {
				counterData >> output;
				this->loginCounter = atoi(output);

			}
		}
		counterData.close();
	}
	catch (ifstream::failure e){
		cerr << "Exception opening/reading/closing file " << e.what() << endl;
	}
}

void UserLoginScreen::checkLoginCounter(){//check counter
	if (this->loginCounter == 3){
		try{
			LockScreen *isLock = new LockScreen();
			isLock->show();
		}
		catch (bad_alloc e)
		{
			cerr << "bad_alloc caught: " << e.what() << '\n';
		}
	}
}

void UserLoginScreen::updateCounter(int counter){//update login attempts
	ofstream counterData;
	try {
		counterData.open("../counterAttempts.txt");
		counterData << counter;
		counterData.close();
	}
	catch (ifstream::failure e){
		cerr << "Exception opening/reading/closing file " << e.what()<<endl;
	}
}

void UserLoginScreen::show()
{
	try{
	IStorage * fs = new FileStorage();
	// ---------------------------------------------------------------------------
	//** user local vars
	string password;
	int userId;
	//	Student stud;
	// ---------------------------------------------------------------------------


	do { // Activate the menu until the user quits.
		lOGO
			if (this->loginCounter == 3){
				LockScreen *isLock = new LockScreen();
				isLock->show();
			}
		cout << "Please enter the following details" << endl;
		cout << "\nId: ";
		while (!(cin >> userId) || userId < 0) // <<< note use of "short circuit" logical operation here
		{
			cout << "Bad input - try again: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n'); // NB: preferred method for flushing cin
		}

		cout << "Password: ";
		cin >> password;



		if (Student * stud = Student::getStudentByStudentId(fs, userId)){
			if (stud->verifyPassword(password)){
				cout << "Authenticate succeed" << endl;
				this->loginCounter = 0;
				this->updateCounter(this->loginCounter);
				CLEAN

				StudentMainScreen *studentMainScreen = new StudentMainScreen();
			
				studentMainScreen->setUser(stud);
				studentMainScreen->show();
			}
		}
		else if (userId == this->adminId ){
			if (password == this->adminPassword){
				cout << "Authenticate succeed" << endl;
				this->loginCounter = 0;
				this->updateCounter(this->loginCounter);
					CLEAN
						TechnicianMainScreen *technicianMainScreen = new TechnicianMainScreen();

					technicianMainScreen->show();
					initLoginCounter();
					this->checkLoginCounter();
				}
			}
				else {
					cout << "Wrong enter! try again" << endl;
					this->loginCounter++;
					this->updateCounter(loginCounter);
					CLEAN
				}
		
	} while (true);
	}
	catch (bad_alloc e)
	{
		cerr << "bad_alloc caught: " << e.what() << '\n';
	}
}

