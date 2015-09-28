/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** TechnicianMainScreen.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "TechnicianMainScreen.h"
TechnicianMainScreen::TechnicianMainScreen(){
	this->Log = true;
}

void TechnicianMainScreen::logOut()
{
	
		this->Log = false;
	
}

void TechnicianMainScreen::getAssignitionResultsScreen()
{

}

void TechnicianMainScreen::getPointDistributionScreen()
{

}

void TechnicianMainScreen::lockTerminal(bool status)
{
	if (status == LOCK) this->initLoginCounter(3);
	if (status == UNLOCK) this->initLoginCounter(0);

}

void TechnicianMainScreen::initLoginCounter(int val){
ofstream counterData;
counterData.open("counterAttempts.txt");
counterData << val;
counterData.close();
}

void TechnicianMainScreen::show()
{
	char choice;
	do { // Activate the menu until the user quits.
		lOGO
		
		cout << "Hello Admin"<<endl;
		cout << "\nYour options are:\n\n";
		cout << "Please enter your choice:" << endl;
		cout << "1 - Print course list" << endl;
		cout << "2 - Assign Results" << endl;
		cout << "3 - Point Distribution" << endl;
		cout << "4 - options3" << endl;
		cout << "5 - Lock registration screen" << endl;
		cout << "6 - Unlock registration screen" << endl;
		cout << "E - Logout" << endl;
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
			this->lockTerminal(LOCK);
			CLEAN
				break;

		}
		case '6':{
			this->lockTerminal(UNLOCK);
			CLEAN
				break;

		}

		case 'E': { // Set to 'E' and go to case 'E'.
		case 'e':  // End the switch.


			this->logOut();
			break;
		}
		default:{
			cerr << "Wrong choice" << endl;
			CLEAN;
			break;
		}
		}
	} while (this->Log);
	cout << "HAVE A NICE DAY!\n\n";
	CLEAN
}