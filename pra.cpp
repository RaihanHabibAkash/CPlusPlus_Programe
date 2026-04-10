#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "ak";
    string s2 = "bh";
    string s;

    
        
        
        for(auto it = s1.begin(); it < s1.end(); it++) {
            
            char word1 = s1[0];
            s1.erase(0, 1);
            s.push_back(word1);

            char word2 = s2[0];
            s2.erase(0, 1);
            s.push_back(word2);
        }
        cout << s;
        

    return 0;
}