#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    swap(a, b);
    int x = min({ 100, 200, 300, 444 });

    cout << min(a, b) << endl;
    cout << max(a , b) << endl;
    cout << min({ 12, 2, 33, 5, 8, 7 }) << endl;
    cout << max({ 12, 2, 130, 5, 8, 7 }) << endl;
    cout << x << endl;

    return 0;
}