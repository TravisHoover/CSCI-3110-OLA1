//
// Created by Travis on 8/25/16.
//

#include "Student.h"
#include <iostream>

using namespace std;


Student::Student(string m_id, int CLA, int OLA, int QUIZ, int HOMEWORK, int EXAM, int BONUS)
    : m_id(m_id),
      m_scoreCLA(CLA),
      m_scoreOLA(OLA),
      m_scoreQUIZ(QUIZ),
      m_scoreHOMEWORK(HOMEWORK),
      m_scoreEXAM(EXAM),
      m_scoreBONUS(BONUS)
{
        //cout << "\nDefault constructor, member variables should be initialized now" << endl;
}


string Student::getID() const {
    return m_id;
}

void Student::setID(std::string newID) {
    m_id = newID;
}

/*void Student::changeScore(const int score, const int) {

}*/

int Student::getScore(const int score) const {
    return score;
}