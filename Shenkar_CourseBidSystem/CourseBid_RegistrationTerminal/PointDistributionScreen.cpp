/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** PointDistributionScreen.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "PointDistributionScreen.h"

#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;
#define BUFFER_SIZE 20
#define TRUE '1'
#define FALSE '0'

PointDistributionScreen::PointDistributionScreen()
{
	cout << "PointDistributionScreen() called" << endl;
}

void PointDistributionScreen::getCourseData()
{

	
	
}

void PointDistributionScreen::setDesiredCoursePoints()
{

}

void PointDistributionScreen::saveDesiredCourses()
{

}

void PointDistributionScreen::show()
{
	fflush(stdin);
	char choice;
	do { // Activate the menu until the user quits.
		lOGO
		cout << "Hello " << this->student->getFirstName() << " " << this->student->getLastName() << endl;
		cout << "\nYour options are:\n\n";
		cout << "Please enter your choice:" << endl;
		cout << "1 - Course data" << endl;
		cout << "2 - options2" << endl;
		cout << "3 - options3" << endl;
		cout << "4 - options3" << endl;
		cout << "5 - options4" << endl;
		cout << "6 - options5" << endl;
		cout << "B - Back" << endl;
		choice = getchar();
		system("cls");
		switch (choice)
		{
		case '1':
		{
			getCourseData();
			CLEAN
				break;
		}
		case '2':{

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
			CLEAN
				break;

		}
		case '6':{

			CLEAN
				break;

		}

		case 'b': { // Set to 'E' and go to case 'E'.
		case 'B':  // End the switch.

			choice = 'B';
			break;
		}
		default:{
			cerr << "Wrong choice" << endl;
			CLEAN;
			break;
		}
		}
	} while (choice != 'B');
	
	

}

void PointDistributionScreen::setStudent(Student* student){
	if (student != NULL) this->student = student;
	else throw new exception_ptr;
}

void PointDistributionScreen::setCourses(vector<Course> courses){
	this->courses.resize(courses.size());
	for (unsigned i = 0; i < courses.size(); i++)
	{
		(this->courses[i]) =  &courses[i];
	//		cout << this->courses[i] << " " << &courses[i] << endl;
}
	
}