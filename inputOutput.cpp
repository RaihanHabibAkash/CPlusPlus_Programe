#include <iostream>
using namespace std;

int main() {
    int x;
    char c;
    double d;

    cin >> x >> c >> d;

    // To get the asci value of a char
    int asci = c;

    cout << x << " " << c << " " << d << endl;
    cout << "The asci of value of " << c << " is " << asci << endl;

    // Type casting -> (dataType)varName
    cout << "Type casting of " << c << " is " << (int)c << endl;
    int number = 65;
    cout << "The value " << number << " Asci is " << (char)number << endl;

    return 0;
}