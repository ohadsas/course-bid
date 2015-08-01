/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** User.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef TECHNICIAN_H
#define TECHNICIAN_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "User.h"

class Technician : public User {
public:
	Technician(long userId) :User(userId)
	{
		cout << "Technician() called" << endl;
	}
	Technician(long userId, string firstName, string lastName) 
		:User(userId, firstName, lastName)
	{
		cout << "Technician() called" << endl;
	}

	/* NON IMPLEMENTED STORAGE METHODS - NEED OVERRIDE*/
	template <class T> vector<T> getAllObj(int serial);
	virtual void save(bool recursive);
	virtual void deleteMe();
};

#endif TECHNICIAN_H