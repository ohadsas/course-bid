/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** StudentMainScreen.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "StudentMainScreen.h"
#include "PointDistributionScreen.h"
#include "InsertAssignitionFileScreen.h"

#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;
#define BUFFER_SIZE 20
#define TRUE '1'
#define FALSE '0'

void StudentMainScreen::logOut()
{
	this->Log = false;
}

void StudentMainScreen::getAssignitionResultsScreen()
{
	
	string choice;
	bool condition = true;
	vector<Course> courses = Course::getAllCourses(new FileStorage());
	do { // Activate the menu until the user quits.
		this->printCourseList();
		cout << "Enter course id or 'E' for exit" << endl;
		cin >> choice;
		if (choice == "e" || choice == "E") condition = false;
		else {
			Course *chosenCourse = Course::getCourseByCourseId(new FileStorage(), atoi(choice.c_str()));
			if (chosenCourse != NULL){
				long id = atoi(choice.c_str());
				cout << "You have " << this->student->getPoints() << " amount of points\nPlease enter the amount of point you are willing to allocate" << endl;
				cin >> choice;
				if (atoi(choice.c_str()) >= 0 && atoi(choice.c_str()) <= this->student->getPoints()){
					this->student->setPoints(this->student->getPoints() - atoi(choice.c_str()));
					this->student->addDesiredCourse(id);
					this->student->save(true);
					CLEAN
				}
				else {
					cout << "Wrong enter" << endl;
					CLEAN
					
				}
			}
			else{
				cout << "No such course, try again" << endl;
				CLEAN
			}
		}
	} while (condition);
}

void StudentMainScreen::getPointDistributionScreen()
{
	

	try{
		PointDistributionScreen * pointDistributionScreen = new PointDistributionScreen();
		pointDistributionScreen->setStudent(this->student);
		pointDistributionScreen->setCourses(Course::getAllCourses(new FileStorage()));
		CLEAN
			pointDistributionScreen->show();
	}
	catch (bad_alloc e){
		cerr << e.what();
	}
}

void StudentMainScreen::show()
{
	
	char choice;
	do { // Activate the menu until the user quits.
		lOGO
		this->student = dynamic_cast<Student*>(this->getUser());
		cout << "Hello " << this->student->getFirstName() << " " << this->student->getLastName() << endl;
	
		cout << "\nYour options are:\n\n";
		cout << "Please enter your choice:" << endl;
		cout << "1 - Print course list" << endl;
		cout << "2 - Assign points for course" << endl;
		cout << "3 - Point Distribution" << endl;
		cout << "4 - Assign courses after registration" << endl;
		cout << "5 - Print my Points" << endl;
		cout << "6 - options5" << endl;
		cout << "E - Logout" << endl;
		choice = getchar();
		system("cls");
		switch (choice)
		{
		case '1':
		{
			this->printDependencies();
			CLEAN
				break;
		}
		case '2':{
			this->getAssignitionResultsScreen();

			CLEAN
				break;
		}
		case '3':{
			this->getPointDistributionScreen();
			CLEAN
			break;
		}
		case '4':{

			CLEAN
				break;

		}
		case '5':{
			cout<<"\nYou have "<< this->student->getPoints()<<" points"<<endl;
			
			CLEAN
				break;

		}
		case '6':{

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


void StudentMainScreen::printDependencies(){
	char c;
	string choice;
	bool condition = true;
	vector<Course> courses = Course::getAllCourses(new FileStorage());
	do { // Activate the menu until the user quits.
		this->printCourseList();
	c = getchar();
	cout << "Enter course id or 'E' for exit" << endl;
	cin >> choice;
	if (choice == "e" || choice == "E") condition = false;
	else {
		for each (Course course in courses)
		{
			//cout << course. (atoi(choice.c_str()));

		}
	}
	} while (condition);
}


void StudentMainScreen::printCourseList()
{
	lOGO
		vector<Course> courses = Course::getAllCourses(new FileStorage());
	cout << "                                    Course list\n" << endl;
	cout << "Id\t" << "Name" << endl;
	for each (Course course in courses)
	{
		cout << course.getId() << '\t' << course.getName() << endl << endl;

	}
}