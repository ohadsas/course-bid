/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** BinaryDiv.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef BINARYDIV_H
#define BINARYDIV_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "BinaryOperator.h"

class BinaryDiv : public BinaryOperator {
private:

public:
	BinaryDiv()
	{
		cout << "BinaryDiv() called" << endl;
	}

	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif BINARYDIV_H