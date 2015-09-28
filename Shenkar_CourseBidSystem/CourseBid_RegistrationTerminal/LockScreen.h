#pragma once
#include "Terminal.h"

class LockScreen :public Terminal
{
private:
	bool isLock;
public:
	LockScreen();
	~LockScreen();
	void show();
	void releaseLock();
};