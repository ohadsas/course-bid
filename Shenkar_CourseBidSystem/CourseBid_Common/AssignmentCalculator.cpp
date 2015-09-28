/* ---------------------------------------------------------------------------
** This software is Shenkar College for Engineering and Design final submission
** for course "Tools of Software Engineering".
** Authors: <Ohad Sasson, Moshe Shimon, Yaron Israeli, Maor Toubian, Yossi Gleyzer>
**
** AssignmentCalculator.cpp
** <very brief file description>
**
** Author: <original author>
** -------------------------------------------------------------------------*/
#include "AssignmentCalculator.h"

AssignmentCalculator::AssignmentCalculator() {
	cout << "AssignmentCalculator() called" << endl;
	FileStorage fs;
	students = Student::getAllStudents(&fs);
}

void AssignmentCalculator::compute() {
	string file_format;
	FileStorage fs;
	vector<Course> vec_courses;
	
	vec_courses= Course::getAllCourses(&fs);
	file_format = std::to_string(students.size()) + " " + std::to_string(vec_courses.size()) + "\n";

	// write max student for each course
	for (int i = 0; i < vec_courses.size(); i++) {
		file_format += std::to_string(vec_courses[i].getMaxStudents());
		if (i + 1 != vec_courses.size())
			file_format + " ";
	}

	file_format += "\n";
	// add point of student to courses
	for (int i = 0; i < vec_courses.size(); i++) {
		for (int j = 0; j < students.size(); j++) {
			file_format+=students[j].getDesiredPointsToCourse(vec_courses[i].getCourseId());
			if (j + 1 != students.size())
				file_format += " ";
		}
		if (i + 1 != vec_courses.size())
			file_format += "\n";
	}

	int** result = getCoursesResult(file_format);
	
	// delete desired courses and point to all students
	for (int i = 0; i < students.size(); i++)
		students[i].removeAllDesiredCourseAndPoints();

	
	// add courses to students
	for (int i = 0; i < vec_courses.size(); i++) {
		for (int j = 0; j < students.size(); j++) {
			if (result[j][i]==1) // or maybe result[i][j] - I'm not sure
				students[j].addAssignedCourse(vec_courses[i].getCourseId());
		}
	}
	
	// save data
	for (int i = 0; i < vec_courses.size(); i++)
		students[i].save(true);
}

string& AssignmentCalculator::getNewLine(string &file_cont, string &tmp) {
	tmp = "";
	int i = 0;
	while (file_cont[i] != '\n' && file_cont[i] != '\0') {
		tmp += file_cont[i];

		i++;
	}
	if (file_cont[i] == '\0')
		file_cont = "";
	else
		file_cont = file_cont.substr(i + 1, i + 1 - file_cont.size());

	return(tmp);
}

int** AssignmentCalculator::getCoursesResult(string file_cont) {
	Lp lp;
	int row, col, found, i, j, lpos;
	int *l;
	int **c;
	Lp::Col **x;
	Lp::Expr e;
	string tmp;




	/* get row and col */

	found = 0;
	lpos = 0;
	i = 0;
	getNewLine(file_cont, tmp);
	while (i < tmp.size()) {
		if (tmp[i] == ' ') {
			if (found == 0)
				row = stoi(tmp.substr(lpos, i - lpos));
			lpos = i + 1;
			found++;
		}

		i++;
	}
	col = stoi(tmp.substr(lpos, i - lpos));

	c = new int*[row];
	x = new Lp::Col*[row];
	l = new int[col];
	for (i = 0; i < row; i++) {
		x[i] = new Lp::Col[col];
		c[i] = new int[col];
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			x[i][j] = lp.addCol();
			lp.colLowerBound(x[i][j], 0);
			lp.colUpperBound(x[i][j], 1);
		}

	}


	/* Set course limit */
	getNewLine(file_cont, tmp);
	found = 0;
	lpos = 0;
	i = 0;
	while (i < tmp.size()) {
		if (tmp[i] == ' ') {
			l[found] = stoi(tmp.substr(lpos, i - lpos));
			lpos = i + 1;
			found++;
		}

		i++;
	}
	l[found] = stoi(tmp.substr(lpos, i - lpos));


	i = 0;
	for (j = 0; j < col; j++) {
		for (i = 0; i < row; i++) {
			if (i == 0)
				e = x[i][j];
			else
				e += x[i][j];
		}
		lp.addRow(e <= l[j]);
	}



	//points to course
	int run = 0;
	getNewLine(file_cont, tmp);

	while (file_cont != "" || tmp != "") {

		found = 0;
		lpos = 0;
		i = 0;
		while (i < tmp.size()) {
			if (tmp[i] == ' ') {
				c[run][found] = stoi(tmp.substr(lpos, i - lpos));
				lpos = i + 1;
				found++;
			}

			i++;
		}
		c[run][found] = stoi(tmp.substr(lpos, i - lpos));

		run++;
		if (file_cont != "")
			getNewLine(file_cont, tmp);
		else
			tmp = "";
	}

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			if (i == 0 && j == 0)
				e = c[i][j] * x[i][j];
			else
				e += c[i][j] * x[i][j];
	}

	lp.max();
	lp.obj(e);
	lp.solve();


	int** result;
	result = new int*[row];
	*result = new int[col];
	for (i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			result[i] = new int;

	// print result
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
			result[i][j] = lp.primal(x[i][j]);
	}

	// delete all allocs..
	delete[] c;
	delete[] l;

	return result;
}
