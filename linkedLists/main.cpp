
#include <iostream>
using namespace std;

template<typename T>

struct Node {
    T data;
    Node<T>* next;

    Node(T value) {
        data = value;
        next = nullptr;
    }
};

template<typename T>

struct Stack {
    private:
        Node<T>* top;
    public:
        Stack() {
            top = nullptr;
        }

        void push(T value) {
            Node<T>* newNode = new Node<T>(value);

            newNode->next = top;
            top = newNode;
        }

        void print() {
            if (isEmpty()) {
                return;
            }

            Node<T>* current = top;

            while(current != nullptr) {
                cout << current->data << endl;

                current = current->next;
            }

            cout << endl;
        }

        bool isEmpty() {
            return top == nullptr;
        }

        T peak() {
            if (isEmpty()) {
                throw runtime_error("The stack is empty");
            }

            return top->data;
        }

        void pop() {
            if (isEmpty()) {
                throw runtime_error("The stack is empty");
            }

            Node<T>* temp = top;
            top=temp->next;

            delete temp;

        }
};

int main() {
    Stack<int> myStack;

    myStack.push(10);
    myStack.push(120);

    myStack.print();

    myStack.push(40);

    cout << "peak: " << myStack.peak() << endl;

    myStack.pop();

    myStack.print();

    return 0;
}