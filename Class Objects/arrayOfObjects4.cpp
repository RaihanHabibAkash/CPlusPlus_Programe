#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    // Taking array len
    int len;
    cin >> len;

    // Taking array of objects
    Student arr[len];
    for(int i = 0; i < len; i++) {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }

    // Printing output
    for(int i = 0; i < len; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    
    return 0;
}
