/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** IdObj.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef USER_H
#define USER_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "IdObj.h"

//NOTE: USER IS ABSTRACT CLASS
class User : public IdObj{
protected:
	long userId;
	string firstName;
	string lastName;
	string email;
	string password;
	bool isLocked;
public:
	User(long userId) :userId(userId)
	{
		cout << "User() called" << endl;
	}

	User(long userId, string firstName, string lastName)
		:userId(userId), firstName(firstName), lastName(lastName)
	{
		cout << "User() called" << endl;
	}
	virtual ~User() {};

	long getId()						{ return userId; }
	void setFirstName(string firstName)	{ this->firstName = firstName; }
	string getFirstName()				{ return firstName; }
	void setLastName(string lastName)	{ this->lastName = lastName; }
	string getLastName()				{ return lastName; }
	void setEmail(string email)			{ this->email = email; }
	string getEmail()					{ return email; }
	void setPassword(string password)	{ this->password = password; }
	bool verifyPassword(string password){ this->password.compare(password) == 0 ? true : false; }
	void setLocked(bool isLocked)		{ this->isLocked = isLocked; }
	bool getLocked()					{ return isLocked; }

	/* NON IMPLEMENTED STORAGE METHODS - NO! NEED TO OVERRIDE - AS USER IS ABSTRACT CLASS*/
	template <class T> vector<T> getAllObj(int serial);
	virtual void save(bool recursive)=0;
	virtual void deleteMe()=0;
};

#endif USER_H