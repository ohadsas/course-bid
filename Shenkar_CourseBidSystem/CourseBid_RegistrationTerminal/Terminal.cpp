#include "Terminal.h"


Terminal::Terminal()
{
}


Terminal::~Terminal()
{
}

User * Terminal::getUser(){
	return this->user;
}

void Terminal::setUser(User *user){
	if (user != 0) this->user = user;
	else cout << "need to throw exetption" << endl;//add exception
}