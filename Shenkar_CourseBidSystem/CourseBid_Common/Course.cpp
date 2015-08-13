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
	//create the record
	string record = string("<idobj>");
	record += string("<serial=\"" + static_cast<ostringstream*>(&(ostringstream() << serial))->str() + "\">");
	record += string("<id=\"" + static_cast<ostringstream*>(&(ostringstream() << id))->str() + "\">");
	record += string("<courseId=\"" + static_cast<ostringstream*>(&(ostringstream() << courseId))->str() + "\">");
	record += string("<name=\"" + name + "\">");
	record += string("<description=\"" + description + "\">");
	record += string("<teachingHours=\"" + teachingHours + "\">");
	record += string("<maxStudents=\"" + static_cast<ostringstream*>(&(ostringstream() << maxStudents))->str() + "\">");
	record += string("<prerequisiteCourses>");
	for each (Course course in prerequisiteCourses)
	{
		record += string("<course.id=\"" + static_cast<ostringstream*>(&(ostringstream() << course.id))->str() + "\">");
	}
	record += string("<\\prerequisiteCourses>");
	record += string("<\\idobj>");
	
	//TODO: write record to DB
	cout << record << endl;

	//save prerequisite courses
	if (recursive) 
	{
		for each (Course course in prerequisiteCourses)
		{
			course.save(recursive);
		}
	}

}
void Course::deleteMe()
{
	//TODO: delete from DB by id and serial
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