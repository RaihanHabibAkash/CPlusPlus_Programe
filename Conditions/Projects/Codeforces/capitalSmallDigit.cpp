#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    char x;
    cin >> x;

    // Checking for Digit or Alpha
    if('0' <= x && x <= '9') {
        cout << "IS DIGIT" << endl;
    } else {
        cout << "ALPHA" << endl;

        // Cheking for Small or Capital
        if('a' <= x && x <= 'z') {
            cout << "IS SMALL" << endl;
        } else {
            cout << "IS CAPITAL" << endl;
        }
    // Main else ending
    }

    return 0;
}