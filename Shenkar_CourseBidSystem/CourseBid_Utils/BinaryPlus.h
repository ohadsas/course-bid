#ifndef BINARYPLUS_H
#define BINARYPLUS_H

/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** BinaryPlus.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include <iostream>
#include <cstdint>	
using namespace std;

#include "BinaryOperator.h"

class BinaryPlus : public BinaryOperator {
private:

public:
	BinaryPlus()
	{
		cout << "BinaryPlus() called" << endl;
	}

	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif BINARYPLUS_H