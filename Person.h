#ifndef PERSON_H
#define PERSON_H

#include <string>
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
//#write Person class here












#endif
