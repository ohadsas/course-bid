/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** RegistrationStartDate.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef REGISTRATIONSTARTDATE_H
#define REGISTRATIONSTARTDATE_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "IdObj.h"
class RegistrationStartDate : public IdObj {
private:
	string date;
public:
	RegistrationStartDate()
	{
		cout << "RegistrationStartDate() called" << endl;
	}

	RegistrationStartDate(int id, IStorage * storage) : IdObj(id, storage)
	{
		cout << "RegistrationStartDate() called" << endl;
	}

	void setDate(string date)	{ this->date = date; }
	string getDate()			{ return date; }

	/* NON IMPLEMENTED STORAGE METHODS - NEED OVERRIDE*/
	template <class T> vector<T> getAllObj(int serial);
	virtual void save(bool recursive);
	virtual void deleteMe();
};

#endif REGISTRATIONSTARTDATE_H