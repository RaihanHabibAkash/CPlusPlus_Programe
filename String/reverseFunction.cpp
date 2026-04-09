#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // reverse(String pointer, Ending pointer + 1);
    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
