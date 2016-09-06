//
// Created by Travis on 8/25/16.
//

#include "Roster.h"
#include <fstream>
#include <iostream>

using namespace std;


//Roster::Roster(std::string courseName);

void Roster::readStudentRecord() {
    // Open file containing student info
    fstream myfile;
    myfile.open("point.dat");

    int studentIndex = 1;

    //Ignore the first line of point.dat, it is just headers
    string ignoredLine;
    getline(myfile, ignoredLine);
    cout << "\t" << ignoredLine << endl;
    cout << "---------------------------------------------------------------------------------" << endl;

    //start while loop to cycle through point.dat
    do {

        /****** Initialize variables ******/
        string ID;
        int cla, ola, quiz, homework, exam, bonus;

        myfile >> ID;               //read in student ID
        myfile >> cla ;             //read CLA score from file
        myfile >> ola;              //read OLA score from file
        myfile >> quiz;             //read QUIZ score from file
        myfile >> homework;         //read HOMEWORK score from file
        myfile >> exam;             //read EXAM score from file
        myfile >> bonus;            //read BONUS score from file

        //create class with data obtained from point.dat
        Student Travis(ID, cla, ola, quiz, homework, exam, bonus);
        cout << "\t";
        cout << Travis.getID() << "\t";
        cout << "  " << Travis.getScore(Student::ScoreType(cla)) << " ";
        cout << "\t" << Travis.getScore(Student::ScoreType(ola)) << " ";
        cout << "\t\t" << Travis.getScore(Student::ScoreType(quiz)) << " ";
        cout << "\t\t" << Travis.getScore(Student::ScoreType(homework)) << " ";
        cout << "\t\t" << Travis.getScore(Student::ScoreType(exam)) << " ";
        cout << "\t\t" << Travis.getScore(Student::ScoreType(bonus)) << " ";

        cout << endl << "---------------------------------------------------------------------------------" << endl;

        studentIndex++;

    } while (myfile.good());
    myfile.close();
}

/*int Roster::getStudentNum() const {

}

void Roster::setStudentNum(int) {

}*/