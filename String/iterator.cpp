#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello";
    cout << *(s.begin()) << " " << *(s.end() - 1) << endl;

    cout << "Iterator" << endl;
    for(string::iterator it = s.begin(); it < s.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
