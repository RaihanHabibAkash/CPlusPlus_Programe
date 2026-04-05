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
    Student obj(22, 'B', 3.4);
    Student *p = &obj;
    return p;
}

int main() {
    Student *p = func();

    cout << p->roll << " " << p->section << " " << p->gpa << endl;
    // Gapbage value because the static memory object is deleted
    return 0;
}

