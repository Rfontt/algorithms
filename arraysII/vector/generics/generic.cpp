#include <iostream>
using namespace std;


template <typename T>

struct Vector {
    T* data;
    int size;
    int capacity;

    Vector() {
        size = 0;
        capacity = 1;
        data = new T[1];
    }

    void push(T value) {
        expandCapacity();

        data[size] = value;
        size ++;
    }

    void expandCapacity() {
       if (size == capacity) {
            capacity *= 2;
            T* newData = new T[capacity];

            for (T i = 0; i < size; i++) {
               newData[i] = data[i];
            }

            data = newData;
       }
    }
};

int main() {
    Vector<int> vector;
    vector.push(10);
    vector.push(20);

    cout << vector.data[0] << endl;
    cout << vector.data[1] << endl;
    
    return 0;
}