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
      

    }
    Student(int yl, string m) {
       
    }
    void getName():Person {
        return p ->name;
    }
    ~Student (){}
    void display() { }
    
};












#endif
