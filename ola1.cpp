#include <iostream>
#include <fstream>
#include "Roster.h"
#include "Student.h"

using namespace std;

int main() {

    // Open file containing student info
    fstream myfile;
    myfile.open("point.dat");

    int studentIndex = 0;

    //Ignore the first line of point.dat, it is just headers
    string ignoredLine;
    getline(myfile, ignoredLine);

    //start while loop to cycle through point.dat
    while (myfile.good()) {

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
        cout << "\nStudent ID:";
        cout << Travis.getID() << " " << Travis.getScore(Student::QUIZ) << endl;

        studentIndex++;
    };
    myfile.close();
    return 0;
}