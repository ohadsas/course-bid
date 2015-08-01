/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** CircleDetection.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef CIRCLEDETECTION_H
#define CIRCLEDETECTION_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include "CoursePair.h"

class CircleDetection {
private:

public:
	CircleDetection()
	{
		cout << "CircleDetection() called" << endl;
	}
	bool detectCircles(CoursePair* coursePair);
};

#endif CIRCLEDETECTION_H