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

        void pushBack(int value) {
            Node* newNode = new Node(value);

            if (isEmpty()) {
                head = tail = newNode;
            } else {
                newNode->previous = tail;
                tail->next = newNode;
                tail = newNode;
            }
        }

        void forwardTraversal() {
            Node* current = head;

            while (current != nullptr) {
                cout << current->data << "-->";

                current = current->next;
            }

            cout << "nullptr" << endl;
        }

        void backwardTravesal() {
            Node* current = tail;

            while (current != nullptr) {
                cout << current->data << "-->";

                current = current->previous;
            }

            cout << "nullptr" << endl;
        }

        void popFront() {
            if (isEmpty()) {
                throw runtime_error("Deque is empty");
            }

            Node* temp = head;

            head = head->next;

            if(head != nullptr) {
                head->previous = nullptr;
            } else {
                tail = nullptr;
            }

            delete temp;
        }

        void popBack() {
            if (isEmpty()) {
                throw runtime_error("Deque is empty");
            }

            Node* temp = tail;

            tail = tail->previous;

            if(tail != nullptr) {
                tail->next = nullptr;
            } else {
                head = nullptr;
            }

            delete temp;
        }

        int getFirst() {
            if (isEmpty()) {
                throw runtime_error("Deque is empty");
            }

            return head->data;
        }

        int getLast() {
            if (isEmpty()) {
                throw runtime_error("Deque is empty");
            }

            return tail->data;
        }
};

int main() {
    Deque deque;

    deque.pushFront(10);
    deque.pushFront(20);
    deque.pushBack(30);
    deque.pushBack(300);

    deque.forwardTraversal();
    deque.backwardTravesal();

    deque.popFront();

    deque.forwardTraversal();

    deque.popBack();

    deque.backwardTravesal();

    cout << "first: " << deque.getFirst() << endl;
    cout << "last: " << deque.getLast() << endl;
    
    return 0; 
}
