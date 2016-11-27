
#ifndef ROSTER
#define ROSTER

#include <string>
#include <stdexcept>
#include <vector>
#include "Student.h"

class Roster
{
public:

	// constructor, the parameter is the course name
	// Create an empty roster, i.e. m_studentNum = 0 for
	// a specific course
	Roster(std::string courseName);

	// This function reads student information from a file
	// The parameter is a file name
	// post-condition:
	//		m_students contains student information read from the file
	//		m_studentNum is the number of students read from the file
	static void readStudentRecord( void );

	int getStudentNum(void) const;
	static void setStudentNum(int);
private:
	static const int	MAX_NUM = 25;	// The maximum # of students of a class
	// Class constant. All objects share the same copy
	std::string			m_courseName;	// THe name of the course
	int					m_studentNum;	// Actual Student #
	Student				m_students[MAX_NUM]; // The array of student objects
};
#endif
