/*
For static array we can decleare an new array and copy one. but it is a waste of memory. 
because static array can't be delete
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Decleare static array
    int arr1[3];
    // Taking input
    for(int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }

    // Increasing the size
    int arr2[5];
    for(int i = 0; i < 3; i++) {
        arr2[i] = arr1[i];
    }
    for(int i = 3; i < 5; i++) {
        arr2[i] = 10 * i;
    }

    // Printing new array
    cout << "Printing ";
    for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    
    return 0;
}