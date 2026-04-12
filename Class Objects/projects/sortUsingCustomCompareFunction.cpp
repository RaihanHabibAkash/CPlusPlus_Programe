/*
Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
Student 
{
	name;
	roll;
	marks;
}
Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.
Note: name will not contain any spaces.

Sample Input
5
Asif 29 95
Sakib 55 89
Zubair 57 93
Ahsan 39 86
Joy 12 99

Sample Output
Joy 12 99
Asif 29 95
Zubair 57 93
Sakib 55 89
Ahsan 39 86
*/
// https://docs.google.com/document/d/1opBWGSgS0Kc51mwh9xWCF7n1TXwiadYF/edit

#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

bool customCmp(Student l, Student r) {
    if(l.marks == r.marks) return l.roll < r.roll;
    else return l.marks > r.marks;
}

int main() {
    // Taking array of objects 
    int len; cin >> len;
    Student arr[len];

    // Setting value in the array
    for(int i = 0; i < len; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // Now sorting them using custom compare function.
    sort(arr, arr + len, customCmp);

    // Printing 
    for(int i = 0; i < len; i++)
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;

    return 0;
}