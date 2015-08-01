/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** BinaryOperator.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef BINARYOPERATOR_H
#define BINARYOPERATOR_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "Expression.h"
class BinaryOperator : public Expression{
private:
	Expression* leftExpr;
	Expression* rightExpr;
public:
	BinaryOperator()
	{
		cout << "BinaryOperator() called" << endl;
	}

	/*override parent*/
	void evaluate()
	{

		//the only method implement as inline
	}
};

#endif BINARYOPERATOR_H