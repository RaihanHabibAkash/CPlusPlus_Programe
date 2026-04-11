#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    int marks;
};

int main() {
    int len;
    cin >> len;

    // Array of objects
    Student arr[len];

    // Taking input
    for(int i = 0; i < len; i++) {
        arr[i].roll = i + 1;
        cin >> arr[i].name >> arr[i].marks;
    }

    // For max mark
    Student maxNumberStudent = arr[0];

    // Finding max mark
    for(int i = 1; i < len; i++) {
        if(maxNumberStudent.marks < arr[i].marks) 
                maxNumberStudent = arr[i];
    }

    cout << maxNumberStudent.name << " " << maxNumberStudent.roll << " " << maxNumberStudent.marks << endl;

    return 0;
}