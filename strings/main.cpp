#include <iostream>
using namespace std;

int main() {
    const char name[] = { 'r', 'f', 'o', 'n', 't' };

    int sizeOfName = sizeof(name) / sizeof(char);

    for (int i = 0; i < sizeOfName; i++) {
        cout << name[i];
    }

    cout << endl;

    string s1 = "10";
    string s2 = "20";

    int num1, num2;

    num1 = stoi(s1);
    num2 = stoi(s2);

    cout << "Sum:" << num1 + num2 << endl;
    
    return 0;
}