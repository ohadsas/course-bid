#pragma once
#include "Tetminal.h"
#include "LockScreen.h"

class LoginScreen : Tetminal
{
private:
	int loginCounter;
	void initLoginCounter();
	void checkLoginCounter();
public:
	LoginScreen();
	~LoginScreen();
	void show();

};

