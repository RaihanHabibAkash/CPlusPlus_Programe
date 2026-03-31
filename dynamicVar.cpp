/*
Heap memory return an address so it can be store in pointer
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int *p = new int;

//     *p = 100;

//     cout << *p << endl;

//     return 0;
// }


/*
Stack memory the other function varibale after function return
*/
// #include <bits/stdc++.h>
// using namespace std;

// int *p;

// void func() {
//     int x = 100;
//     p = &x;

//     cout << "Func " << *p << endl;
// }

// int main() {
//     func();
//     cout << "Main " << *p << endl;

//     return 0;
// }



/*
Heap variable function theke return hole auto delete hoi na
*/
#include <bits/stdc++.h>
using namespace std;

int *p;

void func() {
    int *x = new int;
    *x = 10;
    p = x;

    cout << "Func " << *p << endl;
}

int main() {
    func();
    cout << "Main "  << *p << endl;

    return 0;
}
