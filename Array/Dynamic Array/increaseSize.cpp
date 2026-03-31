#include <bits/stdc++.h>
using namespace std;

int main() {
    // Dynmic array decleare
    int *arr1 = new int[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }

    // New dynamic array deleare
    int *arr2 = new int[10];

    // Coping from arr1
    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }
    // Inserting in the rest of the array
    for(int i = 5; i < 10; i++) {
        arr2[i] = i * 10;
    }

    // Deleting the arr1
    delete[] arr1;

    // Printing arr2
    for(int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}

