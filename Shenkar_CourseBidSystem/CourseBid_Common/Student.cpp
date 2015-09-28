/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** Student.cpp
** Student class.
**
** Author: Yossi Gleyzer,
** -------------------------------------------------------------------------*/
#include "Student.h"

const string Student::TAG_COMPLETEDCOURSES = string("completedCourses");
const string Student::TAG_ASSIGNEDCOURSES = string("assignedCourses");
const string Student::TAG_DESIREDCOURSES = string("desiredCourses");
const string Student::TAG_DESIREDPOINTS = string("desiredPoints");
const string Student::TAG_POINTS = string("points");

/*
** Constructor. Create Student from given string.
*/
Student::Student(string studentAsString, IStorage * storage) :User(0, storage)
{
	string logCat = "Student";
	long serialS = storage->getNumberFromStringByTag(studentAsString, storage->TAG_SERIAL);
	if (serialS != this->SERIAL)
	{
		StudentEventLog::error("Wrong serial for student. Received [" + to_string(serialS) + "] while must be [" + to_string(SERIAL) + "].", logCat);
		throw new exception(); //wrong serial
	}
	this->id = storage->getNumberFromStringByTag(studentAsString, storage->TAG_ID);
	this->userId = storage->getNumberFromStringByTag(studentAsString, TAG_USERID);
	this->firstName = storage->getStringFromStringByTag(studentAsString, TAG_FIRSTNAME);
	this->lastName = storage->getStringFromStringByTag(studentAsString, TAG_LASTNAME);
	this->email = storage->getStringFromStringByTag(studentAsString, TAG_EMAIL);
	this->password = storage->getStringFromStringByTag(studentAsString, TAG_PASSWORD);
	this->isLocked = storage->getNumberFromStringByTag(studentAsString, TAG_ISLOCKED);
	vector<long> completedCoursesIds = storage->getInnerNumbersByTag(studentAsString, TAG_COMPLETEDCOURSES);
	for each (long courseId in completedCoursesIds)
	{
		Course * c = new Course(0, storage);
		completedCourses.push_back(Course::getCourseByCourseId(storage, courseId));
		delete c;
	}

	vector<long> assignedCoursesIds = storage->getInnerNumbersByTag(studentAsString, TAG_ASSIGNEDCOURSES);
	for each (long courseId in assignedCoursesIds)
	{
		Course * c = new Course(0, storage);
		assignedCourses.push_back(Course::getCourseByCourseId(storage, courseId));
		delete c;
	}

	vector<long> desiredCoursesIds = storage->getInnerNumbersByTag(studentAsString, TAG_DESIREDCOURSES);
	for each (long courseId in desiredCoursesIds)
	{
		Course * c = new Course(0, storage);
		desiredCourses.push_back(Course::getCourseByCourseId(storage, courseId));
		delete c;
	}

	//*WHAT ABOUT THE ORDER??? must be same as desiredCourses
	vector<long> desiredPointsIds = storage->getInnerNumbersByTag(studentAsString, TAG_DESIREDPOINTS);
	for each (long id in desiredPointsIds)
	{
		desiredPoints.push_back(static_cast<int>(id));
	}
	this->points = storage->getNumberFromStringByTag(studentAsString, TAG_POINTS);
}

/*
** Static Method - Returns a vector of all students.
*/
vector<Student> Student::getAllStudents(IStorage * storage)
{
	string logCat = "getAll";
	StudentEventLog::debug("Getting list of all students from DB.", logCat);
	vector<Student> allStudent;
	vector<string> studentsAsString = storage->getAll(Student::SERIAL);
	for each (string studentAsString in studentsAsString)
	{
		Student * student = new Student(studentAsString, storage);
		StudentEventLog::debug("\tReceived student [" + to_string(student->getId()) + "] [" + student->getFirstName() + " " + student->getLastName() + "] from DB.", logCat);
		allStudent.push_back(*student);
	}
	StudentEventLog::debug("Finished getting list of all students from DB.", logCat);
	return allStudent;
}



/*(Storage override)
** Creates record and saves to DB using IStorage from base IdObj. If recursive saves inner objects.
*/
void Student::save(bool recursive)
{
	//create the record
	string logCat = "save";
	StudentEventLog::debug("Creating student record to save in DB for [" + to_string(id) + "] [" + this->firstName + " " + this->lastName + "].", logCat);
	string record = string("<" + storage->TAG_OBJ + ">");
	record += string("<" + storage->TAG_SERIAL + "=\"" + static_cast<ostringstream*>(&(ostringstream() << SERIAL))->str() + "\">");
	record += string("<" + storage->TAG_ID + "=\"" + static_cast<ostringstream*>(&(ostringstream() << id))->str() + "\">");
	record += string("<" + TAG_USERID + "=\"" + static_cast<ostringstream*>(&(ostringstream() << userId))->str() + "\">");
	record += string("<" + TAG_FIRSTNAME + "=\"" + firstName + "\">");
	record += string("<" + TAG_LASTNAME + "=\"" + lastName + "\">");
	record += string("<" + TAG_EMAIL + "=\"" + email + "\">");
	record += string("<" + TAG_PASSWORD + "=\"" + password + "\">");

	record += string("<" + TAG_ISLOCKED + "=\"" + static_cast<ostringstream*>(&(ostringstream() << isLocked))->str() + "\">");
	record += string("<" + TAG_COMPLETEDCOURSES + ">");
	for each (Course * c in completedCourses)
	{
		record += string("<" + storage->TAG_ID + "=\"" + static_cast<ostringstream*>(&(ostringstream() << c->getCourseId()))->str() + "\">");
	}
	record += string("<\\" + TAG_COMPLETEDCOURSES + ">");
	record += string("<" + TAG_COMPLETEDCOURSES + ">");
	for each (Course * c in assignedCourses)
	{
		record += string("<" + storage->TAG_ID + "=\"" + static_cast<ostringstream*>(&(ostringstream() << c->getCourseId()))->str() + "\">");
	}
	record += string("<\\" + TAG_COMPLETEDCOURSES + ">");
	record += string("<" + TAG_DESIREDCOURSES + ">");
	for each (Course * c in desiredCourses)
	{
		record += string("<" + storage->TAG_ID + "=\"" + static_cast<ostringstream*>(&(ostringstream() << c->getCourseId()))->str() + "\">");
	}
	record += string("<\\" + TAG_DESIREDCOURSES + ">");
	record += string("<" + TAG_DESIREDPOINTS + ">");
	for each (int i in desiredPoints)
	{
		record += string("<" + storage->TAG_ID + "=\"" + static_cast<ostringstream*>(&(ostringstream() << i))->str() + "\">");
	}
	record += string("<\\" + TAG_DESIREDPOINTS + ">");
	record += string("<" + TAG_POINTS + "=\"" + static_cast<ostringstream*>(&(ostringstream() << points))->str() + "\">");
	record += string("<\\" + storage->TAG_OBJ + ">");

	//save record to db
	StudentEventLog::debug("Saving student record to save in DB for [" + to_string(id) + "] [" + this->firstName + " " + this->lastName + "].", logCat);
	storage->save(record);

	//save prerequisite courses
	if (recursive)
	{
		StudentEventLog::debug("Saving completed courses - recursive call to [save].", logCat);
		for each (Course * c in completedCourses)
		{
			c->save(recursive);
		}
		StudentEventLog::debug("Saving assigned courses - recursive call to [save].", logCat);
		for each (Course * c in assignedCourses)
		{
			c->save(recursive);
		}
		StudentEventLog::debug("Saving desired courses - recursive call to [save].", logCat);
		for each (Course * c in desiredCourses)
		{
			c->save(recursive);
		}
	}
	StudentEventLog::debug("Finished saving student record to DB.", logCat);
}

/*(Storage override)
Delete record and save DB using IStorage from base IdObj.
*/
void Student::deleteMe()
{
	string logCat = "delete";
	StudentEventLog::debug("Deleting student from DB by id [" + to_string(id) + "].", logCat);
	storage->deleteObj(this->SERIAL, this->id);
	storage->save();
	CourseEventLog::debug("Student deleted. Changes saved to DB", logCat);
}

/* Static Method
** This function returns a student by object id.
** If not found student with given id - throws an exception.
*/
Student Student::getStudentById(IStorage * storage, int id)
{
	string logCat = "getById";
	StudentEventLog::debug("Trying to get student by id [" + to_string(id) + "].", logCat);
	vector<Student> allStudents;
	vector<string> studentsAsString = storage->getAll(SERIAL);
	for each (string studentAsString in studentsAsString)
	{
		if (id == storage->getNumberFromStringByTag(studentAsString, storage->TAG_ID))
		{
			Student * student = new Student(studentAsString, storage);
			StudentEventLog::debug("Student received by id: [" + to_string(id) + "].", logCat);
			return *student;
		}
	}
	StudentEventLog::error("No student found by id: [" + to_string(id) + "].", logCat);
	throw new exception(); //no student found;
}

/* Static Method
** This function returns a student by student id.
** If not found - returns NULL.
*/
Student* Student::getStudentByStudentId(IStorage * storage, int userId)
{
	string logCat = "getByStudentId";
	StudentEventLog::debug("Trying to get student by student id [" + to_string(userId) + "].", logCat);
	vector<Student> allStudents;
	vector<string> studentsAsString = storage->getAll(SERIAL);
	for each (string studentAsString in studentsAsString)
	{
		if (userId == storage->getNumberFromStringByTag(studentAsString, TAG_USERID))
		{
			Student * student = new Student(studentAsString, storage);
			StudentEventLog::debug("Student received by student id: [" + to_string(userId) + "].", logCat);
			return student;
		}
	}
	StudentEventLog::error("No student found by student id: [" + to_string(userId) + "].", logCat);
	return NULL;
}

/*
** Converts a Student to String.
** Used for Debug purposes only!
*/
string Student::ToString()
{
	string student("String: [objId:" + to_string(this->id));
	student += " serial: " + to_string(this->SERIAL);
	student += " student: " + to_string(this->userId);
	student += " name: " + this->firstName;
	student += " surname: " + this->lastName;
	student += " email: " + this->email;
	student += " isLocked: " + to_string(this->isLocked);
	student += " all points: " + to_string(this->points);
	student += " Completed courses: <";
	for each (Course * c in completedCourses)
	{
		student += " id: " + to_string(c->getCourseId());
	}
	student += ">";
	student += " Assigned courses: <";
	for each (Course * c in assignedCourses)
	{
		student += " id: " + to_string(c->getCourseId());
	}
	student += ">";
	student += " Desired courses: <";
	for each (Course * c in desiredCourses)
	{
		student += " id: " + to_string(c->getCourseId());
	}
	student += ">";
	student += " Desired courses points: <";
	for each (int p in desiredPoints)
	{
		student += " id: " + to_string(p);
	}
	student += ">]";
	return student;
}




//TODO:
bool Student::addDesiredCourse(Course* course)
{
	desiredCourses.push_back(course);
	return true;
}

bool Student::addDesiredCourse(long courseId)
{
	//please remove this demo return
	return true;
}

bool Student::addAssignedCourse(Course* course)
{
	//please remove this demo return
	return true;
}

bool Student::addAssignedCourse(long courseId)
{
	//please remove this demo return
	return true;
}

bool Student::addCompletedCourse(Course* course)
{
	//please remove this demo return
	return true;
}

bool Student::addCompletedCourse(long courseId)
{
	//please remove this demo return
	return true;
}

bool Student::removeDesiredCourse(Course* course)
{
	//please remove this demo return
	return true;
}

bool Student::removeDesiredCourse(long courseId)
{
	//please remove this demo return
	return true;
}

bool Student::removeAssignedCourse(Course* course)
{
	//please remove this demo return
	return true;
}

bool Student::removeAssignedCourse(long courseId)
{
	//please remove this demo return
	return true;
}

bool Student::removeCompletedCourse(Course* course)
{
	//please remove this demo return
	return true;
}

bool Student::removeCompletedCourse(long courseId)
{
	//please remove this demo return
	return true;
}

vector<Course*> Student::getCourseListForStudentById(long userId)
{
	//please remove this demo return
	return vector<Course*>();
}