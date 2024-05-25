#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *pointer = arr;

    pointer += 2;

    cout << &arr[2] << endl;
    cout << pointer << endl;
    
    return 0;
}