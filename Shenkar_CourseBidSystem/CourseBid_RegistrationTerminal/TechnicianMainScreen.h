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
#include "Terminal.h"
#define LOCK true
#define UNLOCK false

class TechnicianMainScreen :public Terminal {
private:
	//Technician * technician;
	bool Log;
	void initLoginCounter(int);
public:
	TechnicianMainScreen();

	void logOut();
	void getAssignitionResultsScreen();
	void getPointDistributionScreen();
	void lockTerminal(bool);
	void show();
	
	
};

#endif TECHNICIANMAINSCREEN_H