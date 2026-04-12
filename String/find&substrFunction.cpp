#include <bits/stdc++.h>
using namespace std;

int main() {
    string st = "RaihanHabibAkash";
    // find() return index of the the find char or string::npos.
    if(st.find("Habib") != string::npos)
        cout << "Paisi" << endl;
    else cout << "Pai nai" << endl;

    // substr(index, 5). index number theke 5 ta value pete chai.
    cout << st.substr(6, 5) << endl;
    
    return 0;
}
