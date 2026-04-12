#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input
    string s;
    cin >> s;

    // Declearing freq array
    int freq[26] = {0};

    // Inserting char in freq array
    for(char c : s) freq[c - 'a']++;

    // Sorting
    for(char i = 'a'; i < 'z'; i++) {
        for(int j = 0; j < freq[i - 'a']; j++)
        cout << i;
    }
    // i == a, freq[a - 'a'] == freq[0] == value.
    // freq[0] == 2. 2 bar loop cholbe a ar jnn
    // freq[0] == 2 == aa

    return 0;
}