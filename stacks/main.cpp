#include <iostream>
using namespace std;


template <typename T>

struct Stack {
    private:
        T* data;
        int size;
        int capacity;
    public:
        Stack() {
            size = 0;
            capacity = 1;
            data = new T[1];
        }

        ~Stack() {
            delete[] data;
        }

        T push(T value) {
            expandCapacity();

            data[size] = value;
            size ++;

            return value;
        }

        T pop() {
            if (size == 0) {
                throw out_of_range("The stack is empty.");
            }

            T poppedValue = data[size - 1];
            size--;

            return poppedValue;
        }

        T peek() {
            return data[size -1];
        }

        bool isEmpty() {
            return size == 0;
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

        T getDataValue(int position) {
            return data[position];
        }

        int getSize() {
            return size;
        }
};

int main() {
    Stack<int> stack;
    stack.push(10);
    stack.push(20);

    cout << stack.getDataValue(0) << endl;
    cout << stack.getDataValue(1) << endl;

    stack.pop();

    stack.push(30);

    cout << stack.getDataValue(1) << endl;

    cout << stack.getSize() << endl;

    cout << stack.peek() << endl;

    stack.pop();

    cout << stack.peek() << endl;

    cout << stack.isEmpty() << endl;
    
    return 0;
}