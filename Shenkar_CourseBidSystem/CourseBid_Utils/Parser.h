/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** Parser.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <stack>
#include <cstdint>	
using namespace std;

#include "IdObj.h"
#include "Expression.h"

class Parser : public IdObj {
private:
	stack<Expression> exprStack;
public:
	Parser()
	{
		cout << "Parser() called" << endl;
	}

	void processConst();
	void processOperator();
	void processBrackets();
	void processAt();
	void getExpr();

	/*Override from parrent*/
	template <class T> vector<T> getAllObj(int serial);
	void save(bool recursive);
	void deleteMe();
};

#endif PARSER_H