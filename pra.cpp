#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10];

    for(int i = 0; i < 10; i++) {
      cin >> arr[i];
    }

    reverse(arr, arr + 10);

    for(int x : arr) {
      cout << x << " ";
    }
    cout << endl;

    return 0;
}
