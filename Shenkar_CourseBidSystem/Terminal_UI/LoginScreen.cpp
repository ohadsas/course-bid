#include "LoginScreen.h"


LoginScreen::LoginScreen()
{
	this->initLoginCounter();
	this->checkLoginCounter();

}


LoginScreen::~LoginScreen()
{
}

void LoginScreen::initLoginCounter(){///check login attempts
	this->loginCounter = 0;
}

void LoginScreen::checkLoginCounter(){
	if (this->loginCounter == 3){
		LockScreen *isLock = new LockScreen();
		isLock->show();
	}
}

void LoginScreen::show(){
	int userId = 0;
	string password;

	do { // Activate the menu until the user quits.
		lOGO
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


		//	if (Student * stud = Student::getStudentByStudentId(fs, 2 /*userId*/)){

		//	if (stud->verifyPassword("password@1"/*password*/)){
		//	cout << "Authenticate succeed" << endl;
		//CLEAN
		//this->password = password;
		//	this->userId = userId;
		//StudentMainScreen *studentMainScreen = new StudentMainScreen();
		//studentMainScreen->setStudent(stud);
		//studentMainScreen->show();
		//	}
		//else {
		//	cout << "Wrong enter! try again" << endl;
		//	CLEAN
		//	}
		//}

	} while (true);
}