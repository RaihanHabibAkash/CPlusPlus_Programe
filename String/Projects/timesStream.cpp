/*
Question: Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.



Sample Input
Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
john

Sample Output
2
*/
// https://docs.google.com/document/d/1opBWGSgS0Kc51mwh9xWCF7n1TXwiadYF/edit

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking string input
    string st, word;
    getline(cin, st);
    cin >> word;

    // Declearing string steream
    stringstream ss(st);
    string streamWord;

    // Checking for how many times the word is in the string
    int times = 0;
    while(ss >> streamWord) {
        if(streamWord == word) times++;
    }

    // Printing
    cout << times << endl;

    return 0;
}