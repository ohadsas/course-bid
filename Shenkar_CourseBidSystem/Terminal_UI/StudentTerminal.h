/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
**
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/

#pragma once
#include "Tetminal.h"

class StudentTerminal :public Tetminal
{

public:
	StudentTerminal();
	virtual ~StudentTerminal();
	void show();
};

