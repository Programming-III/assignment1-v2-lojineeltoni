#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
#include <iostream>
using namespace std;
class Person {
private:
    string name;
    int id;
public:
    Person(string n, int i) {
        name = n;
        id = i;
    }
    Person() {
        name;
        id = 0;
    }
    
    ~Person(){}
    void display() {
        cout << "name:" << name << "" << "id:" << id << endl;
    }

};







// ==================== Student Class Implementation ====================

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




// ==================== Instructor Class Implementation ====================
class Instructor :Person {
private:
    string department;
    int experienceYears;
    Instructor() {
        department;
        experienceYears = 0;

    }
    Instructor(string d, int EY) {
        department = d;
        experienceYears = EY;
    }
    ~Instructor(){}
public:
    void display() {
        cout << "Department:" << department << "" << "ExperienceYears:" << experienceYears << endl;
    }
};





// ==================== Course Class Implementation ====================

class Course {
private:
    string courseCode;
    string CourseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course() {
        courseCode;
        CourseName;
        maxStudents = 0;
        currentStudents = 0;
        students;
    }
    Course(string CC, string CN, int max, int CS,Student* s) {
        courseCode = CC;
        CourseName = CN;
        maxStudents = max;
        currentStudents = CS;
        students = s;
    }
    ~Course() {
        delete[]students;
    }
    void addStudent(const Student& s) {
        for (int i = 0;i < maxStudents;i++) {
            students* a = new students;
            
        }
    }
};






// ==================== Main Function ====================
int main() {
  
    return 0;
}
