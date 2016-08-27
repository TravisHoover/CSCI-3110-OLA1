#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
#include "Roster.h"

using namespace std;

int main() {

    string headers;
    int x = 2;

    fstream myfile;
    myfile.open ("point.dat");
    if(myfile.is_open) {

        getline(myfile, headers);

        cout << "checkpoint";
        cout << ++x;
        cout << headers;
    }
    else
        


    myfile.close();
    return 0;
}