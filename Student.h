
#ifndef STUDENT
#define STUDENT

#include <string>
#include <stdexcept>


class Student
{
public:
	// The types of score. You can access the type or enumerators outside
	// of the Student class scope by the following expressions:
	//	Student::ScoreType              Student::CLA        Student::BONUS
	enum ScoreType {CLA, OLA, QUIZ, HOMEWORK, EXAM, BONUS};

	// To access the class constant outside of the Student class scope:
	//	Student::CATEGORY_NUM
	static const int CATEGORY_NUM = BONUS - CLA + 1;

	// default constructor. This is necessary since we define an array
	// of students in the class Roster
	Student(void);
	Student(std::string m_id, int CLA, int OLA, int QUIZ, int HOMEWORK, int EXAM, int BONUS);
	Student(std::string);

	//Accessor & mutator of m_id
	std::string getID( void ) const;
	void setID( std::string ) ;

	//Accessor and mutator of m_score
	//ScoreType indicates which score you want to access
	void changeScore( const int, const int );
	int  getScore( const int ) const;

	//********************************************************************
	//Add your functions here if necessary
	//********************************************************************

private:
	std::string		m_id;		// Student ID

	int m_scoreCLA;
	int m_scoreOLA;
	int m_scoreQUIZ;
	int m_scoreHOMEWORK;
	int m_scoreEXAM;
	int m_scoreBONUS;
};
#endif
