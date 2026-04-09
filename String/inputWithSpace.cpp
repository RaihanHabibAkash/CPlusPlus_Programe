#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int x;

    cin >> x;
    cin.ignore(); // for managing '/n', getchar() alse use

    // Taking input with spaces
    getline(cin, s);

    cout << x << endl;
    cout << s << endl;

    return 0;
}