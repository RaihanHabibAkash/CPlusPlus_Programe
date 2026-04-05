// #include <bits/stdc++.h>
// using namespace std;
// // Class declaration
// class Student {
//     // Access mofidire
//     public:
//     char name[100];
//     int roll;
//     char section;
//     double gpa;
// };
// int main() {
//     // Object declaration
//     Student a;

//     // Decleration
//     a.roll = 20;
//     a.section = 'A';
//     a.gpa = 3.5;
//     // Cpping string
//     char temp[100] = "Raihan Habib Akash";
//     strcpy(a.name, temp);

//     // Output
//     cout << a.name << " " << a.roll << " " << a.section << " " << a.gpa << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student a, b;

    // Taking first input
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    // For ('\n');
    cin.ignore();
    // getchar();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}