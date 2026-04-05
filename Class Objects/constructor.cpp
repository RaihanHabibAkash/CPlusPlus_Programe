/*
Speacial function to create objects for creating objects
*/

#include <bits/stdc++.h>
using namespace std;

// Class declaration
class Student {
    // Access mofidire
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g) {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main() {
    // Object declaration
    Student rahim(44, 5, 3.44);
    Student karim(1, 5, 4.8);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}