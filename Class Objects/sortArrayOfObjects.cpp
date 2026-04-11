#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

// Custom compare function, return true or false
bool cmp (Student a, Student b) {
    // For checking how many times funciton is called
    cout << "Hello" << endl;
    return a.marks > b.marks;
}

int main() {
    // Taking array len
    int len;
    cin >> len;

    // Taking array of objects
    Student arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // Sending in cutsom compare function
    sort(arr, arr + len, cmp);

    // Printing output
    for(int i = 0; i < len; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    
    return 0;
}