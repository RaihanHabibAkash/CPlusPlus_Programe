#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    int roll;
    char section;
    double gpa;

    Student(int roll, char section, double gpa) {
        this->roll = roll;
        this->section = section;
        this->gpa = gpa;
    }
};

Student* func() {
    Student *obj = new Student(22, 'A', 3.45);
    return obj;
}

int main() {
    Student *p = func();
    cout << p->roll << " " << p->gpa << " " << p->section << endl;
    // cout << (*p).roll << " " << (*p).gpa << " " << (*p).section << endl;

    return 0;
}
