#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    cin >> len;
    
    // Retunr out the function
    if(len > 30 || len < 2) {
        cout << "Niloy mc" << endl;
        return 0;
    }

    if(len < 11) {
        // For calculating
        int niloy = (len * 2) - 3;
        // Helper
        int niloyBc = niloy;

        for(int i = 0; i < niloy / 2; i++) {
            // Printing (-) before *
            for(int j = 1; j < i + 1; j++) {
                cout << " ";
            }
            // Printing (*)
            for(int j = 0; j < 1; j++) {
                cout << "*";
            }
            // Printing (-) after *
            for(int j = 0; j < niloyBc - 2; j++) {
                cout << " ";
            }
            // For helping of (-)
            niloyBc-= 2;

            // last *
            cout << "*";

            // For new line
            cout << endl;
        }

        // For middle line (-), before x
        for(int i = 1; i <= niloy / 2; i++) {
            cout << " ";
        }
        // For x
        cout << "x";
        // For new line
        cout << endl;


        // Reset for sec half
        niloyBc = 1;


        // Second half
        for(int i = 0; i < niloy / 2; i++) {
            // Printing (-) before *
            for(int j = i; j < niloy - len; j++) {
                cout << " ";
            }

            // // Printing (*)
            for(int j = 0; j < 1; j++) {
                cout << "*";
            }

            // // Printing (-) after *
            for(int j = 0; j < niloyBc; j++) {
                cout << " ";
            }
            // For helping of (-)
            niloyBc+= 2;

            // last *
            cout << "*";

            // For new line
            cout << endl;
        }
    } else {
        // For calculating
        int niloyBc;
        if(len % 2 == 0) niloyBc = len - 1; 
        else niloyBc = len - 2;
        
        int hel = 1;

        // Fist half
        for(int i = 1; i <= len / 2; i++) {
            // Printing (-) before *
            for(int j = 1; j < i; j++) {
                cout << " ";
            }
            
            // Printing * before on prime diagonal
            for(int j = 0; j < 1; j++) {
                cout << "*";
            }

            // Printing (-) before sec diagonal
            for(int j = 0; j < niloyBc; j++) {
                cout << " ";
            }
            // Helper
            niloyBc -= 2;

            // Printing in sec diagonal
            for(int j = 0; j < 1; j++) {
                cout << "*";
            }

            cout << endl;
        }

        // Priting space before x
        for(int j = 0; j < len / 2; j++) {
            cout << " ";
        }
        // Printing central x
        cout << "x" << endl;

        // Second part
        for(int i = 0; i < len / 2; i++) {
            // printing space before prime diagonal
            for(int j = i + 1; j < len / 2; j++) {
                cout << " ";
            }

            // Prime daigonal
            for(int j = 0; j < 1; j++) {
                cout << "*";
            }

            // Space after prime daigonal
            for(int j = 0; j < hel; j++) {
                cout << " ";
            }
            hel += 2;

            // For sec diagonal
            for(int j = 0; j < 1; j++) {
                cout << "*";
            }

            // New line
            cout << endl;
        }
    // Else end 
    }

    return 0;
}