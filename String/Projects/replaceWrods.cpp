/*
V. Replace Word
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.

Examples
InputCopy
BRITISHEGYPTGHANA
OutputCopy
BRITISH GHANA
InputCopy
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
OutputCopy
ITALYKOREA  ALGERIA Z
*/
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // size_t can be use
    for(size_t i = 0; i < s.size(); i++) {
        // if there is 4 char not available out of the loop.
        if(i + 4 > s.size() - 1) break;

        if(s[i] == 'E')
            if(s[i + 1] == 'G')
                if(s[i + 2] == 'Y')
                    if(s[i + 3] == 'P')
                        // Replacing if last one also true EGYPT wiht " ".
                        if(s[i + 4] == 'T') s.replace(i, 5, " ");
    // Forloop ends
    }

    // Output
    cout << s << endl;

    return 0;
}