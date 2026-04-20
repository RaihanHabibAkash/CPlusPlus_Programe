#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<string> v(n);
    for(auto it = v.begin(); it < v.begin() + n; it++)
        cin >> *it;
    
    for(string s : v)
        cout << s << endl;
    

    return 0;
}