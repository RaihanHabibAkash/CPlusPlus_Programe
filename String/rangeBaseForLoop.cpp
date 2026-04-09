#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    

    for(char c : s) {
        cout << c << " ";
    }
    cout << endl;

    int arr[5] = {22, 33, 44, 2, 4};
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
