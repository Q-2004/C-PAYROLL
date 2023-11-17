#ifndef RATINGBST_H
#define RATINGBST_H

// Assume you have a struct or class representing your data
struct Item {
    int id;
    double rating;
    // Add other attributes as needed
};

// Node structure for BST
struct BSTNode {
    Item data;
    BSTNode* left;
    BSTNode* right;
};

class RatingBST {
public:
    // Public functions for BST operations
    RatingBST(); // Constructor
    ~RatingBST(); // Destructor
    void insert(Item item);
    void remove(int itemId);
    void displayInOrder();

private:
    // Private helper functions
    BSTNode* createNode(Item item);
    BSTNode* insertNode(BSTNode* root, Item item);
    BSTNode* removeNode(BSTNode* root, int itemId);
    void inOrderTraversal(BSTNode* root);
    
    // Private member variables
    BSTNode* root;
    
    // Private recursive destructor function
    void destroyTree(BSTNode* root);
};

#endif // RATINGBST_H
