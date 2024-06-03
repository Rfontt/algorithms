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

            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;
        }
    }

    void swap(int& numberOne, int& numberTwo) {
        int temp = numberOne;

        numberOne = numberTwo;
        numberTwo = temp;
    }

    void putZeroAtTheEnd() {
        int zeroIndex = 0;

        for (int i = 0; i < size; i++) {
            if(data[i] != 0) {
                swap(data[i], data[zeroIndex]);

                ++zeroIndex;
            }
        }
    }
};

int main() {
    Vector<int> vector;
    vector.push(10);
    vector.push(0);
    vector.push(0);
    vector.push(20);

    cout << "initial array" << endl;

    cout << vector.data[0] << endl;
    cout << vector.data[1] << endl;
    cout << vector.data[2] << endl;
    cout << vector.data[3] << endl;

    cout << "putZeroAtTheEnd" << endl;

    vector.putZeroAtTheEnd();


    cout << vector.data[0] << endl;
    cout << vector.data[1] << endl;
    cout << vector.data[2] << endl;
    cout << vector.data[3] << endl;

    return 0;
}
