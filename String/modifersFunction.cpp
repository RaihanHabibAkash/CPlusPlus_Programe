// s += s2; => To concat (s, newS), s = s + s2 (behind the sceane).
// s.append(s2) => Same like above s = s + s2.
// s.push_back('c') => last a char add hoi.
// s.pop_back() => last ar char remove hoi.
// s.assign(s2) => s = s2 (behind the sceane).
// s.erase(5) => 5 index a jeye sob delete korbe, (5, 2) 5 index a jeye 2 ta char delete korbe.
// s.replace(5, 3, s2) => 5 index a jeye 3 ta char delete and oikhane s2 boshaia deo.
// s.insert(5, s2) => 5 index a jeye s2 add kore dibe.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Raihan";
    // For +=
    s += " Hi";
    // For append()
    s.append(" Not need"); // Don't need
    // For push_back()
    s.push_back('*'); // Don't need, use +=
    // For pop_back()
    s.pop_back();

    // For assign()
    string s2 = "Gello Bro";
    s.assign(s2); // Not need, s = s2

    // For erase()
    s.erase(3, 2);

    // For replace()
    s = "Hello World";
    s.replace(6, 5, "Bangladesh");

    // For insert()
    s.insert(5, "Akash");
    // s.insert(s.begin() + 4, 'b');

    cout << s;


    return 0;
}
