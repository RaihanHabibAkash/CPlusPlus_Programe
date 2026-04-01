/*
F. Reversing
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
InputCopy
4
5 1 3 2
OutputCopy
2 3 1 5 
InputCopy
5
1 2 3 4 5
OutputCopy
5 4 3 2 1 
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

#include <bits/stdc++.h>
using namespace std;

int* rev(int n) {
    // Dynamic array declare using pointer
    int *arr = new int[n];

    // Inserting value in array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing using swap function
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        swap(arr[i], arr[j]);
    }

    return arr;
}

int main() {
    // Taking input
    int len;
    cin >> len;

    // Getting value of the reverse array
    int *a = rev(len);

    // Printing array
    for(int i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Deleting the dynamic array
    delete[] a;

    return 0;
}
