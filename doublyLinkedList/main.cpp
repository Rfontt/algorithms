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

struct DoublyLinkedList {
    private:
        Node* head;
        Node* tail;

    public:
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
        }

        void append(int value) {
            Node* newNode = new Node(value);

            if (head == nullptr) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                newNode->previous = tail;
                tail = newNode;
            }
        }
};

int main() {
    DoublyLinkedList doublyLinkedList;

    doublyLinkedList.append(10);

    return 0; 
}
