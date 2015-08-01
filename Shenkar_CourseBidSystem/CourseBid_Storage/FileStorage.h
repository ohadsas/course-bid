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
#ifndef FILE_STORAGE_H
#define FILE_STORAGE_H

#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;
#include "IStorage.h"

class FileStorage : public IStorage {
private:
	
public:
	FileStorage();
	//override parent
	vector<char> getAll(int serial); 
	//override parent
	void save(vector<char> line);
	//override parent
	void deleteObj(long id); 
	//override parent
	long generateId();			 //get unique id for a new object stored
};

#endif FILE_STORAGE_H