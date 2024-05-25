#include <iostream>
using namespace std;

struct Giants {
    char* data;
    int size;

    Giants(const char str[]) {
        size = 0;

        while (str[size] != '\0') {
            size++;
        }

        data = new char[size + 1];

        for (int i = 0; i < size; i++) {
            data[i] = str[i];
        }

        data[size] = '\0';
    }
};

int main() {

    Giants name = "Rfontt";

    cout << name.size << endl;
    cout << name.data[0] << endl;

    return 0;
}