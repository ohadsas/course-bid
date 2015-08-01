/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** TechnitianAssignitionResultsScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef TECHNICIANASSIGNITIONRESULTSSCREEN_H
#define TECHNICIANASSIGNITIONRESULTSSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "Technician.h"
#include "UIListScreen.h"

class TechnitianAssignitionResultsScreen: public UIListScreen {
private:
	Technician* technician;
public:
	TechnitianAssignitionResultsScreen();
	void getMainTechnicianScreen();
	void show();
};

#endif TECHNICIANASSIGNITIONRESULTSSCREEN_H