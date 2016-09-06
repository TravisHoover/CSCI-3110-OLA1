#include <iostream>
#include "Roster.h"
#include "Student.h"

using namespace std;

int main() {

    int choice;

    do {
        cout << "Welcome! Please select an option below: " << endl;
        cout << "1. Display all students grades" << endl;
        cout << "2. Display single particular student's grades" << endl;
         cout << "3. Exit Program" << endl;

        cin >> choice;


            switch (choice) {
                 case 1 :
                        Roster::readStudentRecord();
                        break;
                 case 2 :
                        cout << "Choice 2 selected";
                        break;
                 case 3 :
                        cout << "\nGoodbye!";
                        exit(0);
                  default:
                        cout << "Please enter 1, 2, or 3" << endl << endl;
        }
    } while(choice);

    return 0;
}