/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** Course.h
** Course Class declaration.
**
** Author: Yossi Gleyzer, 
** -------------------------------------------------------------------------*/
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <cstdint>
#include <string>
#include <sstream>

#include <lemon/list_graph.h>
#include <lemon/bfs.h>
#include <lemon/maps.h>

#include "IdObj.h"
#include "Student.h"
#include "CoursePair.h"
#include "FileStorage.h"
#include "CourseEventLog.h"

using namespace lemon;

class CoursePair;
class Student;
/*class Bfs;
class ListDigraph;
class CrossRefMap;*/

class Course : public IdObj {
private:
	//serial number for all objects Course
	static const int SERIAL = 1; 
	long courseId;
	string name;
	vector<Course> prerequisiteCourses;
	
	string description;
	string teachingHours;
	int maxStudents;
	//vector<Course *> course_dependencies;
public:
	/*
	**STORAGE TAGS
	*/
	static const string TAG_COURSE_ID;
	static const string TAG_NAME;
	static const string TAG_DESCRIPTION;
	static const string TAG_TEACHING_HOURS;
	static const string TAG_MAX_STUDENTS;
	static const string TAG_PREREQUISITE_COURSES;

	/*
	** Constructor. Create Course with id.
	*/
	Course(long id, IStorage * storage) : IdObj(id, storage) { }

	/*
	** Constructor. Create Course from given string.
	** NOTE: In case of circular precourse dependencies this might cause STACK OVERFLOW!!!
	*/
	Course(string courseAsString, IStorage * storage);

	/* (Storage override)
	** Static Method - Returns a vector of all courses.
	*/
	static vector<Course> getAllCourses(IStorage * storage);

	/* (Storage override)
	** Saves/updates by id in storage
	*/
	virtual void save(bool recursive);
	
	/* (Storage override)
	** Delete this course from DB. NOTE: Object still exists.
	** NOTE: Before using this function you must verify no one is using this course in other prerequisite courses.
	**		Otherwise it will delete a prerequisite course - this will cause an error in next courses.
	*/
	virtual void deleteMe();					//removes obj from storage by id

	/* Static Method
	** This function returns a course by object id.
	** If not found course with given id - throws an exception.
	*/
	static Course getCourseById(IStorage * storage, long id);

	/* Static Method
	** This function returns a course by course id.
	** If not found - returns NULL.
	*/
	static Course * getCourseByCourseId(IStorage * storage, long courseId);

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
	
	/*
	** Converts a Course to String.
	** Used for Debug purposes only!
	*/
	string ToString();



	//TODO:
	bool setPrerequisiteCourse(Course course);
	bool setPrerequisiteCourse(long courseId);
	void removePrerequisiteCourse(Course course);
	void removePrerequisiteCourse(long courseId);
	vector<Course> getPreequisiteCourses();
	vector<Student*> getStudentListForCourse();
	//vector<CoursePair*> getCourseDependencies();
	//bool addCourseDependencies(CoursePair *pair);
	//CoursePair* removeCourseDependencies(CoursePair *pair);
	//bool addCourseDependencies(Course*);
	//vector<Course *> removeCourseDependencies(Course *);
};

#endif COURSE_H