/*
Problem Statement:

Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

Note: Input will be given by EOF.

Input Format

Input consist of a line S. The line will contain lowercase letters and spaces. It is possible that there are multiple spaces together and the line end with spaces.
Constraints

1 <= |S| <= 10^5
Output Format

Output what Amena will write.
Sample Input 0

monkey
i love flower
Sample Output 0

ekmnoy
eefilloorvw
*/

// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/monkey-1-2

#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[1000000];

    while(cin.getline(str, sizeof(str))) {
        int len = strlen(str);

        // For removing space
        int k = 0;
        for(int i = 0; i < len; i++) {
            if(str[i] != ' ') {
                str[k++] = str[i];
            }
        }
        // Recizing len
        len = k;

        // for(int i = 0; i < len - 1; i++) {
        //     int minIndex = i;
        //     for(int j = i + 1; j < len; j++) {
        //         if(str[minIndex] > str[j]) minIndex = j;
        //     }
        //     swap(str[minIndex], str[i]);
        // }
        // Sorting using build in function
        sort(str, str + len);

        for(int i = 0; i < len; i++) {
            cout << str[i];
        }
        cout << endl;

    }

    return 0;
}        