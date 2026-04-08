// obj.at() => access the index of ().
// obj.back() => last element access kore.
// obj.front() => first element access kore.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[2] << endl;
    cout << s.at(2) << endl; // not use much
    cout << s.back() << endl;
    cout << s[s.size() - 1] << endl; // same as back() 
    cout << s.front() << endl; // not use much

    return 0;
}
