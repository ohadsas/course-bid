/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** FileStorage.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "FileStorage.h"
#include <fstream>
#include <sstream>
#include <sys/stat.h>

FileStorage::FileStorage() 
{
	cout << "FileStorage() called." << endl;
	ifstream file(filename.c_str());
	if (file.good()) {
		cout << "Storage exists - loading to memory." << endl;
		//read from file to memory
		string line;
		while (getline(file, line))
		{
			buffer.push_back(line);
		}
		file.close();
	}
	else 
	{
		file.close();
		cout << "Creating storage" << endl;
		ofstream output;
		output.open(filename);
		//TODO: init memory buffer nothing to write in it, maybe write a date to file...
		

		output.close();
	}
	
}

vector<char> FileStorage::getAll(int serial)
{
	vector<char> v;
	return v;
}

long getNumberFromStringByTag(string str, string tag)
{
	long result;
	cout << "SEARCHING: " << "<" + tag + "=\"" << endl;
	size_t found = str.find("<"+tag+"=\"");
	cout << "This is found: " << found << " and str: " << str << " and npos: " << string::npos << endl;
//debug it!	
	if (string::npos != found)
	{
		size_t beginPos = found + 9;
		size_t endPos = str.substr(found + 1).find("\"");
		if ((size_t)string::npos != found)
		{
			istringstream(str.substr(beginPos, endPos - beginPos)) >> result;
		}
		else
		{
			return -2; //tag closing " - not found
		}
	}
	return -1; //tag not found

}

void FileStorage::save(string line)
{
	if (line != "")
	{
		//if serial and id not exist
		//then add to buffer
		buffer.push_back(line);
		//else override
		for (int i = 0; i < buffer.size(); i++)
		{
			//get serial and id from line "<serial=\""
			long number = getNumberFromStringByTag(line, "serial");
			cout << "FOUND: "<<number << endl;
			//get serial and id from buffer.at(i)
			//see if those equal
		}
	}
	
	//save buffer to db
	ofstream output;
	output.open(filename);
	for each(string obj in buffer)
	{
		output << obj << endl;
	}
	output.close();
}

void FileStorage::deleteObj(long id)
{

}

long FileStorage::generateId()
{


	return 1;
}
