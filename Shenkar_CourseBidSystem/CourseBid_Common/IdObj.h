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
#ifndef ID_OBJ_H
#define ID_OBJ_H

#include <iostream>
#include <vector>
#include <cstdint>

#include "IStorage.h"

class IdObj {
protected:
	int id;
	IStorage * storage;
public:
	IdObj()
	{
		cout << "IdObj() called" << endl;
	}

	IdObj(long id, IStorage * storage) : id(id), storage(storage) {}

	/* NON IMPLEMENTED STORAGE METHODS - NEED OVERRIDE*/
	template <class T> vector<T> getAllObj(int serial);
	virtual void save(bool recursive) =0;
	virtual void deleteMe() =0;
	virtual ~IdObj() {};
};

#endif ID_OBJ_H