#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

class Course {
private:
    string courseCode;
    string CourseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course() {}
Course(string CC, string CN, int max, int CS,Student* s) {}
~Course() {}
void addStudent(const Student& s) {}
void getCourseCode() {}

void getCourseName() {}
void getMaxStudents() {}
void getStudents() {}
void getCurrentStudents() {}










#endif
