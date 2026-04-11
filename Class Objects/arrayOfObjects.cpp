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

    // Inserting value
    for(int i = 0; i < len; i++) {
        cin >> arr[i].name >> arr[i].marks;
        arr[i].roll = i + 1;
    }

    // Geeting the sum of all marks
    int sumMarks = 0;
    for(int i = 0; i < len; i++) {
        sumMarks += arr[i].marks;
    }

    // Avg marks
    int avg = sumMarks / len;


    // Printing above avg mark
    for(int i = 0; i < len; i++) {
        if(arr[i].marks >= avg) 
            cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
