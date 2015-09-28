#include "LockScreen.h"


LockScreen::LockScreen()
{
	this->isLock = true;
}


LockScreen::~LockScreen()
{
}


void LockScreen::releaseLock(){
	this->isLock = false;
}

void LockScreen::show(){
	cout << "		 #####" << endl;
	cout << "		 #     #  ####  #####  ###### ###### #    #" << endl;
	cout << "		 #       #    # #    # #      #      ##   #" << endl;
	cout << "		  #####  #      #    # #####  #####  # #  #" << endl;
	cout << "		      #  #      #####  #      #      #  # #" << endl;
	cout << "		 #    #  #    # #   #  #      #      #   ##" << endl;
	cout << "		 #####    ####  #    # ###### ###### #    #" << endl;
	cout << endl;
	cout << "                         ### " << endl;
	cout << "                          #   ####     " << endl;
	cout << "                          #  #            " << endl;
	cout << "                          #   ####         " << endl;
	cout << "                          #       #        " << endl;
	cout << "                          #  #    #        " << endl;
	cout << "                         ###  ####          " << endl;

	cout << "		 #                                          " << endl;
	cout << "		 #        ####   ####  #    # ###### #####  " << endl;
	cout << "		 #       #    # #    # #   #  #      #    # " << endl;
	cout << "		 #       #    # #      ####   #####  #    # " << endl;
	cout << "		 #       #    # #      #  #   #      #    # " << endl;
	cout << "		 #       #    # #    # #   #  #      #    # " << endl;
	cout << "		 #######  ####   ####  #    # ###### #####  " << endl;

	do{

	} while (isLock == true);
}