#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* previous;
    Node* next;

    Node(int value) {
        data = value;
        previous = nullptr;
        next = nullptr;
    }
};

struct Deque {
    private:
        Node* head;
        Node* tail;

    public:
        Deque() {
            head = nullptr;
            tail = nullptr;
        }

        bool isEmpty() {
            return head == nullptr;
        }

        void pushFront(int value) {
            Node* newNode = new Node(value);

            if (isEmpty()) {
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->previous = newNode;
                head = newNode;
            }
        }
};

int main() {
    Deque deque;

    deque.pushFront(10);

    return 0; 
}
