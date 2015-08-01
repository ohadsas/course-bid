/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** Course.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <cstdint>

#include "IdObj.h"
#include "Student.h"
#include "CoursePair.h"


class CoursePair;
class Student;
class Course : public IdObj {
private:
	const int serial = 1; //serial number for all objects Course
	long courseId;
	string name;
	vector<Course> prerequisiteCourses;
	string description;
	string teachingHours;
	int maxStudents;
public:
	Course(int id, IStorage * storage) : IdObj(id, storage) { }
	
	/* storage functions */
	vector<Course> getAllCourses();		//retuns all courses by serial number
	//override parent
	virtual void save(bool recursive);			//saves/updates by id in storage
	//override parent
	virtual void deleteMe();					//removes obj from storage by id

	/* inline get/set */
	long getCourseId()							{ return courseId; }
	string getName()							{ return name; }
	void setName(string name)					{ this->name = name;  }
	string getDescription()						{ return description; }
	void setDescription(string description)		{ this->description = description;  }
	string getTeachingHours()					{ return teachingHours; }
	void setTeachingHours(string teachingHours)	{ this->teachingHours = teachingHours; }
	int getMaxStudents()						{ return maxStudents; }
	void setMaxStudents(int maxStudents)		{ this->maxStudents = maxStudents; }



	bool setPrerequisiteCourse(Course course);
	bool setPrerequisiteCourse(long courseId);
	void removePrerequisiteCourse(Course course);
	void removePrerequisiteCourse(long courseId); 
	Course getCourseById();
	Course getCourseById(long CourseId);
	vector<Student*> getStudentListForCourse();
	vector<CoursePair*> getCourseDependencies();
	bool addCourseDependencies(CoursePair *pair);
	CoursePair* removeCourseDependencies(CoursePair *pair);
};

#endif COURSE_H