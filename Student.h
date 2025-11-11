#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class Student : Person {
private:
    int yearLevel;
    string major;
public:
    Student() {
        yearLevel = 0;
        major;

    }
    Student(int yl, string m) {
        yearLevel = yl;
        major =m;
    }
    void getName():Person {
        return p ->name;
    }
    ~Student (){}
    void display() {
        cout <<  "Year Level:" << yearLevel << "" << "Major:" << major;
    }
    
};












#endif
