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

            if(isEmpty()) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        void print() {
            Node* currentNode = head;

            while(currentNode != nullptr) {
                cout << currentNode->data << " -->";

                currentNode = currentNode->next;
            }

            cout << "nullptr" << endl;
        }

        int getFirst() {
            if (isEmpty()) {
                throw runtime_error("The queue is empty");
            }

            return head->data;
        }

        int dequeue() {
             if (isEmpty()) {
                throw runtime_error("The queue is empty");
            }

            int value = head->data;
            Node *temp = head;

            head = head->next;

            delete temp;

            return value;
        }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(11);
    myQueue.enqueue(12);
    myQueue.print();

    cout << myQueue.getFirst() << endl;
    cout << myQueue.dequeue() << endl;
    cout << myQueue.dequeue() << endl;

    myQueue.print();

    return 0; 
}
