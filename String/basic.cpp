// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     cin.ignore();

//     char str[100];

//     cin.getline(str, 100);

//     cout << x << endl << str << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char str[100];
    

    /* Input before space
    cin >> str; */

    cin.getline(str, 100);

    cout << str << endl;

    return 0;
}


/*
fgets(str, sizeof(str), stdin); -> also can be use
*/