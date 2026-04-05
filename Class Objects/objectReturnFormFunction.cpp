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

Student func() {
    Student karim(1, 'A', 3.44);
    return karim;
}

int main() {
    Student obj = func();

    cout << obj.roll << " " << obj.section << " " << obj.gpa << endl;

    return 0;
}
