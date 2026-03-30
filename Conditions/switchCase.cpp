// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     switch(x % 2) {
//         case 0:
//             cout << "Even" << endl;
//             break;
//         case 1:
//             cout << "Odd" << endl;
//             break;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    switch(c) {
        case 'a':
            cout << "Vowel" << endl;
            break;
        case 'e':
            cout << "Vowel" << endl;
            break;
        case 'i':
            cout << "Vowel" << endl;
            break;
        case 'o':
            cout << "Vowel" << endl;
            break;
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant\n";
    }

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;

//     switch(x) {
//         case 1:
//             cout << "Monday\n";
//             break;
//         case 2: 
//             cout << "Tuesday\n";
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thudsday\n";
//             break;
//         case 5:
//             cout << "Friday\n";
//             break;
//         case 6:
//             cout << "Saturday\n";
//             break;
//         case 7:
//             cout << "Sunday\n";
//             break;
//         default:
//             cout << "Wrong Input" << endl;
//     }

//     return 0;
// }

/*
Switch case need to use for fixed vaules. and if one condition gets true. 
it also accpet the rest of the down cases. so we use break after it.
*/