/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** BinaryMult.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef BINARYMULT_H
#define BINARYMULT_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "BinaryOperator.h"

class BinaryMult : public BinaryOperator {
private:

public:
	BinaryMult()
	{
		cout << "BinaryMult() called" << endl;
	}

	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif BINARYMULT_H