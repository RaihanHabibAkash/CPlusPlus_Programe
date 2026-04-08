// obj.size() => return the size of the string.
// obj.max_size() => Local machine koto size ar max string rakha jabe.
// obj.capacity() => String ar current capacity or size ta dei.
// obj.clear() => String clear kore dei.
// obj.empty() => return true/false, judging the sting is empty or not.
// obj.resize() => String k resize kora jabe, (14, 'x') extra value hisebe 'x' boshaia dibe

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Akash";

    // For size()
    cout << "for size()" << endl;
    cout << s.size() << endl << endl;
    // s = "Raihan Habib Akash";
    // int size = s.size();
    // cout << size << endl;

    // For max_size()
    cout << "for max_size()" << endl;
    cout << s.max_size() << endl << endl;

    // For capacity()
    cout << "for capacity()" << endl;
    s = "ak";
    cout << s.capacity() << endl;
    s = "Raihan Habib Akashasdfasdfasdfasdfasdfasd";
    cout << s.capacity() << endl << endl;

    // For clear()
    cout << "for clear()" << endl;
    s.clear();
    cout << s << endl;

    // For empty()
    cout << "for empty()" << endl;
    if(s.empty() == true) cout << "Empty" << endl << endl;
    else cout << "Not Empty" << endl << endl;
    
    // For resize()
    cout << "for resize()" << endl;
    s = "Raihan Habib Akash";
    s.resize(30, '*');
    cout << s << endl;
    s.resize(8);
    cout << s << endl << endl;

    return 0;
}
