#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int roll;
    int english;
    int math;
    Student(string name, int roll, int math, int english) {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello() {
        cout << "Hello From " << name << " Roll " << roll << endl;
    }
    void marks() {
        cout << "Total Marks of " << name << " = " << math + english << endl;
    }
};

int main() {
    Student akash("Raihan Akash", 2, 90, 88);
    Student ash("Ash bro", 12, 82, 92);
    
    akash.hello();
    ash.hello();

    akash.marks();
    ash.marks();

    return 0;
}
