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
#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;
#define BUFFER_SIZE 20

#include "UIScreen.h"
#include "Terminal.h"
#include "LockScreen.h"
#include "TechnicianMainScreen.h"

class UserLoginScreen: public Terminal {
private:
	int loginCounter;
	string adminPassword = "Admin";
	int adminId = 123456;
	void initLoginCounter();
	void checkLoginCounter();
	void updateCounter(int);

public:
	UserLoginScreen();
	

	void show();
};

#endif USERLOGINSCREEN_H