#include <iostream>
using namespace std;

struct User {
    string name;
    string city;
    int age;
};

int main() {

    User rfontt;

    rfontt.age = 22;
    rfontt.name = "rfontt";

    cout << rfontt.name << endl;

    User jourge = {"Jourge", "Jubu", 22};

    cout << jourge.name << endl;

    return 0;
}
