/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** At.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef AT_H
#define AT_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "Expression.h"
class At : public Expression{
public:
	At()
	{
		cout << "At() called" << endl;
	}

	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif AT_H