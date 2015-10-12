/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** SecretaryMainScreen.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "SecretaryMainScreen.h"




SecretaryMainScreen::SecretaryMainScreen()
{
	cout << "SecretaryMainScreen() called" << endl;
	this->changeScreen = '1';
	//thread t1(&SecretaryMainScreen::changeSrceenByTime , this);
	//t1.detach();
}

vector<Course*> SecretaryMainScreen::getCourseList()
{

	return vector<Course*>();
}

vector<Student*> SecretaryMainScreen::getStudentList()
{


	return vector<Student*>();
}

void SecretaryMainScreen::getAssignitionResultsCourses()
{

}

void SecretaryMainScreen::getAssignitionResultsStudents()
{

}
/*
Expression * SecretaryMainScreen::getExpressionScreen()
{

return NULL;
}
*/
string SecretaryMainScreen::getRegistrationStartDate()
{

	return string();
}

bool SecretaryMainScreen::releaseTerminalScreen()
{


	return true;
}

bool SecretaryMainScreen::studentUnlockScreen()
{


	return true;
}

bool SecretaryMainScreen::studentResetPassScreen()
{


	return true;
}

void SecretaryMainScreen::show()
{

	char choice;
	do { // Activate the menu until the user quits.
		cout << "Welcome to course bid - SECRETARY TERMINAL Shenkar!!" << endl;
		lOGO
			cout << "\nYour options are:\n\n";
		cout << "Please enter your choice:" << endl;
		cout << "1 - Print course list" << endl;
		cout << "2 - Set expression" << endl;
		cout << "3 - Point Distribution" << endl;
		cout << "4 - Assign courses after registration" << endl;
		cout << "5 - Lock registration screen" << endl;
		cout << "6 - Unlock registration screen" << endl;
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
			bool is_error = false;
			try{
				string exp;
				SetExpressionScreen *expressionScreen = new SetExpressionScreen();
				cout << "Please enter expression: ";
				cin >> exp;
				vector<Student> students = Student::getAllStudents(new FileStorage());
				for each(Student student in students){
					if (!expressionScreen->verifyAndSetExpression(exp, &student)) {
						is_error = true;
					}
				}

			}
			catch (bad_alloc e){
				cerr << e.what();
			}
			if (!is_error)	 {
				cout << "Action succeeded" << endl;
			}
			else{
				cout << "Action failed ,wrong input" << endl;
			}
			CLEAN
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
			try{
				LockRegistrationScreen *lock = new LockRegistrationScreen();
				lock->lockTerminal(LOCK);
				delete lock;
			}
			catch (bad_alloc e){
				cerr << e.what();
			}
			CLEAN

				break;

		}
		case '6':{
			try{
				LockRegistrationScreen *lock = new LockRegistrationScreen();
				lock->lockTerminal(UNLOCK);
				delete lock;
			}
			catch (bad_alloc e){
				cerr << e.what();
			}
			CLEAN
				break;

		}


		default:{
			cerr << "Wrong choice" << endl;
			CLEAN;
			break;
		}
		}
	} while (this->changeScreen == '1');

	CLEAN
		do { // Activate the menu until the user quits.
			cout << "Welcome to course bid - SECRETARY TERMINAL Shenkar!!" << endl;
			lOGO
				cout << "\nYour options are:\n\n";
			cout << "Please enter your choice:" << endl;
			cout << "1 - Print course list" << endl;
			cout << "2 - option2" << endl;
			cout << "3 - Point Distribution" << endl;
			cout << "4 - Assign courses after registration" << endl;
			cout << "5 - Lock registration screen" << endl;
			cout << "6 - Unlock registration screen" << endl;
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
				bool is_error = false;
				try{
					string exp;
					SetExpressionScreen *expressionScreen = new SetExpressionScreen();
					cout << "Please enter expression: ";
					cin >> exp;
					vector<Student> students = Student::getAllStudents(new FileStorage());
					for each(Student student in students){
						if (!expressionScreen->verifyAndSetExpression(exp, &student)) {
							is_error = true;
						}
					}

				}
				catch (bad_alloc e){
					cerr << e.what();
				}
				if (!is_error)	 {
					cout << "Action succeeded" << endl;
				}
				else{
					cout << "Action failed ,wrong input" << endl;
				}
				CLEAN
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
				try{
					LockRegistrationScreen *lock = new LockRegistrationScreen();
					lock->lockTerminal(LOCK);
					delete lock;
				}
				catch (bad_alloc e){
					cerr << e.what();
				}
				CLEAN

					break;

			}
			case '6':{
				try{
					LockRegistrationScreen *lock = new LockRegistrationScreen();
					lock->lockTerminal(UNLOCK);
					delete lock;
				}
				catch (bad_alloc e){
					cerr << e.what();
				}
				CLEAN
					break;

			}


			default:{
				cerr << "Wrong choice" << endl;
				CLEAN;
				break;
			}
			}
		} while (this->changeScreen == '2');

		CLEAN
}






void SecretaryMainScreen::changeSrceenByTime(){
	cout << "ok" << endl;
	int i = 0;
	do{
		i++;
		if (i == 10000) this->changeScreen = '2';

	} while (true);
}