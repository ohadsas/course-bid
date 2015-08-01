/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** Course.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "Course.h"

vector<Course> Course::getAllCourses()
{
	vector<Course> v;
	return v;
}
void Course::save(bool recursive)
{

}
void Course::deleteMe()
{

}

bool Course::setPrerequisiteCourse(Course course)
{
	return true;
}

bool Course::setPrerequisiteCourse(long courseId)
{
	return true;
}

void Course::removePrerequisiteCourse(Course course)
{

}

void Course::removePrerequisiteCourse(long courseId)
{

}

Course Course::getCourseById()
{
	return *this;
}

Course Course::getCourseById(long CourseId)
{


	return *this;
}


vector<Student*> Course::getStudentListForCourse()
{


	return vector<Student*>();
}

vector<CoursePair*> Course::getCourseDependencies()
{


	return vector<CoursePair*>();
}

bool Course::addCourseDependencies(CoursePair* pair)
{



	return true;
}

CoursePair* Course::removeCourseDependencies(CoursePair* pair)
{


	return NULL;
}