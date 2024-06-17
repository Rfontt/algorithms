#include <iostream>
using namespace std;

int fatorial(int number) {
    if (number <= 1) {
        return 1;
    }

    return number * fatorial(number - 1);
}

int main() {
    int num = 5;
    int result = fatorial(num);

    cout << "The fatorial of " << num << " is " << result << endl;
    return 0;
}
