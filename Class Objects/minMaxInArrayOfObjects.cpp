#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    // Taking len
    int len;
    cin >> len;
    
    // Taking array of objects
    Student arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // Taking object of min & max
    Student mn, mx;
    mn.marks = INT_MAX;
    mx.marks = INT_MIN;

    // Checking and updating
    for(int i = 0; i < len; i++) {
        if(arr[i].marks < mn.marks) mn = arr[i];
        if(arr[i].marks > mx.marks) mx = arr[i];
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}
