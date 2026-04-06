/*
Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.
*/
// https://docs.google.com/document/d/1myhhYc5mXuI0G6jAMWp3yk4N0WO8aLse/edit


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {
    Student a("Raihn Habib", 22, 'A', 199, 5);
    Student b("Ash Web dev", 12, 'B', 108, 5);
    Student c("Ali Sir", 60, 'A', 200, 5);

    if(a.math_marks > b.math_marks && a.math_marks > c.math_marks) cout << a.name << endl;
    else if(b.math_marks > a.math_marks && b.math_marks > c.math_marks) cout << b.name << endl;
    else cout << c.name << endl; 

    return 0;
}
