#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking lenght of the array
    int length;
    cin >> length;

    int arr[length];
    for(int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    // Asending Sort
    // sort(strating index, ending index + 1)
    // sort(arr, arr + length);

    // Desending Sort
    // sort(starting point, ending point + 1, greater<int>())
    sort(arr, arr + length, greater<int>());

    // Printing
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
