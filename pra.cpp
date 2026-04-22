#include <bits/stdc++.h>
using namespace std;

int main() {
    int len, times; cin >> len >> times;
    vector<int> v(len + 1);

    for(auto it = v.begin()+1; it < v.end(); it++)
        cin >> *it;

    while(times--) {
        int l, r; cin >> l >> r;
        long long sum = 0;
        for(int i = l; i <= r; i++) sum += v[i];

        cout << sum << endl;
    }

    return 0;
}
