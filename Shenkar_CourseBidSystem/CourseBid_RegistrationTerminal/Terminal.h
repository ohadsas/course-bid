#pragma once
#include "User.h"
#include <fstream>

#define CLEAN cout<<"\nPlease press any key to continue"<<endl;	fflush(stdin);	getchar();	system("cls");
#define lOGO cout<<"\t\t\t----Course bid - Shenkar----\n"<<endl;
#define BUFFER_SIZE 20
#define TRUE '1'
#define FALSE '0'

class Terminal 
{
private:
	User *user;
public:
	Terminal();
	virtual ~Terminal();
	virtual void show() = 0;
	User *getUser();
	void setUser(User *user);
};

