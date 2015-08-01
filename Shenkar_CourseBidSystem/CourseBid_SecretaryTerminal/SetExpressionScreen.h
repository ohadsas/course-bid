/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** SetExpressionScreen.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef SETEXPRESSIONSCREEN_H
#define SETEXPRESSIONSCREEN_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "UIScreen.h"
#include "Lexer.h"

class SetExpressionScreen : public UIScreen {
private:
	Lexer * lexer;
public:
	SetExpressionScreen();
	bool verifyAndSetExpression();
	void show();
};

#endif SETEXPRESSIONSCREEN_H