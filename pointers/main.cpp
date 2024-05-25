#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *pointerX = &x;

    cout << "Address: of X " << &x << endl;
    cout << "Pointer: of Y " << pointerX << endl;

    return 0; 
}
