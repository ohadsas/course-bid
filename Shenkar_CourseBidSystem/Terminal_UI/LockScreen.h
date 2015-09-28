#pragma once

#include "Tetminal.h"

class LockScreen :public Tetminal
{
private:
	bool isLock;
public:
	LockScreen();
	~LockScreen();
	void show();
	void releaseLock();
};

