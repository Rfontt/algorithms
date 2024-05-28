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

        void forwardTravesal() {
            Node* current = head;

            while(current != nullptr) {
                cout << current->data << endl;
                
                current = current->next;
            }

            cout << "nullptr" << endl;
        }

        void backwardTravesal() {
            Node* current = tail;

            while(current != nullptr) {
                cout << current->data << endl;
                
                current = current->previous;
            }

            cout << "nullptr" << endl;
        }
};

int main() {
    DoublyLinkedList doublyLinkedList;

    doublyLinkedList.append(10);
    doublyLinkedList.append(20);
    doublyLinkedList.append(30);

    doublyLinkedList.forwardTravesal();
    doublyLinkedList.backwardTravesal();

    return 0; 
}
