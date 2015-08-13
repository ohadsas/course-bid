/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** IStorage.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef ISTORAGE_H
#define ISTORAGE_H

#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

class IStorage {

public:
	IStorage()
	{
		cout << "IStorage() called" << endl;
	}
	
	/* NON IMPLEMENTED STORAGE METHODS - NEED OVERRIDE*/
	vector<char> getAll(int serial);
	void save(string line);
	void deleteObj(long id);
	long generateId();					//get unique id for a new object stored
};

#endif ISTORAGE_H