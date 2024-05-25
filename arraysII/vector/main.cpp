#include <iostream>
using namespace std;

struct Vector {
    int* data;
    int size;
    int capacity;

    Vector() {
        size = 0;
        capacity = 1;
        data = new int[1];
    }

    void push(int value) {
        expandCapacity();

        data[size] = value;
        size ++;
    }

    void expandCapacity() {
       if (size == capacity) {
            capacity *= 2;
            int* newData = new int[capacity];

            for (int i = 0; i < size; i++) {
               newData[i] = data[i];
            }

            data = newData;
       }
    }
};

int main() {
    Vector vector;
    vector.push(10);
    vector.push(20);

    cout << vector.data[0] << endl;
    cout << vector.data[1] << endl;
    
    return 0;
}