/*
Question: Take an integer array A of size N as input. Then take an integer M as input. You need to take an array B of size M and copy all elements of array A to array B. Delete the array A and then take input of the rest of the elements of array B. After that print array B.



Sample Input
5
1 2 3 4 5
10
6 7 8 9 10

Sample Output
1 2 3 4 5 6 7 8 9 10

Sample Input
3
10 20 10
5
60 40

Sample Output
10 20 10 60 40
*/

// https://docs.google.com/document/d/1oHwyJVnvl6wFvXi-NAKLUab_I4rzrTkw/edit

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking lenght of the array
    int n;
    cin >> n;

    // Creating dynamic array 
    int *arr1 = new int[n];

    // Inserting value to the arr1
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Updating the lenght of the array
    int m;
    cin >> m;

    // Creating new dynamic array
    int *arr2 = new int[m];

    // Coping the the arr1 element in the arr2
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Deleting the old array
    delete[] arr1;

    // Inserting new element insite the arr2
    for(int i = n; i < m; i++) {
        cin >> arr2[i];
    }

    // Printing the arr2
    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}