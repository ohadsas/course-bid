/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
**
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#pragma once

#include <exception>
#include <iostream>
#include <string>

#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;
#define BUFFER_SIZE 20
#define TRUE '1'
#define FALSE '0'


using namespace std;

class Tetminal
{
private:
//	User * user;
public:
	Tetminal();
	virtual ~Tetminal();
	virtual void show() = 0;
//	User *getUser();
//	void setUser(User *user);
};


