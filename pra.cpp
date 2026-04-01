#include <bits/stdc++.h>
using namespace std;

int* fun(int n) {
    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    return arr;
}

int main() {
    int len;
    cin >> len;
    int *a = fun(len);
    for(int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }

    delete[] a;

    for(int i = 0;i < len; i++) {
        cout << a[i] << " ";
    }

    return 0;
}



