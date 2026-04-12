#include <bits/stdc++.h>
using namespace std;

int main() {
    int len; cin >> len;
    int arr[len];

    for(int i = 0; i < len; i++) 
        cin >> arr[i];

    for(int i = 0; i < len - 1; i++) 
        for(int j = i + 1; j < len; j++)
            if(arr[i] > arr[j]) swap(arr[i], arr[j]);

    // Printing
    for(int i = 0; i < len; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}