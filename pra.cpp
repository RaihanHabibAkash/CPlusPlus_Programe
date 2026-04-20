#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1,2,3,4,2,5,2};
    for(int x : v) cout << x << " ";
    cout << endl;
    
    vector<int>::iterator it = find(v.begin(), v.end(), 100);

    if(it == v.end()) cout << "Pai nai" << endl;
    else cout << "Paisi" << endl;

    cout << v.back() << endl;

    return 0;
}