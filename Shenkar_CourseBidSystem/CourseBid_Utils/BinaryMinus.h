/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** BinaryMinus.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef BINARY_MINUS
#define BINARY_MINUS

#include <iostream>
#include <cstdint>	
using namespace std;

#include "BinaryOperator.h"

class BinaryMinus : public BinaryOperator{
private:

public:
	BinaryMinus()
	{
		cout << "BinaryMinus() called" << endl;
	}

	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif BINARY_MINUS