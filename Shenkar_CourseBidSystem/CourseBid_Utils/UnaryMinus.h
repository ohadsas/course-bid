/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** UnaryMinus.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef UNARYMINUS_H
#define UNARYMINUS_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "Expression.h"

class UnaryMinus : public Expression {
	Expression* expr;
public:
	UnaryMinus()
	{
		cout << "UnaryMinus() called" << endl;
	}
	
	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif UNARYMINUS_H