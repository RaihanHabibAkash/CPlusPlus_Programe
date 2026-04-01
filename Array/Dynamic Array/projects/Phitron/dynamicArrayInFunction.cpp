/*
Question: At first in the main function take an integer N as input. Then make a function named get_array() which will receive that N as a parameter. Then inside the get_array() function create an integer array of size N. Then the values of that array will be taken as input. After that return that array from that function and receive it in the main function and print the values of the array there.



Sample Input

5
1 2 3 4 5

Sample Output
1 2 3 4 5

Sample Input
7
5 1 2 4 6 9 3

Sample Output
5 1 2 4 6 9 3
*/

// https://docs.google.com/document/d/1oHwyJVnvl6wFvXi-NAKLUab_I4rzrTkw/edit

#include <bits/stdc++.h>
using namespace std;

int* get_array(int n) {
    // Dynamic Array
    int *arr = new int[n];

    // Insering value in the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Returning the first memory of the array
    return arr;
}

int main() {
    // Taking lenght of the array as input
    int length;
    cin >> length;

    // Recing the first memory of the array
    int *a = get_array(length);

    // Printing the array
    for(int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Deleting the dynamic array
    delete[] a;

    return 0;
}