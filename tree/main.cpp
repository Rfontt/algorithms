#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int value) {
        data = value;
        right = nullptr;
        left = nullptr;
    } 
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value > root->data) {
        root->right = insert(root->right, value);
    } else {
        root->left = insert(root->left, value);
    }

    return root;
}

void preorderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << endl;
    
    preorderTraversal(root->left);
    preorderTraversal(root->right);
};

void postorderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);

    cout << root->data << endl;
}

void inorderderTraversal(Node *root) {
    if (root == nullptr) {
        return;
    }
    
    inorderderTraversal(root->left);

    cout << root->data << endl;

    inorderderTraversal(root->right);
}

Node* find(Node* root, int value) {
    if (root == nullptr) {
        return nullptr;
    }

    if (root->data == value) {
        return root;
    }

    if (value < root->data) {
        return find(root->left, value);
    } else {
        return find(root->right, value);
    }
}

int main() {
    Node* binaryTree = insert(nullptr, 10);

    insert(binaryTree, 15);
    insert(binaryTree, 2);

    preorderTraversal(binaryTree);

    Node* findNumber = find(binaryTree, 2);

    if (findNumber != nullptr) {
        cout << "I found it" << endl;
    } else {
        cout << "It does not exists" << endl;
    }
    
    return 0;
}
