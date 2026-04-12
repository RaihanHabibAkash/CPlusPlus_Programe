/*
Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
Student 
{
	name;
	roll;
	marks;
}
Your task is to reverse the array and print the array of Student.
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
Ahsan 39 86
Zubair 57 93
Sakib 55 89
Asif 29 95
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

int main() {
    // Taking input and declaring array of object
    int len; cin >> len;
    Student arr[len];

    // Taking array of object value
    for(int i = 0; i < len; i++) 
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;

    // Reverse the function
    for(int i = 0, j = len - 1; i < j; i++, j--) {
        Student temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Printing
    for(int i = 0; i < len; i++) 
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string name;
//     int roll;
//     int marks;
// };

// int main() {
//     int len; cin >> len;
//     Student *arr = new Student[len];
//     for(int i = 0; i < len; i++)
//         cin >> arr[i].name >> arr[i].roll >> arr[i].marks;


//     // Reversing
//     for(int i = 0, j = len - 1; i < j; i++, j--) {
//         Student *temp = new Student;
//         *temp = *(arr + i);
//         *(arr + i) = *(arr + j);
//         *(arr + j) = *temp;

//         delete temp;
//     }

//     // Printing
//     for(int i = 0; i < len; i++)
//         cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    
//     delete[] arr;

//     return 0;
// }