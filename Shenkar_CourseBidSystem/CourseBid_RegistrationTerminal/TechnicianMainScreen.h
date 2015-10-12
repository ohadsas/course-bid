/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** TechnicianMainScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef TECHNICIANMAINSCREEN_H
#define TECHNICIANMAINSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "UIMainScreen.h"
#include "Technician.h"

class TechnicianMainScreen :public UIMainScreen {
private:
	Technician * technician;
public:
	TechnicianMainScreen()
	{
		cout << "TechnicianMainScreen() called" << endl;
	}
	void logOut();
	void getAssignitionResultsScreen();
	void getPointDistributionScreen();
	void lockTerminal();
	void show();
};

#endif TECHNICIANMAINSCREEN_H