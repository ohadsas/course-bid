/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** InsertAssignitionFileScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef INSERTASSIGNITIONFILESCREEN_H
#define INSERTASSIGNITIONFILESCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "UIScreen.h"
#include "Technician.h"

class InsertAssignitionFileScreen:public UIScreen {
private:
	Technician * technician;
public:
	InsertAssignitionFileScreen()
	{
		cout << "InsertAssignitionFileScreen() called" << endl;
	}
	void insertDistributionFile();
	void getDistributionResults();
	void show();
};

#endif INSERTASSIGNITIONFILESCREEN_H