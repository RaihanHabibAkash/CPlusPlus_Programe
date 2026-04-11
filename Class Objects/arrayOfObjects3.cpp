#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    int cls;
};

int main() {
    // Taking lenth
    int len;
    cin >> len;

    // Declaration of Array of object, gcc alows it
    Student arr[len];

    // Inserting value in Array of object 
    for(int i = 0; i < len; i++) {
        cin >> arr[i].name >> arr[i].cls;
        arr[i].roll = i + 1;
    }

    // Printing
    for(int i = 0; i < len; i++) {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].cls << endl;
    }

    return 0;
}