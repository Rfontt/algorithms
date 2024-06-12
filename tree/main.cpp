#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    } 
};

struct Queue {
    private:
        Node *head;
        Node *tail;

    public:
        Queue() {
            head = nullptr;
            tail = nullptr;
        }
        
        bool isEmpty() {
            return head == nullptr;
        }

        void enqueue(int value) {
            Node* newNode = new Node(value);

            if (isEmpty()) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
};

int main() {
    Queue queue;

    queue.enqueue(10);

    return 0;
}
