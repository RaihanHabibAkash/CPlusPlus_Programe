#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    // Taking full line input
    getline(cin, s);
    // Output of the full string
    cout << s << endl;
    
    // Declaring stringstream
    stringstream ss(s);
    // stringstream ss;
    // ss << s;

    // For string stram word
    string word;
    
    // Getting the 1st word of the string stream
    ss >> word;
    cout << word << endl;

    // Getting the 2nd word from string stream
    ss >> word;
    cout << word << endl;


    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);
//     cout << s << endl;

//     // Declearing string stream
//     stringstream ss(s);
//     string word;
//     int cnt = 0;

//     while(ss >> word) {
//         cout << word << endl;
//         ++cnt;
//     }
//     cout << cnt << endl;

//     return 0;
// }