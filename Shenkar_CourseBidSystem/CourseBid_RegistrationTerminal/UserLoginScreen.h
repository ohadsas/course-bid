/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** UserLoginScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef USERLOGINSCREEN_H
#define USERLOGINSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "UIScreen.h"

class UserLoginScreen: public UIScreen {
private:
	long userId;
	string password;
public:
	UserLoginScreen()
	{
		cout << "UserLoginScreen() called" << endl;
	}

	void login();
	void show();
};

#endif USERLOGINSCREEN_H