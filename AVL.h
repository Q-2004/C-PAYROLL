#ifndef AVLTREE_H
#define AVLTREE_H

struct Node {
    int key;
    Node* left;
    Node* right;
    int height;
};

class AVLTree {
public:
    // Public functions for AVL tree operations
    AVLTree(); // Constructor
    ~AVLTree(); // Destructor
    void insert(int key);
    void remove(int key);
    void displayInOrder();

private:
    // Private helper functions
    int getHeight(Node* node);
    int getBalance(Node* node);
    Node* createNode(int key);
    Node* rightRotate(Node* y);
    Node* leftRotate(Node* x);
    Node* insertNode(Node* root, int key);
    Node* removeNode(Node* root, int key);
    Node* findMinNode(Node* root);
    void inOrderTraversal(Node* root);
    
    // Private member variables
    Node* root;
    
    // Private recursive destructor function
    void destroyTree(Node* root);
};

#endif // AVLTREE_H
