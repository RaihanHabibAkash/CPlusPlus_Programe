#include <bits/stdc++.h>
using namespace std;
int anton = 0;
int danit = 0;

void rec(int n) {
    if(n == 0) {
        return;
    }
     
    char str;
    cin >> str; 

    if(str == 'A') anton++;
    else danit++; 
    
    rec(n - 1);
}

int main() {
    int times;
    cin >> times;

    rec(times);

    if(anton > danit) cout << "Anton" << endl;
    else if(anton < danit) cout << "Danik" << endl;
    else cout << "Friendship" << endl;

    return 0;
}




