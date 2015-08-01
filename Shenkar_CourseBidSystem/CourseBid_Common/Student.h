/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer
**
** Student.h
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstdint>	
using namespace std;
#include <vector>

#include "User.h"
#include "Course.h"

class Course;
class Student :public User {
private:
	vector<Course*> completedCourses;
	vector<Course*> assignedCourses;
	vector<Course*> desiredCourses;
	vector<int> desiredPoints;
	int points;
public:
	Student(long userId) : User(userId)
	{
		cout << "Student() called" << endl;
	}
	Student(long userId, string lastName, string firstName)
		:User(userId, firstName, lastName)
	{
		cout << "Student() called" << endl;
	}
	bool addDesiredCourse(Course* course);
	bool addDesiredCourse(long courseId);
	bool addAssignedCourse(Course* course);
	bool addAssignedCourse(long courseId);
	bool addCompletedCourse(Course* course);
	bool addCompletedCourse(long courseId);
	bool removeDesiredCourse(Course* course);
	bool removeDesiredCourse(long courseId);
	bool removeAssignedCourse(Course* course);
	bool removeAssignedCourse(long courseId);
	bool removeCompletedCourse(Course* course);
	bool removeCompletedCourse(long courseId);
	Student& getStudentById(int userId);
	vector<Student*> getAllStudents();
	vector<Course*> getCourseListForStudentById(long userId);

	//inline methods
	vector<Course*> getDesiredCourses()							{ return desiredCourses;	}
	vector<Course*> getCompletedCourses()						{ return completedCourses;	}
	vector<Course*> getAssignedCourse()							{ return assignedCourses;	}
	void setPoints(int points)									{ this->points = points;	}
	int getPoints()												{ return points;	}

	/* NON IMPLEMENTED STORAGE METHODS - NEED OVERRIDE*/
	template <class T> vector<T> getAllObj(int serial);
	virtual void save(bool recursive);
	virtual void deleteMe();
};

#endif STUDENT_H