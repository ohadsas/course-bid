/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** AssignmentCalculator.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef ASSIGNMENTCALCULATOR_H
#define ASSIGNMENTCALCULATOR_H

#include <iostream>
#include <cstdint>	
#include <vector>
using namespace std;
#include "RegistrationStartDate.h"
#include "Student.h"
#include "Lexer.h"

class AssignmentCalculator {
private:
	RegistrationStartDate * registrationStartDate;
	vector<Student*> Students;
	Lexer * lexer;
public:
	AssignmentCalculator();
	void compute();
};

#endif ASSIGNMENTCALCULATOR_H