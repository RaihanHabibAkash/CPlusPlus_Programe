#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Raihan Habib";
    for(string::iterator it = s.end() - 1; it >= s.begin(); it--) {
        cout << *it << " ";
    }
    cout << endl;

    for(auto it = s.begin(); it < s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
// C++ 11 or above detects the iterator type by using auto