#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    int roll;
    int cls;
    char section;
    double gpa;

    Student(int roll, int cls, char section, double gpa) {
        this->roll = roll;
        this->cls = cls;
        this->section = section;
        this->gpa = gpa;
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).section = section;
        // (*this).gpa = gpa;
    }
};

int main() {
    Student rahim(42, 5, 'A', 4.5);

    cout << rahim.roll << " " << rahim.section << " " << rahim.cls << " " << rahim.gpa << endl;


    return 0;
}
