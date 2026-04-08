// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     char name[100];
//     int roll;
//     int cls;
// };

// int main() {
//     // Taking lenth
//     int len;
//     cin >> len;

//     // Declaration of Array of object, gcc alows it
//     Student arr[len];

//     // Inserting value in Array of object 
//     for(int i = 0; i < len; i++) {
//         cin >> arr[i].name >> arr[i].cls;
//         arr[i].roll = i + 1;
//     }

//     // Printing
//     for(int i = 0; i < len; i++) {
//         cout << arr[i].name << " " << arr[i].roll << " " << arr[i].cls << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     char name[100];
//     int roll;
//     int marks;
// };

// int main() {
//     int len;
//     cin >> len;

//     // Array of objects
//     Student arr[len];

//     // Taking input
//     for(int i = 0; i < len; i++) {
//         arr[i].roll = i + 1;
//         cin >> arr[i].name >> arr[i].marks;
//     }

//     // For max mark
//     Student maxNumberStudent = arr[0];

//     // Finding max mark
//     for(int i = 1; i < len; i++) {
//         if(maxNumberStudent.marks < arr[i].marks) 
//                 maxNumberStudent = arr[i];
//     }

//     cout << maxNumberStudent.name << " " << maxNumberStudent.roll << " " << maxNumberStudent.marks << endl;

//     return 0;
// }


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
