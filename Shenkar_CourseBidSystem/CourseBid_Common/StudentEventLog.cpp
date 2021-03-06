/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** StudentEventLog.cpp
** Class writes debug logs to file.
**
** Author: Yossi Gleyzer
** -------------------------------------------------------------------------*/
#include "StudentEventLog.h";

string StudentEventLog::logfilename = "..\\students.log";

void StudentEventLog::debug(string message, string category)
{
	ofstream * file;
	file = new ofstream(logfilename.c_str(), fstream::app);
	(*file) << getTime() + " DEBUG" + "\t[" + category + "]\t" + message + "\n";
	if (file != NULL) file->close();
}
void StudentEventLog::info(string message, string category)
{
	ofstream * file;
	file = new ofstream(logfilename.c_str(), fstream::app);
	(*file) << getTime() + " INFO" + "\t[" + category + "]\t" + message + "\n";
	if (file != NULL) file->close();
}
void StudentEventLog::warning(string message, string category)
{
	ofstream * file;
	file = new ofstream(logfilename.c_str(), fstream::app);
	(*file) << getTime() + " WARNING" + "\t[" + category + "]\t" + message + "\n";
	if (file != NULL) file->close();
}
void StudentEventLog::error(string message, string category)
{
	ofstream * file;
	file = new ofstream(logfilename.c_str(), fstream::app);
	(*file) << getTime() + " ERROR!" + "\t[" + category + "]\t" + message + "\n";
	if (file != NULL) file->close();
}
