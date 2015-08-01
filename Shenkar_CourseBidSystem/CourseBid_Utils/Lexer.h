/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** Lexer.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <cstdint>	
using namespace std;

#include "Parser.h"

class Lexer {
private:
	Parser * parser;
public:
	Lexer()
	{
		cout << "Lexer() called" << endl;
	}

	Lexer(string expression);
	void getExpr();
	void tokenize();

};

#endif LEXER_H