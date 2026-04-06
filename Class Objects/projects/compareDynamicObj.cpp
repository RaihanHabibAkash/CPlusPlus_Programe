/*
Question: Create a dynamic object named dhoni of the following class. Don’t use a constructor here, that means you need to fill the data by yourself.
Cricketer
{
	jersey_no;
	country;
}
Then make another dynamic object named kohli and copy the data of the dhoni object to kohli and after that delete the dhoni object. Then print the jersey_no and country of kohli object.
Note: At first try to do this, kohli=dhoni and see if it gives the correct output. If not, then think deeply why it didn’t work and try to copy the data manually like kohli->jersey_no=dhoni->jersey_no; 
*/
// https://docs.google.com/document/d/1myhhYc5mXuI0G6jAMWp3yk4N0WO8aLse/edit

// #include <bits/stdc++.h>
// using namespace std;

// class Cricketer {
// public:
//     int jersey_no;
// 	char country[100];
// };

// int main() {
//     Cricketer *dhoni = new Cricketer;
//     dhoni->jersey_no = 7;
//     char temp[100] = "India";
//     strcpy(dhoni->country, temp);

//     // Kohli is also pointing the dhoni object
//     Cricketer *kohli = dhoni;
//     cout << kohli << " " << dhoni << endl;;

//     delete dhoni;
//     cout << kohli->country << " " << kohli->jersey_no << endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    char country[100];
};

int main() {
    Cricketer *dhoni = new Cricketer;
    char temp[100] = "BIndia";
    strcpy(dhoni->country, temp);
    dhoni->jersey_no = 7;

    // Creating new object of the Creater (not copy)
    Cricketer *kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    // Printing address
    cout << dhoni << " " << kohli << endl;

    // Deleteing dynamic value dhoni
    delete dhoni;

    cout << kohli->country << " " << kohli->jersey_no << endl;
    
    return 0;
}
