#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class Instructor :Person {
private:
    string department;
    int experienceYears;
    Instructor(){} 
    Instructor(string d, int EY) {}
    ~Instructor(){}
public:
    void display()   {}
    
};











#endif
