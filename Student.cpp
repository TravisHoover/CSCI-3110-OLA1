//
// Created by Travis on 8/25/16.
//

#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string m_id, int CLA, int OLA, int QUIZ, int HOMEWORK, int EXAM, int BONUS)
    : m_id(m_id)
{
}


string Student::getID() const {
    return m_id;
}

void Student::setID(std::string newID) {
    m_id = newID;
}

void Student::changeScore(const ScoreType, const int) {

}

int Student::getScore(const ScoreType) const {
    //return m_score(ScoreType::CLA);
}