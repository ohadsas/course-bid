#include <iostream>
#include "LoginScreen.h"
#include "LockScreen.h"
using namespace std;

int main(int argc, char* argv[])
{
	
	//LoginScreen *start = new LoginScreen();
	//start->show();
	LockScreen *lock = new LockScreen();
	lock->show();
	//delete start;
	return 0;
}