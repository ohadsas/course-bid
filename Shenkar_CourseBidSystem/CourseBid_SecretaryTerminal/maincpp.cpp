/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** maincpp.cpp
** This is Secretary Terminal main fucntion. It will run when you will enter
** the CourseBid from Secretary Terminal.
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef SECRETARY_TERMINAL
#define SECRETARY_TERMINAL
#include <iostream>
#include <cstdint>

using namespace std;


#include "Course.h"
#include "FileStorage.h"

//#include "UITerminal.h"		//<--delete this is parent
#include "SecretaryTerminal.h"
//#include "UIScreen.h"		//<--delete this is parent
//#include "UILockScreen.h"	//<--delete this is parent
//#include "UIDataScreen.h"	//<--delete this is parent
//#include "UIListScreen.h"	//<--delete this is parent
//#include "UIMainScreen.h"	//<--delete this is parent
#include "UIErrorScreen.h"
#include "SecretaryMainScreen.h"





//SECRETARY TERMINAL
int main(int argc, char* argv[])
{

	//DEMO CALLS TO VERIFY COMPILATION
	//	FileStorage * fs = new FileStorage();

	//	UIScreen * uis = new UIErrorScreen();
	//UITerminal * uit = new SecretaryTerminal();
	//	SecretaryMainScreen * sms = new SecretaryMainScreen();


	try{
		SecretaryMainScreen *SecretaryScreen = new SecretaryMainScreen();
		SecretaryScreen->show();
	}
	catch (bad_alloc e)
	{
		cerr << e.what() << endl;
	}
	system("pause");

}

#endif SECRETARY_TERMINAL