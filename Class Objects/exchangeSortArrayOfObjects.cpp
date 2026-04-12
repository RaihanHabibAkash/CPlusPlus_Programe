#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

int main() {
    // Taking input
    int len; cin >> len;
    Student arr[len];
    for(int i = 0; i < len; i++) 
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
        
    // Exchange sort
    for(int i = 0; i < len - 1; i++) 
        for(int j = i + 1; j < len; j++)
            if(arr[i].marks > arr[j].marks) swap(arr[i], arr[j]);

    for(int i = 0; i < len; i++) 
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;

    return 0;
}