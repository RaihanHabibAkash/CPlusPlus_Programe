/*
#include <bits/stdc++.h>
using namespace std;

class Cricketer{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};

int main() {
    Cricketer *dhoni = new Cricketer("India", 7);
    Cricketer *shakib = new Cricketer("Bangladesh", 75);

    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    // Coping pointers not accual object.
    shakib = dhoni;

    cout << "After coping pointer" << endl;
    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    // dhoni and shakib pointer is pointing one object of dhoni. so if I delete one of it 
    // we can't get value of shakib pointer either.
    delete dhoni;

    cout << "After deletation" << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    return 0;
}
*/


/*
#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};

int main() {
    Cricketer *dhoni = new Cricketer("India", 7);
    Cricketer *shakib = new Cricketer("Bangladesh", 75);

    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    shakib->country = dhoni->country;
    shakib->jersey = dhoni->jersey;

    cout << "After coping object value";
    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    // deleting dhoni wont fact the shakib pointer, bcz shakib pointer is pointing his object.
    delete dhoni;

    cout << "After deleting dhoni Shakib pointer" << endl;
    cout << shakib->country << " " << shakib->jersey << endl; 

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

class Cricketer {
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};

int main() {
    Cricketer *dhoni = new Cricketer("India", 7);
    Cricketer *shakib = new Cricketer("Bangladesh", 75);

    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    // Coping direct object by dereferance
    *shakib = *dhoni;

    cout << "After coping" << endl;
    cout << dhoni->country << " " << dhoni->jersey << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    // Deleting dhoni object won't fact shakib pointer.
    delete dhoni;

    cout << "After deleting dhoni Shakib" << endl;
    cout << shakib->country << " " << shakib->jersey << endl;

    return 0;
}